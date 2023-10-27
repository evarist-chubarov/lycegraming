#include <cstdio>
#include <cinttypes>
#include <cstdlib>

int main() {
    printf("Hello from GitHub!\nEnter num: ");
    auto *num = (int8_t*) malloc(sizeof(int8_t));
    scanf("%" SCNi8, num);
    printf("Your num is %" PRIi8 "\n", *num);
    free(num);
    return 0;
}
