#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonTransformView.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPun_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Photon/Pun/zzzz__PhotonTransformView_def.hpp"
#include "Photon/Pun/zzzz__IPunObservable_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Photon::Pun::PhotonTransformView.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonTransformView::*)()>(&::Photon::Pun::PhotonTransformView::Awake)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa73f924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformView*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonTransformView.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonTransformView::*)()>(&::Photon::Pun::PhotonTransformView::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa73f9d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformView*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonTransformView.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonTransformView::*)()>(&::Photon::Pun::PhotonTransformView::OnEnable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa73f9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformView*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonTransformView.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonTransformView::*)()>(&::Photon::Pun::PhotonTransformView::Update)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0xa73f9ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformView*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonTransformView.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::PhotonTransformView::*)(::UnityEngine::Vector3)>(&::Photon::Pun::PhotonTransformView::IsValid)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa73fe80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformView*>(),
                        {"IsValid", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonTransformView.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::PhotonTransformView::*)(::UnityEngine::Quaternion)>(&::Photon::Pun::PhotonTransformView::IsValid)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa73fed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformView*>(),
                        {"IsValid", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonTransformView.OnPhotonSerializeView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonTransformView::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::Photon::Pun::PhotonTransformView::OnPhotonSerializeView)> {
  constexpr static std::size_t size = 0x7d0;
  constexpr static std::size_t addrs = 0xa73ff40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformView*>(),
                        {"OnPhotonSerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonTransformView.GTAddition_DoTeleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonTransformView::*)()>(&::Photon::Pun::PhotonTransformView::GTAddition_DoTeleport)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa740710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformView*>(),
                        {"GTAddition_DoTeleport", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonTransformView._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonTransformView::*)()>(&::Photon::Pun::PhotonTransformView::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa74071c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformView*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Photon::Pun::PhotonTransformView::__cordl_internal_get_m_Distance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Distance;
}
constexpr float_t const& Photon::Pun::PhotonTransformView::__cordl_internal_get_m_Distance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Distance;
}
constexpr void Photon::Pun::PhotonTransformView::__cordl_internal_set_m_Distance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Distance = value;
}
constexpr float_t& Photon::Pun::PhotonTransformView::__cordl_internal_get_m_Angle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Angle;
}
constexpr float_t const& Photon::Pun::PhotonTransformView::__cordl_internal_get_m_Angle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Angle;
}
constexpr void Photon::Pun::PhotonTransformView::__cordl_internal_set_m_Angle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Angle = value;
}
constexpr ::UnityEngine::Vector3& Photon::Pun::PhotonTransformView::__cordl_internal_get_m_Direction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Direction;
}
constexpr ::UnityEngine::Vector3 const& Photon::Pun::PhotonTransformView::__cordl_internal_get_m_Direction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Direction;
}
constexpr void Photon::Pun::PhotonTransformView::__cordl_internal_set_m_Direction(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Direction = value;
}
constexpr ::UnityEngine::Vector3& Photon::Pun::PhotonTransformView::__cordl_internal_get_m_NetworkPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NetworkPosition;
}
constexpr ::UnityEngine::Vector3 const& Photon::Pun::PhotonTransformView::__cordl_internal_get_m_NetworkPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NetworkPosition;
}
constexpr void Photon::Pun::PhotonTransformView::__cordl_internal_set_m_NetworkPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NetworkPosition = value;
}
constexpr ::UnityEngine::Vector3& Photon::Pun::PhotonTransformView::__cordl_internal_get_m_StoredPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StoredPosition;
}
constexpr ::UnityEngine::Vector3 const& Photon::Pun::PhotonTransformView::__cordl_internal_get_m_StoredPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StoredPosition;
}
constexpr void Photon::Pun::PhotonTransformView::__cordl_internal_set_m_StoredPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StoredPosition = value;
}
constexpr ::UnityEngine::Quaternion& Photon::Pun::PhotonTransformView::__cordl_internal_get_m_NetworkRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NetworkRotation;
}
constexpr ::UnityEngine::Quaternion const& Photon::Pun::PhotonTransformView::__cordl_internal_get_m_NetworkRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NetworkRotation;
}
constexpr void Photon::Pun::PhotonTransformView::__cordl_internal_set_m_NetworkRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NetworkRotation = value;
}
constexpr bool& Photon::Pun::PhotonTransformView::__cordl_internal_get_m_SynchronizePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SynchronizePosition;
}
constexpr bool const& Photon::Pun::PhotonTransformView::__cordl_internal_get_m_SynchronizePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SynchronizePosition;
}
constexpr void Photon::Pun::PhotonTransformView::__cordl_internal_set_m_SynchronizePosition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SynchronizePosition = value;
}
constexpr bool& Photon::Pun::PhotonTransformView::__cordl_internal_get_m_SynchronizeRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SynchronizeRotation;
}
constexpr bool const& Photon::Pun::PhotonTransformView::__cordl_internal_get_m_SynchronizeRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SynchronizeRotation;
}
constexpr void Photon::Pun::PhotonTransformView::__cordl_internal_set_m_SynchronizeRotation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SynchronizeRotation = value;
}
constexpr bool& Photon::Pun::PhotonTransformView::__cordl_internal_get_m_SynchronizeScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SynchronizeScale;
}
constexpr bool const& Photon::Pun::PhotonTransformView::__cordl_internal_get_m_SynchronizeScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SynchronizeScale;
}
constexpr void Photon::Pun::PhotonTransformView::__cordl_internal_set_m_SynchronizeScale(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SynchronizeScale = value;
}
constexpr bool& Photon::Pun::PhotonTransformView::__cordl_internal_get_m_UseLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseLocal;
}
constexpr bool const& Photon::Pun::PhotonTransformView::__cordl_internal_get_m_UseLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseLocal;
}
constexpr void Photon::Pun::PhotonTransformView::__cordl_internal_set_m_UseLocal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UseLocal = value;
}
constexpr bool& Photon::Pun::PhotonTransformView::__cordl_internal_get_m_firstTake()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_firstTake;
}
constexpr bool const& Photon::Pun::PhotonTransformView::__cordl_internal_get_m_firstTake() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_firstTake;
}
constexpr void Photon::Pun::PhotonTransformView::__cordl_internal_set_m_firstTake(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_firstTake = value;
}
inline void Photon::Pun::PhotonTransformView::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformView*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::PhotonTransformView::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformView*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::PhotonTransformView::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformView*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::PhotonTransformView::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformView*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Photon::Pun::PhotonTransformView::IsValid(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformView*>(),
                        {"IsValid", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, v);
}
inline bool Photon::Pun::PhotonTransformView::IsValid(::UnityEngine::Quaternion  q)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformView*>(),
                        {"IsValid", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, q);
}
inline void Photon::Pun::PhotonTransformView::OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformView*>(),
                        {"OnPhotonSerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void Photon::Pun::PhotonTransformView::GTAddition_DoTeleport()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformView*>(),
                        {"GTAddition_DoTeleport", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::PhotonTransformView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformView*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::PhotonTransformView* Photon::Pun::PhotonTransformView::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::PhotonTransformView*>());
}
/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr  Photon::Pun::PhotonTransformView::operator ::Photon::Pun::IPunObservable*() noexcept {
return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* Photon::Pun::PhotonTransformView::i___Photon__Pun__IPunObservable() noexcept {
return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Pun::PhotonTransformView::PhotonTransformView()   {
}
