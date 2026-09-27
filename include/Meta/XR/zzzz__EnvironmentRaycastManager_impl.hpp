#pragma once
// IWYU pragma private; include "Meta/XR/EnvironmentRaycastManager.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/zzzz__EnvironmentRaycastManager_def.hpp"
#include "Meta/XR/EnvironmentDepth/zzzz__EnvironmentDepthManager_def.hpp"
#include "Meta/XR/zzzz__DepthRaycastHit_def.hpp"
#include "Meta/XR/zzzz__DepthRaycastResult_def.hpp"
#include "Meta/XR/zzzz__EnvironmentRaycastHitStatus_def.hpp"
#include "Meta/XR/zzzz__EnvironmentRaycastHit_def.hpp"
#include "Meta/XR/zzzz__EnvironmentRaycastManager_def.hpp"
#include "Meta/XR/zzzz__IEnvironmentRaycastProvider_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Meta::XR::EnvironmentRaycastManager.CreateProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::IEnvironmentRaycastProvider* (*)()>(&::Meta::XR::EnvironmentRaycastManager::CreateProvider)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9f02828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager*>(),
                        {"CreateProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentRaycastManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::EnvironmentRaycastManager::*)()>(&::Meta::XR::EnvironmentRaycastManager::Awake)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9f02884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentRaycastManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::EnvironmentRaycastManager::*)()>(&::Meta::XR::EnvironmentRaycastManager::OnDestroy)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9f02abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentRaycastManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::EnvironmentRaycastManager::*)()>(&::Meta::XR::EnvironmentRaycastManager::Start)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9f02b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentRaycastManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::EnvironmentRaycastManager::*)()>(&::Meta::XR::EnvironmentRaycastManager::OnEnable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9f02bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentRaycastManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::EnvironmentRaycastManager::*)()>(&::Meta::XR::EnvironmentRaycastManager::OnDisable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9f02d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentRaycastManager.SetProviderEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Meta::XR::EnvironmentRaycastManager::SetProviderEnabled)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9f02c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager*>(),
                        {"SetProviderEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentRaycastManager.get_IsSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Meta::XR::EnvironmentRaycastManager::get_IsSupported)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x9f02948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager*>(),
                        {"get_IsSupported", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentRaycastManager.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::EnvironmentRaycastManager::*)(::UnityEngine::Ray, ::by_ref<::Meta::XR::EnvironmentRaycastHit>, float_t)>(&::Meta::XR::EnvironmentRaycastManager::Raycast)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x9f02d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::Meta::XR::EnvironmentRaycastHit>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentRaycastManager.ToEnvRaycastHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::EnvironmentRaycastHit (*)(::Meta::XR::DepthRaycastHit)>(&::Meta::XR::EnvironmentRaycastManager::ToEnvRaycastHit)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9f03028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager*>(),
                        {"ToEnvRaycastHit", {}, {::i2c::type_of<::Meta::XR::DepthRaycastHit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentRaycastManager.PlaceBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::EnvironmentRaycastManager::*)(::UnityEngine::Ray, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::Meta::XR::EnvironmentRaycastHit>)>(&::Meta::XR::EnvironmentRaycastManager::PlaceBox)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x9f03158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager*>(),
                        {"PlaceBox", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::Meta::XR::EnvironmentRaycastHit>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentRaycastManager.CheckBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::EnvironmentRaycastManager::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Meta::XR::EnvironmentRaycastManager::CheckBox)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x9f0328c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager*>(),
                        {"CheckBox", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentRaycastManager.get_IsReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::EnvironmentRaycastManager::*)()>(&::Meta::XR::EnvironmentRaycastManager::get_IsReady)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x9f02ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager*>(),
                        {"get_IsReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentRaycastManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::EnvironmentRaycastManager::*)()>(&::Meta::XR::EnvironmentRaycastManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f03388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentRaycastManager._ToEnvRaycastHit_g__ToStatus_14_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::EnvironmentRaycastHitStatus (*)(::Meta::XR::DepthRaycastResult)>(&::Meta::XR::EnvironmentRaycastManager::_ToEnvRaycastHit_g__ToStatus_14_0)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9f030d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager*>(),
                        {"<ToEnvRaycastHit>g__ToStatus|14_0", {}, {::i2c::type_of<::Meta::XR::DepthRaycastResult>()}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::XR::EnvironmentRaycastManager::setStaticF__instance(::UnityW<::Meta::XR::EnvironmentRaycastManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::Meta::XR::EnvironmentRaycastManager>, "_instance", ::Meta::XR::EnvironmentRaycastManager*>(std::forward<::UnityW<::Meta::XR::EnvironmentRaycastManager>>(value));
}
inline ::UnityW<::Meta::XR::EnvironmentRaycastManager> Meta::XR::EnvironmentRaycastManager::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::Meta::XR::EnvironmentRaycastManager>, "_instance", ::Meta::XR::EnvironmentRaycastManager*>();
}
inline void Meta::XR::EnvironmentRaycastManager::setStaticF__provider(::Meta::XR::IEnvironmentRaycastProvider*  value)  {
::cordl_internals::setStaticField<::Meta::XR::IEnvironmentRaycastProvider*, "_provider", ::Meta::XR::EnvironmentRaycastManager*>(std::forward<::Meta::XR::IEnvironmentRaycastProvider*>(value));
}
inline ::Meta::XR::IEnvironmentRaycastProvider* Meta::XR::EnvironmentRaycastManager::getStaticF__provider()  {
return ::cordl_internals::getStaticField<::Meta::XR::IEnvironmentRaycastProvider*, "_provider", ::Meta::XR::EnvironmentRaycastManager*>();
}
inline void Meta::XR::EnvironmentRaycastManager::setStaticF__isSupported(::System::Nullable_1<bool>  value)  {
::cordl_internals::setStaticField<::System::Nullable_1<bool>, "_isSupported", ::Meta::XR::EnvironmentRaycastManager*>(std::forward<::System::Nullable_1<bool>>(value));
}
inline ::System::Nullable_1<bool> Meta::XR::EnvironmentRaycastManager::getStaticF__isSupported()  {
return ::cordl_internals::getStaticField<::System::Nullable_1<bool>, "_isSupported", ::Meta::XR::EnvironmentRaycastManager*>();
}
inline ::Meta::XR::IEnvironmentRaycastProvider* Meta::XR::EnvironmentRaycastManager::CreateProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager*>(),
                        {"CreateProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::XR::IEnvironmentRaycastProvider*>(nullptr, ___internal_method);
}
inline void Meta::XR::EnvironmentRaycastManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::EnvironmentRaycastManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::EnvironmentRaycastManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::EnvironmentRaycastManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::EnvironmentRaycastManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::EnvironmentRaycastManager::SetProviderEnabled(bool  isEnabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager*>(),
                        {"SetProviderEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, isEnabled);
}
inline bool Meta::XR::EnvironmentRaycastManager::get_IsSupported()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager*>(),
                        {"get_IsSupported", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Meta::XR::EnvironmentRaycastManager::Raycast(::UnityEngine::Ray  ray, ::by_ref<::Meta::XR::EnvironmentRaycastHit>  hit, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::Meta::XR::EnvironmentRaycastHit>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ray, hit, maxDistance);
}
inline ::Meta::XR::EnvironmentRaycastHit Meta::XR::EnvironmentRaycastManager::ToEnvRaycastHit(::Meta::XR::DepthRaycastHit  depthHit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager*>(),
                        {"ToEnvRaycastHit", {}, {::i2c::type_of<::Meta::XR::DepthRaycastHit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::XR::EnvironmentRaycastHit>(nullptr, ___internal_method, depthHit);
}
inline bool Meta::XR::EnvironmentRaycastManager::PlaceBox(::UnityEngine::Ray  ray, ::UnityEngine::Vector3  boxSize, ::UnityEngine::Vector3  upwards, ::by_ref<::Meta::XR::EnvironmentRaycastHit>  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager*>(),
                        {"PlaceBox", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::Meta::XR::EnvironmentRaycastHit>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ray, boxSize, upwards, hit);
}
inline bool Meta::XR::EnvironmentRaycastManager::CheckBox(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Quaternion  orientation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager*>(),
                        {"CheckBox", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, center, halfExtents, orientation);
}
inline bool Meta::XR::EnvironmentRaycastManager::get_IsReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager*>(),
                        {"get_IsReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::EnvironmentRaycastManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::EnvironmentRaycastHitStatus Meta::XR::EnvironmentRaycastManager::_ToEnvRaycastHit_g__ToStatus_14_0(::Meta::XR::DepthRaycastResult  depthHitResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager*>(),
                        {"<ToEnvRaycastHit>g__ToStatus|14_0", {}, {::i2c::type_of<::Meta::XR::DepthRaycastResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::XR::EnvironmentRaycastHitStatus>(nullptr, ___internal_method, depthHitResult);
}
inline ::Meta::XR::EnvironmentRaycastManager* Meta::XR::EnvironmentRaycastManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::EnvironmentRaycastManager*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::EnvironmentRaycastManager::EnvironmentRaycastManager()   {
}
//  Writing Method size for method: ::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager.Meta_XR_IEnvironmentRaycastProvider_get_IsReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager::*)()>(&::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager::Meta_XR_IEnvironmentRaycastProvider_get_IsReady)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9f033e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager*>(),
                        {"Meta.XR.IEnvironmentRaycastProvider.get_IsReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager.EnsureDepthManagerIsPresent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager::*)()>(&::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager::EnsureDepthManagerIsPresent)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x9f034a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager*>(),
                        {"EnsureDepthManagerIsPresent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager.Meta_XR_IEnvironmentRaycastProvider_SetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager::*)(bool)>(&::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager::Meta_XR_IEnvironmentRaycastProvider_SetEnabled)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x9f03628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager*>(),
                        {"Meta.XR.IEnvironmentRaycastProvider.SetEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager.Meta_XR_IEnvironmentRaycastProvider_get_IsSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager::*)()>(&::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager::Meta_XR_IEnvironmentRaycastProvider_get_IsSupported)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9f037b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager*>(),
                        {"Meta.XR.IEnvironmentRaycastProvider.get_IsSupported", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager.Meta_XR_IEnvironmentRaycastProvider_Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager::*)(::UnityEngine::Ray, ::by_ref<::Meta::XR::EnvironmentRaycastHit>, float_t, bool, bool)>(&::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager::Meta_XR_IEnvironmentRaycastProvider_Raycast)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9f03804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager*>(),
                        {"Meta.XR.IEnvironmentRaycastProvider.Raycast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::Meta::XR::EnvironmentRaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager::*)()>(&::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f0287c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager>& Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager::__cordl_internal_get__depthManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____depthManager;
}
constexpr ::UnityW<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager> const& Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager::__cordl_internal_get__depthManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____depthManager;
}
constexpr void Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager::__cordl_internal_set__depthManager(::UnityW<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____depthManager = value;
}
inline bool Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager::Meta_XR_IEnvironmentRaycastProvider_get_IsReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager*>(),
                        {"Meta.XR.IEnvironmentRaycastProvider.get_IsReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager::EnsureDepthManagerIsPresent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager*>(),
                        {"EnsureDepthManagerIsPresent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager::Meta_XR_IEnvironmentRaycastProvider_SetEnabled(bool  isEnabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager*>(),
                        {"Meta.XR.IEnvironmentRaycastProvider.SetEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isEnabled);
}
inline bool Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager::Meta_XR_IEnvironmentRaycastProvider_get_IsSupported()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager*>(),
                        {"Meta.XR.IEnvironmentRaycastProvider.get_IsSupported", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager::Meta_XR_IEnvironmentRaycastProvider_Raycast(::UnityEngine::Ray  ray, ::by_ref<::Meta::XR::EnvironmentRaycastHit>  hit, float_t  maxDistance, bool  reconstructNormal, bool  allowOccludedRayOrigin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager*>(),
                        {"Meta.XR.IEnvironmentRaycastProvider.Raycast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::Meta::XR::EnvironmentRaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ray, hit, maxDistance, reconstructNormal, allowOccludedRayOrigin);
}
inline void Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager* Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager*>());
}
/// @brief Convert operator to "::Meta::XR::IEnvironmentRaycastProvider"
constexpr  Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager::operator ::Meta::XR::IEnvironmentRaycastProvider*() noexcept {
return static_cast<::Meta::XR::IEnvironmentRaycastProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::XR::IEnvironmentRaycastProvider"
constexpr ::Meta::XR::IEnvironmentRaycastProvider* Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager::i___Meta__XR__IEnvironmentRaycastProvider() noexcept {
return static_cast<::Meta::XR::IEnvironmentRaycastProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager()   {
}
