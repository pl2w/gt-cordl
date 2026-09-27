#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/EventSystemSpawner.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__EventSystemSpawner_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::EventSystemSpawner.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::EventSystemSpawner::*)()>(&::Photon::Pun::UtilityScripts::EventSystemSpawner::OnEnable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa73d9ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::EventSystemSpawner*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::EventSystemSpawner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::EventSystemSpawner::*)()>(&::Photon::Pun::UtilityScripts::EventSystemSpawner::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa73da5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::EventSystemSpawner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Pun::UtilityScripts::EventSystemSpawner::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::EventSystemSpawner*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::EventSystemSpawner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::EventSystemSpawner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::UtilityScripts::EventSystemSpawner* Photon::Pun::UtilityScripts::EventSystemSpawner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::UtilityScripts::EventSystemSpawner*>());
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::EventSystemSpawner::EventSystemSpawner()   {
}
