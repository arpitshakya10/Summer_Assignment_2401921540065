import java.util.Random;

abstract class Compartment {
    public abstract String notice();
}

class FirstClass extends Compartment {
    public String notice() {
        return "First Class Compartment - Premium passengers only";
    }
}

class Ladies extends Compartment {
    public String notice() {
        return "Ladies Compartment - Reserved for female passengers";
    }
}

class General extends Compartment {
    public String notice() {
        return "General Compartment - Open for all passengers";
    }
}

class Luggage extends Compartment {
    public String notice() {
        return "Luggage Compartment - Goods and baggage only";
    }
}

public class TestCompartment {
    public static void main(String[] args) {
        Compartment[] coach = new Compartment[10];
        Random rand = new Random();

        for (int i = 0; i < coach.length; i++) {
            int num = rand.nextInt(4) + 1;

            if (num == 1) {
                coach[i] = new FirstClass();
            } 
            else if (num == 2) {
                coach[i] = new Ladies();
            } 
            else if (num == 3) {
                coach[i] = new General();
            } 
            else {
                coach[i] = new Luggage();
            }
        }

        for (int i = 0; i < coach.length; i++) {
            System.out.println("Compartment " + (i + 1) + ": " + coach[i].notice());
        }
    }
}
