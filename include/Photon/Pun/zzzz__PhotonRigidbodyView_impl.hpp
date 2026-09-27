#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonRigidbodyView.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPun_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Photon/Pun/zzzz__PhotonRigidbodyView_def.hpp"
#include "Photon/Pun/zzzz__IPunObservable_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
//  Writing Method size for method: ::Photon::Pun::PhotonRigidbodyView.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonRigidbodyView::*)()>(&::Photon::Pun::PhotonRigidbodyView::Awake)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa73f054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonRigidbodyView*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonRigidbodyView.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonRigidbodyView::*)()>(&::Photon::Pun::PhotonRigidbodyView::FixedUpdate)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0xa73f0bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonRigidbodyView*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonRigidbodyView.OnPhotonSerializeView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonRigidbodyView::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::Photon::Pun::PhotonRigidbodyView::OnPhotonSerializeView)> {
  constexpr static std::size_t size = 0x56c;
  constexpr static std::size_t addrs = 0xa73f3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonRigidbodyView*>(),
                        {"OnPhotonSerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonRigidbodyView._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonRigidbodyView::*)()>(&::Photon::Pun::PhotonRigidbodyView::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa73f90c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonRigidbodyView*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Photon::Pun::PhotonRigidbodyView::__cordl_internal_get_m_Distance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Distance;
}
constexpr float_t const& Photon::Pun::PhotonRigidbodyView::__cordl_internal_get_m_Distance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Distance;
}
constexpr void Photon::Pun::PhotonRigidbodyView::__cordl_internal_set_m_Distance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Distance = value;
}
constexpr float_t& Photon::Pun::PhotonRigidbodyView::__cordl_internal_get_m_Angle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Angle;
}
constexpr float_t const& Photon::Pun::PhotonRigidbodyView::__cordl_internal_get_m_Angle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Angle;
}
constexpr void Photon::Pun::PhotonRigidbodyView::__cordl_internal_set_m_Angle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Angle = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& Photon::Pun::PhotonRigidbodyView::__cordl_internal_get_m_Body()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Body;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& Photon::Pun::PhotonRigidbodyView::__cordl_internal_get_m_Body() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Body;
}
constexpr void Photon::Pun::PhotonRigidbodyView::__cordl_internal_set_m_Body(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Body = value;
}
constexpr ::UnityEngine::Vector3& Photon::Pun::PhotonRigidbodyView::__cordl_internal_get_m_NetworkPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NetworkPosition;
}
constexpr ::UnityEngine::Vector3 const& Photon::Pun::PhotonRigidbodyView::__cordl_internal_get_m_NetworkPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NetworkPosition;
}
constexpr void Photon::Pun::PhotonRigidbodyView::__cordl_internal_set_m_NetworkPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NetworkPosition = value;
}
constexpr ::UnityEngine::Quaternion& Photon::Pun::PhotonRigidbodyView::__cordl_internal_get_m_NetworkRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NetworkRotation;
}
constexpr ::UnityEngine::Quaternion const& Photon::Pun::PhotonRigidbodyView::__cordl_internal_get_m_NetworkRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NetworkRotation;
}
constexpr void Photon::Pun::PhotonRigidbodyView::__cordl_internal_set_m_NetworkRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NetworkRotation = value;
}
constexpr bool& Photon::Pun::PhotonRigidbodyView::__cordl_internal_get_m_SynchronizeVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SynchronizeVelocity;
}
constexpr bool const& Photon::Pun::PhotonRigidbodyView::__cordl_internal_get_m_SynchronizeVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SynchronizeVelocity;
}
constexpr void Photon::Pun::PhotonRigidbodyView::__cordl_internal_set_m_SynchronizeVelocity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SynchronizeVelocity = value;
}
constexpr bool& Photon::Pun::PhotonRigidbodyView::__cordl_internal_get_m_SynchronizeAngularVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SynchronizeAngularVelocity;
}
constexpr bool const& Photon::Pun::PhotonRigidbodyView::__cordl_internal_get_m_SynchronizeAngularVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SynchronizeAngularVelocity;
}
constexpr void Photon::Pun::PhotonRigidbodyView::__cordl_internal_set_m_SynchronizeAngularVelocity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SynchronizeAngularVelocity = value;
}
constexpr bool& Photon::Pun::PhotonRigidbodyView::__cordl_internal_get_m_TeleportEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TeleportEnabled;
}
constexpr bool const& Photon::Pun::PhotonRigidbodyView::__cordl_internal_get_m_TeleportEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TeleportEnabled;
}
constexpr void Photon::Pun::PhotonRigidbodyView::__cordl_internal_set_m_TeleportEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TeleportEnabled = value;
}
constexpr float_t& Photon::Pun::PhotonRigidbodyView::__cordl_internal_get_m_TeleportIfDistanceGreaterThan()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TeleportIfDistanceGreaterThan;
}
constexpr float_t const& Photon::Pun::PhotonRigidbodyView::__cordl_internal_get_m_TeleportIfDistanceGreaterThan() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TeleportIfDistanceGreaterThan;
}
constexpr void Photon::Pun::PhotonRigidbodyView::__cordl_internal_set_m_TeleportIfDistanceGreaterThan(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TeleportIfDistanceGreaterThan = value;
}
inline void Photon::Pun::PhotonRigidbodyView::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonRigidbodyView*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::PhotonRigidbodyView::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonRigidbodyView*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::PhotonRigidbodyView::OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonRigidbodyView*>(),
                        {"OnPhotonSerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void Photon::Pun::PhotonRigidbodyView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonRigidbodyView*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::PhotonRigidbodyView* Photon::Pun::PhotonRigidbodyView::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::PhotonRigidbodyView*>());
}
/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr  Photon::Pun::PhotonRigidbodyView::operator ::Photon::Pun::IPunObservable*() noexcept {
return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* Photon::Pun::PhotonRigidbodyView::i___Photon__Pun__IPunObservable() noexcept {
return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Pun::PhotonRigidbodyView::PhotonRigidbodyView()   {
}
