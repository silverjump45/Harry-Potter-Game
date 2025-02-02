#include <iostream>

int main() {

  //Sorting Time!!!
  int gryf = 0;
  int huff = 0;
  int rave = 0;
  int slyt = 0;
  int answer1 = 0;
  int answer2 = 0;
  int answer3 = 0;
  int answer4 = 0;

  std::cout << "-_--__---___---__--_-\n";
  std::cout << "The Sorting Hat Quiz!\n";
  std::cout << "-_--__---___---__--_-\n\n";

  std::cout << "Q1) When I'm dead, I want people to remember me as :\n\n";

  std::cout << " 1) The Good\n";
  std::cout << " 2) The Great\n";
  std::cout << " 3) The Wise\n";
  std::cout << " 4) The Bold\n\n";
  std::cin >> answer1;

  if(answer1 == 1) {
    huff = huff + 1;
  } else if(answer1 == 2) {
    slyt = slyt + 1;
  } else if(answer1 == 3) {
    rave = rave + 1;
  } else if(answer1 == 4) {
    gryf = gryf + 1;
  } else {
    std::cout << "Invalid input!!!\n";
  }

  std::cout << "Q2) Dawn or Dusk?\n\n";
  std::cout << "1) Dawn\n";
  std::cout << "2) Dusk\n\n";
  std::cin >> answer2;

  if(answer2 == 1) {
    gryf = gryf + 1;
    rave = rave + 1;
  } else if(answer2 == 2) {
    huff = huff + 1;
    slyt = slyt + 1;
  } else {
    std::cout << "invalid input!!!\n";
  }

  std::cout << "Q3) Which kind of instrument most pleases your ear?\n\n";
  std::cout << "1) The violin\n";
  std::cout << "2) The trumpet\n";
  std::cout << "3) The piano\n";
  std::cout << "4) The drum\n\n";
  std::cin >> answer3;

  if(answer3 == 1) {
    slyt = slyt + 1;
  } else if(answer3 == 2) {
    huff = huff + 1;
  } else if(answer3 == 3) {
    rave = rave + 1;
  } else if(answer3 == 4) {
    gryf = gryf + 1;
  } else {
    std::cout << "Invalid input!!!\n";
  }

  std::cout << "Q4) Which road tempts you most?\n\n";
  std::cout << "1) The wide, sunny, grassy lane\n";
  std::cout << "2) The narrow, dark, lantern-lit alley\n";
  std::cout << "3) The twisting, leaf-strewn path through woods\n";
  std::cout << "4) The cobbled streets lined by ancient buildings\n\n";
  std::cin >> answer4;

  if(answer4 == 1) {
    huff = huff + 1; 
  } else if(answer4 == 2) {
    slyt = slyt + 1;
  } else if(answer4 == 3) {
    gryf = gryf + 1;
  } else if(answer4 == 4) {
    rave = rave + 1;
  } else {
    std::cout << "Invalid input\n";
  }

  int max = 0;
  std::string house;

  if(gryf > max) {
    max = gryf;
    house = "Gryffindor";
  } if(huff > max) {
    max = huff;
    house = "Hufflepuff";
  } if(rave > max) {
    max = rave;
    house = "Ravenclaw";
  } if(slyt > max) {
    max = slyt;
    house = "Slytherin";
  }
  std::cout << house << "!\n";
}