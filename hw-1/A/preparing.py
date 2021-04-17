code_text = '''
#pragma once

struct Gen {
    int x;
    void inc() {
        x++;
    }
};

'''

with open("index.h", "w") as code_file:
    print(code_text, file=code_file)
