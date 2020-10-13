#include <iostream>
#include "Bibliography.hpp"
#include "Reference.hpp"
#include "BookReference.hpp"
#include "JournalReference.hpp"
#include "ConferenceReference.hpp"

int main() {

    Bibliography* bib = new Bibliography(100);

    bib->add(new BookReference("ALANDIA","Patricia",
                               "Desarrollo de competencias textuales",
                               "La Paz",
                               "Editorial Plural",
                               2005));
    bib->add(new BookReference("VACA","Luis Alberto",
                               "Aprendizajes significativos mediante el uso estratégico de los mentefactos",
                               "Cochabamba",
                               "Editorial Plural",
                               2009));
    bib->add(new JournalReference("COCA","Andrés Milton",
                                "Neuromarketing: las emociones y el comportamiento de compra",
                               "Cochabamba",
                               "Perspectivas, Universidad Católica Boliviana \"San Pablo\"",
                               2010,
                               13,
                               25));
    bib->add(new JournalReference("GUARDIA","Marcelo E.",
                                "Luz y sombra para los derechos a la información y comunicación en Iberoamérica",
                               "Cochabamba",
                               "Con-Sciencias Sociales, Universidad Católica Boliviana \"San Pablo\"",
                               2011,
                               3,
                               5));
    bib->add(new ConferenceReference("GOLDIN","Demian",
                                "Competitividad y demanda: la formación de lectores",
                               "México",
                               "Competitividad y demanda: desafíos del oficio editorial. Memoria del II Foro Internacional de editores",
                               2003));
    bib->add(new ConferenceReference("GOLDIN","Demian",
                                "La segundita de GOLDIN",
                               "México",
                               "Competitividad y demanda: desafíos del oficio editorial. Memoria del II Foro Internacional de editores",
                               2005));
    bib->print();
}