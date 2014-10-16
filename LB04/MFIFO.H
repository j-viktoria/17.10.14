#ifndef MFIFO_H
#define MFIFO_H
namespace FIFO
{
class Item
{
public:

    Item();
    int &getData();
    Item *&getPrev();
    Item *&getNext();

private:
    int data;
    Item *prev;
    Item *next;
    Item(const Item &object);
    Item &operator=(const Item &rhs);
};
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

class Implementation
{
public:
    Implementation();
    ~Implementation();
    void PutItem(const int data);
    int GetItem();
    int PeekItem(const  int index = 0);
    int GetItems();
    void Clear();
    int massItems1();
    Implementation(const Implementation &object);
    Implementation &operator=(const Implementation &rhs);

private:
    int items;
    Item *begin;
    Item *end;

};
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

class MFifo
{
public:
    MFifo();
    ~MFifo();
    void PutItem(const int data)
    {
        pimpl->PutItem(data);
    }
    int GetItem()
    {
        pimpl->GetItem();
    }
    int PeekItem(const int index = 0)
    {
        pimpl->PeekItem(index = 0);
    }
    int GetItems()
    {
        pimpl->GetItems();
    }
    void Clear()
    {
        pimpl->Clear();
    }
    int massItems1()
    {
        pimpl->massItems1();
    }

private:
    //int items;
    //Item *begin;
    //Item *end;
    MFifo(const MFifo &orig):pimpl(nullptr)
    {
        pimpl=new Implementation(*(orig.pimpl));
    }
    MFifo &operator=(const MFifo &rhs)
    {
        *(this.pimpl)=*(rhs.pimpl);
        return *this;
    }
    class Implementation *pimpl;
};





//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void vvod(int n, int *a);
void vyvod(int n, int *a);
void Repair(int*a,int items,int i);
void Build(int *a,int items);
void Sort(int* a,int items);


}

#endif // MFIFO_H

