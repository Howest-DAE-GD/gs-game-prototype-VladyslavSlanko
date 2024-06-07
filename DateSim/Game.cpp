#include "pch.h"
#include "Game.h"
#include "iostream"

int opt;

Game::Game( const Window& window ) 
	:BaseGame{ window }
{
	Initialize();
}

Game::~Game( )
{
	Cleanup( );
}

void Game::Initialize()
{

}
void Game::Cleanup( )
{

}

void Game::Update( float elapsedSec )
{
	std::cout<< "\nHey, I am Takeshi Tanaka, just an average high school junior with messy black hair and glasses." << std::endl;
	std::cout << "\nI am usually found with my nose in a book or sketching. Sometimes if i have some time i play" << std::endl;
	std::cout << "\nvideo games with my friends.But there is a problem that i would like to tell you about.\n" << std::endl; 
	std::cout << "\nThere is this girl, Yui Aikawa, who’s totally amazing. I first noticed her during a chaotic class project" << std::endl;
	std::cout << "\n where her laughter and energy turned everything upside down.Her big hazel eyes, clumsy moments, and fierce determination on the track captivate me." << std::endl;
	std::cout << "\nI am hopelessly in love with her, though she probably doesn’t know I exist." << std::endl;
	std::cout << "\nI am too shy to tell her, but I leave little notes of encouragement in her locker and pick up her fallen books." << std::endl;
	system("Pause");
	system("cls");
	// 
	//My friends tease me, but I can’t help it—Yui’s charm and sincerity have woven their way into my heart. 
	// I’m just waiting for the right moment to tell her how I feel." << std::endl;
	
	
	std::cout << "\nAs i was walkng down the street, i saw Aikawa. She was standing on a street and waiting for somebody."<<std::endl;
	std::cout << "\n Shoud i come to her and try to talk?\n Press 1: Come to her \t Press 2: Keep going home" << std::endl;
	std::cin >> opt;
	if (opt == 1) 
	{
		std::cout << "I decided to come over.\n -Hey Aikawa tan, how are you doing? I was going down the street and so you, so i decided to greet you.\nI am Takeshi Tanaka, from your class\n -Oh! Hi! Of course i know you! I know everyone in my class.\nYou are a quiet quiet guy, who sits fifth row 1st place, right?\n -Yes... umm... didn' expect that you knew that much. \nWhy are you staning here, are you waiting for someone?\n -Yes, i was waiting for my younger brother. \nBut he just messaged my that he is going to spend some more time training so i have to wait for him a bit longer.\n This is my chance, should i offer her to spend some time in a cafe?\n Press 1: offer her going to cafe with you\t Press 2: wish her well and go home" << std::endl;
		opt = 0;
		std::cin >> opt;
		system("cls");
		if (opt == 1) 
		{
			std::cout << "\n -Hey, i know a relly good place where you can wait for your brother."<<std::endl;
			std::cout << "\nI often visit it, so i can assure you that you will like it." << std::endl;
			std::cout << "\n -Sure, why not. Lead the way." << std::endl;
			std::cout << "\n After 3 minutes, we came to cafe and we sat at my favorite table.\n We ordered drinks and moments later an akward scilence occured.\n Press 1: ask her what she likes to do in her free time\t Press 2: do nothing " << std::endl;
			opt = 0;
			std::cin >> opt;
			system("cls");
			if (opt == 1) 
			{
				std::cout << "\n -Listen... umm... what do you like to do in your free time?" << std::endl;
				std::cout << "\n -Oh, i like to read. I meditate this way. But unfortunately i barely have any free time. \nWhat about you, Takeshi? I suppose you like to draw, beacuse i saw you several times doing something in your sketchbook" << std::endl;
				std::cout << "\n -Oh... yes, sometimes when i get bored i draw." << std::endl;
				std::cout << "\n -Would you mind showing me your drawings? \n Press 1:  \"Sure\" - show you drawings\tPress 2: \"Sorry, i don't feel like it\" - do nothing " << std::endl;
				opt = 0;
				std::cin >> opt;
				system("cls");
				if (opt == 1) 
				{
					std::cout << "\n I gave my drawing to Aikawa" << std::endl;
					std::cout << "\n I felt pressure as Aikawa was going through my drawings." << std::endl;
					std::cout << "\n -I never showed them to anyone.... " << std::endl;
					std::cout << "\n -I like them, they are beautiful! You do have a talent for sure, Takeshi." << std::endl;
					std::cout << "\n Thees words were like a blessing. I think i have never felt so fulfilled and happy in my entire life." << std::endl;
					std::cout << "\n -Th-Thanks... it means a lot to me" << std::endl;
					std::cout << "\n After some time Aikawa's phone rang. It was her brother, who has done his training." << std::endl;
					std::cout << "\n -Sorry, that's my brother. I have to take him home. Thanks for your company." << std::endl;
					std::cout << "\n -Yeah, thank you. I had a great time." << std::endl;
					std::cout << "\n -Goodbye, Takeshi!" << std::endl;
					std::cout << "\n Maybe i should ask her if we can meet some other time.\n Press 1: ask her if she has free time on this weekend\tPress 2: say goodbye and go home " << std::endl;
					opt = 0;
					std::cin >> opt;
					system("cls");
					if (opt == 1) 
					{
						std::cout << "\n -Hey, wait, i wanted to ask you i you are free this weekend." << std::endl;
						std::cout << "\n -Oh, uhm.... let me see..." << std::endl;
						std::cout << "\n Aikawa took her phone and started checking her phone with frowned eyebrows." << std::endl;
						std::cout << "\n -Yes, i have some free time on this Sunday." << std::endl;
						std::cout << "\n -Perfect! see you on Sunday then!" << std::endl;
						std::cout << "\n -Sure! Goodbye!" << std::endl;
						std::cout << "\n I had enough courage to invite Aikawa on a date! That day i was on cloud nine. I was so excited, that i could not sleep all night." << std::endl;
						opt = 5;// end //
						system("Pause");
						system("cls");
					}

					else if (opt == 2) 
					{
						std::cout << "\n -Goodbye, Aikawa." << std::endl;
						std::cout << "\n The next day, Aikawa was busy and i could not catch her for a moment. It felt as she was running from me all the time." << std::endl;
						opt = 6;
						system("pause");
					}

				}

				else if (opt == 2) 
				{
					std::cout << "\n -Sorry, i don't feel like showing my drawing to you...." << std::endl;
					std::cout << "\n -Oh... Sorry for pushing you..." << std::endl;
					std::cout << "\n -D-don't worry about that..." << std::endl;
					std::cout << "\n The rest of a time we were sitting in an akward silence." << std::endl;
					std::cout << "\n Aikawa's phone rang and as we exchanged goodbyes she walked away out of cafe." << std::endl;
					opt = 10;
				}
			}

			else if (opt == 2) 
			{
				std::cout << "\n We sat the whole time in silence. Then, Aikawa's phone rang" << std::endl;
				std::cout << "\n -Oh, sorry, my brother has done his training, so i have to take him home." << std::endl;
				std::cout << "\n -Thanks for your company, Takeshi." << std::endl;
				std::cout << "\n -Y-yes... thank you as well... Goodbye." << std::endl;
				opt = 10;
			}
			
		}
		else if (opt == 2) 
		{
			std::cout << "\n -I see, i was on my way home and i saw you, so i decided to say hi. Take care, Aikawa." << std::endl;
			std::cout << "\n -Yeah, thanks, good bye!" << std::endl;
			opt = 4; // end 4
		}
	}
	else if (opt == 2) 
	{
		std::cout << "I did not have enough courage to courage to come up to her so i decide to proceed going home." << std::endl;/*\nOn the way home there is a cafe that i like to go to when i am hungry. \nI enter the place and take my favorite place an i order my favorite drink that i always order. \nAfter some time, i see a girl entering the cafe... Is it... AIKAWA ? ? ? \nShe sat in the table in front of mine and after making her order she started scrolling whough her phone. \nMaybe this is my chance, what should i do ? \n Press 1: greet her and try to start a conversation \t Press 2: do nothing " << std::endl;*/
		opt = 10;
		system("pause");
		system("cls");
	}

	//endings

	if (opt == 4) {
		std::cout << "\n I did not have enough courage to offer her to wait for her brother somewhere else, so i just went home. \nI think i won't ever have enough courage to confess my feelings to her, so i gave up on that idea and moved on. " << std::endl;
		std::cout << "\n>>>GAME OVER<<<"<<std::endl;
		system("pause");
		system("cls");
	}

	if (opt == 5) 
	{
		std::cout << "\n On Sunday we met at 1PM at central square as we agreed. \nWe spent Aikawa's all free time walking in a park. \nIn the end, as we were sayng our goodbyes, Aikawa said:" << std::endl;
		std::cout << "\n -Takeshi, i had a great time, but i feel like we are not going to further than being friends, i am sorry." << std::endl;
		std::cout << "\n We separated, after moments i could only see her back. \nI was standing there, perplexed, as she was goin furrther and further from me." << std::endl;
		std::cout << "\n<<<END>>>" << std::endl;
		system("pause");
		system("cls");
	}

	if (opt == 6) 
	{
		std::cout << "\n As the time went by, i decided to give up on my attempts to try to confess my feelins and supress them instead." << std::endl;
		std::cout << "\n>>>>GAME OVER<<<<" << std::endl;
		system("Pause");
		system("cls");
	}

	if (opt == 10)
	{
		std::cout << "\n<<<GAME OVER>>>" << std::endl;
		system("pause");
		system("cls");
	}
}

void Game::Draw( ) const
{
	ClearBackground( );



	

}

void Game::ProcessKeyDownEvent( const SDL_KeyboardEvent & e )
{
	//std::cout << "KEYDOWN event: " << e.keysym.sym << std::endl;
}

void Game::ProcessKeyUpEvent( const SDL_KeyboardEvent& e )
{
	//std::cout << "KEYUP event: " << e.keysym.sym << std::endl;
	//switch ( e.keysym.sym )
	//{
	//case SDLK_LEFT:
	//	//std::cout << "Left arrow key released\n";
	//	break;
	//case SDLK_RIGHT:
	//	//std::cout << "`Right arrow key released\n";
	//	break;
	//case SDLK_1:
	//case SDLK_KP_1:
	//	//std::cout << "Key 1 released\n";
	//	break;
	//}
}

void Game::ProcessMouseMotionEvent( const SDL_MouseMotionEvent& e )
{
	//std::cout << "MOUSEMOTION event: " << e.x << ", " << e.y << std::endl;
}

void Game::ProcessMouseDownEvent( const SDL_MouseButtonEvent& e )
{
	//std::cout << "MOUSEBUTTONDOWN event: ";
	//switch ( e.button )
	//{
	//case SDL_BUTTON_LEFT:
	//	std::cout << " left button " << std::endl;
	//	break;
	//case SDL_BUTTON_RIGHT:
	//	std::cout << " right button " << std::endl;
	//	break;
	//case SDL_BUTTON_MIDDLE:
	//	std::cout << " middle button " << std::endl;
	//	break;
	//}
	
}

void Game::ProcessMouseUpEvent( const SDL_MouseButtonEvent& e )
{
	//std::cout << "MOUSEBUTTONUP event: ";
	//switch ( e.button )
	//{
	//case SDL_BUTTON_LEFT:
	//	std::cout << " left button " << std::endl;
	//	break;
	//case SDL_BUTTON_RIGHT:
	//	std::cout << " right button " << std::endl;
	//	break;
	//case SDL_BUTTON_MIDDLE:
	//	std::cout << " middle button " << std::endl;
	//	break;
	//}
}

void Game::ClearBackground( ) const
{
	glClearColor( 0.0f, 0.0f, 0.3f, 1.0f );
	glClear( GL_COLOR_BUFFER_BIT );
}
