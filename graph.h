#include <vector>
class node
{
public:
  bool visited;
  int thru;
  std::string name ="NULL";
  int straight;
  node(std::string n)
  {
    name = n;
    visited = false;
    thru = 9999;  //since there is no infinity in c++, i am using a large value
  }
};
class edge
{
  public:
  node* first;
  node* second;
  int distance;
};
std::vector<node*> nodelist;
node arad("Arad");
node bucharest("Bucharest");
node oradea("Oradea");
node zerind("Zerind");
node timisoara("Timisoara");
node lugoj("Lugoj");
node mehadia("Mehadia");
node drobeta("Drobeta");
node craiova("Craiova");
node pitesti("Pitesti");
node sibiu("Sibiu");
node rimnieuVilcea("Rimnieu Vilcea");
node fagaras("Fagaras");
node giurgiu("Giurgiu");
node urziceni("Urziceni");
node hirsova("Hirsova");
node eforie("Eforie");
node vaslui("Vaslui");
node iasi("Iasi");
node neamt("Neamt");


std::vector<edge> edgelist;
void init()
{
  arad.thru=0;
  
  nodelist.push_back(&arad);
  nodelist.push_back(&bucharest);
  nodelist.push_back(&oradea);
  nodelist.push_back(&zerind);
  nodelist.push_back(&timisoara);
  nodelist.push_back(&lugoj);
  nodelist.push_back(&mehadia);
  nodelist.push_back(&drobeta);
  nodelist.push_back(&craiova);
  nodelist.push_back(&pitesti);
  nodelist.push_back(&sibiu);
  nodelist.push_back(&rimnieuVilcea);
  nodelist.push_back(&fagaras);
  nodelist.push_back(&giurgiu);
  nodelist.push_back(&urziceni);
  nodelist.push_back(&hirsova);
  nodelist.push_back(&eforie);
  nodelist.push_back(&vaslui);
  nodelist.push_back(&iasi);
  nodelist.push_back(&neamt);

  arad.straight=366;
  bucharest.straight=0;
  oradea.straight=380;
  zerind.straight=374;
  timisoara.straight=329;
  lugoj.straight=244;
  mehadia.straight=241;
  drobeta.straight=242;
  craiova.straight=160;
  pitesti.straight=100;
  sibiu.straight=253;
  rimnieuVilcea.straight=193;
  fagaras.straight=176;
  giurgiu.straight=77;
  urziceni.straight=80;
  hirsova.straight=151;
  eforie.straight=161;
  vaslui.straight=199;
  iasi.straight=226;
  neamt.straight=234;

  edge temp;

  temp.first=&arad;
  temp.second=&zerind;
  temp.distance=75;
  edgelist.push_back(temp);

  temp.first=&arad;
  temp.second=&sibiu;
  temp.distance=140;
  edgelist.push_back(temp);

  temp.first=&arad;
  temp.second=&timisoara;
  temp.distance=118;
  edgelist.push_back(temp);

  temp.first=&zerind;
  temp.second=&oradea;
  temp.distance=71;
  edgelist.push_back(temp);

  temp.first=&oradea;
  temp.second=&sibiu;
  temp.distance=151;
  edgelist.push_back(temp);

  temp.first=&timisoara;
  temp.second=&lugoj;
  temp.distance=111;
  edgelist.push_back(temp);

  temp.first=&lugoj;
  temp.second=&mehadia;
  temp.distance=70;
  edgelist.push_back(temp);

  temp.first=&mehadia;
  temp.second=&drobeta;
  temp.distance=75;
  edgelist.push_back(temp);
  
  temp.first=&drobeta;
  temp.second=&craiova;
  temp.distance=120;
  edgelist.push_back(temp);

  temp.first=&sibiu;
  temp.second=&fagaras;
  temp.distance=99;
  edgelist.push_back(temp);

  temp.first=&sibiu;
  temp.second=&rimnieuVilcea;
  temp.distance=80;
  edgelist.push_back(temp);

  temp.first=&rimnieuVilcea;
  temp.second=&craiova;
  temp.distance=146;
  edgelist.push_back(temp);

  temp.first=&rimnieuVilcea;
  temp.second=&pitesti;
  temp.distance=97;
  edgelist.push_back(temp);

  temp.first=&craiova;
  temp.second=&pitesti;
  temp.distance=138;
  edgelist.push_back(temp);

  temp.first=&fagaras;
  temp.second=&bucharest;
  temp.distance=211;
  edgelist.push_back(temp);

  temp.first=&pitesti;
  temp.second=&bucharest;
  temp.distance=101;
  edgelist.push_back(temp);

  temp.first=&bucharest;
  temp.second=&giurgiu;
  temp.distance=90;
  edgelist.push_back(temp);

  temp.first=&bucharest;
  temp.second=&urziceni;
  temp.distance=85;
  edgelist.push_back(temp);

  temp.first=&urziceni;
  temp.second=&hirsova;
  temp.distance=98;
  edgelist.push_back(temp);

  temp.first=&hirsova;
  temp.second=&eforie;
  temp.distance=86;
  edgelist.push_back(temp);

  temp.first=&urziceni;
  temp.second=&vaslui;
  temp.distance=142;
  edgelist.push_back(temp);

  temp.first=&vaslui;
  temp.second=&iasi;
  temp.distance=92;
  edgelist.push_back(temp);

  temp.first=&iasi;
  temp.second=&neamt;
  temp.distance=87;
  edgelist.push_back(temp);
}
