// leetcode - 54 : Spiral Matrix
/*
    --> the order is : top -> right boundry -> bottom -> left boundary -> repeat
    --> top and bottom has row number fixed .
    --> left and right boundary has column number fixed .
    --> let have n columns and m rows 
        srow =0 ;   starting row 
        scol=0 ;   starting column 
        erow = m-1  ;   // ending row 
        ecol = n-1 ;    // ending column
    --> 1st travel :
        top : for ( j=scol to end ) then output elements 
        right : for ( i= srow+1  to erow) then output elements 
        bottom : for ( j=ecol -1  to scol) then output elements 
        left : for (i=erow-1 to srow+1 ) then output elements 

    --> next travel:
        for top boundary : srow++
        for bottom boundary : erow--
        right boundary : ecol--
        left boundary : scol++
*/