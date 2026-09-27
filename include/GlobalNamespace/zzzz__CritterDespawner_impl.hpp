#pragma once
// IWYU pragma private; include "GlobalNamespace/CritterDespawner.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CritterDespawner_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CritterDespawner.DespawnAllCritters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CritterDespawner::*)()>(&::GlobalNamespace::CritterDespawner::DespawnAllCritters)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x55f04bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterDespawner*>(),
                        {"DespawnAllCritters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CritterDespawner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CritterDespawner::*)()>(&::GlobalNamespace::CritterDespawner::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55f0518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterDespawner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CritterDespawner::DespawnAllCritters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterDespawner*>(),
                        {"DespawnAllCritters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CritterDespawner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterDespawner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CritterDespawner* GlobalNamespace::CritterDespawner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CritterDespawner*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CritterDespawner::CritterDespawner()   {
}
