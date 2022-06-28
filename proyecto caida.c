void repartirCartas(struct carta mazo[N_CARTAS * N_PALOS], manos[N_JUGADORES][3]) {
    int posicionMazo = 0;
    int cartasARepartir;
    for(cartasARepartir = 0; cartasARepartir <3; cartasARepartir++){
        int jugador;
        for(jugador = 0; jugador < N_JUGADORES; jugador++){
            manos[jugador][cartasARepartir] = mazo[posicionMazo];
            posicionMazo++;
        }
    }
}