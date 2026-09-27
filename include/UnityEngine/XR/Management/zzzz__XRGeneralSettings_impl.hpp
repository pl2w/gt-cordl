#pragma once
// IWYU pragma private; include "UnityEngine/XR/Management/XRGeneralSettings.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/XR/Management/zzzz__XRGeneralSettings_def.hpp"
#include "UnityEngine/XR/Management/zzzz__XRManagerSettings_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Management::XRGeneralSettings.get_Manager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Management::XRManagerSettings> (::UnityEngine::XR::Management::XRGeneralSettings::*)()>(&::UnityEngine::XR::Management::XRGeneralSettings::get_Manager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4de3fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Management::XRGeneralSettings*>(),
                        {"get_Manager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Management::XRGeneralSettings.set_Manager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Management::XRGeneralSettings::*)(::UnityEngine::XR::Management::XRManagerSettings*)>(&::UnityEngine::XR::Management::XRGeneralSettings::set_Manager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4de404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Management::XRGeneralSettings*>(),
                        {"set_Manager", {}, {::i2c::type_of<::UnityEngine::XR::Management::XRManagerSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Management::XRGeneralSettings.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Management::XRGeneralSettings> (*)()>(&::UnityEngine::XR::Management::XRGeneralSettings::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb4de40c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Management::XRGeneralSettings*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Management::XRGeneralSettings.get_AssignedSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Management::XRManagerSettings> (::UnityEngine::XR::Management::XRGeneralSettings::*)()>(&::UnityEngine::XR::Management::XRGeneralSettings::get_AssignedSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4de464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Management::XRGeneralSettings*>(),
                        {"get_AssignedSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Management::XRGeneralSettings.get_InitManagerOnStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Management::XRGeneralSettings::*)()>(&::UnityEngine::XR::Management::XRGeneralSettings::get_InitManagerOnStart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4de46c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Management::XRGeneralSettings*>(),
                        {"get_InitManagerOnStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Management::XRGeneralSettings.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Management::XRGeneralSettings::*)()>(&::UnityEngine::XR::Management::XRGeneralSettings::Awake)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xb4de474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Management::XRGeneralSettings*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Management::XRGeneralSettings.Quit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::XR::Management::XRGeneralSettings::Quit)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb4de5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Management::XRGeneralSettings*>(),
                        {"Quit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Management::XRGeneralSettings.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Management::XRGeneralSettings::*)()>(&::UnityEngine::XR::Management::XRGeneralSettings::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4de77c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Management::XRGeneralSettings*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Management::XRGeneralSettings.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Management::XRGeneralSettings::*)()>(&::UnityEngine::XR::Management::XRGeneralSettings::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4de830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Management::XRGeneralSettings*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Management::XRGeneralSettings.AttemptInitializeXRSDKOnLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::XR::Management::XRGeneralSettings::AttemptInitializeXRSDKOnLoad)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb4de834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Management::XRGeneralSettings*>(),
                        {"AttemptInitializeXRSDKOnLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Management::XRGeneralSettings.AttemptStartXRSDKOnBeforeSplashScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::XR::Management::XRGeneralSettings::AttemptStartXRSDKOnBeforeSplashScreen)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb4deba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Management::XRGeneralSettings*>(),
                        {"AttemptStartXRSDKOnBeforeSplashScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Management::XRGeneralSettings.InitXRSDK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Management::XRGeneralSettings::*)()>(&::UnityEngine::XR::Management::XRGeneralSettings::InitXRSDK)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0xb4de918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Management::XRGeneralSettings*>(),
                        {"InitXRSDK", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Management::XRGeneralSettings.StartXRSDK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Management::XRGeneralSettings::*)()>(&::UnityEngine::XR::Management::XRGeneralSettings::StartXRSDK)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4de780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Management::XRGeneralSettings*>(),
                        {"StartXRSDK", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Management::XRGeneralSettings.StopXRSDK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Management::XRGeneralSettings::*)()>(&::UnityEngine::XR::Management::XRGeneralSettings::StopXRSDK)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb4defcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Management::XRGeneralSettings*>(),
                        {"StopXRSDK", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Management::XRGeneralSettings.DeInitXRSDK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Management::XRGeneralSettings::*)()>(&::UnityEngine::XR::Management::XRGeneralSettings::DeInitXRSDK)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb4de6b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Management::XRGeneralSettings*>(),
                        {"DeInitXRSDK", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Management::XRGeneralSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Management::XRGeneralSettings::*)()>(&::UnityEngine::XR::Management::XRGeneralSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4df248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Management::XRGeneralSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::XR::Management::XRManagerSettings>& UnityEngine::XR::Management::XRGeneralSettings::__cordl_internal_get_m_LoaderManagerInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoaderManagerInstance;
}
constexpr ::UnityW<::UnityEngine::XR::Management::XRManagerSettings> const& UnityEngine::XR::Management::XRGeneralSettings::__cordl_internal_get_m_LoaderManagerInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoaderManagerInstance;
}
constexpr void UnityEngine::XR::Management::XRGeneralSettings::__cordl_internal_set_m_LoaderManagerInstance(::UnityW<::UnityEngine::XR::Management::XRManagerSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LoaderManagerInstance = value;
}
constexpr bool& UnityEngine::XR::Management::XRGeneralSettings::__cordl_internal_get_m_InitManagerOnStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InitManagerOnStart;
}
constexpr bool const& UnityEngine::XR::Management::XRGeneralSettings::__cordl_internal_get_m_InitManagerOnStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InitManagerOnStart;
}
constexpr void UnityEngine::XR::Management::XRGeneralSettings::__cordl_internal_set_m_InitManagerOnStart(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InitManagerOnStart = value;
}
constexpr ::UnityW<::UnityEngine::XR::Management::XRManagerSettings>& UnityEngine::XR::Management::XRGeneralSettings::__cordl_internal_get_m_XRManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XRManager;
}
constexpr ::UnityW<::UnityEngine::XR::Management::XRManagerSettings> const& UnityEngine::XR::Management::XRGeneralSettings::__cordl_internal_get_m_XRManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XRManager;
}
constexpr void UnityEngine::XR::Management::XRGeneralSettings::__cordl_internal_set_m_XRManager(::UnityW<::UnityEngine::XR::Management::XRManagerSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_XRManager = value;
}
constexpr bool& UnityEngine::XR::Management::XRGeneralSettings::__cordl_internal_get_m_ProviderIntialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ProviderIntialized;
}
constexpr bool const& UnityEngine::XR::Management::XRGeneralSettings::__cordl_internal_get_m_ProviderIntialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ProviderIntialized;
}
constexpr void UnityEngine::XR::Management::XRGeneralSettings::__cordl_internal_set_m_ProviderIntialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ProviderIntialized = value;
}
constexpr bool& UnityEngine::XR::Management::XRGeneralSettings::__cordl_internal_get_m_ProviderStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ProviderStarted;
}
constexpr bool const& UnityEngine::XR::Management::XRGeneralSettings::__cordl_internal_get_m_ProviderStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ProviderStarted;
}
constexpr void UnityEngine::XR::Management::XRGeneralSettings::__cordl_internal_set_m_ProviderStarted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ProviderStarted = value;
}
inline void UnityEngine::XR::Management::XRGeneralSettings::setStaticF_k_SettingsKey(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "k_SettingsKey", ::UnityEngine::XR::Management::XRGeneralSettings*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::XR::Management::XRGeneralSettings::getStaticF_k_SettingsKey()  {
return ::cordl_internals::getStaticField<::StringW, "k_SettingsKey", ::UnityEngine::XR::Management::XRGeneralSettings*>();
}
inline void UnityEngine::XR::Management::XRGeneralSettings::setStaticF_s_RuntimeSettingsInstance(::UnityW<::UnityEngine::XR::Management::XRGeneralSettings>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::XR::Management::XRGeneralSettings>, "s_RuntimeSettingsInstance", ::UnityEngine::XR::Management::XRGeneralSettings*>(std::forward<::UnityW<::UnityEngine::XR::Management::XRGeneralSettings>>(value));
}
inline ::UnityW<::UnityEngine::XR::Management::XRGeneralSettings> UnityEngine::XR::Management::XRGeneralSettings::getStaticF_s_RuntimeSettingsInstance()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::XR::Management::XRGeneralSettings>, "s_RuntimeSettingsInstance", ::UnityEngine::XR::Management::XRGeneralSettings*>();
}
inline ::UnityW<::UnityEngine::XR::Management::XRManagerSettings> UnityEngine::XR::Management::XRGeneralSettings::get_Manager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Management::XRGeneralSettings*>(),
                        {"get_Manager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Management::XRManagerSettings>>(this, ___internal_method);
}
inline void UnityEngine::XR::Management::XRGeneralSettings::set_Manager(::UnityEngine::XR::Management::XRManagerSettings*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Management::XRGeneralSettings*>(),
                        {"set_Manager", {}, {::i2c::type_of<::UnityEngine::XR::Management::XRManagerSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::XR::Management::XRGeneralSettings> UnityEngine::XR::Management::XRGeneralSettings::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Management::XRGeneralSettings*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Management::XRGeneralSettings>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::XR::Management::XRManagerSettings> UnityEngine::XR::Management::XRGeneralSettings::get_AssignedSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Management::XRGeneralSettings*>(),
                        {"get_AssignedSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Management::XRManagerSettings>>(this, ___internal_method);
}
inline bool UnityEngine::XR::Management::XRGeneralSettings::get_InitManagerOnStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Management::XRGeneralSettings*>(),
                        {"get_InitManagerOnStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Management::XRGeneralSettings::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Management::XRGeneralSettings*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Management::XRGeneralSettings::Quit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Management::XRGeneralSettings*>(),
                        {"Quit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Management::XRGeneralSettings::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Management::XRGeneralSettings*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Management::XRGeneralSettings::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Management::XRGeneralSettings*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Management::XRGeneralSettings::AttemptInitializeXRSDKOnLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Management::XRGeneralSettings*>(),
                        {"AttemptInitializeXRSDKOnLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Management::XRGeneralSettings::AttemptStartXRSDKOnBeforeSplashScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Management::XRGeneralSettings*>(),
                        {"AttemptStartXRSDKOnBeforeSplashScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Management::XRGeneralSettings::InitXRSDK()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Management::XRGeneralSettings*>(),
                        {"InitXRSDK", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Management::XRGeneralSettings::StartXRSDK()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Management::XRGeneralSettings*>(),
                        {"StartXRSDK", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Management::XRGeneralSettings::StopXRSDK()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Management::XRGeneralSettings*>(),
                        {"StopXRSDK", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Management::XRGeneralSettings::DeInitXRSDK()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Management::XRGeneralSettings*>(),
                        {"DeInitXRSDK", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Management::XRGeneralSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Management::XRGeneralSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Management::XRGeneralSettings* UnityEngine::XR::Management::XRGeneralSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Management::XRGeneralSettings*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Management::XRGeneralSettings::XRGeneralSettings()   {
}
