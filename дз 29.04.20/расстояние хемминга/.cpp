битовое расстояние хемминга//
int hamingDist(vector<byte> vec1, vector<byte> vec2) {
    if (vec1.size() != vec2.size()) {
        return -1;
    }
    int size = vec1.size();
 
    int hamingCount = 0;
    for (int i = 0; i < size; i++) {
        char mask = 1;
        int maskSlide = 0;
        int slide = 0;
        for (int j = 0; j < 8; j++) {
            char bit1 = (vec1[i] & (mask << maskSlide)) >> slide;
            char bit2 = (vec2[i] & (mask << maskSlide)) >> slide;
 
            if (bit1 != bit2) {
                hamingCount++;
            }
 
            maskSlide++;
            slide++;
        }
    }
 
    return hamingCount;
}
