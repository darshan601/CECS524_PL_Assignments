public class ConcreteState4 extends AbstractState {

    public ConcreteState4() {
        super();
        this.state = 4;
    }

    @Override
    public void onA() {

        this.context.setState(new ConcreteState3());
        System.out.println("State Changed to 3");
    }

    @Override
    public void onB() {

        this.context.setState(new ConcreteState2());
        System.out.println("State Changed to 2");

    }

}
