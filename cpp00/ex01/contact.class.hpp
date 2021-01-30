class Contact {

public:

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string phone_number;
	std::string postal_address;
	std::string email;
	std::string bday;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;

void	new_contact(void);
void	show_contact(void) const;
void	search_contact(int i) const;

};
