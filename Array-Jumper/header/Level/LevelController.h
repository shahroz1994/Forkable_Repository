#pragma once

namespace Level
{
	class LevelView;
	class LevelController
	{
	private:
		LevelView* level_view;

	public:
		LevelController();
		~LevelController();
		
		void initialize();
		void update();
		void render();

	};
}

