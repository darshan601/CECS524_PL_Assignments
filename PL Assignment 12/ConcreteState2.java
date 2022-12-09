public class ConcreteState2 extends AbstractState {

    public ConcreteState2() {
        super();
        this.state = 2;
    }

    @Override
    public void onA() {

        this.context.setState(new ConcreteState1());
        System.out.println("State Changed to 1");
    }

    @Override
    public void onB() {

        this.context.setState(new ConcreteState4());
        System.out.println("State Changed to 4");
    }

}
