#ifndef DEC0006_MINHA_LISTA_ENCADEADA_H
#define DEC0006_MINHA_LISTA_ENCADEADA_H

#include <cstddef>
// std::size_t

#include "Elemento.h"
// Elemento
#include "ListaEncadeadaAbstrata.h"
#include "excecoes.h"
// ExcecaoDadoInexistente
// ExcecaoListaEncadeadaVazia
// ExcecaoNaoImplementado
// ExcecaoPosicaoInvalida

/**
 * @brief Uma lista encadeada de dados.
 * 
 * @tparam T O tipo dos dados armazenados na lista.
 */
template<typename T>
class MinhaListaEncadeada: public ListaEncadeadaAbstrata<T>
{
    //Implemente aqui as funcões marcadas com virtual na ListaEncadeadaAbstrata
    //Lembre-se de implementar o construtor e destrutor da classe
public:
    std::size_t tamanho() const {
        return 0;
    };

    bool vazia() const{
        return false;
    };

    std::size_t posicao(T dado) const{
        return 0;
    };

    bool contem(T dado) const{
        return false;
    };

    void inserirNoInicio(T dado){

    };

    void inserir(std::size_t posicao, T dado){

    };

    void inserirNoFim(T dado){

    };

    T removerDoInicio(){
        T result;
        return result;
    };

    T removerDe(std::size_t posicao){
        T result;
        return result;
    };

    T removerDoFim(){
        T result;
        return result;

    };

    void remover(T dado){

    };

    MinhaListaEncadeada(){

    };
};

#endif
