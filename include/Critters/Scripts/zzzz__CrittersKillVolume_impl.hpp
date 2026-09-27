#pragma once
// IWYU pragma private; include "Critters/Scripts/CrittersKillVolume.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Critters/Scripts/zzzz__CrittersKillVolume_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::Critters::Scripts::CrittersKillVolume.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Critters::Scripts::CrittersKillVolume::*)(::UnityEngine::Collider*)>(&::Critters::Scripts::CrittersKillVolume::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5ddda08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Critters::Scripts::CrittersKillVolume*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Critters::Scripts::CrittersKillVolume._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Critters::Scripts::CrittersKillVolume::*)()>(&::Critters::Scripts::CrittersKillVolume::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dddb14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Critters::Scripts::CrittersKillVolume*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Critters::Scripts::CrittersKillVolume::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Critters::Scripts::CrittersKillVolume*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Critters::Scripts::CrittersKillVolume::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Critters::Scripts::CrittersKillVolume*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Critters::Scripts::CrittersKillVolume* Critters::Scripts::CrittersKillVolume::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Critters::Scripts::CrittersKillVolume*>());
}
// Ctor Parameters []
constexpr ::Critters::Scripts::CrittersKillVolume::CrittersKillVolume()   {
}
