#ifndef GDEXTENSIONTEST_TEST_NODE2D_HPP
#define GDEXTENSIONTEST_TEST_NODE2D_HPP

#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/classes/node2d.hpp>

namespace game_lib
{
  // Although maybe not the best practise if you follow C++ conventions to the letter, but this is easier
  // at least on the beta phase where API changes constantly.
  using namespace godot;

  class TestNode2D : public Node2D
  {
    // Macro "magic" to reduce boiler plate and introduce
    // our class to Godot and tell from which kind of class it was inherited from.
    GDCLASS(TestNode2D, Node2D)

  protected:
    // Required entry point that the API calls to bind our class to Godot.
    static void _bind_methods();

  public:
    // Our small test method, implementation in cpp file.
    virtual void say_hello(const String& what);
  };

} // namespace GDExtensionTest

#endif // GDEXTENSIONTEST_TEST_NODE2D_HPP