hannah
10x10 standard board
one or two players
how many boats do you want to play with - 1,2,3 of each size ? maybe 
what size board do you want 10x10 - 20x20

boat sizes - 1,2,3,4,5

void printboard(char lines[ROWS][COLS]){

  int x;
  for (x=0; x< ROWS; x++){
    printf("%s\n", lines[x]);
  }

}

void clearScreen(){
  //sleep(1);
  printf("\e[2J\e[H");
}

int main(){

  char intro[ROWS][COLS]={ 
    "__________________________",
    "|                         |",    
    "|                         |",
    "|                         |",
    "|                         |",
    "|                         |",
    "|                         |",
    "|                         |",   
    "|                         |",
    "|                         |",
    "|_________________________|"};

