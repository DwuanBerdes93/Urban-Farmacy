#include <iostream>
#include <string>

// Urban Agriculture Farm Class 
class UrbanAgricultureFarm
{
public:
    // Default Constructor
    UrbanAgricultureFarm();

    // Member Variables
    std::string name;
    std::string location;
    std::string produce;
    std::string herbs;
    
    // Member Functions
    void setName(std::string name);
    void setLocation(std::string location);
    void setProduce(std::string produce);
    void setHerbs(std::string herbs);
    void createFarm();
    std::string getName() const;
    std::string getLocation() const;
    std::string getProduce() const;
    std::string getHerbs() const;
};

// Default Constructor
UrbanAgricultureFarm::UrbanAgricultureFarm()
{
    name = "";
    location = "";
    produce = "";
    herbs = "";
}

// Member Function: Set Name of Farm
void UrbanAgricultureFarm::setName(std::string name)
{
    this->name = name;
}

// Member Function: Set Location of Farm
void UrbanAgricultureFarm::setLocation(std::string location)
{
    this->location = location;
}

// Member function: Set Produce of Farm
void UrbanAgricultureFarm::setProduce(std::string produce)
{
    this->produce = produce;
}

// Member Function: Set Herbs of Farm
void UrbanAgricultureFarm::setHerbs(std::string herbs)
{
    this->herbs = herbs;
}

// Member Function: Create Farm
void UrbanAgricultureFarm::createFarm()
{
    std::cout << "Creating an urban farming business..." << std::endl;
    std::cout << "Farm Name: " << this->name << std::endl;
    std::cout << "Location: " << this->location << std::endl;
    std::cout << "Produce: " << this->produce << std::endl;
    std::cout << "Herbs: " << this->herbs << std::endl;
}

// Member Function: Get Name of Farm
std::string UrbanAgricultureFarm::getName() const
{
    return this->name;
}

// Member Function: Get Location of Farm
std::string UrbanAgricultureFarm::getLocation() const
{
    return this->location;
}

// Member Function: Get Produce of Farm
std::string UrbanAgricultureFarm::getProduce() const
{
    return this->produce;
}

// Member Function: Get Herbs of Farm
std::string UrbanAgricultureFarm::getHerbs() const
{
    return this->herbs;
}

int main()
{
    // Create an instance of Urban Agiculture Farm
    UrbanAgricultureFarm urbanAgricultureFarm;
    
    // Set values of Farm
    urbanAgricultureFarm.setName("Urban Farm");
    urbanAgricultureFarm.setLocation("Chicago, IL");
    urbanAgricultureFarm.setProduce("Fresh, local produce");
    urbanAgricultureFarm.setHerbs("Fresh herbs");
    
    // Output values of Farm
    std::cout << "Name: " << urbanAgricultureFarm.getName() << std::endl;
    std::cout << "Location: " << urbanAgricultureFarm.getLocation() << std::endl;
    std::cout << "Produce: " << urbanAgricultureFarm.getProduce() << std::endl;
    std::cout << "Herbs: " << urbanAgricultureFarm.getHerbs() << std::endl;
    
    // Create Farm
    urbanAgricultureFarm.createFarm();
    
    return 0;
}