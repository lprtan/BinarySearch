
#include <iostream>
using namespace std;
#include "veri.h"
#include <deque>
#include <stack>
#include <queue>
#include <chrono>



int main()
{
    IkiliSiralamaAgaci* Agac1 = new IkiliSiralamaAgaci;
    IkiliSiralamaAgaci* Agac2 = new IkiliSiralamaAgaci;
    IkiliSiralamaAgaci* Agac3 = new IkiliSiralamaAgaci;

   int i ;
   int j;
   int aranacakDeger;

   cout << "Arama Yapacaginiz agaci seciniz (1,2,3) " << "\n";
   cin >> i;
      switch (i) {
      case 1:
          cout << "Agac "<<i<<" icin arama yontemini seciniz (DFS:1, BFS:2) : " << "\n";
          cin >> j;
          if (j==1)
          { 
              Agac1->agacKur(dizi1);
              cout << "Agac " << i << " uzerinde DFS ile  arayacaginiz degeri giriniz : " << "\n";
              cin >> aranacakDeger; 
              cout << "\n";
              cout << "\n";

              auto begin = std::chrono::high_resolution_clock::now();

              DFS(Agac1->kok, aranacakDeger);

              auto end = std::chrono::high_resolution_clock::now();
              auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - begin);
              cout << endl;
              cout << "GECEN SURE => " << elapsed.count() << " nano-saniye" << endl;

              Agac1->agacKapat();
              
          }
          else if (j==2)
          {
              Agac1->agacKur(dizi1);
              cout << "Agac " << i << " uzerinde BFS ile  arayacaginiz degeri giriniz : " << "\n";
              cin >> aranacakDeger;
              cout << "\n";
              cout << "\n";

              auto begin = std::chrono::high_resolution_clock::now();

              BFS(Agac1->kok, aranacakDeger);

              auto end = std::chrono::high_resolution_clock::now();
              auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - begin);
              cout << endl;
              cout << "GECEN SURE => " << elapsed.count() << " nano-saniye" << endl;

              Agac1->agacKapat();
          }
          else
          {
              cout << "Gecersiz secim!!!! " << "\n";
          }
          break;
      case 2:
          cout << "Agac " << i << " icin arama yontemini seciniz (DFS:1, BFS:2) : " << "\n";
          cin >> j;
          if (j == 1)
          {
              Agac2->agacKur(dizi2);
              cout << "Agac " << i << " uzerinde DFS ile  arayacaginiz degeri giriniz : " << "\n";
              cin >> aranacakDeger;
              cout << "\n";
              cout << "\n";

              auto begin = std::chrono::high_resolution_clock::now();

              DFS(Agac2->kok, aranacakDeger);

              auto end = std::chrono::high_resolution_clock::now();
              auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - begin);
              cout << endl;
              cout << "GECEN SURE => " << elapsed.count() << " nano-saniye" << endl;

              Agac2->agacKapat();
          }
          else if (j == 2)
          {
              Agac2->agacKur(dizi2);
              cout << "Agac " << i << " uzerinde BFS ile  arayacaginiz degeri giriniz : " << "\n";
              cin >> aranacakDeger;
              cout << "\n";
              cout << "\n";

              auto begin = std::chrono::high_resolution_clock::now();

              BFS(Agac2->kok, aranacakDeger);

              auto end = std::chrono::high_resolution_clock::now();
              auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - begin);
              cout << endl;
              cout << "GECEN SURE => " << elapsed.count() << " nano-saniye" << endl;

              Agac2->agacKapat();
          }
          else
          {
              cout << "Gecersiz secim!!!! " << "\n";
          }
          break;
      case 3:
          cout << "Agac " << i << " icin arama yontemini seciniz (DFS:1, BFS:2) : " << "\n";
          cin >> j;
          if (j == 1)
          {
              Agac3->agacKur(dizi3);
              cout << "Agac " << i << " uzerinde DFS ile  arayacaginiz degeri giriniz : " << "\n";
              cin >> aranacakDeger;
              cout << "\n";
              cout << "\n";

              auto begin = std::chrono::high_resolution_clock::now();

              DFS(Agac3->kok, aranacakDeger);

              auto end = std::chrono::high_resolution_clock::now();
              auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - begin);
              cout << endl;
              cout << "GECEN SURE => " << elapsed.count() << " nano-saniye" << endl;

              Agac3->agacKapat();
             
          }
          else if (j == 2)
          {
              Agac3->agacKur(dizi3);
              cout << "Agac " << i << " uzerinde BFS ile  arayacaginiz degeri giriniz : " << "\n";
              cin >> aranacakDeger;
              cout << "\n";
              cout << "\n";

              auto begin = std::chrono::high_resolution_clock::now();

              BFS(Agac3->kok, aranacakDeger);

              auto end = std::chrono::high_resolution_clock::now();
              auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - begin);
              cout << "GECEN SURE => " << elapsed.count() << " nano-saniye" << endl;

              Agac3->agacKapat();
          }
          else
          {
              cout << "Gecersiz secim!!!! " << "\n";
          }
          break;
      default:
          cout << "Gecersiz secim!!!! " << "\n";
      }
}

