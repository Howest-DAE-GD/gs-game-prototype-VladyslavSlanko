#include "pch.h"
#include "Game.h"

Game::Game( const Window& window ) 
	:BaseGame{ window }
{
	Initialize();
}

Game::~Game( )
{
	Cleanup( );
}

void Game::Initialize( )
{
	player = new Player();
	col = new Collectables();
	for (int i = 0; i < 10; i++) {
		spike[i] = new Spike();
	}


}

void Game::Cleanup( )
{
	delete player;
}

void Game::Update( float elapsedSec )
{
	if (iterator < 10)
	{
		spike[iterator]->Fall();
		iterator++;
	}
	else 
	{
		iterator = 0;
	}
	
	for (int i = 0; i < 10; i++) 
	{
		player->IsHit(spike[i]->Hit(player->GetCoords(), player->GetSize()));
		
	}
	//Check keyboard state
	std::cout << player->GetCoords().x << "\t" << player->GetCoords().y << "\t" << col->GetCoords().x << "\t" << col->GetCoords().y << std::endl;

	const Uint8 *pStates = SDL_GetKeyboardState( nullptr );
	if ( pStates[SDL_SCANCODE_RIGHT] )
	{
		player->MoveRight();
	}
	if ( pStates[SDL_SCANCODE_LEFT])
	{
		player->MoveLeft();
	}
	if (pStates[SDL_SCANCODE_DOWN]) 
	{
		player->MoveDown();
	}
	if (pStates[SDL_SCANCODE_UP]) 
	{
		player->MoveUp();
	}

	if (-player->GetSize() < col->GetCoords().x - player->GetCoords().x && col->GetCoords().x - player->GetCoords().x < player->GetSize() && -player->GetSize() < col->GetCoords().y - player->GetCoords().y && col->GetCoords().y - player->GetCoords().y < player->GetSize())
	{
		col->is_eaten = true;
		col->IsEaten();
		player->Grow();
	}
}

void Game::Draw( ) const
{
	ClearBackground();
	for (int i = 0; i < 10; i++) 
	{
		spike[i]->Draw();
	}
	player->Draw();
	col->Draw();
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
