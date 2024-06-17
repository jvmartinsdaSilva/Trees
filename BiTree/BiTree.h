typedef struct Node {
        int value;
        Node * left;
        Node * rigth;
} Node ;

class BiTree {

    public: Node * root;
    public: int teste = 7;

    public:
        void insertValue(int value);
        void searchValue(int value);
};