#include <utils.h>

namespace utils {

void convert_angle(int *angle) {
    *angle %= 360;
}

void sort_max(int s[12][2]) {
    int max = s[0][0], max2 = s[1][0];
    int max_pos = s[0][1], max2_pos = s[1][1];

    if (max2 > max) {
        swap(&max, &max2);
        swap(&max_pos, &max2_pos);
    }

    for (int j = 2; j < 12; j++) {
        if (s[j][0] > max) {
            max2 = max;
            max2_pos = max_pos;
            max = s[j][0];
            max_pos = s[j][1];
        } else if (s[j][0] > max2) {
            max2 = s[j][0];
            max2_pos = s[j][1];
        }
    }

    s[0][0] = max;
    s[0][1] = max_pos;
    s[1][0] = max2;
    s[1][1] = max2_pos;
}

void sort_min(int s[12][2]) {
    int min = s[0][0], min2 = s[1][0];
    int min_pos = s[0][1], min2_pos = s[1][1];

    if (min2 < min) {
        min = s[0][0];
        min2 = s[1][0];
        min_pos = s[0][1];
        min2_pos = s[1][1];
    }

    for (int j = 2; j < 12; j++) {
        if (s[j][0] < min) {
            min2 = min;
            min2_pos = min_pos;
            min = s[j][0];
            min_pos = s[j][1];
        } else if (s[j][0] < min2) {
            min2 = s[j][0];
            min2_pos = s[j][1];
        }
    }

    s[0][0] = min;
    s[0][1] = min_pos;
    s[1][0] = min2;
    s[1][1] = min2_pos;
}

}  // utils
