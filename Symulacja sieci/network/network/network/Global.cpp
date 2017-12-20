std::ostringstream & readFile(FILE* file)
{
string line;
  ifstream myfile ("network.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      if(line == "Ramps")
      {
        
      }
      
    }
    myfile.close();
  }

  else cout << "Unable to open file"; 
  }
