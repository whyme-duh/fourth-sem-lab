father(ram,sunil).
father(bishnu,ram).
grandfather(X,Y):-father(X,Z),father(Z,Y).