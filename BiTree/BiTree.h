typedef struct Node {
        int value;
        Node * left;
        Node * rigth;
} Node ;

class BiTree {
        private:
                Node * root;
                Node * createNode(int value);

        public:
                void insertValue(int value);
                void searchValue(int value);
};