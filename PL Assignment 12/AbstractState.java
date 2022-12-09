abstract class AbstractState {

    Context context;
    int state;

    // public AbstractState(Context c) {
    // this.context = c;
    // }

    public Context getcontext() {
        return this.context;
    }

    public void setContext(Context c) {
        this.context = c;
    }

    public abstract void onA();

    public abstract void onB();

}
