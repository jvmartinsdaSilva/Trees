
typedef struct Node {
    int value;
    Node * left;
    Node * rigth;
} Node ;

class BiTree {
    Node * root;

    public:
        void insertValue(int value);
};