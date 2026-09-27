#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineCore.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_BlendEventParams_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_2_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBlendDefinition_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBlend_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBrain_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_BlendEventParams_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_BlendHints_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineMixer_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCore.get_CurrentUnscaledTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::Unity::Cinemachine::CinemachineCore::get_CurrentUnscaledTime)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xaeb20c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore*>(),
                        {"get_CurrentUnscaledTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCore.SoloGUIColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)()>(&::Unity::Cinemachine::CinemachineCore::SoloGUIColor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaeb2150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore*>(),
                        {"SoloGUIColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCore.get_DeltaTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::Unity::Cinemachine::CinemachineCore::get_DeltaTime)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xaeb216c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore*>(),
                        {"get_DeltaTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCore.get_CurrentTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::Unity::Cinemachine::CinemachineCore::get_CurrentTime)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xaeada80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore*>(),
                        {"get_CurrentTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCore.get_CurrentUpdateFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Unity::Cinemachine::CinemachineCore::get_CurrentUpdateFrame)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaeb21f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore*>(),
                        {"get_CurrentUpdateFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCore.set_CurrentUpdateFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Unity::Cinemachine::CinemachineCore::set_CurrentUpdateFrame)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xaeb224c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore*>(),
                        {"set_CurrentUpdateFrame", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCore.get_VirtualCameraCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Unity::Cinemachine::CinemachineCore::get_VirtualCameraCount)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xaeb22a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore*>(),
                        {"get_VirtualCameraCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCore.GetVirtualCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> (*)(int32_t)>(&::Unity::Cinemachine::CinemachineCore::GetVirtualCamera)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xaeb22f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore*>(),
                        {"GetVirtualCamera", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCore.get_SoloCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::ICinemachineCamera* (*)()>(&::Unity::Cinemachine::CinemachineCore::get_SoloCamera)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaeb2348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore*>(),
                        {"get_SoloCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCore.set_SoloCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Cinemachine::ICinemachineCamera*)>(&::Unity::Cinemachine::CinemachineCore::set_SoloCamera)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xaeb23a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore*>(),
                        {"set_SoloCamera", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCore.IsLive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Cinemachine::ICinemachineCamera*)>(&::Unity::Cinemachine::CinemachineCore::IsLive)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xaeadb08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore*>(),
                        {"IsLive", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCore.IsLiveInBlend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Cinemachine::ICinemachineCamera*)>(&::Unity::Cinemachine::CinemachineCore::IsLiveInBlend)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xaeb2570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore*>(),
                        {"IsLiveInBlend", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCore.FindPotentialTargetBrain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Unity::Cinemachine::CinemachineBrain> (*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*)>(&::Unity::Cinemachine::CinemachineCore::FindPotentialTargetBrain)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xaeb267c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore*>(),
                        {"FindPotentialTargetBrain", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCore.OnTargetObjectWarped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineCore::OnTargetObjectWarped)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xaeb289c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore*>(),
                        {"OnTargetObjectWarped", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCore.ResetCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Cinemachine::CinemachineCore::ResetCameraState)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xaeb2984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore*>(),
                        {"ResetCameraState", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::CinemachineCore::setStaticF_CurrentUnscaledTimeTimeOverride(float_t  value)  {
::cordl_internals::setStaticField<float_t, "CurrentUnscaledTimeTimeOverride", ::Unity::Cinemachine::CinemachineCore*>(std::forward<float_t>(value));
}
inline float_t Unity::Cinemachine::CinemachineCore::getStaticF_CurrentUnscaledTimeTimeOverride()  {
return ::cordl_internals::getStaticField<float_t, "CurrentUnscaledTimeTimeOverride", ::Unity::Cinemachine::CinemachineCore*>();
}
inline void Unity::Cinemachine::CinemachineCore::setStaticF_UnitTestMode(bool  value)  {
::cordl_internals::setStaticField<bool, "UnitTestMode", ::Unity::Cinemachine::CinemachineCore*>(std::forward<bool>(value));
}
inline bool Unity::Cinemachine::CinemachineCore::getStaticF_UnitTestMode()  {
return ::cordl_internals::getStaticField<bool, "UnitTestMode", ::Unity::Cinemachine::CinemachineCore*>();
}
inline void Unity::Cinemachine::CinemachineCore::setStaticF_GetInputAxis(::Unity::Cinemachine::CinemachineCore_AxisInputDelegate*  value)  {
::cordl_internals::setStaticField<::Unity::Cinemachine::CinemachineCore_AxisInputDelegate*, "GetInputAxis", ::Unity::Cinemachine::CinemachineCore*>(std::forward<::Unity::Cinemachine::CinemachineCore_AxisInputDelegate*>(value));
}
inline ::Unity::Cinemachine::CinemachineCore_AxisInputDelegate* Unity::Cinemachine::CinemachineCore::getStaticF_GetInputAxis()  {
return ::cordl_internals::getStaticField<::Unity::Cinemachine::CinemachineCore_AxisInputDelegate*, "GetInputAxis", ::Unity::Cinemachine::CinemachineCore*>();
}
inline void Unity::Cinemachine::CinemachineCore::setStaticF_UniformDeltaTimeOverride(float_t  value)  {
::cordl_internals::setStaticField<float_t, "UniformDeltaTimeOverride", ::Unity::Cinemachine::CinemachineCore*>(std::forward<float_t>(value));
}
inline float_t Unity::Cinemachine::CinemachineCore::getStaticF_UniformDeltaTimeOverride()  {
return ::cordl_internals::getStaticField<float_t, "UniformDeltaTimeOverride", ::Unity::Cinemachine::CinemachineCore*>();
}
inline void Unity::Cinemachine::CinemachineCore::setStaticF_CurrentTimeOverride(float_t  value)  {
::cordl_internals::setStaticField<float_t, "CurrentTimeOverride", ::Unity::Cinemachine::CinemachineCore*>(std::forward<float_t>(value));
}
inline float_t Unity::Cinemachine::CinemachineCore::getStaticF_CurrentTimeOverride()  {
return ::cordl_internals::getStaticField<float_t, "CurrentTimeOverride", ::Unity::Cinemachine::CinemachineCore*>();
}
inline void Unity::Cinemachine::CinemachineCore::setStaticF__CurrentUpdateFrame_k__BackingField(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "<CurrentUpdateFrame>k__BackingField", ::Unity::Cinemachine::CinemachineCore*>(std::forward<int32_t>(value));
}
inline int32_t Unity::Cinemachine::CinemachineCore::getStaticF__CurrentUpdateFrame_k__BackingField()  {
return ::cordl_internals::getStaticField<int32_t, "<CurrentUpdateFrame>k__BackingField", ::Unity::Cinemachine::CinemachineCore*>();
}
inline void Unity::Cinemachine::CinemachineCore::setStaticF_GetBlendOverride(::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate*  value)  {
::cordl_internals::setStaticField<::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate*, "GetBlendOverride", ::Unity::Cinemachine::CinemachineCore*>(std::forward<::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate*>(value));
}
inline ::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate* Unity::Cinemachine::CinemachineCore::getStaticF_GetBlendOverride()  {
return ::cordl_internals::getStaticField<::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate*, "GetBlendOverride", ::Unity::Cinemachine::CinemachineCore*>();
}
inline void Unity::Cinemachine::CinemachineCore::setStaticF_GetCustomBlender(::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate*  value)  {
::cordl_internals::setStaticField<::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate*, "GetCustomBlender", ::Unity::Cinemachine::CinemachineCore*>(std::forward<::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate*>(value));
}
inline ::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate* Unity::Cinemachine::CinemachineCore::getStaticF_GetCustomBlender()  {
return ::cordl_internals::getStaticField<::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate*, "GetCustomBlender", ::Unity::Cinemachine::CinemachineCore*>();
}
inline void Unity::Cinemachine::CinemachineCore::setStaticF_CameraUpdatedEvent(::Unity::Cinemachine::CinemachineCore_BrainEvent*  value)  {
::cordl_internals::setStaticField<::Unity::Cinemachine::CinemachineCore_BrainEvent*, "CameraUpdatedEvent", ::Unity::Cinemachine::CinemachineCore*>(std::forward<::Unity::Cinemachine::CinemachineCore_BrainEvent*>(value));
}
inline ::Unity::Cinemachine::CinemachineCore_BrainEvent* Unity::Cinemachine::CinemachineCore::getStaticF_CameraUpdatedEvent()  {
return ::cordl_internals::getStaticField<::Unity::Cinemachine::CinemachineCore_BrainEvent*, "CameraUpdatedEvent", ::Unity::Cinemachine::CinemachineCore*>();
}
inline void Unity::Cinemachine::CinemachineCore::setStaticF_CameraActivatedEvent(::Unity::Cinemachine::ICinemachineCamera_ActivationEvent*  value)  {
::cordl_internals::setStaticField<::Unity::Cinemachine::ICinemachineCamera_ActivationEvent*, "CameraActivatedEvent", ::Unity::Cinemachine::CinemachineCore*>(std::forward<::Unity::Cinemachine::ICinemachineCamera_ActivationEvent*>(value));
}
inline ::Unity::Cinemachine::ICinemachineCamera_ActivationEvent* Unity::Cinemachine::CinemachineCore::getStaticF_CameraActivatedEvent()  {
return ::cordl_internals::getStaticField<::Unity::Cinemachine::ICinemachineCamera_ActivationEvent*, "CameraActivatedEvent", ::Unity::Cinemachine::CinemachineCore*>();
}
inline void Unity::Cinemachine::CinemachineCore::setStaticF_CameraDeactivatedEvent(::Unity::Cinemachine::CinemachineCore_CameraEvent*  value)  {
::cordl_internals::setStaticField<::Unity::Cinemachine::CinemachineCore_CameraEvent*, "CameraDeactivatedEvent", ::Unity::Cinemachine::CinemachineCore*>(std::forward<::Unity::Cinemachine::CinemachineCore_CameraEvent*>(value));
}
inline ::Unity::Cinemachine::CinemachineCore_CameraEvent* Unity::Cinemachine::CinemachineCore::getStaticF_CameraDeactivatedEvent()  {
return ::cordl_internals::getStaticField<::Unity::Cinemachine::CinemachineCore_CameraEvent*, "CameraDeactivatedEvent", ::Unity::Cinemachine::CinemachineCore*>();
}
inline void Unity::Cinemachine::CinemachineCore::setStaticF_BlendCreatedEvent(::Unity::Cinemachine::CinemachineCore_BlendEvent*  value)  {
::cordl_internals::setStaticField<::Unity::Cinemachine::CinemachineCore_BlendEvent*, "BlendCreatedEvent", ::Unity::Cinemachine::CinemachineCore*>(std::forward<::Unity::Cinemachine::CinemachineCore_BlendEvent*>(value));
}
inline ::Unity::Cinemachine::CinemachineCore_BlendEvent* Unity::Cinemachine::CinemachineCore::getStaticF_BlendCreatedEvent()  {
return ::cordl_internals::getStaticField<::Unity::Cinemachine::CinemachineCore_BlendEvent*, "BlendCreatedEvent", ::Unity::Cinemachine::CinemachineCore*>();
}
inline void Unity::Cinemachine::CinemachineCore::setStaticF_BlendFinishedEvent(::Unity::Cinemachine::CinemachineCore_CameraEvent*  value)  {
::cordl_internals::setStaticField<::Unity::Cinemachine::CinemachineCore_CameraEvent*, "BlendFinishedEvent", ::Unity::Cinemachine::CinemachineCore*>(std::forward<::Unity::Cinemachine::CinemachineCore_CameraEvent*>(value));
}
inline ::Unity::Cinemachine::CinemachineCore_CameraEvent* Unity::Cinemachine::CinemachineCore::getStaticF_BlendFinishedEvent()  {
return ::cordl_internals::getStaticField<::Unity::Cinemachine::CinemachineCore_CameraEvent*, "BlendFinishedEvent", ::Unity::Cinemachine::CinemachineCore*>();
}
inline void Unity::Cinemachine::CinemachineCore::setStaticF_s_SoloCamera(::Unity::Cinemachine::ICinemachineCamera*  value)  {
::cordl_internals::setStaticField<::Unity::Cinemachine::ICinemachineCamera*, "s_SoloCamera", ::Unity::Cinemachine::CinemachineCore*>(std::forward<::Unity::Cinemachine::ICinemachineCamera*>(value));
}
inline ::Unity::Cinemachine::ICinemachineCamera* Unity::Cinemachine::CinemachineCore::getStaticF_s_SoloCamera()  {
return ::cordl_internals::getStaticField<::Unity::Cinemachine::ICinemachineCamera*, "s_SoloCamera", ::Unity::Cinemachine::CinemachineCore*>();
}
inline float_t Unity::Cinemachine::CinemachineCore::get_CurrentUnscaledTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore*>(),
                        {"get_CurrentUnscaledTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline ::UnityEngine::Color Unity::Cinemachine::CinemachineCore::SoloGUIColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore*>(),
                        {"SoloGUIColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachineCore::get_DeltaTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore*>(),
                        {"get_DeltaTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachineCore::get_CurrentTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore*>(),
                        {"get_CurrentTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline int32_t Unity::Cinemachine::CinemachineCore::get_CurrentUpdateFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore*>(),
                        {"get_CurrentUpdateFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineCore::set_CurrentUpdateFrame(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore*>(),
                        {"set_CurrentUpdateFrame", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t Unity::Cinemachine::CinemachineCore::get_VirtualCameraCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore*>(),
                        {"get_VirtualCameraCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> Unity::Cinemachine::CinemachineCore::GetVirtualCamera(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore*>(),
                        {"GetVirtualCamera", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>(nullptr, ___internal_method, index);
}
inline ::Unity::Cinemachine::ICinemachineCamera* Unity::Cinemachine::CinemachineCore::get_SoloCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore*>(),
                        {"get_SoloCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::ICinemachineCamera*>(nullptr, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineCore::set_SoloCamera(::Unity::Cinemachine::ICinemachineCamera*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore*>(),
                        {"set_SoloCamera", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool Unity::Cinemachine::CinemachineCore::IsLive(::Unity::Cinemachine::ICinemachineCamera*  vcam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore*>(),
                        {"IsLive", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, vcam);
}
inline bool Unity::Cinemachine::CinemachineCore::IsLiveInBlend(::Unity::Cinemachine::ICinemachineCamera*  vcam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore*>(),
                        {"IsLiveInBlend", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, vcam);
}
inline ::UnityW<::Unity::Cinemachine::CinemachineBrain> Unity::Cinemachine::CinemachineCore::FindPotentialTargetBrain(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore*>(),
                        {"FindPotentialTargetBrain", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Unity::Cinemachine::CinemachineBrain>>(nullptr, ___internal_method, vcam);
}
inline void Unity::Cinemachine::CinemachineCore::OnTargetObjectWarped(::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore*>(),
                        {"OnTargetObjectWarped", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target, positionDelta);
}
inline void Unity::Cinemachine::CinemachineCore::ResetCameraState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore*>(),
                        {"ResetCameraState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineCore::CinemachineCore()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCore___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCore___c::*)()>(&::Unity::Cinemachine::CinemachineCore___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb3284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCore___c.__cctor_b__46_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineCore___c::*)(::StringW)>(&::Unity::Cinemachine::CinemachineCore___c::__cctor_b__46_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb328c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore___c*>(),
                        {"<.cctor>b__46_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::CinemachineCore___c::setStaticF___9(::Unity::Cinemachine::CinemachineCore___c*  value)  {
::cordl_internals::setStaticField<::Unity::Cinemachine::CinemachineCore___c*, "<>9", ::Unity::Cinemachine::CinemachineCore___c*>(std::forward<::Unity::Cinemachine::CinemachineCore___c*>(value));
}
inline ::Unity::Cinemachine::CinemachineCore___c* Unity::Cinemachine::CinemachineCore___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Unity::Cinemachine::CinemachineCore___c*, "<>9", ::Unity::Cinemachine::CinemachineCore___c*>();
}
inline void Unity::Cinemachine::CinemachineCore___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachineCore___c::__cctor_b__46_0(::StringW  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore___c*>(),
                        {"<.cctor>b__46_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, _p0_);
}
inline ::Unity::Cinemachine::CinemachineCore___c* Unity::Cinemachine::CinemachineCore___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineCore___c*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineCore___c::CinemachineCore___c()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCore_BlendEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCore_BlendEvent::*)()>(&::Unity::Cinemachine::CinemachineCore_BlendEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaeb2e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore_BlendEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::CinemachineCore_BlendEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore_BlendEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineCore_BlendEvent* Unity::Cinemachine::CinemachineCore_BlendEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineCore_BlendEvent*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineCore_BlendEvent::CinemachineCore_BlendEvent()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCore_BrainEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCore_BrainEvent::*)()>(&::Unity::Cinemachine::CinemachineCore_BrainEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaeb2d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore_BrainEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::CinemachineCore_BrainEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore_BrainEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineCore_BrainEvent* Unity::Cinemachine::CinemachineCore_BrainEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineCore_BrainEvent*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineCore_BrainEvent::CinemachineCore_BrainEvent()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCore_CameraEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCore_CameraEvent::*)()>(&::Unity::Cinemachine::CinemachineCore_CameraEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaeb2de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore_CameraEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::CinemachineCore_CameraEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore_CameraEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineCore_CameraEvent* Unity::Cinemachine::CinemachineCore_CameraEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineCore_CameraEvent*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineCore_CameraEvent::CinemachineCore_CameraEvent()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xaeb30c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CinemachineBlend_IBlender* (::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate::*)(::Unity::Cinemachine::ICinemachineCamera*, ::Unity::Cinemachine::ICinemachineCamera*)>(&::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaeb31d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate::*)(::Unity::Cinemachine::ICinemachineCamera*, ::Unity::Cinemachine::ICinemachineCamera*, ::System::AsyncCallback*, ::System::Object*)>(&::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaeb31e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CinemachineBlend_IBlender* (::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate::*)(::System::IAsyncResult*)>(&::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaeb3210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::Unity::Cinemachine::CinemachineBlend_IBlender* Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate::Invoke(::Unity::Cinemachine::ICinemachineCamera*  fromCam, ::Unity::Cinemachine::ICinemachineCamera*  toCam)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CinemachineBlend_IBlender*>(this, ___internal_method, fromCam, toCam);
}
inline ::System::IAsyncResult* Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate::BeginInvoke(::Unity::Cinemachine::ICinemachineCamera*  fromCam, ::Unity::Cinemachine::ICinemachineCamera*  toCam, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, fromCam, toCam, callback, object);
}
inline ::Unity::Cinemachine::CinemachineBlend_IBlender* Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CinemachineBlend_IBlender*>(this, ___internal_method, result);
}
inline ::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate* Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineCore_GetCustomBlenderDelegate::CinemachineCore_GetCustomBlenderDelegate()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xaeb2ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CinemachineBlendDefinition (::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate::*)(::Unity::Cinemachine::ICinemachineCamera*, ::Unity::Cinemachine::ICinemachineCamera*, ::Unity::Cinemachine::CinemachineBlendDefinition, ::UnityEngine::Object*)>(&::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaeb2fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate::*)(::Unity::Cinemachine::ICinemachineCamera*, ::Unity::Cinemachine::ICinemachineCamera*, ::Unity::Cinemachine::CinemachineBlendDefinition, ::UnityEngine::Object*, ::System::AsyncCallback*, ::System::Object*)>(&::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xaeb2ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CinemachineBlendDefinition (::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate::*)(::System::IAsyncResult*)>(&::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaeb309c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::Unity::Cinemachine::CinemachineBlendDefinition Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate::Invoke(::Unity::Cinemachine::ICinemachineCamera*  fromVcam, ::Unity::Cinemachine::ICinemachineCamera*  toVcam, ::Unity::Cinemachine::CinemachineBlendDefinition  defaultBlend, ::UnityEngine::Object*  owner)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CinemachineBlendDefinition>(this, ___internal_method, fromVcam, toVcam, defaultBlend, owner);
}
inline ::System::IAsyncResult* Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate::BeginInvoke(::Unity::Cinemachine::ICinemachineCamera*  fromVcam, ::Unity::Cinemachine::ICinemachineCamera*  toVcam, ::Unity::Cinemachine::CinemachineBlendDefinition  defaultBlend, ::UnityEngine::Object*  owner, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, fromVcam, toVcam, defaultBlend, owner, callback, object);
}
inline ::Unity::Cinemachine::CinemachineBlendDefinition Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CinemachineBlendDefinition>(this, ___internal_method, result);
}
inline ::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate* Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineCore_GetBlendOverrideDelegate::CinemachineCore_GetBlendOverrideDelegate()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCore_AxisInputDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCore_AxisInputDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Unity::Cinemachine::CinemachineCore_AxisInputDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xaeb2ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore_AxisInputDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCore_AxisInputDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineCore_AxisInputDelegate::*)(::StringW)>(&::Unity::Cinemachine::CinemachineCore_AxisInputDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaeb2e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCore_AxisInputDelegate*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCore_AxisInputDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCore_AxisInputDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Unity::Cinemachine::CinemachineCore_AxisInputDelegate::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::Unity::Cinemachine::CinemachineCore_AxisInputDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaeb2e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCore_AxisInputDelegate*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCore_AxisInputDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCore_AxisInputDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineCore_AxisInputDelegate::*)(::System::IAsyncResult*)>(&::Unity::Cinemachine::CinemachineCore_AxisInputDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaeb2ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCore_AxisInputDelegate*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCore_AxisInputDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::CinemachineCore_AxisInputDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCore_AxisInputDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline float_t Unity::Cinemachine::CinemachineCore_AxisInputDelegate::Invoke(::StringW  axisName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCore_AxisInputDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, axisName);
}
inline ::System::IAsyncResult* Unity::Cinemachine::CinemachineCore_AxisInputDelegate::BeginInvoke(::StringW  axisName, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCore_AxisInputDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, axisName, callback, object);
}
inline float_t Unity::Cinemachine::CinemachineCore_AxisInputDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCore_AxisInputDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, result);
}
inline ::Unity::Cinemachine::CinemachineCore_AxisInputDelegate* Unity::Cinemachine::CinemachineCore_AxisInputDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineCore_AxisInputDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineCore_AxisInputDelegate::CinemachineCore_AxisInputDelegate()   {
}
