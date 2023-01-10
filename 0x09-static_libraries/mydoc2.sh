int main() {
   /* try to open file to read */
   ifstream ifile;
   ifile.open("b.txt");
   if(ifile) {
      cout<<"file exists";
   } else {
      cout<<"file doesn't exist";
   }
}
