likes(Tom,football).
likes(Harry,football) :- likes(Tom,football).
likes(Lucy,X) :-likes(Harry,X),likes(Tom,X).