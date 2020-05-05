#include <stdio.h>

main()
{
	int opcija, br_preminulih, br_oporavljenih, ukupan_br_zarazenih, donja_granica, gornja_granica;
	float stopa_mortaliteta;
  
	do
	{
		printf("1 - Racunanje stope mortaliteta\n2 - Procjena realnog broja zarazenih\n0 - Izlazak iz programa\nIzaberite jednu od ponudjenih opcija: ");
		scanf("%d", &opcija);
		system("cls");
		switch (opcija)
		{
		case 1:
			printf("Unesite broj preminulih pacijenata: ");
			scanf("%d", &br_preminulih);
			printf("Unesite broj oporavljenih pacijenata: ");
			scanf("%d", &br_oporavljenih);
			stopa_mortaliteta = (float)br_preminulih / (br_preminulih + br_oporavljenih);
			printf("Stopa mortaliteta iznosi : %.3f\n", stopa_mortaliteta);
			system("pause");
			system("cls");
			break;
		case 2:
			printf("Unesite ukupan broj zarazenih: ");
			scanf("%d", &ukupan_br_zarazenih);
			donja_granica = 32 * ukupan_br_zarazenih;
			gornja_granica = 72 * ukupan_br_zarazenih;
			printf("Procjena realnog broja zarazenih iznosi izmedju %d - %d.\n", donja_granica, gornja_granica);
			system("pause");
			system("cls");
			break;
		}


	} while (opcija != 0);
}
