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

        return this->_tamanho;
    };

    bool vazia() const{
        return this->_tamanho != 0 ? false : true;
    };

    std::size_t posicao(T dado) const{
        std::size_t i = 0;
        Elemento<T>* tmp = this->_primeiro;
        while(tmp->dado != dado){
            tmp = tmp->proximo;
            i++;
        }
        return i;
    };

    bool contem(T dado) const{
        return false;
    };

    void inserirNoInicio(T dado){
        Elemento<T>* tmp;
        tmp->dado = dado;

        if(this->_primeiro == nullptr){
            this->_primeiro = tmp;
        } else {
            tmp->proximo = this->_primeiro;
            this->_primeiro = tmp;
        }

        this->_tamanho++;
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

    ~MinhaListaEncadeada(){

    };
};

#endif
