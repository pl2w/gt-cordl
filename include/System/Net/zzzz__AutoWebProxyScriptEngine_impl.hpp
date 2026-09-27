#pragma once
// IWYU pragma private; include "System/Net/AutoWebProxyScriptEngine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__AutoWebProxyScriptEngine_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Net/zzzz__WebProxy_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::AutoWebProxyScriptEngine._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::AutoWebProxyScriptEngine::*)(::System::Net::WebProxy*, bool)>(&::System::Net::AutoWebProxyScriptEngine::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac86b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AutoWebProxyScriptEngine*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::WebProxy*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AutoWebProxyScriptEngine.get_AutomaticConfigurationScript
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Net::AutoWebProxyScriptEngine::*)()>(&::System::Net::AutoWebProxyScriptEngine::get_AutomaticConfigurationScript)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac883b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AutoWebProxyScriptEngine*>(),
                        {"get_AutomaticConfigurationScript", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AutoWebProxyScriptEngine.set_AutomaticConfigurationScript
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::AutoWebProxyScriptEngine::*)(::System::Uri*)>(&::System::Net::AutoWebProxyScriptEngine::set_AutomaticConfigurationScript)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac883b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AutoWebProxyScriptEngine*>(),
                        {"set_AutomaticConfigurationScript", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AutoWebProxyScriptEngine.get_AutomaticallyDetectSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::AutoWebProxyScriptEngine::*)()>(&::System::Net::AutoWebProxyScriptEngine::get_AutomaticallyDetectSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac883c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AutoWebProxyScriptEngine*>(),
                        {"get_AutomaticallyDetectSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AutoWebProxyScriptEngine.set_AutomaticallyDetectSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::AutoWebProxyScriptEngine::*)(bool)>(&::System::Net::AutoWebProxyScriptEngine::set_AutomaticallyDetectSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac883c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AutoWebProxyScriptEngine*>(),
                        {"set_AutomaticallyDetectSettings", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AutoWebProxyScriptEngine.GetProxies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::AutoWebProxyScriptEngine::*)(::System::Uri*, ::by_ref<::System::Collections::Generic::IList_1<::StringW>*>)>(&::System::Net::AutoWebProxyScriptEngine::GetProxies)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xac87ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AutoWebProxyScriptEngine*>(),
                        {"GetProxies", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::IList_1<::StringW>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AutoWebProxyScriptEngine.GetProxies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::AutoWebProxyScriptEngine::*)(::System::Uri*, ::by_ref<::System::Collections::Generic::IList_1<::StringW>*>, ::by_ref<int32_t>)>(&::System::Net::AutoWebProxyScriptEngine::GetProxies)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xac882c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AutoWebProxyScriptEngine*>(),
                        {"GetProxies", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::IList_1<::StringW>*>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AutoWebProxyScriptEngine.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::AutoWebProxyScriptEngine::*)()>(&::System::Net::AutoWebProxyScriptEngine::Close)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac87c98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AutoWebProxyScriptEngine*>(),
                        {"Close", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AutoWebProxyScriptEngine.Abort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::AutoWebProxyScriptEngine::*)(::by_ref<int32_t>)>(&::System::Net::AutoWebProxyScriptEngine::Abort)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac882e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AutoWebProxyScriptEngine*>(),
                        {"Abort", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AutoWebProxyScriptEngine.CheckForChanges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::AutoWebProxyScriptEngine::*)()>(&::System::Net::AutoWebProxyScriptEngine::CheckForChanges)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac86ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AutoWebProxyScriptEngine*>(),
                        {"CheckForChanges", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Uri*& System::Net::AutoWebProxyScriptEngine::__cordl_internal_get__AutomaticConfigurationScript_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AutomaticConfigurationScript_k__BackingField;
}
constexpr ::System::Uri* const& System::Net::AutoWebProxyScriptEngine::__cordl_internal_get__AutomaticConfigurationScript_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AutomaticConfigurationScript_k__BackingField;
}
constexpr void System::Net::AutoWebProxyScriptEngine::__cordl_internal_set__AutomaticConfigurationScript_k__BackingField(::System::Uri*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AutomaticConfigurationScript_k__BackingField = value;
}
constexpr bool& System::Net::AutoWebProxyScriptEngine::__cordl_internal_get__AutomaticallyDetectSettings_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AutomaticallyDetectSettings_k__BackingField;
}
constexpr bool const& System::Net::AutoWebProxyScriptEngine::__cordl_internal_get__AutomaticallyDetectSettings_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AutomaticallyDetectSettings_k__BackingField;
}
constexpr void System::Net::AutoWebProxyScriptEngine::__cordl_internal_set__AutomaticallyDetectSettings_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AutomaticallyDetectSettings_k__BackingField = value;
}
inline void System::Net::AutoWebProxyScriptEngine::_ctor(::System::Net::WebProxy*  proxy, bool  useRegistry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AutoWebProxyScriptEngine*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::WebProxy*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, proxy, useRegistry);
}
inline ::System::Uri* System::Net::AutoWebProxyScriptEngine::get_AutomaticConfigurationScript()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AutoWebProxyScriptEngine*>(),
                        {"get_AutomaticConfigurationScript", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline void System::Net::AutoWebProxyScriptEngine::set_AutomaticConfigurationScript(::System::Uri*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AutoWebProxyScriptEngine*>(),
                        {"set_AutomaticConfigurationScript", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::AutoWebProxyScriptEngine::get_AutomaticallyDetectSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AutoWebProxyScriptEngine*>(),
                        {"get_AutomaticallyDetectSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::AutoWebProxyScriptEngine::set_AutomaticallyDetectSettings(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AutoWebProxyScriptEngine*>(),
                        {"set_AutomaticallyDetectSettings", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::AutoWebProxyScriptEngine::GetProxies(::System::Uri*  destination, ::by_ref<::System::Collections::Generic::IList_1<::StringW>*>  proxyList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AutoWebProxyScriptEngine*>(),
                        {"GetProxies", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::IList_1<::StringW>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, destination, proxyList);
}
inline bool System::Net::AutoWebProxyScriptEngine::GetProxies(::System::Uri*  destination, ::by_ref<::System::Collections::Generic::IList_1<::StringW>*>  proxyList, ::by_ref<int32_t>  syncStatus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AutoWebProxyScriptEngine*>(),
                        {"GetProxies", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::IList_1<::StringW>*>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, destination, proxyList, syncStatus);
}
inline void System::Net::AutoWebProxyScriptEngine::Close()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AutoWebProxyScriptEngine*>(),
                        {"Close", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::AutoWebProxyScriptEngine::Abort(::by_ref<int32_t>  syncStatus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AutoWebProxyScriptEngine*>(),
                        {"Abort", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, syncStatus);
}
inline void System::Net::AutoWebProxyScriptEngine::CheckForChanges()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::AutoWebProxyScriptEngine*>(),
                        {"CheckForChanges", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::AutoWebProxyScriptEngine* System::Net::AutoWebProxyScriptEngine::New_ctor(::System::Net::WebProxy*  proxy, bool  useRegistry)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::AutoWebProxyScriptEngine*>(proxy, useRegistry));
}
// Ctor Parameters []
constexpr ::System::Net::AutoWebProxyScriptEngine::AutoWebProxyScriptEngine()   {
}
