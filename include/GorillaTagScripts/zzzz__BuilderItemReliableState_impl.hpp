#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderItemReliableState.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTagScripts/zzzz__BuilderItemReliableState_def.hpp"
#include "Photon/Pun/zzzz__IPunObservable_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::BuilderItemReliableState.OnPhotonSerializeView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderItemReliableState::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::BuilderItemReliableState::OnPhotonSerializeView)> {
  constexpr static std::size_t size = 0x518;
  constexpr static std::size_t addrs = 0x5b87688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderItemReliableState*>(),
                        {"OnPhotonSerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderItemReliableState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderItemReliableState::*)()>(&::GorillaTagScripts::BuilderItemReliableState::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5b87ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderItemReliableState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GorillaTagScripts::BuilderItemReliableState::__cordl_internal_get_rightHandAttachPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandAttachPos;
}
constexpr ::UnityEngine::Vector3 const& GorillaTagScripts::BuilderItemReliableState::__cordl_internal_get_rightHandAttachPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandAttachPos;
}
constexpr void GorillaTagScripts::BuilderItemReliableState::__cordl_internal_set_rightHandAttachPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandAttachPos = value;
}
constexpr ::UnityEngine::Quaternion& GorillaTagScripts::BuilderItemReliableState::__cordl_internal_get_rightHandAttachRot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandAttachRot;
}
constexpr ::UnityEngine::Quaternion const& GorillaTagScripts::BuilderItemReliableState::__cordl_internal_get_rightHandAttachRot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandAttachRot;
}
constexpr void GorillaTagScripts::BuilderItemReliableState::__cordl_internal_set_rightHandAttachRot(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandAttachRot = value;
}
constexpr ::UnityEngine::Vector3& GorillaTagScripts::BuilderItemReliableState::__cordl_internal_get_leftHandAttachPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandAttachPos;
}
constexpr ::UnityEngine::Vector3 const& GorillaTagScripts::BuilderItemReliableState::__cordl_internal_get_leftHandAttachPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandAttachPos;
}
constexpr void GorillaTagScripts::BuilderItemReliableState::__cordl_internal_set_leftHandAttachPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandAttachPos = value;
}
constexpr ::UnityEngine::Quaternion& GorillaTagScripts::BuilderItemReliableState::__cordl_internal_get_leftHandAttachRot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandAttachRot;
}
constexpr ::UnityEngine::Quaternion const& GorillaTagScripts::BuilderItemReliableState::__cordl_internal_get_leftHandAttachRot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandAttachRot;
}
constexpr void GorillaTagScripts::BuilderItemReliableState::__cordl_internal_set_leftHandAttachRot(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandAttachRot = value;
}
constexpr bool& GorillaTagScripts::BuilderItemReliableState::__cordl_internal_get_dirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dirty;
}
constexpr bool const& GorillaTagScripts::BuilderItemReliableState::__cordl_internal_get_dirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dirty;
}
constexpr void GorillaTagScripts::BuilderItemReliableState::__cordl_internal_set_dirty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dirty = value;
}
inline void GorillaTagScripts::BuilderItemReliableState::OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderItemReliableState*>(),
                        {"OnPhotonSerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GorillaTagScripts::BuilderItemReliableState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderItemReliableState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::BuilderItemReliableState* GorillaTagScripts::BuilderItemReliableState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::BuilderItemReliableState*>());
}
/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr  GorillaTagScripts::BuilderItemReliableState::operator ::Photon::Pun::IPunObservable*() noexcept {
return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* GorillaTagScripts::BuilderItemReliableState::i___Photon__Pun__IPunObservable() noexcept {
return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::BuilderItemReliableState::BuilderItemReliableState()   {
}
