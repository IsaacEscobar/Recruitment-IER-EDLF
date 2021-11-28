# Recruitment-IER-EDLF
# Sistema de reclutamiento multicultural ParkingSoft

## :heavy_check_mark: Objetivos 
- Identificar las clases principales
- Entender diagrama de usos 
- Desarrollar un programa orientado a objetos a partir de unos requerimientos específicos
- Crear y añadir candidatos interesados designados por los reclutadores mediante el patrón de diseño factory
- Programar entrevistas para los candidatos existentes en el sistema
- Generar una guía de entrevista para el entrevistador con información cultural del candidato 
- Generar una carta de bienvenida para los candidatos seleccionados

## Enunciado
-ParkingSoft is a Colombian company that produces software solutions related to parking services. In recent years, this company has increased its market share to market segments in LATAM, United States and Canada and since June 2021 the company is planning to enter the Asian markets. 
ParkingSoft is a multicultural organization as its founders are convinced that a multicultural environment has many advantages. For example, they believe that cultural diversity boosts innovation and creativity, increases respect, openness, and curiosity. 
Also, the founders are convinced that interculturality improves their employees' ability to tolerate ambiguity, which is a key attitude to compete in the global market. 
All staff work in their home office and are located remotely around the world. However, sometimes they hold face-to-face meetings to networking and to strengthen personal relationships. Considering that keeping an intercultural perspective is so important for the organization, people from the recruitment staff wants to improve their knowledge, skills and attitudes towards different cultures. 
For example, the recruiters want to better understand the candidate's behavior according to his/her culture to be respectful of his or her values and better prepare the interview process.

## FUNCIONES,CLASES Y ATRIBUTOS
- CANDIDATO. Contiene nombre, email, LinkedIn, Github, pasaporte y nacionalidad como atributos principales.
- La clase Candidato solo posee sus metodos de get/set además de su metodo constructor.

- CULTURA. Contiene nombre como atributo principal.
- La clase posee dos metodos virtuales, infoCultura() y ----- que retornan un string con la información pertinente, esta
información en ambos metodos se sobreescribe para cada país siendo estos 4 países Colombia, España, Australia y Japón.

- ENTREVISTA. Contiene fecha, candidato, identificación y nacionalidad como atributos principales.
- La clase no posee metodos.

- FACTORYCANDIDATO. Contiene candidato, colombia, espania, australia y japon comoa tributos principales.
- La clase posee el metodo crearCandidato() el cual retorna un objeto de tipo candidato.

- PARKINGSOFT. Contiene un mapa de candidatos, un vector de entrevistas y factory como atributos principales.
- La clase posee 4 metodos, anadirCandidato(), anadirEntrevista(), generarCartaBienv() y verExisteCandidato().