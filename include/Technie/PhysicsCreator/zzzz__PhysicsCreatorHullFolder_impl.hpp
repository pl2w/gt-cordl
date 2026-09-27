#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/PhysicsCreatorHullFolder.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Technie/PhysicsCreator/zzzz__PhysicsCreatorHullFolder_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::PhysicsCreatorHullFolder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::PhysicsCreatorHullFolder::*)()>(&::Technie::PhysicsCreator::PhysicsCreatorHullFolder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadcc5d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::PhysicsCreatorHullFolder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Technie::PhysicsCreator::PhysicsCreatorHullFolder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::PhysicsCreatorHullFolder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::PhysicsCreatorHullFolder* Technie::PhysicsCreator::PhysicsCreatorHullFolder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::PhysicsCreatorHullFolder*>());
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::PhysicsCreatorHullFolder::PhysicsCreatorHullFolder()   {
}
