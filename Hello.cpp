#include <iostream>

int main()
{
	printf("�ਢ�� ���\n");
	std::cout<< "�ਢ�� ��� C++"<< std::endl;
	
	return 0;
}
int main(int argc, const char** argv) {//
	printf("4. ������� �������� ������ <���� ��� ���� � ���⨪�-������> � ᭠����� ��� �ᥬ� ����室��묨 (�� ��� �����) ᢮��⢠��\n");
enum rainbow {red=5, orange, yellow, green, lightblue, blue, violet};
    using Rainbow = enum rainbow;

    Rainbow currentCvetikSemicvetikLeaf = red;
    //std::cout << currentCvetikSemicvetikLeaf << " ";
struct cat {
        int age;
        int hairAmount;
        char name[15]; //std::string
        Rainbow color;
        int isHungry : 1;
        int isWalking : 1;
    };
    using Cat = struct cat;
    Cat barsik;
    barsik.age = 5;
    barsik.hairAmount = 1000000;
    barsik.color = yellow;
    strcpy(barsik.name, "Barsik");

    std::cout << barsik.color << " ";
    std::cout << barsik.name << std::endl;

    Cat murzik;
    murzik.age = 5;
    murzik.hairAmount = 1000000;
    murzik.color = violet;
    strcpy(murzik.name, "Murzik");
    
    std::cout << murzik.color << " ";
    std::cout << murzik.name << std::endl;
	return 0;
}