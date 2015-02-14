#ifndef sorter_h
#define SORTER_H

class Sorter {
public:
    Sorter();
    int sort(int s[12][2]);
private:
    void swap(int *a, int *b);

};

#endif // sorter_h