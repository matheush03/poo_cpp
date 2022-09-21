#include <aux.hpp>
#include <iostream>
#include <vector>

using namespace aux;

bool in(std::vector<int> vet, int x) { // todo
  for (int i = 0; i < vet.size(); i++) {
    if (x == vet[i]) {
      return true;
        }
      }
      return false;
}

int index_of(std::vector<int> vet, int x) { // todo
}

int find_if(const std::vector<int> &vet) { // todo
}

int min_element(const std::vector<int> &vet) { // todo
}

int find_min_if(const std::vector<int> &vet) { // todo
}

// loop principal
int main() {
  Chain chain;
  Param ui;

  chain["in"] = [&] { show << in(to_vet<int>(ui[1]), to<int>(ui[2])); };
  chain["index_of"] = [&] {
    show << index_of(to_vet<int>(ui[1]), to<int>(ui[2]));
  };
  chain["find_if"] = [&] { show << find_if(to_vet<int>(ui[1])); };
  chain["min_element"] = [&] { show << min_element(to_vet<int>(ui[1])); };
  chain["find_min_if"] = [&] { show << find_min_if(to_vet<int>(ui[1])); };

  execute(chain, ui);
}