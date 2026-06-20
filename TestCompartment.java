abstract class Compartment {
    public abstract String notice();
}

class FirstClass extends Compartment {
    @Override
    public String notice() {
        return "First Class Compartment";
    }
}

class Ladies extends Compartment {
    @Override
    public String notice() {
        return "Ladies Compartment";
    }
}

class General extends Compartment {
    @Override
    public String notice() {
        return "General Compartment";
    }
}

class Luggage extends Compartment {
    @Override
    public String notice() {
        return "Luggage Compartment";
    }
}

public class TestCompartment {
    public static void main(String[] args) {

        Compartment[] coaches = new Compartment[10];

        for (int i = 0; i < coaches.length; i++) {

            int random = (int)(Math.random() * 4) + 1;

            switch (random) {
                case 1:
                    coaches[i] = new FirstClass();
                    break;

                case 2:
                    coaches[i] = new Ladies();
                    break;

                case 3:
                    coaches[i] = new General();
                    break;

                case 4:
                    coaches[i] = new Luggage();
                    break;
            }
        }

        System.out.println("Compartments and their notices:\n");

        for (int i = 0; i < coaches.length; i++) {
            System.out.println("Compartment " + (i + 1) + ": "
                    + coaches[i].notice());
        }
    }
}