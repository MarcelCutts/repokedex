open Jest;

describe("App component", () => {
    open Expect; 

    test("renders", () => {
        let component = <App /> |> Enzyme.shallow;
        expect(component) |> toMatchSnapshot;
    })
})