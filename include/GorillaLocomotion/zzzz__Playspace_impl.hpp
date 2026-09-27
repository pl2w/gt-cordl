#pragma once
// IWYU pragma private; include "GorillaLocomotion/Playspace.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaLocomotion/zzzz__Playspace_def.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_def.hpp"
#include "Unity/XR/CoreUtils/zzzz__XROrigin_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaLocomotion::Playspace.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Playspace::*)()>(&::GorillaLocomotion::Playspace::Awake)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5cdde00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Playspace*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Playspace.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Playspace::*)()>(&::GorillaLocomotion::Playspace::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cdde1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Playspace*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Playspace.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Playspace::*)()>(&::GorillaLocomotion::Playspace::Update)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x5cdde20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Playspace*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Playspace.GetChaseSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaLocomotion::Playspace::*)()>(&::GorillaLocomotion::Playspace::GetChaseSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cde1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Playspace*>(),
                        {"GetChaseSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Playspace.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Playspace::*)()>(&::GorillaLocomotion::Playspace::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5cde1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Playspace*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Playspace._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Playspace::*)()>(&::GorillaLocomotion::Playspace::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cde220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Playspace*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaLocomotion::Playspace::__cordl_internal_get__localGorillaHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localGorillaHead;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaLocomotion::Playspace::__cordl_internal_get__localGorillaHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localGorillaHead;
}
constexpr void GorillaLocomotion::Playspace::__cordl_internal_set__localGorillaHead(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localGorillaHead = value;
}
constexpr float_t& GorillaLocomotion::Playspace::__cordl_internal_get__sphereRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sphereRadius;
}
constexpr float_t const& GorillaLocomotion::Playspace::__cordl_internal_get__sphereRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sphereRadius;
}
constexpr void GorillaLocomotion::Playspace::__cordl_internal_set__sphereRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sphereRadius = value;
}
constexpr float_t& GorillaLocomotion::Playspace::__cordl_internal_get__sqrSphereRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sqrSphereRadius;
}
constexpr float_t const& GorillaLocomotion::Playspace::__cordl_internal_get__sqrSphereRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sqrSphereRadius;
}
constexpr void GorillaLocomotion::Playspace::__cordl_internal_set__sqrSphereRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sqrSphereRadius = value;
}
constexpr float_t& GorillaLocomotion::Playspace::__cordl_internal_get__defaultChaseSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultChaseSpeed;
}
constexpr float_t const& GorillaLocomotion::Playspace::__cordl_internal_get__defaultChaseSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultChaseSpeed;
}
constexpr void GorillaLocomotion::Playspace::__cordl_internal_set__defaultChaseSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultChaseSpeed = value;
}
constexpr float_t& GorillaLocomotion::Playspace::__cordl_internal_get__snapToThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapToThreshold;
}
constexpr float_t const& GorillaLocomotion::Playspace::__cordl_internal_get__snapToThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapToThreshold;
}
constexpr void GorillaLocomotion::Playspace::__cordl_internal_set__snapToThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____snapToThreshold = value;
}
constexpr float_t& GorillaLocomotion::Playspace::__cordl_internal_get__sqrSnapToThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sqrSnapToThreshold;
}
constexpr float_t const& GorillaLocomotion::Playspace::__cordl_internal_get__sqrSnapToThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sqrSnapToThreshold;
}
constexpr void GorillaLocomotion::Playspace::__cordl_internal_set__sqrSnapToThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sqrSnapToThreshold = value;
}
constexpr ::UnityW<::GorillaLocomotion::GTPlayer>& GorillaLocomotion::Playspace::__cordl_internal_get_m_gtPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_gtPlayer;
}
constexpr ::UnityW<::GorillaLocomotion::GTPlayer> const& GorillaLocomotion::Playspace::__cordl_internal_get_m_gtPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_gtPlayer;
}
constexpr void GorillaLocomotion::Playspace::__cordl_internal_set_m_gtPlayer(::UnityW<::GorillaLocomotion::GTPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_gtPlayer = value;
}
constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin>& GorillaLocomotion::Playspace::__cordl_internal_get_m_xrOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_xrOrigin;
}
constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin> const& GorillaLocomotion::Playspace::__cordl_internal_get_m_xrOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_xrOrigin;
}
constexpr void GorillaLocomotion::Playspace::__cordl_internal_set_m_xrOrigin(::UnityW<::Unity::XR::CoreUtils::XROrigin>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_xrOrigin = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaLocomotion::Playspace::__cordl_internal_get_m_xrBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_xrBody;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaLocomotion::Playspace::__cordl_internal_get_m_xrBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_xrBody;
}
constexpr void GorillaLocomotion::Playspace::__cordl_internal_set_m_xrBody(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_xrBody = value;
}
inline void GorillaLocomotion::Playspace::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Playspace*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Playspace::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Playspace*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Playspace::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Playspace*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GorillaLocomotion::Playspace::GetChaseSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Playspace*>(),
                        {"GetChaseSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GorillaLocomotion::Playspace::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Playspace*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Playspace::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Playspace*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaLocomotion::Playspace* GorillaLocomotion::Playspace::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaLocomotion::Playspace*>());
}
// Ctor Parameters []
constexpr ::GorillaLocomotion::Playspace::Playspace()   {
}
