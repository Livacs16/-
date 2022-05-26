﻿// Виртуальный диетолог.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>     // Библиотеки которые используются в программе
#include <windows.h>
using namespace std;
#include "wish.h"     // Заголовочный файл

void wish_list(string answer_1_1) {

	vector<string> r_w{ "Хочу", "хочу", "ХОЧУ"};
	vector<string> r_dw{ "Не_хочу", "не_хочу", "НЕ_ХОЧУ"};

	if (answer_1_1 == r_w[0] || answer_1_1 == r_w[1] || answer_1_1 == r_w[2]) {
		cout << "Ждём вас уже подготовленными." << endl;
		system("start https://duetclinic.ru/blog/kakie-analizy-neobhodimo-sdat-pered-nachalom-diety/");
	}

	else if (answer_1_1 == r_dw[0] || answer_1_1 == r_dw[1] || answer_1_1 == r_dw[2]) {
		cout << "Ждём вас уже подготовленными." << endl;
	}
}


int main()
{
	system("chcp 1251 >> null");  // Благодаря этой строке программа понимает, что мы пишем русские слова
	setlocale(LC_ALL, "Russian"); // Из-за этой строчки программа выводит русские сиволы
	cout << "Здравствуй дорогой пользователь. Вас приветствует виртуалиный диетолог." << endl;
	cout << "Перед тем как я попробую подобрать для вас рецепт для похудения, я задам вам несколько вопросов. Вы готовы ?\n(Ответьте Да или Нет)" << endl;

	vector<string> r_Yes{ "Да", "да", "ДА"};
	vector<string> r_No{ "Нет","нет", "НЕТ"};
	vector<string> r_g{ "Мужской", "мужской", "МУЖСКОЙ", "Женский", "женский", "ЖЕНСКИЙ"};
	
	// Цикл подготовки человека для ответа на вопросы 
	string answer;
	int no = 0;
	int ne_pon = 0;
	for (int i = 0; i < 5; i++) {
		cin >> answer;
		if (answer == r_Yes[0] || answer == r_Yes[1] || answer == r_Yes[2]) {
			cout << "Тогда вот первый вопрос:(Отвечайте на них Да или Нет)" << endl;
			break;
		}

		else if (answer == r_No[0] || answer == r_No[1] || answer == r_No[2]) {
			if (no == 2) {
				cout << "Ну и оставайся толстяком :( . (Програма обиделась на вас, чтобы продолжить работу перезагрузите её.)";
				exit(0);
			}
			cout << "Напишешь как будешь готов." << endl;
			no++;
		}

		else {
			if (ne_pon == 2) {
				cout << "Это уже какое-то издевательство :| . (Программа не поняла что вы пишите, чтобы продолжить работу перезапустите её.)" << endl;
				exit(0);
			}
			cout << "К сожалению я не знаю таких фраз. Попробуйте ещё раз." << endl;
			ne_pon++;
		}
	}

	// Вопросы
	cout << "Есть ли у вас хронические заболевания?" << endl;
	string answer_1; cin >> answer_1;
	string answer_1_1;

	if (answer_1 == r_Yes[0] || answer_1 == r_Yes[1] || answer_1 == r_Yes[2]) {
		cout << "Тогда вам стоит сдать анализы и проконсультироваться у специалиста, прежде чем воспользоваться этой программой.\nПодробнее вы можете прочитать об этом на этом сайте, скопировав ссылку:\n(https://duetclinic.ru/blog/kakie-analizy-neobhodimo-sdat-pered-nachalom-diety/) или же напишите\n(<<Хочу>>  и я открою его самостоятельно или <<Не_хочу>> и ничего не произойдёт) " << endl;
		cin >> answer_1_1;
		wish_list(answer_1_1);
		exit(0);
	}

	else if (answer_1 == r_No[0] || answer_1 == r_No[1] || answer_1 == r_No[2]) {
		cout << "Тогда вот следующий вопрос:" << endl;
	}

	else {
		cout << "Прежде чем, что-то писать читайте, что написанно(Ошибка программы, перезапустите её)" << endl;
		exit(0);
	}

	cout << "Вам больше 40 лет?" << endl;
	string answer_2; cin >> answer_2;
	if (answer_2 == r_Yes[0] || answer_2 == r_Yes[1] || answer_2 == r_Yes[2]) {
		cout << "Тогда вам стоит сдать анализы и проконсультироваться у специалиста, прежде чем воспользоваться этой программой.\nПодробнее вы можете прочитать об этом на этом сайте, скопировав ссылку:\n(https://duetclinic.ru/blog/kakie-analizy-neobhodimo-sdat-pered-nachalom-diety/) или же напишите\n(<<Хочу>>  и я открою его самостоятельно или <<Не_хочу>> и ничего не произойдёт) " << endl;
		cin >> answer_1_1;
		wish_list(answer_1_1);
		exit(0);
	}

	else if (answer_2 == r_No[0] || answer_2 == r_No[1] || answer_2 == r_No[2]) {
		cout << "Вот последний вопрос:" << endl;
	}

	else {
		cout << "Прежде чем, что-то писать читайте, что написанно(Ошибка программы, перезапустите её)" << endl;
		exit(0);
	}

	cout << "Вы хотите похудеть больше, чем на 3-4 кг?" << endl;
	string answer_3; cin >> answer_3;

	if (answer_3 == r_Yes[0] || answer_3 == r_Yes[1] || answer_3 == r_Yes[2]) {
		cout << "Тогда вам стоит сдать анализы и проконсультироваться у специалиста, прежде чем воспользоваться этой программой.\nПодробнее вы можете прочитать об этом на этом сайте, скопировав ссылку:\n(https://duetclinic.ru/blog/kakie-analizy-neobhodimo-sdat-pered-nachalom-diety/) или же напишите\n(<<Хочу>>  и я открою его самостоятельно или <<Не_хочу>> и ничего не произойдёт) " << endl;
		cin >> answer_1_1;
		wish_list(answer_1_1);
		exit(0);
	}

	else if (answer_3 == r_No[0] || answer_3 == r_No[1] || answer_3 == r_No[2]) {
		cout << "Тогда давайте попробуем подобрать для вас рецепт." << endl;
	}

	else {
		cout << "Прежде чем, что-то писать читайте, что написанно(Ошибка программы, перезапустите её)" << endl;
		exit(0);
	}

	// Ввод  данных пользователя и выдача рецепта для похудения
	cout << "Введите свой возраст и пол(Например: Мужской или Женский)" << endl;
	int age; cin >> age;
	string gender; cin >> gender;

	if (age >= 31 and gender == r_g[0] || gender == r_g[1] || gender == r_g[2]) {
		cout << "К мужским особенностям относится повышенный обмен веществ. Поэтому им легче, чем женщинам похудеть, но требуется больше калорий, витаминов и минеральных веществ для поддержания здоровья.\nПриблизительно при малоактивном образе жизни нужно следующее количество энергии:\n31-50 лет – 2200 ккал;\nстарше 50 лет – 1800 ккал.\nЕжедневно в меню должны присутствовать продукты, богатые витаминами и микроэлементами.К таким веществам относятся цинк, селен, витамин С, Е и группа В.\nПотребность в них увеличивается в несколько раз, если у мужчины есть вредные привычки – курение или он злоупотребляет спиртным.\nТогда восполнить дефицит только при помощи питания не получится, необходимо принимать специальные витаминные комплексы:\nЭвалар Эффекс;\nСуперум;\nУнитекс;\nАлфавит." << endl;
		cout << "Полезные продукты для диеты, как составить недельный рацион мужчине? - всё это вы можете найти на сайте скопировавав ссылку:\nhttps://gorzdrav.org/blog/zdorovoe-pitanie-dlja-muzhchin/" << endl;
		cout << "Надеюсь смог вам помочь. Начинайте худеть прямо сейчас!" << endl;
	}

	else if (age >= 18 and age < 31 and gender == r_g[0] || gender == r_g[1] || gender == r_g[2]) {
		cout << "К мужским особенностям относится повышенный обмен веществ. Поэтому им легче, чем женщинам похудеть, но требуется больше калорий, витаминов и минеральных веществ для поддержания здоровья.\nПриблизительно при малоактивном образе жизни нужно следующее количество энергии:\n18-30 лет – 2400 ккал;\nЕжедневно в меню должны присутствовать продукты, богатые витаминами и микроэлементами.К таким веществам относятся цинк, селен, витамин С, Е и группа В.\nПотребность в них увеличивается в несколько раз, если у мужчины есть вредные привычки – курение или он злоупотребляет спиртным.\nТогда восполнить дефицит только при помощи питания не получится, необходимо принимать специальные витаминные комплексы:\nЭвалар Эффекс;\nСуперум;\nУнитекс;\nАлфавит." << endl;
		cout << "Полезные продукты для диеты, как составить недельный рацион мужчине? - всё это вы можете найти на сайте скопировавав ссылку:\nhttps://gorzdrav.org/blog/zdorovoe-pitanie-dlja-muzhchin/" << endl;
		cout << "Надеюсь смог вам помочь. Начинайте худеть прямо сейчас!" << endl;
	}

	else if (age < 18 and age > 0 and gender == r_g[0] || gender == r_g[1] || gender == r_g[2]) {
		cout << "Все обменные процессы в растущем организме происходят несколько иначе по сравнению со взрослым организмом,следовательно,\nесли нет никаких медицинских показаний к похудению (избыточный вес и ожирение, сахарный диабет, сердечная недостаточность и т.д.),\nморить себя диетами не стоит. Очень важно для подростков, начиная с 11 лет и вплоть до 17 лет обеспечить свой организм всеми необходимыми микроэлементами и витаминами.\nЕсли убрать все необходимые компоненты для и витаминамиполноценного развития организма, то через пять-десять лет вы ощутите проблемы как с весом, так и со здоровьем.\nЧаще всего проблема с лишними килограммами в подростковом возрасте исчезает к моменту полного созревания организма." << endl;
		cout << "Подробнее вы можете узнать на сайте: https://foodandhealth.ru/diety/dieta-dlya-podrostkov/" << endl;
		cout << "Надеюсь смог вам помочь. Начинайте худеть прямо сейчас!" << endl;
	}

	else if (age >= 40 and gender ==  r_g[3] || gender == r_g[4] || gender == r_g[5]) {
		cout << "Питаться каждые 3-4 ч: 3-4 основных приема пищи и 2-3 перекуса с учетом объема рекомендуемой порции. Ее часто рекомендуют измерять собственной ладошкой – сколько туда помещает пищи, столько и есть.\nПить достаточное количество жидкости – 30 мл на 1 кг массы тела в сутки.\nЕсть каждый день в одно и то же время.\nУтром сразу после пробуждения натощак выпивать 200 мл воды.\nОтказаться от всего вредного: жареного, жирного, слишком со леных и копченых блюд, алкоголя, острых специй." << endl;
		cout << "Больше рецептов для похудения вы можете узнать на сайте: https://allslim.ru/1199-3-luchshih-diety-dlya-zhencshin-posle-40-let.html" << endl;
		cout << "Надеюсь смог вам помочь. Начинайте худеть прямо сейчас!" << endl;
	}

	else if (age >= 18 and gender ==  r_g[3] || gender == r_g[4] || gender == r_g[5]) {
		cout << "Самый сложный вопрос проблемы похудения — сколько раз в день нужно кушать? Оптимальный вариант: пять раз — три основных приёма пищи и два промежуточных перекуса с целью подавить нарастающее чувство голода.\nПерекусы должны быть максимально лёгкими — например, скушать яблоко или вареное яйцо.\nЕсли на перекусы времени нет, то вполне можно ограничиться стандартными завтраком, обедом и ужином, при этом последний приём пищи не должен быть позже 19 часов.\nЕсли голод мешает уснуть, можно скушать кусочек ветчины, белок вареного яйца или немного желе.\nА вот кефир, столь часто рекомендуемый, лучше на ночь не пить — он часто создаёт брожение в кишечнике." << endl;
		cout << "Подробнее о тонкостях диеты можно узнать на сайте скопировава ссылку:https://fitness3000.ru/blog/zhenskie-sovety-ratsion-pitaniya-dlya-pokhudeniya/ " << endl;
		cout << "Надеюсь смог вам помочь. Начинайте худеть прямо сейчас!" << endl;
	}

	else if (age < 18 and age > 0 and gender == r_g[3] || gender == r_g[4] || gender == r_g[5]) {
		cout << "Все обменные процессы в растущем организме происходят несколько иначе по сравнению со взрослым организмом,следовательно,\nесли нет никаких медицинских показаний к похудению (избыточный вес и ожирение, сахарный диабет, сердечная недостаточность и т.д.),\nморить себя диетами не стоит. Очень важно для подростков, начиная с 11 лет и вплоть до 17 лет обеспечить свой организм всеми необходимыми микроэлементами и витаминами.\nЕсли убрать все необходимые компоненты для и витаминамиполноценного развития организма, то через пять-десять лет вы ощутите проблемы как с весом, так и со здоровьем.\nЧаще всего проблема с лишними килограммами в подростковом возрасте исчезает к моменту полного созревания организма." << endl;
		cout << "Подробнее вы можете узнать на сайте: https://foodandhealth.ru/diety/dieta-dlya-podrostkov/" << endl;
		cout << "Надеюсь смог вам помочь. Начинайте худеть прямо сейчас!" << endl;
	}

	else {
		cout << "Таких характеристик не существует или вы инопланетянин?(Ошибка программы, перезапустите её)" << endl;
	}
}

