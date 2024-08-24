#pragma once
class word_selector
{
private:
    int space = 0;
    int position = 0;
    int length;
    int option;

public:
    string sentence;
    int* len = &length;
    int* index = &position;
    int* choice = &option;
    int* gap = &space;
    void wordbreak(int*, int*, int*, int*, string);
    void input(int*, string sentence);
};

