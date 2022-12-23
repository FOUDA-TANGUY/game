#ifndef __VISUEL__H__
#define __VISUEL__H__
/*
#define MINLONG 75
#define MINLARG 25
*/
    class Visuel
    {
        public:
            Visuel();
            Visuel(int, int);
            void initScreen(void);
            void setSize(int, int);
            int getLong(void);
            int getLarg(void);
            void present(void);

            ~Visuel();

        private:
            char** mScreen;
            int mLong;
            int mLarg;
            //Agent* mAgents;
    };

#endif