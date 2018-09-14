Troy Davis 
Assignment # 3



Part 1
Translate into English (M->H) ^(S -> C)

A: Math is easy so the homework is done and It is sunny outside so camping is fun. 

B:  (S^H) ->(MVC)






Part 2
A: (~B -> ~A) -> ((~B->A)->B)
    
    | A | B | ~B | ~A | (~B->~A) | (~B->A) | ((~B->A)->B) | (~B->~A)->((~B->A)->B) |
    
    | T | T | F  | F  |    T     |   T     |       T      |           T            |
    
    | T | T |  T |  F |    F     |    T    |        F     |           T            |
    
    | F | F | F  |  T |     T    |     T   |        T     |            T           |
    
    |F  | F | T  |  T |      T   |    F    |        T     |             T          |

B: ((A ->B)^(B-> ~A)) -> A
    
    | A | B | (A->B) | ~A | (B->~A) | ((A->B)^(B->~A)) | ((A->B)^(B->~A))->A |
     
     | T | T |    T    | F  |    F   |         F        |          T          |
     
     | T | F |     F   |  F |    T   |         F        |          T          |
     
     | F | T |     T   |  T |    T   |         T        |          F          |
     
     | F | F |     T   |  T |    T   |         T        |          F          |




Part 3
A:  (P^Q) -> R, P->(Q->R)
      
      (P^Q)->R <=> ~(P^Q) ->R Definition of the conditional 
                      
		      <=> (~P V ~Q) V R DeMorgan’s law
                      
		      <=> ~P V (~Q V R) Associative law
                       
		       <=> ~P V (Q -> R) Definition of the conditional 
                       
		       <=> P -> (Q -> R) Definition of the conditional 

B:  (Q V R) -> P, (Q -> P) ^ ( R -> P)
     
     (Q V R ) -> P <=> ~( Q V R) V P Definition of the conditional 
	             
		     <=> (~Q V ~ R) V P DeMorgan’s law
                          
			  <=> (~Q V P) ^ (~R V P) Distributive law
                            
			    <=> (Q -> P) ^ ( ~R -> P) Definition of the conditional 
                            
			    <=>  (Q - > P) ^ (R -> P) Definition of the conditional      




Part 4
A:  Some cities are loved by all travelers but no person lives there
B:   ∀x ∃y((Traveler(x) ^ City(y)^Live(x,y) -> ~Love(x,y))



Extra Credit:

A:  P->(Q^R), S->R, R->P. Prove S-> Q

P->(Q^ R) Given

S-> R Given

R -> P Given

S  Assumption

R   Modus Ponens 

P  Modus Ponens 

(Q^R) Modus Ponens

Q     Conjunction elimination 

S -> Q Implication 

B: ~(R V S), ~P->S, P-> Q. Prove Q

~(R V S) Given

~P -> S Given

P -> Q Given

~R ^ ~S DeMorgan’s law

~S   Conjunction 

~(~P)  Modus Tollens 

P     Double Negation

Q     Modus Ponens 


