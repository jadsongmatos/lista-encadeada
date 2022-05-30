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

    std::size_t posicao(T dado) const {
        if(this->_tamanho == 0){
           throw ExcecaoListaEncadeadaVazia();
        }else {
            std::size_t i = 0;
            Elemento<T>* tmp = this->_primeiro;
            while(tmp->dado != dado){
                tmp = tmp->proximo;
                i++;
            }
            return i;
        }
    };

    bool contem(T dado) const{
        bool result = false;
        if(this->_tamanho != 0){
            Elemento<T>* tmp = this->_primeiro;
            while(tmp->dado != dado){
                tmp = tmp->proximo;
            }
            if(tmp->dado == dado){
                result = true;
            }
        }
        return result;
    };

    void inserirNoInicio(T dado){
        Elemento<T>* tmp = new Elemento<T>(dado,this->_primeiro);
        //Elemento<T>* tmp = (Elemento<T>*)malloc(sizeof(Elemento<T>));

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
        if(this->_tamanho < posicao){
            throw ExcecaoPosicaoInvalida();
        } else {
            if(this->_tamanho == 0){
                throw ExcecaoListaEncadeadaVazia();
            } else {
               if(posicao == 0){
                    this->inserirNoInicio(dado);
                } else if(this->_tamanho == posicao){
                    this->inserirNoFim(dado);
                } else {
                    std::size_t i = 0;
                    Elemento<T>* tmp = (Elemento<T>*)malloc(sizeof(Elemento<T>));
                    Elemento<T>* previous;
                    Elemento<T>* next = this->_primeiro;
                    for(std::size_t i = 0; i <= posicao && i <= this->_tamanho; i++){
                        if(i < posicao){
                            previous = next->proximo;
                        }
                        next = next->proximo;
                    }
                    tmp->proximo = next;
                    tmp->dado = dado;
                    previous->proximo = tmp;
                    this->_tamanho++;
                }
            }
        }
    };

    void inserirNoFim(T dado){
        Elemento<T>* tmp = new Elemento<T>(dado,nullptr);
        //Elemento<T>* tmp = (Elemento<T>*)malloc(sizeof(Elemento<T>));
        tmp->dado = dado;


        if(this->_primeiro == nullptr){
            this->_primeiro = tmp;
        } else {
            Elemento<T>* next = this->_primeiro;
            for(std::size_t i = 0; i < this->_tamanho -1; i++){
                next = next->proximo;
            }
            next->proximo = tmp;
        }
        this->_tamanho++;
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
