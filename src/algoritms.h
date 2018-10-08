//
// Created by Aleksandr Dubinets on 08.10.2018.
//

#ifndef ALG_APP_ALGORITMS_H
#define ALG_APP_ALGORITMS_H

#include <iostream>
#include <vector>

void bubble_sort(std::vector<int>& a);
void selection_sort(std::vector<int>& a);
void insertion_sort(std::vector<int>& a);
void merge_sort(std::vector<int>& v);
void merge_sort(int* a, int lb, int rb);
void merge(int* a, int lb, int split, int rb);
int binary_search(std::vector<int>& v, int el); // @suppress("Type cannot be resolved")
int binary_search(int* v, int l, int r, int el);

template<typename T>
class List {

    template<typename K>
    class Node {
    public:
        Node(K data) : prev(NULL), next(NULL), data(data) {}

        K& operator=(const K& value) {
            this->next = value.next;
            this->prev = value.prev;
            this->data = value.data;
            return *this;
        }

        Node* 	next;
        Node*   prev;
        K		data;
    };


public:
    List() {
        this->length = 0;
        this->head = NULL;
        this->tail = NULL;
    }

    ~List() {
        Node<T> *current = head;
        while(current) {
            Node<T> *next = current->next;
            delete current;
            current = next;
        }
    }

    void vec2list(const std::vector<int>& v) {
        for(int i = 0; i < v.size(); i++) {
            this->add(v[i]);
        }
    }

    void add(T data) {
        this->length++;
        Node<T> *node = new Node<T>(data);

        if(tail)  { tail->next = node; node->prev = tail; }
        if(!head) { head = node; }
        tail = node;

    }

    void print_next() {
        Node<T> *p = head;
        while(p) {
            std::cout << p->data << " ";
            p = p->next;
        }
    }

    void print_prev() {
        Node<int> *p = tail;
        while(p) {
            std::cout << p->data << " ";
            p = p->prev;
        }
    }

private:
    int length;
    Node<T>* head;
    Node<T>* tail;
};

void bubble_sort(std::vector<int>& a) {
    for(int i = 0; i < a.size(); i++) {
        for(int j = 0; j < a.size(); j++) {
            if(a[i] < a[j]) {
                int b = a[i];
                a[i] = a[j];
                a[j] = b;
            }
        }
    }
}

void selection_sort(std::vector<int>& a) {
    for(int k = 0; k < a.size(); k++) {
        int imin = k;
        for(int i = k + 1; i < a.size(); i++) {
            if(a[i] < a[imin]) imin = i;
        }

        if(k != imin) std::swap(a[k], a[imin]);

    }
}

void insertion_sort(std::vector<int>& a) {
    for(int i = 1; i < a.size(); i++) {
        int j = i - 1;
        while(j >= 0 && a[j + 1] < a[j]) {
            std::swap(a[j + 1], a[j]);
            j--;
        }
    }
}

void merge_sort(std::vector<int>& v) {
    merge_sort(&v[0], 0, v.size());
}

void merge_sort(int* a, int lb, int rb) {
    int split;

    if(lb <= rb) {
        split = (rb + lb) / 2;
        merge_sort(a, lb, split);
        merge_sort(a, split + 1, rb);
        merge(a, lb, split, rb);
    }
}

void merge(int* a, int lb, int split, int rb) {
    int p1 = lb;
    int p2 = split + 1;
    int p3 = 0;
    int n  = rb - lb + 1;
    int *b = new int[n];

    while(p1 <= split && p2 <= rb) {
        if(a[p1] < a[p2]) 	b[p3++] = a[p1++];
        else 				b[p3++] = a[p2++];
    }

    while(p1 <= split) 	b[p3++] = a[p1++];
    while(p2 <= rb) 	b[p3++] = a[p2++];

    for(int i = 0; i < n; i++) {
        a[lb + i] = b[i];
    }

}


int binary_search(std::vector<int>& v, int el) {
    return binary_search(&v[0], 0, v.size() - 1, el);
}

int binary_search(int* a, int l, int r, int el) {
    if(r >= 1) {
        int mid = l + (r - l) / 2;

        if(a[mid] == el) return mid;

        if(a[mid] > el) return binary_search(a, l, mid - 1, el);

        return binary_search(a, mid + 1, r, el);
    }

    return -1;
}

#endif //ALG_APP_ALGORITMS_H
