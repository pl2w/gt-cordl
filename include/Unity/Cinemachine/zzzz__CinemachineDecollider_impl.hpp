#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineDecollider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineDecollider_DecollisionSettings_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineDecollider_TerrainSettings_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineExtension_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineDecollider_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineDecollider_DecollisionSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineDecollider_TerrainSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineDecollider_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDecollider.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineDecollider::*)()>(&::Unity::Cinemachine::CinemachineDecollider::OnValidate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xae8bd04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDecollider*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDecollider.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineDecollider::*)()>(&::Unity::Cinemachine::CinemachineDecollider::Reset)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xae8bd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDecollider*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDecollider.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineDecollider::*)()>(&::Unity::Cinemachine::CinemachineDecollider::OnDestroy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xae8bd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineDecollider*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineDecollider*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDecollider.GetMaxDampTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineDecollider::*)()>(&::Unity::Cinemachine::CinemachineDecollider::GetMaxDampTime)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xae8bdf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineDecollider*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineDecollider*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDecollider.ForceCameraPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineDecollider::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Unity::Cinemachine::CinemachineDecollider::ForceCameraPosition)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xae8be1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineDecollider*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineDecollider*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDecollider.PostPipelineStageCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineDecollider::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, ::GlobalNamespace::CinemachineCore_Stage, ::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineDecollider::PostPipelineStageCallback)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0xae8bea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineDecollider*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineDecollider*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDecollider.GetAvoidanceResolutionTargetPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineDecollider::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, ::by_ref<::Unity::Cinemachine::CameraState>)>(&::Unity::Cinemachine::CinemachineDecollider::GetAvoidanceResolutionTargetPoint)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xae8c390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDecollider*>(),
                        {"GetAvoidanceResolutionTargetPoint", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDecollider.ResolveTerrain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineDecollider::*)(::Unity::Cinemachine::CinemachineDecollider_VcamExtraState*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineDecollider::ResolveTerrain)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0xae8c558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDecollider*>(),
                        {"ResolveTerrain", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineDecollider_VcamExtraState*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDecollider.DecollideCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineDecollider::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineDecollider::DecollideCamera)> {
  constexpr static std::size_t size = 0x6f0;
  constexpr static std::size_t addrs = 0xae8c798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDecollider*>(),
                        {"DecollideCamera", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDecollider.ApplySmoothingAndDamping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineDecollider::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Unity::Cinemachine::CinemachineDecollider_VcamExtraState*, float_t)>(&::Unity::Cinemachine::CinemachineDecollider::ApplySmoothingAndDamping)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0xae8ce88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDecollider*>(),
                        {"ApplySmoothingAndDamping", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Unity::Cinemachine::CinemachineDecollider_VcamExtraState*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDecollider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineDecollider::*)()>(&::Unity::Cinemachine::CinemachineDecollider::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xae8d2b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDecollider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Unity::Cinemachine::CinemachineDecollider::__cordl_internal_get_CameraRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraRadius;
}
constexpr float_t const& Unity::Cinemachine::CinemachineDecollider::__cordl_internal_get_CameraRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraRadius;
}
constexpr void Unity::Cinemachine::CinemachineDecollider::__cordl_internal_set_CameraRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CameraRadius = value;
}
constexpr ::GlobalNamespace::CinemachineDecollider_DecollisionSettings& Unity::Cinemachine::CinemachineDecollider::__cordl_internal_get_Decollision()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Decollision;
}
constexpr ::GlobalNamespace::CinemachineDecollider_DecollisionSettings const& Unity::Cinemachine::CinemachineDecollider::__cordl_internal_get_Decollision() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Decollision;
}
constexpr void Unity::Cinemachine::CinemachineDecollider::__cordl_internal_set_Decollision(::GlobalNamespace::CinemachineDecollider_DecollisionSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Decollision = value;
}
constexpr ::GlobalNamespace::CinemachineDecollider_TerrainSettings& Unity::Cinemachine::CinemachineDecollider::__cordl_internal_get_TerrainResolution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TerrainResolution;
}
constexpr ::GlobalNamespace::CinemachineDecollider_TerrainSettings const& Unity::Cinemachine::CinemachineDecollider::__cordl_internal_get_TerrainResolution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TerrainResolution;
}
constexpr void Unity::Cinemachine::CinemachineDecollider::__cordl_internal_set_TerrainResolution(::GlobalNamespace::CinemachineDecollider_TerrainSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TerrainResolution = value;
}
inline void Unity::Cinemachine::CinemachineDecollider::setStaticF_s_ColliderBuffer(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityW<::UnityEngine::Collider>>, "s_ColliderBuffer", ::Unity::Cinemachine::CinemachineDecollider*>(std::forward<::ArrayW<::UnityW<::UnityEngine::Collider>>>(value));
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> Unity::Cinemachine::CinemachineDecollider::getStaticF_s_ColliderBuffer()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityW<::UnityEngine::Collider>>, "s_ColliderBuffer", ::Unity::Cinemachine::CinemachineDecollider*>();
}
inline void Unity::Cinemachine::CinemachineDecollider::setStaticF_s_ColliderDistanceBuffer(::ArrayW<float_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "s_ColliderDistanceBuffer", ::Unity::Cinemachine::CinemachineDecollider*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> Unity::Cinemachine::CinemachineDecollider::getStaticF_s_ColliderDistanceBuffer()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "s_ColliderDistanceBuffer", ::Unity::Cinemachine::CinemachineDecollider*>();
}
inline void Unity::Cinemachine::CinemachineDecollider::setStaticF_s_ColliderOrderBuffer(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "s_ColliderOrderBuffer", ::Unity::Cinemachine::CinemachineDecollider*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Unity::Cinemachine::CinemachineDecollider::getStaticF_s_ColliderOrderBuffer()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "s_ColliderOrderBuffer", ::Unity::Cinemachine::CinemachineDecollider*>();
}
inline void Unity::Cinemachine::CinemachineDecollider::setStaticF_s_ColliderBufferSorter(::System::Collections::Generic::IComparer_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IComparer_1<int32_t>*, "s_ColliderBufferSorter", ::Unity::Cinemachine::CinemachineDecollider*>(std::forward<::System::Collections::Generic::IComparer_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::IComparer_1<int32_t>* Unity::Cinemachine::CinemachineDecollider::getStaticF_s_ColliderBufferSorter()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IComparer_1<int32_t>*, "s_ColliderBufferSorter", ::Unity::Cinemachine::CinemachineDecollider*>();
}
inline void Unity::Cinemachine::CinemachineDecollider::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDecollider*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineDecollider::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDecollider*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineDecollider::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineDecollider*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachineDecollider::GetMaxDampTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineDecollider*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineDecollider::ForceCameraPosition(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineDecollider*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam, pos, rot);
}
inline void Unity::Cinemachine::CinemachineDecollider::PostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineDecollider*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam, stage, state, deltaTime);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineDecollider::GetAvoidanceResolutionTargetPoint(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::by_ref<::Unity::Cinemachine::CameraState>  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDecollider*>(),
                        {"GetAvoidanceResolutionTargetPoint", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, vcam, state);
}
inline float_t Unity::Cinemachine::CinemachineDecollider::ResolveTerrain(::Unity::Cinemachine::CinemachineDecollider_VcamExtraState*  extra, ::UnityEngine::Vector3  camPos, ::UnityEngine::Vector3  up, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDecollider*>(),
                        {"ResolveTerrain", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineDecollider_VcamExtraState*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, extra, camPos, up, deltaTime);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineDecollider::DecollideCamera(::UnityEngine::Vector3  cameraPos, ::UnityEngine::Vector3  lookAtPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDecollider*>(),
                        {"DecollideCamera", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, cameraPos, lookAtPoint);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineDecollider::ApplySmoothingAndDamping(::UnityEngine::Vector3  displacement, ::UnityEngine::Vector3  lookAtPoint, ::UnityEngine::Vector3  oldCamPos, ::Unity::Cinemachine::CinemachineDecollider_VcamExtraState*  extra, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDecollider*>(),
                        {"ApplySmoothingAndDamping", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Unity::Cinemachine::CinemachineDecollider_VcamExtraState*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, displacement, lookAtPoint, oldCamPos, extra, deltaTime);
}
inline void Unity::Cinemachine::CinemachineDecollider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDecollider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineDecollider* Unity::Cinemachine::CinemachineDecollider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineDecollider*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineDecollider::CinemachineDecollider()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDecollider___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineDecollider___c::*)()>(&::Unity::Cinemachine::CinemachineDecollider___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae8d4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDecollider___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDecollider___c.__cctor_b__22_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Cinemachine::CinemachineDecollider___c::*)(int32_t, int32_t)>(&::Unity::Cinemachine::CinemachineDecollider___c::__cctor_b__22_0)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xae8d4e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDecollider___c*>(),
                        {"<.cctor>b__22_0", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::CinemachineDecollider___c::setStaticF___9(::Unity::Cinemachine::CinemachineDecollider___c*  value)  {
::cordl_internals::setStaticField<::Unity::Cinemachine::CinemachineDecollider___c*, "<>9", ::Unity::Cinemachine::CinemachineDecollider___c*>(std::forward<::Unity::Cinemachine::CinemachineDecollider___c*>(value));
}
inline ::Unity::Cinemachine::CinemachineDecollider___c* Unity::Cinemachine::CinemachineDecollider___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Unity::Cinemachine::CinemachineDecollider___c*, "<>9", ::Unity::Cinemachine::CinemachineDecollider___c*>();
}
inline void Unity::Cinemachine::CinemachineDecollider___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDecollider___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Unity::Cinemachine::CinemachineDecollider___c::__cctor_b__22_0(int32_t  a, int32_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDecollider___c*>(),
                        {"<.cctor>b__22_0", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline ::Unity::Cinemachine::CinemachineDecollider___c* Unity::Cinemachine::CinemachineDecollider___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineDecollider___c*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineDecollider___c::CinemachineDecollider___c()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDecollider_VcamExtraState.UpdateDistanceSmoothing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineDecollider_VcamExtraState::*)(float_t, float_t, bool)>(&::Unity::Cinemachine::CinemachineDecollider_VcamExtraState::UpdateDistanceSmoothing)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xae8d1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDecollider_VcamExtraState*>(),
                        {"UpdateDistanceSmoothing", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDecollider_VcamExtraState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineDecollider_VcamExtraState::*)()>(&::Unity::Cinemachine::CinemachineDecollider_VcamExtraState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae8d470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDecollider_VcamExtraState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Unity::Cinemachine::CinemachineDecollider_VcamExtraState::__cordl_internal_get_PreviousTerrainDisplacement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviousTerrainDisplacement;
}
constexpr float_t const& Unity::Cinemachine::CinemachineDecollider_VcamExtraState::__cordl_internal_get_PreviousTerrainDisplacement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviousTerrainDisplacement;
}
constexpr void Unity::Cinemachine::CinemachineDecollider_VcamExtraState::__cordl_internal_set_PreviousTerrainDisplacement(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PreviousTerrainDisplacement = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineDecollider_VcamExtraState::__cordl_internal_get_PreviousDistanceFromTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviousDistanceFromTarget;
}
constexpr float_t const& Unity::Cinemachine::CinemachineDecollider_VcamExtraState::__cordl_internal_get_PreviousDistanceFromTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviousDistanceFromTarget;
}
constexpr void Unity::Cinemachine::CinemachineDecollider_VcamExtraState::__cordl_internal_set_PreviousDistanceFromTarget(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PreviousDistanceFromTarget = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineDecollider_VcamExtraState::__cordl_internal_get_PreviouDecollisionDisplacement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviouDecollisionDisplacement;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineDecollider_VcamExtraState::__cordl_internal_get_PreviouDecollisionDisplacement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviouDecollisionDisplacement;
}
constexpr void Unity::Cinemachine::CinemachineDecollider_VcamExtraState::__cordl_internal_set_PreviouDecollisionDisplacement(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PreviouDecollisionDisplacement = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineDecollider_VcamExtraState::__cordl_internal_get_PreviousCorrectedCameraPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviousCorrectedCameraPosition;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineDecollider_VcamExtraState::__cordl_internal_get_PreviousCorrectedCameraPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviousCorrectedCameraPosition;
}
constexpr void Unity::Cinemachine::CinemachineDecollider_VcamExtraState::__cordl_internal_set_PreviousCorrectedCameraPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PreviousCorrectedCameraPosition = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineDecollider_VcamExtraState::__cordl_internal_get_m_SmoothedDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SmoothedDistance;
}
constexpr float_t const& Unity::Cinemachine::CinemachineDecollider_VcamExtraState::__cordl_internal_get_m_SmoothedDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SmoothedDistance;
}
constexpr void Unity::Cinemachine::CinemachineDecollider_VcamExtraState::__cordl_internal_set_m_SmoothedDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SmoothedDistance = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineDecollider_VcamExtraState::__cordl_internal_get_m_SmoothingStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SmoothingStartTime;
}
constexpr float_t const& Unity::Cinemachine::CinemachineDecollider_VcamExtraState::__cordl_internal_get_m_SmoothingStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SmoothingStartTime;
}
constexpr void Unity::Cinemachine::CinemachineDecollider_VcamExtraState::__cordl_internal_set_m_SmoothingStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SmoothingStartTime = value;
}
inline float_t Unity::Cinemachine::CinemachineDecollider_VcamExtraState::UpdateDistanceSmoothing(float_t  distance, float_t  smoothingTime, bool  haveDisplacement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDecollider_VcamExtraState*>(),
                        {"UpdateDistanceSmoothing", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, distance, smoothingTime, haveDisplacement);
}
inline void Unity::Cinemachine::CinemachineDecollider_VcamExtraState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDecollider_VcamExtraState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineDecollider_VcamExtraState* Unity::Cinemachine::CinemachineDecollider_VcamExtraState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineDecollider_VcamExtraState*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineDecollider_VcamExtraState::CinemachineDecollider_VcamExtraState()   {
}
