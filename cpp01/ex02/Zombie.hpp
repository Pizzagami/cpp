class Zombie{

public:

    std::string name;
	std::string type;
    std::string decomposition_state;

    Zombie(std::string name) : name(name)
    {
        std::cout  << this->name << "est devenu un zombie" << std::endl;
    }

	~Zombie()
    {
         std::cout  << "Le zombie " << this->name << " a trouvé le repos eternelle" << std::endl;
    }

};

/*Runners
Stalkers
Clickers
Bloaters*/