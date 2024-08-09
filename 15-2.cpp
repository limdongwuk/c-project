#include<iostream>
#include<map>
        //armor 클래스

        class Armor
    {
    public:
        Armor() :name(""), def(0) {}

        Armor(const std::string& n, int d) : name(n), def(d) {}
    public:
        std::string GetName()const
        {
            return name;
        }
        int GetDef()const
        {
            return def; //  기본생성자 매개변수 있는생성자
        }

    private:
        std::string name;
        int def;

    };

    //Scene 클래스 만듬
    class Scene
    {
    public:
        Scene() :desc("") {}
        Scene(const std::string& s) :desc(s) {}

        std::string GetDesc()const
        {
            return desc;
        }

    private:
        std::string desc;
    };
    class SceneManager
    {
    public:
        SceneManager() :curScene(nullptr), curSceneName("") {}
        ~SceneManager()
        {
            //맵에 저장된 모든 메모리를 날려줘야함
            for (auto& i : scenes)
            {
                delete i.second; //각씬의 포인터가 가리키는 
                i.second = nullptr;
            }
        }


    public:
        //씬을 추가하는 ??(함수)
        void AddScene(const std::string& name, Scene* scene)
        {
            scenes[name] = scene; //씬의 이름을 키로하고 포인터로 값을 저장한다는뜻
        }
        //씬을 삭제하는 함수
        void RemoveScene(const std::string& name)
        {
            //씬 이름으로 map에서 찾아야함
            auto iter = scenes.find(name);
            //씬이 있으면
            if (iter != scenes.end())
            {
                //지워라   
                delete iter->second;
                iter->second = nullptr;
                scenes.erase(iter);
            }
        }
        //현재씬을 설정
        void SetCurScene(const std::string& name)
        {
            auto iter = scenes.find(name);
            if (iter != scenes.end())
            {
                curScene = iter->second;
                curSceneName = name;
            }
            else
            {
                std::cout << "없음" << std::endl;
            }
        }
        // 현재 씬을 출력(보여주는)함수
        void ShowCurScene()const
        {
            if (curSceneName.empty()) return;
            std::cout << curSceneName << std::endl;
            std::cout << curScene->GetDesc() << std::endl;

        }


    private:
        //씬의 이름을 키값으로하고  씬에대한 포인터를 값으로 저장map을 만들고싶으면
        std::map<std::string, Scene*>scenes;
        //현재씬을 가리키는 포인터
        Scene* curScene;
        //현재씬의 이름
        std::string curSceneName;

    };

    int main()
    {
        std::map<std::string, Armor>armor; //키는 문자열 값은 Armor에 대체

        armor.insert(std::make_pair("shield", Armor("방패", 10)));
        armor.insert(std::make_pair("smallshiled", Armor("작은방패", 10)));
        armor.insert(std::make_pair("greave", Armor("신발", 10)));

        for (const auto& pair : armor)
        {
            std::cout << "키 : " << pair.first << std::endl;
            std::cout << "이름 : " << pair.second.GetName() << std::endl;
            std::cout << "방어력 : " << pair.second.GetDef() << std::endl;
        }

        SceneManager sceneManager;
        sceneManager.AddScene("menu", new Scene("메뉴씬이다. "));
        sceneManager.AddScene("Battle", new Scene("배틀씬이다. "));

        sceneManager.SetCurScene("menu");
        sceneManager.ShowCurScene();

        sceneManager.SetCurScene("Battle");
        sceneManager.ShowCurScene();


    }
    