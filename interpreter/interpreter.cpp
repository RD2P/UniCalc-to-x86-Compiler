#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

struct statement {
  int arg;
  string command;
};

bool has_space(string s){
  for (char c: s){
    if (isspace(c))return true;
  }
  return false;
}

statement get_parts(string line){
  statement stmt;
  int arg = stoi(line.substr(0, line.find(' ')));  
  int idx_space = line.find(' ');
  string command = line.substr(idx_space + 1, line.size() - idx_space);
  stmt.arg = arg;
  stmt.command = command;
  return stmt; 
}

int execute(int REGISTER, statement stmt){
    int REG = REGISTER;
    string cmd = stmt.command; 
    int arg = stmt.arg;
    if (cmd == "SUM"){
      REG += arg;
    } else if (cmd == "DIFF"){
      REG -= arg;
    } else if (cmd == "PROD"){
      REG *= arg;
    } else if (cmd == "QUOT"){
      REG /= arg;
    }
    return REG;
}

int main(){
  cout << "=== start === " << endl << endl;
  int REGISTER = 0;
  string line;
  ifstream src("sample.unic");
  
  while (getline(src, line)){
    if (line[0] == '#') continue;
    if (has_space(line)){
      statement current_statement = get_parts(line);
      REGISTER = execute(REGISTER, current_statement);
    } else {
      if (line == "CLEAR"){
        REGISTER = 0;
      } else if (line == "BROADCAST"){
        cout << REGISTER << endl;
      }
    }
  }
  src.close();

  cout << endl << "=== end === ";
  return 0;
}