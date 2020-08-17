//William Ayers
#include <iostream>
#include <vector>
#include "graph.h"

int main() 
{
  std::string path= "Arad";
  int path_cost = 0;
  init();
  node* current = &arad;
  node* destination = &bucharest;
  while(1)
  {
    current->visited = true;  //mark current node as visited
    node temp("NULL");
    node* next = &temp;
    int edge_distance = 0;
    int cost= 9999;
    for(auto iter = edgelist.begin(); iter != edgelist.end();iter++)//for each edge of current
    {
      if(current == iter->first && iter->second->visited == false)  //change thru distance of neighboring nodes
      {
        if(iter->first->thru + iter->distance < iter->second->thru)
          iter->second->thru = iter->first->thru + iter->distance;
          if(cost > iter->second->thru + iter->second->straight) 
          {
            next = iter->second; 
            cost = iter->second->thru + iter->second->straight;
            edge_distance = iter->distance;
            }
        //std::cout << current->name << " to " << iter->second->name << " is " << iter->second->thru + iter->second->straight << std::endl;
      }
      if(current == iter->second && iter->first->visited == false)
      {
        if(iter->second->thru + iter->distance < iter->first->thru)
          iter->first->thru = iter->second->thru + iter->distance;
          if(cost > iter->first->thru + iter->first->straight) 
          {
            next = iter->first;
            cost = iter->first->thru + iter->first->straight;
            edge_distance = iter->distance;
          }
          //std::cout << iter->first->name << " to " << iter->second->name << " is " << iter->first->thru + iter->first->straight << std::endl;
      }
    }
    if(destination->visited == true) break; //if destination has been visited, we are done
    //std::cout << next->name;
    //std::cout << "Going to " << next->name << std::endl << std::endl;
    path+= "->" + next->name;
    path_cost+= edge_distance;
    current = next;
  }
  std::cout << "Mimimum distance(Arad->Bucharest): " << path_cost << std::endl;
  std::cout << path << std::endl;
  return 0;
}