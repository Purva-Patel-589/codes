#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

struct Node {
    char ch;
    int freq;
    struct Node *left, *right;
};

struct Node* createNode(char ch, int freq) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->ch = ch;
    node->freq = freq;
    node->left = node->right = NULL;
    return node;
}

int findMin(struct Node* arr[], int n, int exclude) {
    int minIndex = -1;
    for (int i = 0; i < n; i++) {
        if (i == exclude || arr[i] == NULL) continue;
        if (minIndex == -1 || arr[i]->freq < arr[minIndex]->freq)
            minIndex = i;
    }
    return minIndex;
}

struct Node* buildHuffmanTree(char characters[], int freq[], int size) {
    struct Node* arr[MAX];
    for (int i = 0; i < size; i++) {
        arr[i] = createNode(characters[i], freq[i]);
    }
    int n = size;
    while (n > 1) {
        int min1 = findMin(arr, size, -1);
        int min2 = findMin(arr, size, min1);
        struct Node* merged = createNode('$', arr[min1]->freq + arr[min2]->freq);
        merged->left = arr[min1];
        merged->right = arr[min2];
        arr[min1] = merged;
        arr[min2] = NULL;
        n--;
    }
    for (int i = 0; i < size; i++) {
        if (arr[i] != NULL) return arr[i];
    }
    return NULL;
}

void printCodes(struct Node* root, int code[], int top) {
    if (root->left) {
        code[top] = 0;
        printCodes(root->left, code, top + 1);
    }
    if (root->right) {
        code[top] = 1;
        printCodes(root->right, code, top + 1);
    }
    if (root->left == NULL && root->right == NULL) {
        printf("%c: ", root->ch);
        for (int i = 0; i < top; i++)
            printf("%d", code[i]);
        printf("\n");
    }
}

int main() {
    char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
    int freq[] = { 5, 9, 12, 13, 16, 45 };
    int size = sizeof(arr) / sizeof(arr[0]);
    struct Node* root = buildHuffmanTree(arr, freq, size);
    int code[MAX];
    printf("Huffman Codes:\n");
    printCodes(root, code, 0);
    return 0;
}