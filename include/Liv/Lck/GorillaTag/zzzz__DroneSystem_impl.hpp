#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/DroneSystem.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/GorillaTag/zzzz__DroneSystem_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__DroneController_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__DroneSystem_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GTLckController_def.hpp"
#include "Liv/Lck/zzzz__ILckCamera_def.hpp"
#include "Liv/Lck/zzzz__ILckService_def.hpp"
#include "Liv/Lck/zzzz__LckResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneSystem.add_OnRequestDroneModeState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneSystem::*)(::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate*)>(&::Liv::Lck::GorillaTag::DroneSystem::add_OnRequestDroneModeState)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9d207ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneSystem*>(),
                        {"add_OnRequestDroneModeState", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneSystem.remove_OnRequestDroneModeState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneSystem::*)(::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate*)>(&::Liv::Lck::GorillaTag::DroneSystem::remove_OnRequestDroneModeState)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9d20848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneSystem*>(),
                        {"remove_OnRequestDroneModeState", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneSystem.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneSystem::*)()>(&::Liv::Lck::GorillaTag::DroneSystem::Awake)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x9d208e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneSystem*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneSystem.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneSystem::*)()>(&::Liv::Lck::GorillaTag::DroneSystem::Start)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x9d20a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneSystem*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneSystem.OnRecordingStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneSystem::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::GorillaTag::DroneSystem::OnRecordingStarted)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9d20b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneSystem*>(),
                        {"OnRecordingStarted", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneSystem.ProcessDroneMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneSystem::*)(bool)>(&::Liv::Lck::GorillaTag::DroneSystem::ProcessDroneMode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9d20bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneSystem*>(),
                        {"ProcessDroneMode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneSystem.SetDronePositionAndRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneSystem::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Liv::Lck::GorillaTag::DroneSystem::SetDronePositionAndRotation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9d20be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneSystem*>(),
                        {"SetDronePositionAndRotation", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneSystem.GetLckCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::ILckCamera* (::Liv::Lck::GorillaTag::DroneSystem::*)()>(&::Liv::Lck::GorillaTag::DroneSystem::GetLckCamera)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9d20c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneSystem*>(),
                        {"GetLckCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneSystem.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneSystem::*)()>(&::Liv::Lck::GorillaTag::DroneSystem::OnDestroy)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x9d20c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneSystem*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneSystem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneSystem::*)()>(&::Liv::Lck::GorillaTag::DroneSystem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d20d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneSystem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate*& Liv::Lck::GorillaTag::DroneSystem::__cordl_internal_get_OnRequestDroneModeState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRequestDroneModeState;
}
constexpr ::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate* const& Liv::Lck::GorillaTag::DroneSystem::__cordl_internal_get_OnRequestDroneModeState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRequestDroneModeState;
}
constexpr void Liv::Lck::GorillaTag::DroneSystem::__cordl_internal_set_OnRequestDroneModeState(::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnRequestDroneModeState = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Liv::Lck::GorillaTag::DroneSystem::__cordl_internal_get__dronePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dronePrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Liv::Lck::GorillaTag::DroneSystem::__cordl_internal_get__dronePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dronePrefab;
}
constexpr void Liv::Lck::GorillaTag::DroneSystem::__cordl_internal_set__dronePrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dronePrefab = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::DroneController>& Liv::Lck::GorillaTag::DroneSystem::__cordl_internal_get__droneController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____droneController;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::DroneController> const& Liv::Lck::GorillaTag::DroneSystem::__cordl_internal_get__droneController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____droneController;
}
constexpr void Liv::Lck::GorillaTag::DroneSystem::__cordl_internal_set__droneController(::UnityW<::Liv::Lck::GorillaTag::DroneController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____droneController = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GTLckController>& Liv::Lck::GorillaTag::DroneSystem::__cordl_internal_get__gtController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gtController;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GTLckController> const& Liv::Lck::GorillaTag::DroneSystem::__cordl_internal_get__gtController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gtController;
}
constexpr void Liv::Lck::GorillaTag::DroneSystem::__cordl_internal_set__gtController(::UnityW<::Liv::Lck::GorillaTag::GTLckController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gtController = value;
}
constexpr ::Liv::Lck::ILckService*& Liv::Lck::GorillaTag::DroneSystem::__cordl_internal_get__lckService()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckService;
}
constexpr ::Liv::Lck::ILckService* const& Liv::Lck::GorillaTag::DroneSystem::__cordl_internal_get__lckService() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckService;
}
constexpr void Liv::Lck::GorillaTag::DroneSystem::__cordl_internal_set__lckService(::Liv::Lck::ILckService*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lckService = value;
}
inline void Liv::Lck::GorillaTag::DroneSystem::add_OnRequestDroneModeState(::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneSystem*>(),
                        {"add_OnRequestDroneModeState", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::GorillaTag::DroneSystem::remove_OnRequestDroneModeState(::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneSystem*>(),
                        {"remove_OnRequestDroneModeState", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::GorillaTag::DroneSystem::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneSystem*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::DroneSystem::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneSystem*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::DroneSystem::OnRecordingStarted(::Liv::Lck::LckResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneSystem*>(),
                        {"OnRecordingStarted", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Liv::Lck::GorillaTag::DroneSystem::ProcessDroneMode(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneSystem*>(),
                        {"ProcessDroneMode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::GorillaTag::DroneSystem::SetDronePositionAndRotation(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneSystem*>(),
                        {"SetDronePositionAndRotation", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, rotation);
}
inline ::Liv::Lck::ILckCamera* Liv::Lck::GorillaTag::DroneSystem::GetLckCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneSystem*>(),
                        {"GetLckCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::ILckCamera*>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::DroneSystem::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneSystem*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::DroneSystem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneSystem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::GorillaTag::DroneSystem* Liv::Lck::GorillaTag::DroneSystem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::GorillaTag::DroneSystem*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::DroneSystem::DroneSystem()   {
}
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9d20d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate::*)(bool)>(&::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9d20e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate*>(),
                    {::i2c::class_of<::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate::*)(bool, ::System::AsyncCallback*, ::System::Object*)>(&::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9d20e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate*>(),
                    {::i2c::class_of<::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate::*)(::System::IAsyncResult*)>(&::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9d20ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate*>(),
                    {::i2c::class_of<::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate::Invoke(bool  isActive)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isActive);
}
inline ::System::IAsyncResult* Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate::BeginInvoke(bool  isActive, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, isActive, callback, object);
}
inline void Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate* Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::DroneSystem_OnRequestDroneModeDelegate::DroneSystem_OnRequestDroneModeDelegate()   {
}
