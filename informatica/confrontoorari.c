int main() {
    int h1, m1, s1, h2, m2, s2;
    printf("Inserisci il primo orario (hh mm ss): ");
    scanf("%d %d %d", &h1, &m1, &s1);
    printf("Inserisci il secondo orario (hh mm ss): ");
    scanf("%d %d %d", &h2, &m2, &s2);

    if (h1 < h2 || (h1 == h2 && m1 < m2) || (h1 == h2 && m1 == m2 && s1 < s2)) {
        printf("Il primo orario viene prima.\n");
    } else if (h1 > h2 || (h1 == h2 && m1 > m2) || (h1 == h2 && m1 == m2 && s1 > s2)) {
        printf("Il secondo orario viene prima.\n");
    } else {
        printf("Gli orari sono uguali.\n");
    }

    
}