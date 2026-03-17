#include "actionobjects.h"
#include "raylib.h"
namespace ActionObjects
{
    namespace UI{
        void setup(int w,int h,const char* title){
            printf("[ACTIONOBJECT] creating graphical window");
            InitWindow(w,h,title);
            SetTargetFPS(60);

        }
        bool running(){
            if (WindowShouldClose()) {
                return false;
            }
            return true;
        }
        void start() { BeginDrawing(); }
        void present() { EndDrawing(); }
        void close() { CloseWindow(); }
    }
    namespace Components{
        void load(const char*  /*.lsc LinkScript 1 Component*/);
        void newComponent(const char* id /*com.example.linkUI*/);
        //void loadFunctionalities
    }
} // namespace ActionObjects