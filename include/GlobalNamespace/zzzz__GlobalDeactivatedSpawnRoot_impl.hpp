#pragma once
// IWYU pragma private; include "GlobalNamespace/GlobalDeactivatedSpawnRoot.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GlobalDeactivatedSpawnRoot_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GlobalDeactivatedSpawnRoot.GetOrCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (*)()>(&::GlobalNamespace::GlobalDeactivatedSpawnRoot::GetOrCreate)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5668814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlobalDeactivatedSpawnRoot*>(),
                        {"GetOrCreate", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GlobalDeactivatedSpawnRoot::setStaticF__xform(::UnityW<::UnityEngine::Transform>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Transform>, "_xform", ::GlobalNamespace::GlobalDeactivatedSpawnRoot*>(std::forward<::UnityW<::UnityEngine::Transform>>(value));
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::GlobalDeactivatedSpawnRoot::getStaticF__xform()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Transform>, "_xform", ::GlobalNamespace::GlobalDeactivatedSpawnRoot*>();
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::GlobalDeactivatedSpawnRoot::GetOrCreate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlobalDeactivatedSpawnRoot*>(),
                        {"GetOrCreate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GlobalDeactivatedSpawnRoot::GlobalDeactivatedSpawnRoot()   {
}
