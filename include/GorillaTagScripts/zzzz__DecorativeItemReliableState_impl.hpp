#pragma once
// IWYU pragma private; include "GorillaTagScripts/DecorativeItemReliableState.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTagScripts/zzzz__DecorativeItemReliableState_def.hpp"
#include "Photon/Pun/zzzz__IPunObservable_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItemReliableState.OnPhotonSerializeView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::DecorativeItemReliableState::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::DecorativeItemReliableState::OnPhotonSerializeView)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x5bb714c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItemReliableState*>(),
                        {"OnPhotonSerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItemReliableState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::DecorativeItemReliableState::*)()>(&::GorillaTagScripts::DecorativeItemReliableState::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5bb7564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItemReliableState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GorillaTagScripts::DecorativeItemReliableState::__cordl_internal_get_isSnapped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSnapped;
}
constexpr bool const& GorillaTagScripts::DecorativeItemReliableState::__cordl_internal_get_isSnapped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSnapped;
}
constexpr void GorillaTagScripts::DecorativeItemReliableState::__cordl_internal_set_isSnapped(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isSnapped = value;
}
constexpr ::UnityEngine::Vector3& GorillaTagScripts::DecorativeItemReliableState::__cordl_internal_get_snapPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapPosition;
}
constexpr ::UnityEngine::Vector3 const& GorillaTagScripts::DecorativeItemReliableState::__cordl_internal_get_snapPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapPosition;
}
constexpr void GorillaTagScripts::DecorativeItemReliableState::__cordl_internal_set_snapPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapPosition = value;
}
constexpr ::UnityEngine::Vector3& GorillaTagScripts::DecorativeItemReliableState::__cordl_internal_get_respawnPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnPosition;
}
constexpr ::UnityEngine::Vector3 const& GorillaTagScripts::DecorativeItemReliableState::__cordl_internal_get_respawnPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnPosition;
}
constexpr void GorillaTagScripts::DecorativeItemReliableState::__cordl_internal_set_respawnPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___respawnPosition = value;
}
constexpr ::UnityEngine::Quaternion& GorillaTagScripts::DecorativeItemReliableState::__cordl_internal_get_respawnRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnRotation;
}
constexpr ::UnityEngine::Quaternion const& GorillaTagScripts::DecorativeItemReliableState::__cordl_internal_get_respawnRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnRotation;
}
constexpr void GorillaTagScripts::DecorativeItemReliableState::__cordl_internal_set_respawnRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___respawnRotation = value;
}
inline void GorillaTagScripts::DecorativeItemReliableState::OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItemReliableState*>(),
                        {"OnPhotonSerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GorillaTagScripts::DecorativeItemReliableState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItemReliableState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::DecorativeItemReliableState* GorillaTagScripts::DecorativeItemReliableState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::DecorativeItemReliableState*>());
}
/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr  GorillaTagScripts::DecorativeItemReliableState::operator ::Photon::Pun::IPunObservable*() noexcept {
return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* GorillaTagScripts::DecorativeItemReliableState::i___Photon__Pun__IPunObservable() noexcept {
return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::DecorativeItemReliableState::DecorativeItemReliableState()   {
}
