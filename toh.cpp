Tower of hanoi

// Tower of hanoi in C++

/*pseudocode
    tower(disk, source, inter, dest)

    IF disk is equal 1,
    THEN
    move disk from source to destination
    ELSE
    tower(disk - 1, source, destination, intermediate) // Step 1
    move disk from source to destination               // Step 2
    tower(disk - 1, intermediate, source, destination) // Step 3
    END IF

    END */
