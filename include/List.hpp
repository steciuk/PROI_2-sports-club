#ifndef LIST_HPP
#define LIST_HPP

template <typename T>class List
{
private:
  unsigned int nElements;
  T *elementsArray;//Tablica z obiektami *T

public:
  List(int nElements);
  List() {}
  List(const List<T> &copied);
  ~List(){ delete[] this->elementsArray; }

  void isCopied() { elementsArray = new T[nElements]; }
  void setElement(int number, T element){this->elementsArray[number] = element;}
  int getNum() { return nElements; }
  T getElement(unsigned int i);
};

template <typename T>
List<T>::List(int nElements)
{
  this->nElements = nElements;
  elementsArray = new T[nElements];
}

template <typename T>
List<T>::List(const List<T> &copied)
{
  this->nElements = copied.nElements;
  elementsArray = new T[nElements];
  for (unsigned int i = 0; i < nElements; i++)
  {
    this->elementsArray[i] = copied.elementsArray[i];
  }
}

template <typename T>
T List<T>::getElement(unsigned int i)
{
  if (i >= this->nElements)
    return this->elementsArray[0];
  return this->elementsArray[i];
}



#endif