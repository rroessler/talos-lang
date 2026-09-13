/// Builtin Includes
#include "talos/builtins/_inline/builtins.ipp"

/// Type Includes
#include "talos/type/_inline/type.ipp"

/// Forward Definitions
$_FWD(Talos::Builtins, using TN = Type::New)

$::Shared::Pointer<Talos::Type::Prototype> Talos::Builtins::Wrapper<Talos::Object::Instance>::typeclass() {
  return m_typeclass([](const auto &) {});
}

//  PRIVATE METHODS  //

void Talos::Builtins::Wrapper<Talos::Object::Instance>::m_typedefs(Type::World *globals) {
  // get the underlying prototype instance
  auto prototype = typeclass();

  // prepare the baseline typing to be used
  globals->values().declare(name(), prototype);
  globals->types().declare(name(), TN::object());
}
