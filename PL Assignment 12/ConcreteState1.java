public class ConcreteState1 extends AbstractState {
    public ConcreteState1() {
        super();
        this.state = 1;
    }

    @Override
    public void onA() {
        this.context.setState(new ConcreteState2());
        System.out.println("State Changed to 2");
    }

    @Override
    public void onB() {
        this.context.setState(new ConcreteState3());
        System.out.println("State Changed to 3");
    }
}
