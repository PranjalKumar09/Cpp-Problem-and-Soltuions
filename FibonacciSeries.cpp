#include<iostream>

using namespace std;

int fiboconcci_series(int num) {
  if (num == 0 || num == 1)
    return num;
  return fiboconcci_series(num - 1) + fiboconcci_series(num - 2);}

int fiboconcci_series_memoryization(int num, int fibro_data[]) { 
  if (num <= 1)
    return num;
  if (fibro_data[num] != 0)
    return fibro_data[num];
  return fiboconcci_series_memoryization(num - 1, fibro_data) + fiboconcci_series_memoryization(num - 2, fibro_data);}

int main() {
  //Straighforwar solution
  int num, last_second = 0, last = 1;
  cout << "Enter the number: ";
  cin >> num;
  cout << endl;
  if (num < 0) {
    cout << "Number should  be postive";
    return 0;}
  int sum = last_second + last;
  cout << 0 << " ";
  if (!num < 2)
    cout << "1 ";
  for (int i = 2; i < num; i++) {
    sum = last + last_second;
    cout << sum << " ";
    last_second = last;
    last = sum;}

  cout << endl << fiboconcci_series(num - 1) << endl;

  // Method 3
  int fibro_data[num] = {0};
  cout << fiboconcci_series_memoryization(num - 1, fibro_data);

  return 0;
}