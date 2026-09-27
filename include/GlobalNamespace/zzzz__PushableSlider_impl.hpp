#pragma once
// IWYU pragma private; include "GlobalNamespace/PushableSlider.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__PushableSlider_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PushableSlider.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PushableSlider::*)()>(&::GlobalNamespace::PushableSlider::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5788cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PushableSlider*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PushableSlider.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PushableSlider::*)()>(&::GlobalNamespace::PushableSlider::Initialize)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5788cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PushableSlider*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PushableSlider.OnTriggerStay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PushableSlider::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::PushableSlider::OnTriggerStay)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x5788d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PushableSlider*>(),
                        {"OnTriggerStay", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PushableSlider.GetXOffsetVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::PushableSlider::*)(float_t)>(&::GlobalNamespace::PushableSlider::GetXOffsetVector)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5789060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PushableSlider*>(),
                        {"GetXOffsetVector", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PushableSlider.SetProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PushableSlider::*)(float_t)>(&::GlobalNamespace::PushableSlider::SetProgress)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5787790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PushableSlider*>(),
                        {"SetProgress", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PushableSlider.GetProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PushableSlider::*)()>(&::GlobalNamespace::PushableSlider::GetProgress)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x57884fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PushableSlider*>(),
                        {"GetProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PushableSlider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PushableSlider::*)()>(&::GlobalNamespace::PushableSlider::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5789068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PushableSlider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::PushableSlider::__cordl_internal_get_farPushDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___farPushDist;
}
constexpr float_t const& GlobalNamespace::PushableSlider::__cordl_internal_get_farPushDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___farPushDist;
}
constexpr void GlobalNamespace::PushableSlider::__cordl_internal_set_farPushDist(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___farPushDist = value;
}
constexpr float_t& GlobalNamespace::PushableSlider::__cordl_internal_get_maxXOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxXOffset;
}
constexpr float_t const& GlobalNamespace::PushableSlider::__cordl_internal_get_maxXOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxXOffset;
}
constexpr void GlobalNamespace::PushableSlider::__cordl_internal_set_maxXOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxXOffset = value;
}
constexpr float_t& GlobalNamespace::PushableSlider::__cordl_internal_get_minXOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minXOffset;
}
constexpr float_t const& GlobalNamespace::PushableSlider::__cordl_internal_get_minXOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minXOffset;
}
constexpr void GlobalNamespace::PushableSlider::__cordl_internal_set_minXOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minXOffset = value;
}
constexpr ::UnityEngine::Matrix4x4& GlobalNamespace::PushableSlider::__cordl_internal_get__localSpace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localSpace;
}
constexpr ::UnityEngine::Matrix4x4 const& GlobalNamespace::PushableSlider::__cordl_internal_get__localSpace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localSpace;
}
constexpr void GlobalNamespace::PushableSlider::__cordl_internal_set__localSpace(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localSpace = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PushableSlider::__cordl_internal_get__startingPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startingPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PushableSlider::__cordl_internal_get__startingPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startingPos;
}
constexpr void GlobalNamespace::PushableSlider::__cordl_internal_set__startingPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startingPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PushableSlider::__cordl_internal_get__previousLocalPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousLocalPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PushableSlider::__cordl_internal_get__previousLocalPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousLocalPosition;
}
constexpr void GlobalNamespace::PushableSlider::__cordl_internal_set__previousLocalPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousLocalPosition = value;
}
constexpr float_t& GlobalNamespace::PushableSlider::__cordl_internal_get__cachedProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedProgress;
}
constexpr float_t const& GlobalNamespace::PushableSlider::__cordl_internal_get__cachedProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedProgress;
}
constexpr void GlobalNamespace::PushableSlider::__cordl_internal_set__cachedProgress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedProgress = value;
}
constexpr bool& GlobalNamespace::PushableSlider::__cordl_internal_get__initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr bool const& GlobalNamespace::PushableSlider::__cordl_internal_get__initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr void GlobalNamespace::PushableSlider::__cordl_internal_set__initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialized = value;
}
inline void GlobalNamespace::PushableSlider::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PushableSlider*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PushableSlider::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PushableSlider*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PushableSlider::OnTriggerStay(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PushableSlider*>(),
                        {"OnTriggerStay", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline ::UnityEngine::Vector3 GlobalNamespace::PushableSlider::GetXOffsetVector(float_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PushableSlider*>(),
                        {"GetXOffsetVector", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, x);
}
inline void GlobalNamespace::PushableSlider::SetProgress(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PushableSlider*>(),
                        {"SetProgress", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::PushableSlider::GetProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PushableSlider*>(),
                        {"GetProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::PushableSlider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PushableSlider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PushableSlider* GlobalNamespace::PushableSlider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PushableSlider*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PushableSlider::PushableSlider()   {
}
