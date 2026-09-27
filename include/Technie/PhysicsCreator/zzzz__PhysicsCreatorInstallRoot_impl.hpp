#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/PhysicsCreatorInstallRoot.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Technie/PhysicsCreator/zzzz__PhysicsCreatorInstallRoot_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::PhysicsCreatorInstallRoot._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::PhysicsCreatorInstallRoot::*)()>(&::Technie::PhysicsCreator::PhysicsCreatorInstallRoot::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadcc5dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::PhysicsCreatorInstallRoot*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Technie::PhysicsCreator::PhysicsCreatorInstallRoot::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::PhysicsCreatorInstallRoot*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::PhysicsCreatorInstallRoot* Technie::PhysicsCreator::PhysicsCreatorInstallRoot::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::PhysicsCreatorInstallRoot*>());
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::PhysicsCreatorInstallRoot::PhysicsCreatorInstallRoot()   {
}
