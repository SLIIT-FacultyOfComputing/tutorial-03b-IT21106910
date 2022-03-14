#include <iostream>

using namespace std;

int volume(int height, int width, int length);

struct box
{
  int height;
  int width;
  int length;
}
int main() 
{
  struct box1
  {
    int box1height;
    int box1width;
    int box1length;
  }
  
  struct box2
  {
    int box2height;
    int box2width;
    int box2length;
  }
  int totalVolume;
  // 4. Input the height, width, lenght of box1 and box2
    cout << "Enter Box 1 Height : ";
    cin >> box1.box1height;
    cout << "Enter Box 1 Width : ";
    cin >> box1.box1width;
    cout << "Enter Box 1 Length : ";
    cin >> box1.box1length;
    
    cout << "Enter Box 2 Height : ";
    cin >> box2.box2height;
    cout << "Enter Box 2 Width : ";
    cin >> box2.box2width;
    cout << "Enter Box 2 Length : ";
    cin >> box2.box2length;
    
    // 5. Replace the coding below to pass the Box type structure
    totalVolume = volume(box1.box1height, box1.box1width, box1.box1length)
             + volume(box2.box2height, box2.box2width, box2.box2length);
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}
// Implement the functions here
int volume(int height, int width, int length)
{
  return height * width * length;
}