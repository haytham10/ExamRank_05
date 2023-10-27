# ExamRank_05

## EX00:
Create a `Warlock` class with private attributes `name` and `title`. Implement getters for `name` and `title`, as well as a setter for `title`. The class must have a constructor that takes `name` and `title`. The `Warlock` class should not support copying or default instantiation. It provides an `introduce` function that displays an introduction message.

## EX01:
In addition to the `Warlock` class, create an abstract class `ASpell` with protected attributes `name` and `effects`. Implement getters for these attributes, and add a pure virtual function `clone`. Create another abstract class `ATarget` with a private attribute `type` and an associated getter `getType`, as well as a pure virtual function `clone`.

`ATarget` should have a function `getHitBySpell` that displays a message. Implement a concrete spell class `Fwoosh` with a default constructor and `clone`. Implement a concrete target class `Dummy` with a default constructor and `clone`.

Add member functions to the Warlock class: 
- `learnSpell` to learn spells.
- `forgetSpell` to forget spells by name
- `launchSpell` to launch spells at a target.

## EX02:
Create two concrete spell classes, `Fireball` and `Polymorph`, and a concrete target class `BrickWall`. Implement a class `SpellBook` with functions to learn and forget spells and create spells. Modify the `Warlock` class to include a `SpellBook` instance. 
Implement a `TargetGenerator` class with functions to learn and forget target types and create targets.
