#ifndef CARTE_H
#define CARTE_H
#include <string>

class Carte
{
    public:
        Carte();
        virtual ~Carte();

        std::string Getnom() { return m_nom; }
        void Setnom(std::string val) { m_nom = val; }
        std::string Getdescription() { return m_description; }
        void Setdescription(std::string val) { m_description = val; }

    protected:

    private:
        std::string m_nom;
        std::string m_description;
};

#endif // CARTE_H
