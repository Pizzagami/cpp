class Contact {

public:

void	new_contact(void);
void	show_contact(void) const;
void	search_contact(int i) const;

private:

	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _login;
	std::string _phone_number;
	std::string _postal_address;
	std::string _email;
	std::string _bday;
	std::string _favorite_meal;
	std::string _underwear_color;
	std::string _darkest_secret;
};
