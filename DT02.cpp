#include <iostream>
using namespace std;

int main()
{
    while(true){
        
        cout<<"O que você deseja ver primeiro?\r\n1 - Apresentação do personagem\r\n2 - Apresentação da entidade\r\n3 - Relação entre personagem e entidade"<<endl;
        int escolha; 
        cin>>escolha;
        
        switch(escolha){
            
            case 1: 
                cout<<"Castiel atualmente perdeu sua graça, indo de um anjo caçador para apenas caçador.\r\nIdade: +2000 anos.\r\nIdade humana: 44.\n\n";
                break;
            
            case 2:
                cout<<"A entidade Graça Viva oferece apoio aos anjos na mesma situação de Castiel, os auxiliando na entrada na vida humana.\n\n";
                break;
            
            case 3: 
                cout<<"Castiel é fundador dessa entidade.\n\n";
                cout<<"Você deseja ver informações mais detalhadas?\r\nOBS: digite 1 ou 2 para sim."<<endl;
                int opcao;
                int soma = 111;
                cin>>opcao;
                
                if(opcao == 1){ 
                    cout<<"Fundada em 2010.\n\n";
                }
                
                else if(opcao == 2){
                  
                  for(int i = 0; i < 1; i++){
                      cout<<"Calculando totalidade..."<<endl;
                      soma += 111;
                      cout<<"A entidade conta com "<<soma<<" de membros!\n\n";
                      
                  }
                  
                  int direcao = 0;
                  
                  do{
                    cout<<"Atualmente a entidade é dirigida por Jody Mills.\n\n";
                  
                  }while(direcao != 0);
                    
                }
               
                break;
                
        }
        
        
    }
    
    return 0;
}