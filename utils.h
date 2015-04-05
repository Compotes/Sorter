#ifndef UTILS_H
#define UTILS_H

namespace utils {

void sort_max(int s[12][2]);
void sort_min(int s[12][2]);
void convert_angle(int *angle);

template <typename N>
inline void swap(N *a, N *b) {
    N c = *a;
    *a = *b;
    *b = c;
}

}  // utils

#endif  // UTILS_H
