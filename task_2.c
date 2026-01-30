#include <stdio.h>
#include <string.h>

int sum_ints(const int *a, size_t n);
void reverse_inplace(char *s);
int *make_range(int start, int end);


int main() {
    int nums[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d \n", sum_ints(nums, sizeof(nums) / sizeof(int)));


    char s[] = "systems";
    reverse_inplace(s);
    printf("%s \n", s);


}

int sum_ints(const int *a, size_t n) {
    int i = 0;
    int sum = 0;
    while (i < n) {
        sum += *a;
        a++;
        i++;
    }
    return sum;
}

void reverse_inplace(char *s) {

    char *left = s;
    char *right = s + strlen(s) - 1;

    while (left < right) {
        char temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }
}

int *make_range(int start, int end) {
    if (end < start) {
        return NULL;
    }
    int arr[start - end];
    for (int i = 0; start + i < end; i++) {
        
    }
}