#include <iostream>
#include "LinkedDouble.cpp"
#include "Books.h"
using namespace std;
int main() {
    LinkedDouble<Books>* ld=new LinkedDouble<Books>();
ld->addNodeFirst(Books("4553","Cien años de Soledad","Gabo",546));
    ld->addNodeFirst(Books("8906","Cronica de una muerte anunciada","Gabo",896));
    ld->addNodeFirst(Books("7454","El Coronel no tiene quien le escriba","Gabo",457));
    ld->addNodeFirst(Books("2345","El Alquimista","Paulo Cohelo",765));
    ld->addNodeFirst(Books("6547","El ruiseñor y la rosa","Oscar Wilde",1678));
    ld->addNodeLast(Books("3367","Juego de tronos","Gorge R.R. Martin",832));
   ld->addNodeBefore(ld->findNode("4553"),Books("4567","El retrato de Dorian Grey","Oscar Wilde",876));
    ld->addNodeBefore(ld->findNode("3367"),Books("7898","Fuego y Sangre","Gorge R.R. Martin",845));
ld->addNodeAfter(ld->findNode("7898"),Books("1234","Festin de Cuervos","Gorge R.R. Martin",1980));
ld->addNodeAfter(ld->findNode("3367"),Books("3456","Tormenta de Espadas","Gorge R.R. Martin",456));
    ld->addNodeAfter(ld->findNode("3367"),Books("9645","Choque de Reyes","Gorge R.R. Martin",456));
    ld->addNodeAfter(ld->findNode("1234"),Books("3001","Danza de Dragones","Gorge R.R. Martin",789));
    ld->addNodeAfter(ld->findNode("3001"),Books("2901","Vientos de Invierno","Gorge R.R. Martin",987));

    cout<<"El tamaño es "<<ld->getSize()<<endl;
cout<<"El elemento es "<<*ld->getObject(1)<<endl;
    for(Books book:ld->getList(false)){
        cout<<book<<endl;
    }//31:41
    delete(ld);
    cout<<"-----------Lista Ordenada-------"<<endl;
    LinkedDouble<Books>* sorted=new LinkedDouble<Books>();
    sorted->addNodeSorted(Books("8906","Cronica de una muerte anunciada","Gabo",896));
    sorted->addNodeSorted(Books("7454","El Coronel no tiene quein le escriba","Gabo",457));
    sorted->addNodeSorted(Books("2345","El Alquimista","Paulo Cohelo",765));
    sorted->addNodeSorted(Books("6547","El ruiseñor y la rosa","Oscar Wilde",1678));
    sorted->addNodeSorted(Books("3367","Juego de tronos","Gorge R.R. Martin",832));
    if(sorted->findNode("8906")!=NULL){
        cout<<"existe"<<endl;
    }else{
        cout<<"No existe"<<endl;
    }


    for(Books book:sorted->getList(true)){
        cout<<book<<endl;
    }//31:41
    return 0;
    delete(sorted);
}
