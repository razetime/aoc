l←•Import "../../lib.bqn"
i←•FChars "../inp/06"

PktN←{𝕨+⊑1⊐˜(∧´∊)˘𝕨↕𝕩}
•Show 4 PktN i
•Show 14 PktN i
