#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonRigidbody2DView.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPun_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Photon/Pun/zzzz__PhotonRigidbody2DView_def.hpp"
#include "Photon/Pun/zzzz__IPunObservable_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "UnityEngine/zzzz__Rigidbody2D_def.hpp"
//  Writing Method size for method: ::Photon::Pun::PhotonRigidbody2DView.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonRigidbody2DView::*)()>(&::Photon::Pun::PhotonRigidbody2DView::Awake)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa73e9cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonRigidbody2DView*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonRigidbody2DView.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonRigidbody2DView::*)()>(&::Photon::Pun::PhotonRigidbody2DView::FixedUpdate)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xa73ea2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonRigidbody2DView*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonRigidbody2DView.OnPhotonSerializeView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonRigidbody2DView::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::Photon::Pun::PhotonRigidbody2DView::OnPhotonSerializeView)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0xa73ec14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonRigidbody2DView*>(),
                        {"OnPhotonSerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonRigidbody2DView._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonRigidbody2DView::*)()>(&::Photon::Pun::PhotonRigidbody2DView::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa73f03c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonRigidbody2DView*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Photon::Pun::PhotonRigidbody2DView::__cordl_internal_get_m_Distance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Distance;
}
constexpr float_t const& Photon::Pun::PhotonRigidbody2DView::__cordl_internal_get_m_Distance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Distance;
}
constexpr void Photon::Pun::PhotonRigidbody2DView::__cordl_internal_set_m_Distance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Distance = value;
}
constexpr float_t& Photon::Pun::PhotonRigidbody2DView::__cordl_internal_get_m_Angle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Angle;
}
constexpr float_t const& Photon::Pun::PhotonRigidbody2DView::__cordl_internal_get_m_Angle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Angle;
}
constexpr void Photon::Pun::PhotonRigidbody2DView::__cordl_internal_set_m_Angle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Angle = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody2D>& Photon::Pun::PhotonRigidbody2DView::__cordl_internal_get_m_Body()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Body;
}
constexpr ::UnityW<::UnityEngine::Rigidbody2D> const& Photon::Pun::PhotonRigidbody2DView::__cordl_internal_get_m_Body() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Body;
}
constexpr void Photon::Pun::PhotonRigidbody2DView::__cordl_internal_set_m_Body(::UnityW<::UnityEngine::Rigidbody2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Body = value;
}
constexpr ::UnityEngine::Vector2& Photon::Pun::PhotonRigidbody2DView::__cordl_internal_get_m_NetworkPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NetworkPosition;
}
constexpr ::UnityEngine::Vector2 const& Photon::Pun::PhotonRigidbody2DView::__cordl_internal_get_m_NetworkPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NetworkPosition;
}
constexpr void Photon::Pun::PhotonRigidbody2DView::__cordl_internal_set_m_NetworkPosition(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NetworkPosition = value;
}
constexpr float_t& Photon::Pun::PhotonRigidbody2DView::__cordl_internal_get_m_NetworkRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NetworkRotation;
}
constexpr float_t const& Photon::Pun::PhotonRigidbody2DView::__cordl_internal_get_m_NetworkRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NetworkRotation;
}
constexpr void Photon::Pun::PhotonRigidbody2DView::__cordl_internal_set_m_NetworkRotation(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NetworkRotation = value;
}
constexpr bool& Photon::Pun::PhotonRigidbody2DView::__cordl_internal_get_m_SynchronizeVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SynchronizeVelocity;
}
constexpr bool const& Photon::Pun::PhotonRigidbody2DView::__cordl_internal_get_m_SynchronizeVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SynchronizeVelocity;
}
constexpr void Photon::Pun::PhotonRigidbody2DView::__cordl_internal_set_m_SynchronizeVelocity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SynchronizeVelocity = value;
}
constexpr bool& Photon::Pun::PhotonRigidbody2DView::__cordl_internal_get_m_SynchronizeAngularVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SynchronizeAngularVelocity;
}
constexpr bool const& Photon::Pun::PhotonRigidbody2DView::__cordl_internal_get_m_SynchronizeAngularVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SynchronizeAngularVelocity;
}
constexpr void Photon::Pun::PhotonRigidbody2DView::__cordl_internal_set_m_SynchronizeAngularVelocity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SynchronizeAngularVelocity = value;
}
constexpr bool& Photon::Pun::PhotonRigidbody2DView::__cordl_internal_get_m_TeleportEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TeleportEnabled;
}
constexpr bool const& Photon::Pun::PhotonRigidbody2DView::__cordl_internal_get_m_TeleportEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TeleportEnabled;
}
constexpr void Photon::Pun::PhotonRigidbody2DView::__cordl_internal_set_m_TeleportEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TeleportEnabled = value;
}
constexpr float_t& Photon::Pun::PhotonRigidbody2DView::__cordl_internal_get_m_TeleportIfDistanceGreaterThan()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TeleportIfDistanceGreaterThan;
}
constexpr float_t const& Photon::Pun::PhotonRigidbody2DView::__cordl_internal_get_m_TeleportIfDistanceGreaterThan() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TeleportIfDistanceGreaterThan;
}
constexpr void Photon::Pun::PhotonRigidbody2DView::__cordl_internal_set_m_TeleportIfDistanceGreaterThan(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TeleportIfDistanceGreaterThan = value;
}
inline void Photon::Pun::PhotonRigidbody2DView::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonRigidbody2DView*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::PhotonRigidbody2DView::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonRigidbody2DView*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::PhotonRigidbody2DView::OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonRigidbody2DView*>(),
                        {"OnPhotonSerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void Photon::Pun::PhotonRigidbody2DView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonRigidbody2DView*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::PhotonRigidbody2DView* Photon::Pun::PhotonRigidbody2DView::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::PhotonRigidbody2DView*>());
}
/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr  Photon::Pun::PhotonRigidbody2DView::operator ::Photon::Pun::IPunObservable*() noexcept {
return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* Photon::Pun::PhotonRigidbody2DView::i___Photon__Pun__IPunObservable() noexcept {
return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Pun::PhotonRigidbody2DView::PhotonRigidbody2DView()   {
}
