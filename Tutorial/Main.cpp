//#include <iostream>
//#include "SFML/Graphics.hpp"
//#include "SFML/Window.hpp"
//#include "SFML/Audio.hpp"
//#include "SFML/Network.hpp"
//#include "SFML/System.hpp"
//using namespace std;
//using namespace sf;
//int main()
//{
	//Setting window
	//RenderWindow ประกาศตัวแปรประเภท RenderWindow ชื่อ window เพื่อให้สามารถ Render Graphic ได้
	//โดย window มี (Argument หรือ Parameter หรือ Method แล้วแต่จะเรียกมีหลายชื่อ) 
	//ที่ต้องการดังนี้ VideoMode(กว้าง,ยาว) , "ชื่อ WindowName" , Style:: กด Control + spacebar อยากได้ mode ไหนเลือกได้เลย 
	// | เป็น Bitwise Operater ที่ทำให้เราเขียน Style ได้มากกว่า 1 แบบ
//	RenderWindow window(VideoMode(800, 600), "My Game", Style::Titlebar | Style::Close);
	//ประกาศตัวแปร ประเภท Texture ชื่อ texture
	//Texture texture;
	//เรียกใช้ function loadFromFile 
	//texture.loadFromFile("Texture/Player/sprite.png");
	// *** การ SetTexture แบบ Sprite ***
	//ประกาศตัวแปรประเภท Sprite ชื่อ shape
	//Sprite shape;
	//เรียกใช้ function setScale ต้องการ Argument 2 ตัว คือ  float x,float y
	//shape.setScale(0.25f,0.25f);

	// *** การ SetTexture แบบ RectangleShape ***
	//ประกาศตัวแปรประเภท RectangleShape ชื่อ shape
	/*RectangleShape shape;*/
	//เรียกใช้ function setSize ซึ่ง ต้องการ Argument ที่เป็น Vector2f ซึ่ง ต้องการ Argument 2 ตัว คือ x, y
	/*shape.setSize(Vector2f(100.f,100.f));*/

	//ทำการ SetTexture โดยถ้าเป็นตัวแปรประเภท Sprite สามารถใช้ Code ตัวด้านล่างได้เลย
	//แต่ถ้าเป็น RectangleShape ต้องใส่ &หน้า texture
	//shape.setTexture(texture);

	// *** โดยตัวของ Sprite และ RectangleShape มีหลักการทำงานที่คล้ายๆกัน จะมีบางอย่างมีไม่เหมือนกันดังตัวอย่างที่กล่าวไว้ข้างต้น ***

	// ทำการ วนลูป เพื่อ Check ว่ามีการเปิด Window(ตัวเกม) ขึ้นมาไหม โดยใช้ function window.isOpen() ซึ่งจะ Return ค่าเป็น Bool
	//while (window.isOpen())
	//{
		//ประกาศตัวแปรประเภท Event ชื่อ event 
		//*** โดยเกม 1 เกมสามารถมีตัวแปร Event ได้เพียงตัวเดียว ที่เหลือจะทำการส่งค่ากันไปกันมา  ***
		//Event event;
		// loop การดึง event ซึ่ง event คือ การกระทำต่างๆที่เกิดขึ้นในเกม เช่น การกดปุ่ม การคลิ๊กMouse 
		//while (window.pollEvent(event))
		//{
			//ทำการ แยก type ของ event โดยใช้ switch case *** จะใช้ if แทนก็ได้ดังตัวอย่าง ***
			/*if (event.type == Event::Closed)
			{
				window.close();
			}*/
			//switch (event.type)
			//{
			// Event Close (กดปุ่มปิดเกม)
			//case Event::Closed:
				//ทำการปิดตัวเกม
				//window.close();
				//break;
			// Event KeyPressed (กดปุ่มบนคีย์บอร์ด)
		//	case Event::KeyPressed:
				// ถ้ากด esc
			//	if (Keyboard::isKeyPressed(Keyboard::Key::Escape))
					//ทำการปิดตัวเกม
				//	window.close();
				//break;
			// Event TextEntered (กดปุ่มบนคีย์บอร์ด) ***ต่างจากตัว KeyPressed ตรงที่ TextEntered จะเป็นตัว อักษรต่างๆ (Ascii)
		//	case Event::TextEntered:
				//ทำการ Print ตัวอักษรออกมายังหน้าจอ Terminal โดย event.text.unicode จะมีค่าเป็น Ascii จึง ต้อง cast เป็น char
			//	cout << char(event.text.unicode) << endl;
				//break;
		//	default:
			//	break;
		//	}
		//}
		//ทำการเช็คปุ่มที่กด และ check ตัว Position ในแนวแกน x ว่ามากกว่า 0 ไหม
		//if (Keyboard::isKeyPressed(Keyboard::Key::A) && shape.getPosition().x > 0)
	//	{
			//ทำการขยับตัวละครโดย function move โดยต้องการ Argument 2 ตัว คือ x และ y
		//	shape.move(-0.5f,0.f);
		//}
		// function getGlobalBounds เป็น function ที่ดึงตำแหน่งขอบของตัวละคร โดย position ของตัวละคร จะอยู่ซ้ายบน เสมอ
		//if (Keyboard::isKeyPressed(Keyboard::Key::D) && shape.getPosition().x < 800 - shape.getGlobalBounds().width)
		//{
			//shape.move(0.5f, 0.f);
		//}
		//if (Keyboard::isKeyPressed(Keyboard::Key::W) && shape.getPosition().y > 0)
		//{
			//shape.move(0.f, -0.5f);
		//}
		//if (Keyboard::isKeyPressed(Keyboard::Key::S) && shape.getPosition().y < 600 - shape.getGlobalBounds().height)
		//{
			//shape.move(0.f, 0.5f);
		//}
		// function clear เป็นการ clear หน้าจอ เนื่องจาก เกม ก็เหมือนกับการ วาดภาพซ้ำไปซ้ำมา
		//window.clear();
		// function draw เป็นการวาดรูปตัว RectangleShape หรือ Sprite หรือ ตัวของ Object ต่างๆที่เป็น UI โดยต้องการ Argument 1 อย่าง คือ ตัวของ UI ที่สร้างมา
		//window.draw(shape);
		// function display เป็นการแสดงผลออกทางหน้าจอ
		//window.display();
		
	//}
//	return 0;
//}
// *** แต่อย่างใดแล้วการศึกษาหาความรู้เพิ่มเติมจะช่วยทำให้เขียนได้ง่ายขึ้น ***
// *** Tutorial ข้างต้นแค่พื้นฐานกรุณาศึกษาเพิ่มเติมอย่างละเอียด
// https://www.youtube.com/watch?v=axIgxBQVBg0&list=PL21OsoBLPpMOO6zyVlxZ4S4hwkY_SLRW9
// https://www.sfml-dev.org/tutorials/2.5/ 


/*if (state == 3)
{
	textEnter.push_back(event);
}
if (event.type == Event::Closed)
{
	window.close();
	return 0;
}
else if (event.type == Event::KeyPressed)
{
	int dx = 0;
	int dy = 0;
	if (Keyboard::isKeyPressed(Keyboard::Key::W))
	{
		//std::cout << "Key W pressed" << std::endl;
		dy = -WalkStep;
	}
	else if (Keyboard::isKeyPressed(Keyboard::Key::S))
	{
		//std::cout << "Key S pressed" << std::endl;
		dy = WalkStep;
	}
	if (Keyboard::isKeyPressed(Keyboard::Key::A))
	{
		//std::cout << "Key A pressed" << std::endl;
		dx = -WalkStep;
	}
	else if (Keyboard::isKeyPressed(Keyboard::Key::D))
	{
		//std::cout << "Key D pressed" << std::endl;
		dx = WalkStep;
	}

	if (Keyboard::isKeyPressed(Keyboard::Key::Space))
	{
		std::cout << "save" << std::endl;
		Path_temp[Path_temp_size][0] = moya_x + dx;
		Path_temp[Path_temp_size][1] = moya_y + dy;
		Path_temp_size++;

	}
	else if (Keyboard::isKeyPressed(Keyboard::Key::Enter))
	{
		std::cout << "{";
		for (int i = 0; i < Path_temp_size; i++)
		{
			std::cout << "{" << Path_temp[i][0] << "," << Path_temp[i][1] << "},";

		}
		std::cout << "}" << std::endl;
	}*/