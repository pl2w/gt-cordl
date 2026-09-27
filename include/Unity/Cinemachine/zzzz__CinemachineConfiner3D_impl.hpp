#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineConfiner3D.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineExtension_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineConfiner3D_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineConfiner3D_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner3D.CameraWasDisplaced
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineConfiner3D::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*)>(&::Unity::Cinemachine::CinemachineConfiner3D::CameraWasDisplaced)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xae8b5b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner3D*>(),
                        {"CameraWasDisplaced", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner3D.GetCameraDisplacementDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineConfiner3D::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*)>(&::Unity::Cinemachine::CinemachineConfiner3D::GetCameraDisplacementDistance)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xae8b5cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner3D*>(),
                        {"GetCameraDisplacementDistance", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner3D.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineConfiner3D::*)()>(&::Unity::Cinemachine::CinemachineConfiner3D::Reset)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xae8b694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner3D*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner3D.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineConfiner3D::*)()>(&::Unity::Cinemachine::CinemachineConfiner3D::OnValidate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xae8b6b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner3D*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner3D.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineConfiner3D::*)()>(&::Unity::Cinemachine::CinemachineConfiner3D::get_IsValid)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xae8b6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner3D*>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner3D.GetMaxDampTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineConfiner3D::*)()>(&::Unity::Cinemachine::CinemachineConfiner3D::GetMaxDampTime)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xae8b778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner3D*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner3D*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner3D.OnTargetObjectWarped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineConfiner3D::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, ::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineConfiner3D::OnTargetObjectWarped)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xae8b78c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner3D*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner3D*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner3D.PostPipelineStageCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineConfiner3D::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, ::GlobalNamespace::CinemachineCore_Stage, ::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineConfiner3D::PostPipelineStageCallback)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0xae8b888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner3D*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner3D*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner3D.ConfinePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineConfiner3D::*)(::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineConfiner3D::ConfinePoint)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xae8bb14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner3D*>(),
                        {"ConfinePoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner3D.GetDistanceFromEdge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineConfiner3D::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineConfiner3D::GetDistanceFromEdge)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xae8bc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner3D*>(),
                        {"GetDistanceFromEdge", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner3D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineConfiner3D::*)()>(&::Unity::Cinemachine::CinemachineConfiner3D::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae8bcf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner3D*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Collider>& Unity::Cinemachine::CinemachineConfiner3D::__cordl_internal_get_BoundingVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BoundingVolume;
}
constexpr ::UnityW<::UnityEngine::Collider> const& Unity::Cinemachine::CinemachineConfiner3D::__cordl_internal_get_BoundingVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BoundingVolume;
}
constexpr void Unity::Cinemachine::CinemachineConfiner3D::__cordl_internal_set_BoundingVolume(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BoundingVolume = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineConfiner3D::__cordl_internal_get_SlowingDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SlowingDistance;
}
constexpr float_t const& Unity::Cinemachine::CinemachineConfiner3D::__cordl_internal_get_SlowingDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SlowingDistance;
}
constexpr void Unity::Cinemachine::CinemachineConfiner3D::__cordl_internal_set_SlowingDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SlowingDistance = value;
}
inline bool Unity::Cinemachine::CinemachineConfiner3D::CameraWasDisplaced(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner3D*>(),
                        {"CameraWasDisplaced", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, vcam);
}
inline float_t Unity::Cinemachine::CinemachineConfiner3D::GetCameraDisplacementDistance(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner3D*>(),
                        {"GetCameraDisplacementDistance", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, vcam);
}
inline void Unity::Cinemachine::CinemachineConfiner3D::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner3D*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineConfiner3D::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner3D*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachineConfiner3D::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner3D*>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachineConfiner3D::GetMaxDampTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner3D*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineConfiner3D::OnTargetObjectWarped(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner3D*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam, target, positionDelta);
}
inline void Unity::Cinemachine::CinemachineConfiner3D::PostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner3D*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam, stage, state, deltaTime);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineConfiner3D::ConfinePoint(::UnityEngine::Vector3  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner3D*>(),
                        {"ConfinePoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, p);
}
inline float_t Unity::Cinemachine::CinemachineConfiner3D::GetDistanceFromEdge(::UnityEngine::Vector3  p, ::UnityEngine::Vector3  dirUnit, float_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner3D*>(),
                        {"GetDistanceFromEdge", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, p, dirUnit, max);
}
inline void Unity::Cinemachine::CinemachineConfiner3D::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner3D*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineConfiner3D* Unity::Cinemachine::CinemachineConfiner3D::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineConfiner3D*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineConfiner3D::CinemachineConfiner3D()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner3D_VcamExtraState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineConfiner3D_VcamExtraState::*)()>(&::Unity::Cinemachine::CinemachineConfiner3D_VcamExtraState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae8bcfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner3D_VcamExtraState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineConfiner3D_VcamExtraState::__cordl_internal_get_PreviousDisplacement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviousDisplacement;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineConfiner3D_VcamExtraState::__cordl_internal_get_PreviousDisplacement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviousDisplacement;
}
constexpr void Unity::Cinemachine::CinemachineConfiner3D_VcamExtraState::__cordl_internal_set_PreviousDisplacement(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PreviousDisplacement = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineConfiner3D_VcamExtraState::__cordl_internal_get_PreviousCameraPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviousCameraPosition;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineConfiner3D_VcamExtraState::__cordl_internal_get_PreviousCameraPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviousCameraPosition;
}
constexpr void Unity::Cinemachine::CinemachineConfiner3D_VcamExtraState::__cordl_internal_set_PreviousCameraPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PreviousCameraPosition = value;
}
inline void Unity::Cinemachine::CinemachineConfiner3D_VcamExtraState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner3D_VcamExtraState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineConfiner3D_VcamExtraState* Unity::Cinemachine::CinemachineConfiner3D_VcamExtraState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineConfiner3D_VcamExtraState*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineConfiner3D_VcamExtraState::CinemachineConfiner3D_VcamExtraState()   {
}
