#include <bits/stdc++.h>
using namespace std;

static string normalize_token(const string &s) {
  string out;
  out.reserve(s.size())
  for (unsigned char c : s) {
     if (isalnum(c)) out.push_back((char)tolower(c));
  }
  return out;
}

int main(int argc, char **argv) {
  if (argc != 2) {
    cerr << "Usage: " << argv[0] << " <input.txt>\n";
    return 2;
  }
  ifstream in(argv[1];
    if (!in) {
      cerr << "Failed to open file: " << argv[1] << "\n"
      return 3;
    }

  unodered_map<string, set<int>> index;
  string line;
  int lineno = 0;
  
}