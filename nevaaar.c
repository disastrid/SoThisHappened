#import <stdbool.h>

struct You {
    bool givenUp;
    bool letDown;
    bool ranAroundOn;
    bool deserted;
    bool crying;
    bool bye;
    bool liedTo;
    bool hurt;
};

struct Me {
    bool *giveYouUp;
    bool *letYouDown;
    bool *runAround;
    bool *desertYou;
    bool *makeYouCry;
    bool *sayGoodbye;
    bool *tellALie;
    bool *hurtYou;
};



int main() {
	struct You you;
    // Declare values of you struct

    struct Me me;
    me.giveYouUp = &you.givenUp;
    me.letYouDown = &you.letDown;
    me.runAround = &you.ranAroundOn;
    me.desertYou = &you.deserted;
    me.makeYouCry = &you.crying;
    me.sayGoodbye = &you.bye;
    me.tellALie = &you.liedTo;
    me.hurtYou = &you.hurt;

    while(true) {
        me.giveYouUp = false;
        me.giveYouUp = false;
        me.letYouDown = false;
        me.runAround = false;
        me.hurtYou = false;
        me.makeYouCry = false;
        me.sayGoodbye = false;
        me.tellALie = false;
        me.hurtYou = false;

        }
    return 0;
}


