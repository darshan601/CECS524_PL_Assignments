public class ConcreteState3 extends AbstractState {

    public ConcreteState3() {
        super();
        this.state = 3;
    }

    @Override
    public void onA() {

        this.context.setState(new ConcreteState4());
        System.out.println("State Changed to 4");
    }

    @Override
    public void onB() {

        this.context.setState(new ConcreteState1());
        System.out.println("State Changed to 1");
    }

}
