#include <string>
#include <vector>
#include <algorithm>

/**
 * Função de comparação para sort dos pairs da ocupação
 * neste caso é ordem crescente
 */
bool occupationsCresc(std::pair<int,int> p1, std::pair<int,int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    //if p1.second == p2.second
    if(p1.first < p2.first) return true;
    if(p1.first > p2.first) return false;
    return false;
}

/**
 * Função de comparação para sort dos pairs da ocupação
 * neste caso é ordem decrescente
 */
bool occupationsDecresc(std::pair<int,int> p1, std::pair<int,int> p2){
    if(p1.second > p2.second) return true;
    if(p1.second < p2.second) return false;
    //if p1.second == p2.second
    if(p1.first > p2.first) return true;
    if(p1.first < p2.first) return false;
    return false;
}

/**
 * Função de comparação para sort da listagem de estudantes
 * coloca o vetor de estudantes por ordem alfabética
 */
bool alphOrder(const Student& s1, const Student& s2){
    return s1.getName() < s2.getName();
}
