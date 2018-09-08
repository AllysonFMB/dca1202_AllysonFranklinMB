As expressões válidas são: 
  p = mat + 1;     
A variável mat refere-se a posição inicial do vetor (mat[0]), com isso, podendo ser somado com 1 e mudar a posição para 1 (mat[1]).
  x = (*mat)++; 
*mat refere-se ao primeiro valor da do vetor mat que pode ser somado com 1;

As expressões inválidas são: 
  p = mat++;
  p = ++mat; 
Em ambas expressões será somado uma unidade de memória no valor atual.
