#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineExtension.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineExtension_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineExtension_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineExtension.get_ComponentOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> (::Unity::Cinemachine::CinemachineExtension::*)()>(&::Unity::Cinemachine::CinemachineExtension::get_ComponentOwner)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xaeb3294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(),
                        {"get_ComponentOwner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineExtension.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineExtension::*)()>(&::Unity::Cinemachine::CinemachineExtension::Awake)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaeb3328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineExtension.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineExtension::*)()>(&::Unity::Cinemachine::CinemachineExtension::OnDestroy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaeb3338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineExtension.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineExtension::*)()>(&::Unity::Cinemachine::CinemachineExtension::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaeb3348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineExtension.EnsureStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineExtension::*)()>(&::Unity::Cinemachine::CinemachineExtension::EnsureStarted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaeb334c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(),
                        {"EnsureStarted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineExtension.ConnectToVcam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineExtension::*)(bool)>(&::Unity::Cinemachine::CinemachineExtension::ConnectToVcam)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xaeb335c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineExtension.PrePipelineMutateCameraStateCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineExtension::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, ::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineExtension::PrePipelineMutateCameraStateCallback)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaeb3598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineExtension.InvokePostPipelineStageCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineExtension::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, ::GlobalNamespace::CinemachineCore_Stage, ::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineExtension::InvokePostPipelineStageCallback)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaeb359c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(),
                        {"InvokePostPipelineStageCallback", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), ::i2c::type_of<::GlobalNamespace::CinemachineCore_Stage>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineExtension.PostPipelineStageCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineExtension::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, ::GlobalNamespace::CinemachineCore_Stage, ::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineExtension::PostPipelineStageCallback)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaeb35a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineExtension.OnTargetObjectWarped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineExtension::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, ::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineExtension::OnTargetObjectWarped)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaeb35ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineExtension.ForceCameraPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineExtension::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Unity::Cinemachine::CinemachineExtension::ForceCameraPosition)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaeb35b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineExtension.ForceCameraPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineExtension::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Unity::Cinemachine::CinemachineExtension::ForceCameraPosition)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaeb35b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineExtension.OnTransitionFromCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineExtension::*)(::Unity::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineExtension::OnTransitionFromCamera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb35b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineExtension.GetMaxDampTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineExtension::*)()>(&::Unity::Cinemachine::CinemachineExtension::GetMaxDampTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb35c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineExtension._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineExtension::*)()>(&::Unity::Cinemachine::CinemachineExtension::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb35c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>& Unity::Cinemachine::CinemachineExtension::__cordl_internal_get_m_VcamOwner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VcamOwner;
}
constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> const& Unity::Cinemachine::CinemachineExtension::__cordl_internal_get_m_VcamOwner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VcamOwner;
}
constexpr void Unity::Cinemachine::CinemachineExtension::__cordl_internal_set_m_VcamOwner(::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VcamOwner = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>,::Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase*>*& Unity::Cinemachine::CinemachineExtension::__cordl_internal_get_m_ExtraState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExtraState;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>,::Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase*>* const& Unity::Cinemachine::CinemachineExtension::__cordl_internal_get_m_ExtraState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExtraState;
}
constexpr void Unity::Cinemachine::CinemachineExtension::__cordl_internal_set_m_ExtraState(::System::Collections::Generic::Dictionary_2<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>,::Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ExtraState = value;
}
inline ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> Unity::Cinemachine::CinemachineExtension::get_ComponentOwner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(),
                        {"get_ComponentOwner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineExtension::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineExtension::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineExtension::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineExtension::EnsureStarted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(),
                        {"EnsureStarted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineExtension::ConnectToVcam(bool  connect)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connect);
}
inline void Unity::Cinemachine::CinemachineExtension::PrePipelineMutateCameraStateCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam, curState, deltaTime);
}
inline void Unity::Cinemachine::CinemachineExtension::InvokePostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(),
                        {"InvokePostPipelineStageCallback", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), ::i2c::type_of<::GlobalNamespace::CinemachineCore_Stage>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam, stage, state, deltaTime);
}
inline void Unity::Cinemachine::CinemachineExtension::PostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam, stage, state, deltaTime);
}
inline void Unity::Cinemachine::CinemachineExtension::OnTargetObjectWarped(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam, target, positionDelta);
}
inline void Unity::Cinemachine::CinemachineExtension::ForceCameraPosition(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos, rot);
}
inline void Unity::Cinemachine::CinemachineExtension::ForceCameraPosition(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam, pos, rot);
}
inline bool Unity::Cinemachine::CinemachineExtension::OnTransitionFromCamera(::Unity::Cinemachine::ICinemachineCamera*  fromCam, ::UnityEngine::Vector3  worldUp, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fromCam, worldUp, deltaTime);
}
inline float_t Unity::Cinemachine::CinemachineExtension::GetMaxDampTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase*> && ::cordl_internals::default_constructor_constraint<T>)
inline T Unity::Cinemachine::CinemachineExtension::GetExtraState(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(),
                    {"GetExtraState", {::i2c::class_of<T>()}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, vcam);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase*> && ::cordl_internals::default_constructor_constraint<T>)
inline void Unity::Cinemachine::CinemachineExtension::GetAllExtraStates(::System::Collections::Generic::List_1<T>*  list)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(),
                    {"GetAllExtraStates", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list);
}
inline void Unity::Cinemachine::CinemachineExtension::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineExtension*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineExtension* Unity::Cinemachine::CinemachineExtension::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineExtension*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineExtension::CinemachineExtension()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase::*)()>(&::Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb35d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>& Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase::__cordl_internal_get_Vcam()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Vcam;
}
constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> const& Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase::__cordl_internal_get_Vcam() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Vcam;
}
constexpr void Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase::__cordl_internal_set_Vcam(::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Vcam = value;
}
inline void Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase* Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase::CinemachineExtension_VcamExtraStateBase()   {
}
