# Repokédex

A simple Pokédex written in ReasonML and ReasonReact utilising the fantastic [Pokéapi](https://pokeapi.co/).

### Tech
This project utilises
 - [ReasonML](https://reasonml.github.io/) for code-that-becomes-JS
 - [ReasonReact](https://reasonml.github.io/reason-react/docs/en/counter.html) for user interfaces
 - [bs-css](https://github.com/SentiaAnalytics/bs-css) for strongly typed CSS styles (!) built on top of the rad [Glamor](https://github.com/threepointone/glamor)
 - [bs-jest](https://github.com/glennsl/bs-jest) for bindings to the wonderful [Jest](https://facebook.github.io/jest/) test framewok
 - [bs-enzyme](https://github.com/rhysforyou/bs-enzyme) for bindings to the fantastic [Enzyme](https://github.com/airbnb/enzyme) renderer.

## Run Project

```sh
yarn
yarn start
# in another tab
yarn webpack
```

After you see the webpack compilation succeed (the `npm run webpack` step), open up `src/index.html` (**no server needed!**). Then modify whichever `.re` file in `src` and refresh the page to see the changes.

**For more elaborate ReasonReact examples**, please see https://github.com/reasonml-community/reason-react-example

## Run tests
```sh
yarn test
# want a watcher?
yarn test --watch
```

This will run Jest on all files it can find that end in `*_test.bs.js` and do all the testing goodness you know and love.

## Build for Production

```sh
yarn build
yarn webpack:production
```

This will replace the development artifact `build/Index.js` for an optimized version.

**To enable dead code elimination**, change `bsconfig.json`'s `package-specs` `module` from `"commonjs"` to `"es6"`. Then re-run the above 2 commands. This will allow Webpack to remove unused code.
