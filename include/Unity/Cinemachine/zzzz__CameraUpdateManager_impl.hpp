#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CameraUpdateManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__CameraUpdateManager_UpdateFilter_impl.hpp"
#include "Unity/Cinemachine/zzzz__UpdateTracker_UpdateClock_impl.hpp"
#include "Unity/Cinemachine/zzzz__CameraUpdateManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraUpdateManager_UpdateFilter_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraUpdateManager_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
#include "Unity/Cinemachine/zzzz__UpdateTracker_UpdateClock_def.hpp"
#include "Unity/Cinemachine/zzzz__VirtualCameraRegistry_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CameraUpdateManager.InitializeModule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Cinemachine::CameraUpdateManager::InitializeModule)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xaead184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraUpdateManager*>(),
                        {"InitializeModule", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraUpdateManager.get_VirtualCameraCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Unity::Cinemachine::CameraUpdateManager::get_VirtualCameraCount)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xaead224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraUpdateManager*>(),
                        {"get_VirtualCameraCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraUpdateManager.GetVirtualCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> (*)(int32_t)>(&::Unity::Cinemachine::CameraUpdateManager::GetVirtualCamera)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xaead288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraUpdateManager*>(),
                        {"GetVirtualCamera", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraUpdateManager.AddActiveCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*)>(&::Unity::Cinemachine::CameraUpdateManager::AddActiveCamera)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xaead2f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraUpdateManager*>(),
                        {"AddActiveCamera", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraUpdateManager.RemoveActiveCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*)>(&::Unity::Cinemachine::CameraUpdateManager::RemoveActiveCamera)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xaead360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraUpdateManager*>(),
                        {"RemoveActiveCamera", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraUpdateManager.CameraDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*)>(&::Unity::Cinemachine::CameraUpdateManager::CameraDestroyed)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xaead3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraUpdateManager*>(),
                        {"CameraDestroyed", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraUpdateManager.CameraEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*)>(&::Unity::Cinemachine::CameraUpdateManager::CameraEnabled)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xaead4d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraUpdateManager*>(),
                        {"CameraEnabled", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraUpdateManager.CameraDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*)>(&::Unity::Cinemachine::CameraUpdateManager::CameraDisabled)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xaead544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraUpdateManager*>(),
                        {"CameraDisabled", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraUpdateManager.ForgetContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::Unity::Cinemachine::CameraUpdateManager::ForgetContext)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xaead5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraUpdateManager*>(),
                        {"ForgetContext", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraUpdateManager.UpdateAllActiveVirtualCameras
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t, ::UnityEngine::Vector3, float_t, ::System::Object*)>(&::Unity::Cinemachine::CameraUpdateManager::UpdateAllActiveVirtualCameras)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0xaead640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraUpdateManager*>(),
                        {"UpdateAllActiveVirtualCameras", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraUpdateManager.UpdateVirtualCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, ::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CameraUpdateManager::UpdateVirtualCamera)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0xaeadc18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraUpdateManager*>(),
                        {"UpdateVirtualCamera", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraUpdateManager.GetUpdateTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*)>(&::Unity::Cinemachine::CameraUpdateManager::GetUpdateTarget)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xaeae0bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraUpdateManager*>(),
                        {"GetUpdateTarget", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraUpdateManager.GetVcamUpdateStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UpdateTracker_UpdateClock (*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*)>(&::Unity::Cinemachine::CameraUpdateManager::GetVcamUpdateStatus)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xaeae208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraUpdateManager*>(),
                        {"GetVcamUpdateStatus", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::CameraUpdateManager::setStaticF_s_CameraRegistry(::Unity::Cinemachine::VirtualCameraRegistry*  value)  {
::cordl_internals::setStaticField<::Unity::Cinemachine::VirtualCameraRegistry*, "s_CameraRegistry", ::Unity::Cinemachine::CameraUpdateManager*>(std::forward<::Unity::Cinemachine::VirtualCameraRegistry*>(value));
}
inline ::Unity::Cinemachine::VirtualCameraRegistry* Unity::Cinemachine::CameraUpdateManager::getStaticF_s_CameraRegistry()  {
return ::cordl_internals::getStaticField<::Unity::Cinemachine::VirtualCameraRegistry*, "s_CameraRegistry", ::Unity::Cinemachine::CameraUpdateManager*>();
}
inline void Unity::Cinemachine::CameraUpdateManager::setStaticF_s_RoundRobinIndex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_RoundRobinIndex", ::Unity::Cinemachine::CameraUpdateManager*>(std::forward<int32_t>(value));
}
inline int32_t Unity::Cinemachine::CameraUpdateManager::getStaticF_s_RoundRobinIndex()  {
return ::cordl_internals::getStaticField<int32_t, "s_RoundRobinIndex", ::Unity::Cinemachine::CameraUpdateManager*>();
}
inline void Unity::Cinemachine::CameraUpdateManager::setStaticF_s_RoundRobinSubIndex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_RoundRobinSubIndex", ::Unity::Cinemachine::CameraUpdateManager*>(std::forward<int32_t>(value));
}
inline int32_t Unity::Cinemachine::CameraUpdateManager::getStaticF_s_RoundRobinSubIndex()  {
return ::cordl_internals::getStaticField<int32_t, "s_RoundRobinSubIndex", ::Unity::Cinemachine::CameraUpdateManager*>();
}
inline void Unity::Cinemachine::CameraUpdateManager::setStaticF_s_LastFixedUpdateContext(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "s_LastFixedUpdateContext", ::Unity::Cinemachine::CameraUpdateManager*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Unity::Cinemachine::CameraUpdateManager::getStaticF_s_LastFixedUpdateContext()  {
return ::cordl_internals::getStaticField<::System::Object*, "s_LastFixedUpdateContext", ::Unity::Cinemachine::CameraUpdateManager*>();
}
inline void Unity::Cinemachine::CameraUpdateManager::setStaticF_s_LastUpdateTime(float_t  value)  {
::cordl_internals::setStaticField<float_t, "s_LastUpdateTime", ::Unity::Cinemachine::CameraUpdateManager*>(std::forward<float_t>(value));
}
inline float_t Unity::Cinemachine::CameraUpdateManager::getStaticF_s_LastUpdateTime()  {
return ::cordl_internals::getStaticField<float_t, "s_LastUpdateTime", ::Unity::Cinemachine::CameraUpdateManager*>();
}
inline void Unity::Cinemachine::CameraUpdateManager::setStaticF_s_FixedFrameCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_FixedFrameCount", ::Unity::Cinemachine::CameraUpdateManager*>(std::forward<int32_t>(value));
}
inline int32_t Unity::Cinemachine::CameraUpdateManager::getStaticF_s_FixedFrameCount()  {
return ::cordl_internals::getStaticField<int32_t, "s_FixedFrameCount", ::Unity::Cinemachine::CameraUpdateManager*>();
}
inline void Unity::Cinemachine::CameraUpdateManager::setStaticF_s_UpdateStatus(::System::Collections::Generic::Dictionary_2<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>,::Unity::Cinemachine::CameraUpdateManager_UpdateStatus*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>,::Unity::Cinemachine::CameraUpdateManager_UpdateStatus*>*, "s_UpdateStatus", ::Unity::Cinemachine::CameraUpdateManager*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>,::Unity::Cinemachine::CameraUpdateManager_UpdateStatus*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>,::Unity::Cinemachine::CameraUpdateManager_UpdateStatus*>* Unity::Cinemachine::CameraUpdateManager::getStaticF_s_UpdateStatus()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>,::Unity::Cinemachine::CameraUpdateManager_UpdateStatus*>*, "s_UpdateStatus", ::Unity::Cinemachine::CameraUpdateManager*>();
}
inline void Unity::Cinemachine::CameraUpdateManager::setStaticF_s_CurrentUpdateFilter(::GlobalNamespace::CameraUpdateManager_UpdateFilter  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::CameraUpdateManager_UpdateFilter, "s_CurrentUpdateFilter", ::Unity::Cinemachine::CameraUpdateManager*>(std::forward<::GlobalNamespace::CameraUpdateManager_UpdateFilter>(value));
}
inline ::GlobalNamespace::CameraUpdateManager_UpdateFilter Unity::Cinemachine::CameraUpdateManager::getStaticF_s_CurrentUpdateFilter()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::CameraUpdateManager_UpdateFilter, "s_CurrentUpdateFilter", ::Unity::Cinemachine::CameraUpdateManager*>();
}
inline void Unity::Cinemachine::CameraUpdateManager::InitializeModule()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraUpdateManager*>(),
                        {"InitializeModule", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline int32_t Unity::Cinemachine::CameraUpdateManager::get_VirtualCameraCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraUpdateManager*>(),
                        {"get_VirtualCameraCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> Unity::Cinemachine::CameraUpdateManager::GetVirtualCamera(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraUpdateManager*>(),
                        {"GetVirtualCamera", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>(nullptr, ___internal_method, index);
}
inline void Unity::Cinemachine::CameraUpdateManager::AddActiveCamera(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraUpdateManager*>(),
                        {"AddActiveCamera", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, vcam);
}
inline void Unity::Cinemachine::CameraUpdateManager::RemoveActiveCamera(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraUpdateManager*>(),
                        {"RemoveActiveCamera", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, vcam);
}
inline void Unity::Cinemachine::CameraUpdateManager::CameraDestroyed(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraUpdateManager*>(),
                        {"CameraDestroyed", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, vcam);
}
inline void Unity::Cinemachine::CameraUpdateManager::CameraEnabled(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraUpdateManager*>(),
                        {"CameraEnabled", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, vcam);
}
inline void Unity::Cinemachine::CameraUpdateManager::CameraDisabled(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraUpdateManager*>(),
                        {"CameraDisabled", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, vcam);
}
inline void Unity::Cinemachine::CameraUpdateManager::ForgetContext(::System::Object*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraUpdateManager*>(),
                        {"ForgetContext", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context);
}
inline void Unity::Cinemachine::CameraUpdateManager::UpdateAllActiveVirtualCameras(uint32_t  channelMask, ::UnityEngine::Vector3  worldUp, float_t  deltaTime, ::System::Object*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraUpdateManager*>(),
                        {"UpdateAllActiveVirtualCameras", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, channelMask, worldUp, deltaTime, context);
}
inline void Unity::Cinemachine::CameraUpdateManager::UpdateVirtualCamera(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::UnityEngine::Vector3  worldUp, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraUpdateManager*>(),
                        {"UpdateVirtualCamera", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, vcam, worldUp, deltaTime);
}
inline ::UnityW<::UnityEngine::Transform> Unity::Cinemachine::CameraUpdateManager::GetUpdateTarget(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraUpdateManager*>(),
                        {"GetUpdateTarget", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(nullptr, ___internal_method, vcam);
}
inline ::GlobalNamespace::UpdateTracker_UpdateClock Unity::Cinemachine::CameraUpdateManager::GetVcamUpdateStatus(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraUpdateManager*>(),
                        {"GetVcamUpdateStatus", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UpdateTracker_UpdateClock>(nullptr, ___internal_method, vcam);
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CameraUpdateManager::CameraUpdateManager()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CameraUpdateManager_UpdateStatus._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CameraUpdateManager_UpdateStatus::*)()>(&::Unity::Cinemachine::CameraUpdateManager_UpdateStatus::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeae200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraUpdateManager_UpdateStatus*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Unity::Cinemachine::CameraUpdateManager_UpdateStatus::__cordl_internal_get_lastUpdateFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastUpdateFrame;
}
constexpr int32_t const& Unity::Cinemachine::CameraUpdateManager_UpdateStatus::__cordl_internal_get_lastUpdateFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastUpdateFrame;
}
constexpr void Unity::Cinemachine::CameraUpdateManager_UpdateStatus::__cordl_internal_set_lastUpdateFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastUpdateFrame = value;
}
constexpr int32_t& Unity::Cinemachine::CameraUpdateManager_UpdateStatus::__cordl_internal_get_lastUpdateFixedFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastUpdateFixedFrame;
}
constexpr int32_t const& Unity::Cinemachine::CameraUpdateManager_UpdateStatus::__cordl_internal_get_lastUpdateFixedFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastUpdateFixedFrame;
}
constexpr void Unity::Cinemachine::CameraUpdateManager_UpdateStatus::__cordl_internal_set_lastUpdateFixedFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastUpdateFixedFrame = value;
}
constexpr ::GlobalNamespace::UpdateTracker_UpdateClock& Unity::Cinemachine::CameraUpdateManager_UpdateStatus::__cordl_internal_get_lastUpdateMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastUpdateMode;
}
constexpr ::GlobalNamespace::UpdateTracker_UpdateClock const& Unity::Cinemachine::CameraUpdateManager_UpdateStatus::__cordl_internal_get_lastUpdateMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastUpdateMode;
}
constexpr void Unity::Cinemachine::CameraUpdateManager_UpdateStatus::__cordl_internal_set_lastUpdateMode(::GlobalNamespace::UpdateTracker_UpdateClock  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastUpdateMode = value;
}
inline void Unity::Cinemachine::CameraUpdateManager_UpdateStatus::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraUpdateManager_UpdateStatus*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CameraUpdateManager_UpdateStatus* Unity::Cinemachine::CameraUpdateManager_UpdateStatus::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CameraUpdateManager_UpdateStatus*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CameraUpdateManager_UpdateStatus::CameraUpdateManager_UpdateStatus()   {
}
