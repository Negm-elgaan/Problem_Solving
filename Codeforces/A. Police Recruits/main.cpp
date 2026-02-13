#include <iostream>
#include <typeinfo>

using namespace std;

class IHolder
{
	virtual const type_info& info() const = 0;

	friend class Any;

	public:

		virtual ~IHolder() = 0;
};


IHolder::~IHolder() {}

template <class T> class Holder : public IHolder
{

	const type_info& info() const override
	{
		return typeid(T);
	}

	public:

		T Data;

	friend class Any;
};

class Any
{
	IHolder* ptr;

	public :

		Any()
		{
			ptr = nullptr;
		}

		template <class T> void operator=(T data)
		{
			if (ptr)
			{
				delete ptr;
			}

			Holder <T>* Hold = new Holder<T>();
			Hold->Data = data;
			ptr = Hold;
		}

		template <class T> T Get()
		{
			if (ptr->info() == typeid(T))
			{
				Holder <T>* Hold = dynamic_cast<Holder<T>*>(ptr);
				return Hold->Data;
			}

			throw std::bad_cast();
		}

		~Any()
		{
			delete ptr;
		}
};

int main()
{
    Any any;
    any = 1;
    int x = 0  , z = 0 , n = 0;

    cin >> n ;

    for (int i = 0 ; i < n ; i++)
    {
        short b = 0;
        cin >> b ;

        if (b == -1 && x == 0)
        {
            z++;
        }

        else if (b == -1 && x > 0)
        {
            x--;
        }

        else
        {
            x += b;
        }
    }

    cout << z;

    return 0;
}
