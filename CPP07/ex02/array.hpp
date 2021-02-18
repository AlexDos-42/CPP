#ifndef ARRAY
# define ARRAY

# include <iostream>

template<typename T>
class Array {
	private:
		int m_size;
		T* m_elements;

	public:
		Array() {
			m_size = 0;
			m_elements = NULL;
		}
		Array(int n): m_size(n), m_elements(new T[n]) {}
		Array(const Array<T> & copy)
		{
			m_size = copy.size();
			m_elements = new T[m_size];
			for(int i = 0; i < m_size; i++)
				m_elements[i] = copy.m_elements[i];
		}
		Array<T> & operator=(const Array<T> & copy)
		{
			if (m_elements)
				delete [] m_elements;
			m_size = copy.size();
			m_elements = new T[m_size];
			for(int i = 0; i < m_size; i++)
				m_elements[i] = copy.m_elements[i];
			return *this;
		}
		virtual ~Array()
		{
			delete [] m_elements;
		}

		int size() const
		{
			return (m_size);
		}

		T & operator[](int i) const {
			if (i >= m_size)
				throw Array<T>::OutOfLimit();
			return (m_elements[i]);
		}
		struct OutOfLimit : std::exception {
			const char* what() const throw(){
				return ("This element is out of the limits");
			}
		};
};

#endif