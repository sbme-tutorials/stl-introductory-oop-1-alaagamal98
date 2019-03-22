#ifndef DNA_HPP
#define DNA_HPP

namespace dna
{
    
char complementaryBase(char base)
{
    switch (base)
    {
    case 'A':
    {
        return 'T';
    }
    break;
    case 'T':
    {
        return 'A';
    }
    break;
    case 'G':
    {
        return 'C';
    }
    break;
    case 'C':
    {
        return 'G';
    }
    break;
    }
}

char *complementarySequence(char *base, int size)
{
    char *dna_seq = new char[size];
    for (int i = 0; i < size; ++i)
    {
        dna_seq[i] = complementaryBase(base[(size - 1) - i]);
    }
    return dna_seq;
}

int countChar(char *base, int size, char test)
{
    int counter = 0;
    for (int i = 0; i < array.size; ++i)
    {
        if (array.base[i] == test)
        {
            ++counter;
        }
    }
    return counter;
}

struct DNA
{
    char *base;
    int size;
};

char *complementarySequence( DNA &dna )
{
    // DRY solution
    return complementarySequence( dna.base, dna.size );
}

int countChar( DNA &dna, char test)
{
    // DRY solution
    return countChar( dna.base, dna.size, test);
}


} // namespace dna

#endif