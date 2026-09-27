#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/Skinned/SkinnedColliderRuntimeData.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Technie/PhysicsCreator/Skinned/zzzz__SkinnedColliderRuntimeData_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::SkinnedColliderRuntimeData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Skinned::SkinnedColliderRuntimeData::*)()>(&::Technie::PhysicsCreator::Skinned::SkinnedColliderRuntimeData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadd9968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderRuntimeData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Technie::PhysicsCreator::Skinned::SkinnedColliderRuntimeData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::SkinnedColliderRuntimeData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::Skinned::SkinnedColliderRuntimeData* Technie::PhysicsCreator::Skinned::SkinnedColliderRuntimeData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::Skinned::SkinnedColliderRuntimeData*>());
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::Skinned::SkinnedColliderRuntimeData::SkinnedColliderRuntimeData()   {
}
