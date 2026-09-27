#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaThrowingRock.hpp"
#include "GlobalNamespace/zzzz__GorillaThrowable_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaThrowingRock_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "Photon/Pun/zzzz__IPunInstantiateMagicCallback_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaThrowingRock.OnPhotonInstantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaThrowingRock::*)(::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GorillaThrowingRock::OnPhotonInstantiate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59a6768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaThrowingRock*>(),
                        {"OnPhotonInstantiate", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaThrowingRock._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaThrowingRock::*)()>(&::GlobalNamespace::GorillaThrowingRock::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x59a676c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaThrowingRock*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::GorillaThrowingRock::__cordl_internal_get_bonkSpeedMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bonkSpeedMin;
}
constexpr float_t const& GlobalNamespace::GorillaThrowingRock::__cordl_internal_get_bonkSpeedMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bonkSpeedMin;
}
constexpr void GlobalNamespace::GorillaThrowingRock::__cordl_internal_set_bonkSpeedMin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bonkSpeedMin = value;
}
constexpr float_t& GlobalNamespace::GorillaThrowingRock::__cordl_internal_get_bonkSpeedMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bonkSpeedMax;
}
constexpr float_t const& GlobalNamespace::GorillaThrowingRock::__cordl_internal_get_bonkSpeedMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bonkSpeedMax;
}
constexpr void GlobalNamespace::GorillaThrowingRock::__cordl_internal_set_bonkSpeedMax(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bonkSpeedMax = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::GorillaThrowingRock::__cordl_internal_get_hitRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::GorillaThrowingRock::__cordl_internal_get_hitRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitRig;
}
constexpr void GlobalNamespace::GorillaThrowingRock::__cordl_internal_set_hitRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitRig = value;
}
inline void GlobalNamespace::GorillaThrowingRock::OnPhotonInstantiate(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaThrowingRock*>(),
                        {"OnPhotonInstantiate", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::GorillaThrowingRock::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaThrowingRock*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaThrowingRock* GlobalNamespace::GorillaThrowingRock::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaThrowingRock*>());
}
/// @brief Convert operator to "::Photon::Pun::IPunInstantiateMagicCallback"
constexpr  GlobalNamespace::GorillaThrowingRock::operator ::Photon::Pun::IPunInstantiateMagicCallback*() noexcept {
return static_cast<::Photon::Pun::IPunInstantiateMagicCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPunInstantiateMagicCallback"
constexpr ::Photon::Pun::IPunInstantiateMagicCallback* GlobalNamespace::GorillaThrowingRock::i___Photon__Pun__IPunInstantiateMagicCallback() noexcept {
return static_cast<::Photon::Pun::IPunInstantiateMagicCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaThrowingRock::GorillaThrowingRock()   {
}
