#include <iostream>
using namespace std;

void max_min(int* pvet, int n, int*pMaximo, int*pMinimo){


  //cout << "\npvet[0] =" << pvet[0]<< endl;
  //cout << "\npvet[n-1] = " << pvet[n-1] << endl;

  int auxiliar;

  for(int i=0; i<n; i++){
    for(int j= i+j; j<n; j++){
      if(pvet[j]< pvet[i]){
        auxiliar = pvet[i];
        pvet[i] = pvet[j];
        pvet[j] = auxiliar;
      }
    }
  }

   //cout << "\npvet[0] =" << pvet[0]<< endl;
   //cout << "\npvet[n-1] = " << pvet[n-1] << endl;

  *pMaximo = pvet[n-1];
  *pMinimo = pvet[0];
}

int main(){
  int n;
  int maximo, minimo;

  cin >> n;

  int vetor[n];

  cout<<"insira um inteiro informando quantos numeros voce vai digitar" << endl;
  cin>>n;



  for (int i=0; i<n; i++){
    cin >> vetor [i];
    cout<< "\n";
  }
  for(int i=0; i<n; i++){
    if(i!=(n-1)){
      cout << vetor[i]<<",";
    }
    else{
      cout << vetor[i] << "\n";
    }
  }

  max_min(vetor,n,&maximo,&minimo);

  cout << "Max=" << maximo << ",min=" << minimo;

  return 0;

}