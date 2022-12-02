l←•Import "lib.bqn"
i←•FLines "../inp/01"
fi← (+´•BQN¨)¨(<⟨⟩) l.Split i
•Show (⊑⋈·+´3⊸↑)∨fi
