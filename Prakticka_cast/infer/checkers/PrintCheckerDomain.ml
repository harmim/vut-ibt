open! IStd
module F = Format

type astate = int

type summary = astate

let ( <= ) ~lhs ~rhs = lhs <= rhs

let join stateA stateB = Pervasives.max stateA stateB

let widen ~prev ~next ~num_iters:_ = join prev next

let pp fmt astate = F.fprintf fmt "%d" astate

let initial = 0
