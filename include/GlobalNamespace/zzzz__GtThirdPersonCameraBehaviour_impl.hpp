#pragma once
// IWYU pragma private; include "GlobalNamespace/GtThirdPersonCameraBehaviour.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GtThirdPersonCameraBehaviour_def.hpp"
#include "Liv/Lck/Smoothing/zzzz__KalmanFilterQuaternion_def.hpp"
#include "Liv/Lck/Smoothing/zzzz__KalmanFilterVector3_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GtThirdPersonCameraBehaviour.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GtThirdPersonCameraBehaviour::*)()>(&::GlobalNamespace::GtThirdPersonCameraBehaviour::OnEnable)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x9d14c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GtThirdPersonCameraBehaviour*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GtThirdPersonCameraBehaviour.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GtThirdPersonCameraBehaviour::*)()>(&::GlobalNamespace::GtThirdPersonCameraBehaviour::LateUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d14d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GtThirdPersonCameraBehaviour*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GtThirdPersonCameraBehaviour.UpdateCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GtThirdPersonCameraBehaviour::*)(bool)>(&::GlobalNamespace::GtThirdPersonCameraBehaviour::UpdateCamera)> {
  constexpr static std::size_t size = 0x624;
  constexpr static std::size_t addrs = 0x9d14d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GtThirdPersonCameraBehaviour*>(),
                        {"UpdateCamera", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GtThirdPersonCameraBehaviour.UpdateCameraWithoutSmoothing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GtThirdPersonCameraBehaviour::*)()>(&::GlobalNamespace::GtThirdPersonCameraBehaviour::UpdateCameraWithoutSmoothing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d153d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GtThirdPersonCameraBehaviour*>(),
                        {"UpdateCameraWithoutSmoothing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GtThirdPersonCameraBehaviour.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::GlobalNamespace::GtThirdPersonCameraBehaviour::Lerp)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d153a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GtThirdPersonCameraBehaviour*>(),
                        {"Lerp", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GtThirdPersonCameraBehaviour.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t)>(&::GlobalNamespace::GtThirdPersonCameraBehaviour::Lerp)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9d153e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GtThirdPersonCameraBehaviour*>(),
                        {"Lerp", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GtThirdPersonCameraBehaviour.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::GtThirdPersonCameraBehaviour::Lerp)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9d15428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GtThirdPersonCameraBehaviour*>(),
                        {"Lerp", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GtThirdPersonCameraBehaviour.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4, ::UnityEngine::Vector4, float_t)>(&::GlobalNamespace::GtThirdPersonCameraBehaviour::Lerp)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9d15488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GtThirdPersonCameraBehaviour*>(),
                        {"Lerp", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GtThirdPersonCameraBehaviour._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GtThirdPersonCameraBehaviour::*)()>(&::GlobalNamespace::GtThirdPersonCameraBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9d15504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GtThirdPersonCameraBehaviour*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::GtThirdPersonCameraBehaviour::__cordl_internal_get_front()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___front;
}
constexpr bool const& GlobalNamespace::GtThirdPersonCameraBehaviour::__cordl_internal_get_front() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___front;
}
constexpr void GlobalNamespace::GtThirdPersonCameraBehaviour::__cordl_internal_set_front(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___front = value;
}
constexpr float_t& GlobalNamespace::GtThirdPersonCameraBehaviour::__cordl_internal_get_distance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distance;
}
constexpr float_t const& GlobalNamespace::GtThirdPersonCameraBehaviour::__cordl_internal_get_distance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distance;
}
constexpr void GlobalNamespace::GtThirdPersonCameraBehaviour::__cordl_internal_set_distance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distance = value;
}
constexpr float_t& GlobalNamespace::GtThirdPersonCameraBehaviour::__cordl_internal_get_heightOffsetAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightOffsetAngle;
}
constexpr float_t const& GlobalNamespace::GtThirdPersonCameraBehaviour::__cordl_internal_get_heightOffsetAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightOffsetAngle;
}
constexpr void GlobalNamespace::GtThirdPersonCameraBehaviour::__cordl_internal_set_heightOffsetAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightOffsetAngle = value;
}
constexpr float_t& GlobalNamespace::GtThirdPersonCameraBehaviour::__cordl_internal_get_shoulderOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shoulderOffset;
}
constexpr float_t const& GlobalNamespace::GtThirdPersonCameraBehaviour::__cordl_internal_get_shoulderOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shoulderOffset;
}
constexpr void GlobalNamespace::GtThirdPersonCameraBehaviour::__cordl_internal_set_shoulderOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shoulderOffset = value;
}
constexpr float_t& GlobalNamespace::GtThirdPersonCameraBehaviour::__cordl_internal_get_positionalSmoothness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionalSmoothness;
}
constexpr float_t const& GlobalNamespace::GtThirdPersonCameraBehaviour::__cordl_internal_get_positionalSmoothness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionalSmoothness;
}
constexpr void GlobalNamespace::GtThirdPersonCameraBehaviour::__cordl_internal_set_positionalSmoothness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positionalSmoothness = value;
}
constexpr float_t& GlobalNamespace::GtThirdPersonCameraBehaviour::__cordl_internal_get_rotationalSmoothness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationalSmoothness;
}
constexpr float_t const& GlobalNamespace::GtThirdPersonCameraBehaviour::__cordl_internal_get_rotationalSmoothness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationalSmoothness;
}
constexpr void GlobalNamespace::GtThirdPersonCameraBehaviour::__cordl_internal_set_rotationalSmoothness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationalSmoothness = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::GtThirdPersonCameraBehaviour::__cordl_internal_get_cameraCollisionMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraCollisionMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::GtThirdPersonCameraBehaviour::__cordl_internal_get_cameraCollisionMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraCollisionMask;
}
constexpr void GlobalNamespace::GtThirdPersonCameraBehaviour::__cordl_internal_set_cameraCollisionMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cameraCollisionMask = value;
}
constexpr float_t& GlobalNamespace::GtThirdPersonCameraBehaviour::__cordl_internal_get_cameraRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraRadius;
}
constexpr float_t const& GlobalNamespace::GtThirdPersonCameraBehaviour::__cordl_internal_get_cameraRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraRadius;
}
constexpr void GlobalNamespace::GtThirdPersonCameraBehaviour::__cordl_internal_set_cameraRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cameraRadius = value;
}
constexpr ::Liv::Lck::Smoothing::KalmanFilterVector3*& GlobalNamespace::GtThirdPersonCameraBehaviour::__cordl_internal_get__positionFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionFilter;
}
constexpr ::Liv::Lck::Smoothing::KalmanFilterVector3* const& GlobalNamespace::GtThirdPersonCameraBehaviour::__cordl_internal_get__positionFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionFilter;
}
constexpr void GlobalNamespace::GtThirdPersonCameraBehaviour::__cordl_internal_set__positionFilter(::Liv::Lck::Smoothing::KalmanFilterVector3*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____positionFilter = value;
}
constexpr ::Liv::Lck::Smoothing::KalmanFilterQuaternion*& GlobalNamespace::GtThirdPersonCameraBehaviour::__cordl_internal_get__rotationFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationFilter;
}
constexpr ::Liv::Lck::Smoothing::KalmanFilterQuaternion* const& GlobalNamespace::GtThirdPersonCameraBehaviour::__cordl_internal_get__rotationFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationFilter;
}
constexpr void GlobalNamespace::GtThirdPersonCameraBehaviour::__cordl_internal_set__rotationFilter(::Liv::Lck::Smoothing::KalmanFilterQuaternion*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotationFilter = value;
}
inline void GlobalNamespace::GtThirdPersonCameraBehaviour::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GtThirdPersonCameraBehaviour*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GtThirdPersonCameraBehaviour::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GtThirdPersonCameraBehaviour*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GtThirdPersonCameraBehaviour::UpdateCamera(bool  useLerp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GtThirdPersonCameraBehaviour*>(),
                        {"UpdateCamera", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, useLerp);
}
inline void GlobalNamespace::GtThirdPersonCameraBehaviour::UpdateCameraWithoutSmoothing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GtThirdPersonCameraBehaviour*>(),
                        {"UpdateCameraWithoutSmoothing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::GtThirdPersonCameraBehaviour::Lerp(float_t  a, float_t  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GtThirdPersonCameraBehaviour*>(),
                        {"Lerp", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, a, b, t);
}
inline ::UnityEngine::Vector2 GlobalNamespace::GtThirdPersonCameraBehaviour::Lerp(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GtThirdPersonCameraBehaviour*>(),
                        {"Lerp", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, a, b, t);
}
inline ::UnityEngine::Vector3 GlobalNamespace::GtThirdPersonCameraBehaviour::Lerp(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GtThirdPersonCameraBehaviour*>(),
                        {"Lerp", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, a, b, t);
}
inline ::UnityEngine::Vector4 GlobalNamespace::GtThirdPersonCameraBehaviour::Lerp(::UnityEngine::Vector4  a, ::UnityEngine::Vector4  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GtThirdPersonCameraBehaviour*>(),
                        {"Lerp", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, a, b, t);
}
inline void GlobalNamespace::GtThirdPersonCameraBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GtThirdPersonCameraBehaviour*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GtThirdPersonCameraBehaviour* GlobalNamespace::GtThirdPersonCameraBehaviour::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GtThirdPersonCameraBehaviour*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GtThirdPersonCameraBehaviour::GtThirdPersonCameraBehaviour()   {
}
