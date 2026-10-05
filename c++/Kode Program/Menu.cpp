#include "Weapon.cpp"
#include "UsableBuff.cpp"
#include "UsableDebuff.cpp"
#include "UsableHeal.cpp"
#include "Hybrid.cpp"
#include <vector>

class menu{
    private:
    vector<weapon> Weapons;
    vector<usablebuff> Usablebuffs;
    vector<usabledebuff> UsableDebuffs;
    vector<usableheal> UsableHeals;
    vector<item> Items;
    vector<hybrid> Hybrids;
    public:
    menu(){

    }
    void createspaces(size_t space){
        for(int i = 0 ; i < space; i++){
            cout << " ";
        }
    }
    size_t countdigit(int num){
        size_t digit = 0;
        while(num != 0){
            num = num /10;
            digit++;
        }
        return digit;
    }
    void AddWeapon(){
        mold temp;
        cin >> temp.id;
        cin.ignore();
        getline(cin, temp.name);
        cin >> temp.price;
        cin.ignore();
        getline(cin, temp.description);
        cin >> temp.stat;
        weapon dum = weapon(temp.id, temp.name, temp.price, temp.description, temp.stat);
        Weapons.push_back(dum);
    }
    void AddWeapon(string id, string name, int price, string description, int stat){
        weapon dum = weapon(id, name , price, description, stat);
        Weapons.push_back(dum);
    }
    
    void AddHybrid(){
        mold temp;
        int extra;
        cin >> temp.id;
        cin.ignore();
        getline(cin, temp.name);
        cin >> temp.price;
        cin.ignore();
        getline(cin, temp.description);
        cin >> temp.stat;
        cin >> extra;
        hybrid dum = hybrid(temp.id, temp.name, temp.price, temp.description, temp.stat, extra);
        Hybrids.push_back(dum);
    }
    void AddHybrid(string id, string name, int price, string description, int stat, int extra){
        hybrid dum = hybrid(id, name , price, description, stat, extra);
        Hybrids.push_back(dum);
    }
    void AddUsableBuff(){
        mold temp;
        cin >> temp.id;
        cin.ignore();
        getline(cin, temp.name);
        cin >> temp.price;
        cin.ignore();
        getline(cin, temp.description);
        cin >> temp.stat;
        usablebuff dum = usablebuff(temp.id, temp.name, temp.price, temp.description, temp.stat);
        Usablebuffs.push_back(dum);
    }
    void AddUsableBuff(string id, string name, int price, string description, int stat){
        usablebuff dum = usablebuff(id, name, price, description, stat);
        Usablebuffs.push_back(dum);
    }
    void AddUsableDebuff(){
        mold temp;
        cin >> temp.id;
        cin.ignore();
        getline(cin, temp.name);
        cin >> temp.price;
        cin.ignore();
        getline(cin, temp.description);
        cin >> temp.stat;
        usabledebuff dum = usabledebuff(temp.id, temp.name, temp.price, temp.description, temp.stat);
        UsableDebuffs.push_back(dum);
    }
    void AddUsableDebuff(string id, string name, int price, string description, int stat){
        usabledebuff dum = usabledebuff(id, name, price, description, stat);
        UsableDebuffs.push_back(dum);
    }
    void AddUsableHeal(){
        mold temp;
        cin >> temp.id;
        cin.ignore();
        getline(cin, temp.name);
        cin >> temp.price;
        cin.ignore();
        getline(cin, temp.description);
        cin >> temp.stat;
        usableheal dum = usableheal(temp.id, temp.name, temp.price, temp.description, temp.stat);
        UsableHeals.push_back(dum);
    }
    void AddUsableHeal(string id, string name, int price, string description, int stat){
        usableheal dum = usableheal(id, name, price, description, stat);
        UsableHeals.push_back(dum);
    }
    void AddItem(){
        mold temp;
        cin >> temp.id;
        cin.ignore();
        getline(cin, temp.name);
        cin >> temp.price;
        cin.ignore();
        getline(cin, temp.description);
        item dum = item(temp.id, temp.name, temp.price, temp.description);
        Items.push_back(dum);
    }
    void AddItem(string id, string name, int price, string description){
        item dum = item(id, name, price, description);
        Items.push_back(dum);
    }
    void showWeapons(){
        size_t idlen = 2, namelen = 4, pricelen = 5, desclen = 11;
        for(auto& w : Weapons){
            if(w.getId().length() > idlen){
                idlen = w.getId().length();
            }
            if(w.getName().length() > namelen){
                namelen = w.getName().length();
            }
            if(countdigit(w.getPrice()) > pricelen){
                pricelen = countdigit(w.getPrice());
            }
            if(w.getDescription().length() > desclen){
                desclen = w.getDescription().length();
            }
        }
        cout << "ID";
        createspaces(idlen - 2);
        cout << "|" << "NAME";
        createspaces(namelen - 4);
        cout << "|" << "PRICE";
        createspaces(pricelen - 5);
        cout << "|" << "DESCRIPTION";
        createspaces(desclen - 11);
        cout << "|" << "DAMAGE\n";
        for( auto& w : Weapons){
            cout << w.getId();
            createspaces(idlen - w.getId().length());
            cout << "|" << w.getName();
            createspaces(namelen - w.getName().length());
            cout << "|" << w.getPrice();
            createspaces(pricelen - countdigit(w.getPrice()));
            cout << "|" << w.getDescription();
            createspaces(desclen - w.getDescription().length());
            cout << "|" << w.getDamage() << "\n";
        }
    }
    void showUsableBuffs(){
        size_t idlen = 2, namelen = 4, pricelen = 5, desclen = 11 ;
        for(auto& b : Usablebuffs){
            if(b.getId().length() > idlen){
                idlen = b.getId().length();
            }
            if(b.getName().length() > namelen){
                namelen = b.getName().length();
            }
            if(countdigit(b.getPrice()) > pricelen){
                pricelen = countdigit(b.getPrice());
            }
            if(b.getDescription().length() > desclen){
                desclen = b.getDescription().length();
            }
            
        }
        cout << "ID";
        createspaces(idlen - 2);
        cout << "|" << "NAME";
        createspaces(namelen - 4);
        cout << "|" << "PRICE";
        createspaces(pricelen - 5);
        cout << "|" << "DESCRIPTION";
        createspaces(desclen - 11);
        cout << "|" << "BONUS ATK\n";
        for( auto& b : Usablebuffs){
            cout << b.getId();
            createspaces(idlen - b.getId().length());
            cout << "|" << b.getName();
            createspaces(namelen - b.getName().length());
            cout << "|" << b.getPrice();
            createspaces(pricelen - countdigit(b.getPrice()));
            cout << "|" << b.getDescription();
            createspaces(desclen - b.getDescription().length());
            cout << "|" << b.getaddAtk() << "\n";
        }
    }
    void showUsableDebuffs(){
        size_t idlen = 2, namelen = 4, pricelen = 5, desclen = 11 ;
        for(auto& d : UsableDebuffs){
            if(d.getId().length() > idlen){
                idlen = d.getId().length();
            }
            if(d.getName().length() > namelen){
                namelen = d.getName().length();
            }
            if(countdigit(d.getPrice()) > pricelen){
                pricelen = countdigit(d.getPrice());
            }
            if(d.getDescription().length() > desclen){
                desclen = d.getDescription().length();
            }
            
        }
        cout << "ID";
        createspaces(idlen - 2);
        cout << "|" << "NAME";
        createspaces(namelen - 4);
        cout << "|" << "PRICE";
        createspaces(pricelen - 5);
        cout << "|" << "DESCRIPTION";
        createspaces(desclen - 11);
        cout << "|" << "DEBUFF DAMAGE\n";
        for( auto& d : UsableDebuffs){
            cout << d.getId();
            createspaces(idlen - d.getId().length());
            cout << "|" << d.getName();
            createspaces(namelen - d.getName().length());
            cout << "|" << d.getPrice();
            createspaces(pricelen - countdigit(d.getPrice()));
            cout << "|" << d.getDescription();
            createspaces(desclen - d.getDescription().length());
            cout << "|" << d.getDefense() << "\n";
        }
    }
    void showUsableHeals(){
        size_t idlen = 2, namelen = 4, pricelen = 5, desclen = 11 ;
        for(auto& h : UsableHeals){
            if(h.getId().length() > idlen){
                idlen = h.getId().length();
            }
            if(h.getName().length() > namelen){
                namelen = h.getName().length();
            }
            if(countdigit(h.getPrice()) > pricelen){
                pricelen = countdigit(h.getPrice());
            }
            if(h.getDescription().length() > desclen){
                desclen = h.getDescription().length();
            }
            
        }
        cout << "ID";
        createspaces(idlen - 2);
        cout << "|" << "NAME";
        createspaces(namelen - 4);
        cout << "|" << "PRICE";
        createspaces(pricelen - 5);
        cout << "|" << "DESCRIPTION";
        createspaces(desclen - 11);
        cout << "|" << "HEAL\n";
        for( auto& h : UsableHeals){
            cout << h.getId();
            createspaces(idlen - h.getId().length());
            cout << "|" << h.getName();
            createspaces(namelen - h.getName().length());
            cout << "|" << h.getPrice();
            createspaces(pricelen - countdigit(h.getPrice()));
            cout << "|" <<  h.getDescription();
            createspaces(desclen - h.getDescription().length());
            cout << "|" << h.getflatHeal() << "\n";
        }
    }

    void showHybrids(){
        size_t idlen = 2, namelen = 4, pricelen = 5, desclen = 11 , atklen = 9;
        for(auto& hy : Hybrids){
            if(hy.getId().length() > idlen){
                idlen = hy.getId().length();
            }
            if(hy.getName().length() > namelen){
                namelen = hy.getName().length();
            }
            if(countdigit(hy.getPrice()) > pricelen){
                pricelen = countdigit(hy.getPrice());
            }
            if(hy.getDescription().length() > desclen){
                desclen = hy.getDescription().length();
            }
            if(countdigit(hy.getaddAtk()) > atklen){
                atklen = countdigit(hy.getaddAtk());
            }
            
        }
        cout << "ID";
        createspaces(idlen - 2);
        cout << "|" << "NAME";
        createspaces(namelen - 4);
        cout << "|" << "PRICE";
        createspaces(pricelen - 5);
        cout << "|" << "DESCRIPTION";
        createspaces(desclen - 11);
        cout << "|" << "BONUS ATK";
        createspaces(atklen - 9);
        cout << "|" << "HEAL\n";
        
        for( auto& hy : Hybrids){
            cout << hy.getId();
            createspaces(idlen - hy.getId().length());
            cout << "|" << hy.getName();
            createspaces(namelen - hy.getName().length());
            cout << "|" << hy.getPrice();
            createspaces(pricelen - countdigit(hy.getPrice()));
            cout << "|" <<  hy.getDescription();
            createspaces(desclen - hy.getDescription().length());
            cout << "|" << hy.getaddAtk();
            createspaces(atklen - countdigit(hy.getaddAtk()));
            cout << "|" << hy.getflatHeal() << "\n";
        }
    }

    void showItems(){
        size_t idlen = 2, namelen = 4, pricelen = 5, desclen = 11 ;
        for(auto& i : Items){
            if(i.getId().length() > idlen){
                idlen = i.getId().length();
            }
            if(i.getName().length() > namelen){
                namelen = i.getName().length();
            }
            if(countdigit(i.getPrice()) > pricelen){
                pricelen = countdigit(i.getPrice());
            }
            if(i.getDescription().length() > desclen){
                desclen = i.getDescription().length();
            }
            
        }
        cout << "ID";
        createspaces(idlen - 2);
        cout << "|" << "NAME";
        createspaces(namelen - 4);
        cout << "|" << "PRICE";
        createspaces(pricelen - 5);
        cout << "|" << "DESCRIPTION" <<"\n" ;
        for( auto& i : Items){
            cout << i.getId();
            createspaces(idlen - i.getId().length());
            cout << "|" << i.getName();
            createspaces(namelen - i.getName().length());
            cout << "|" << i.getPrice();
            createspaces(pricelen - countdigit(i.getPrice()));
            cout << "|" << i.getDescription() <<"\n" ;
        }
    }
    void storage(){
        string option1[3];
        option1[0] = "Add";
        option1[1] = "Show";
        option1[2] = "Exit";
        int inp1 = -1;
        int inp2 = -1;
        string option2[6];
        option2[0] = "Weapons";
        option2[1] = "Buff item";
        option2[2] = "Debuff item";
        option2[3] = "Heal item";
        option2[4] = "Uncathegorized item";
        option2[5] = "Hybrid item";

        cout << "Choose what youre looking for:\n";
            for(int i = 0 ; i < 3;i++){
                cout << i+1 << "." << option1[i] << "item \n";
            }
            cin >> inp1;
            inp1 -= 1;
        
        while(inp1 != 2){
            cout << "Choose which category to" << option1[inp1] << "\n";
            for(int i = 0; i < 6; i++){
                cout << i+1 << "." << option2[i] << "\n";
            }
            cin >> inp2;
            inp2 -=1;
            if(inp2 == 0){
                showWeapons();
                if(inp1 == 0){
                    AddWeapon();
                    showWeapons();
                }
                
            }
            else if(inp2 == 1){
                showUsableBuffs();
                if(inp1 == 0){
                    AddUsableBuff();
                    showUsableBuffs();
                }
            }
            else if(inp2 == 2){
                showUsableDebuffs();
                if(inp1 == 0){
                    AddUsableDebuff();
                    showUsableDebuffs();
                }
            }
            else if(inp2 == 3){
                showUsableHeals();
                if(inp1 == 0){
                    AddUsableHeal();
                    showUsableHeals();
                }
            }
            else if(inp2 == 4){
                showItems();
                if(inp1 == 0){
                    AddItem();
                    showItems();
                }
            }
            else if(inp2 == 5){
                showHybrids();
                if(inp1 == 0){
                    AddHybrid();
                    showHybrids();
                }
            }
            cout << "Choose what youre looking for:\n";
            for(int i = 0 ; i < 3;i++){
                cout << i+1 << "." << option1[i] << "item \n";
            }
            cin >> inp1;
            inp1 -= 1;
            
        }
        
    }
};