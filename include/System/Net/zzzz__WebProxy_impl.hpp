#pragma once
// IWYU pragma private; include "System/Net/WebProxy.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__WebProxy_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Net/zzzz__AutoWebProxyScriptEngine_def.hpp"
#include "System/Net/zzzz__IAutoWebProxy_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/Net/zzzz__ProxyChain_def.hpp"
#include "System/Net/zzzz__WebProxyData_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::WebProxy._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxy::*)()>(&::System::Net::WebProxy::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xac86424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxy::*)(::System::Uri*)>(&::System::Net::WebProxy::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xac8650c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxy::*)(::System::Uri*, bool)>(&::System::Net::WebProxy::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xac8651c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxy::*)(::System::Uri*, bool, ::ArrayW<::StringW>)>(&::System::Net::WebProxy::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac86528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxy::*)(::System::Uri*, bool, ::ArrayW<::StringW>, ::System::Net::ICredentials*)>(&::System::Net::WebProxy::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xac86438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Net::ICredentials*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxy::*)(::StringW, int32_t)>(&::System::Net::WebProxy::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xac86784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxy::*)(::StringW)>(&::System::Net::WebProxy::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xac86894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxy::*)(::StringW, bool)>(&::System::Net::WebProxy::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xac8697c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxy::*)(::StringW, bool, ::ArrayW<::StringW>)>(&::System::Net::WebProxy::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xac869b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxy::*)(::StringW, bool, ::ArrayW<::StringW>, ::System::Net::ICredentials*)>(&::System::Net::WebProxy::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xac869f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Net::ICredentials*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.get_Address
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Net::WebProxy::*)()>(&::System::Net::WebProxy::get_Address)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac86a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"get_Address", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.set_Address
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxy::*)(::System::Uri*)>(&::System::Net::WebProxy::set_Address)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xac86a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"set_Address", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.set_AutoDetect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxy::*)(bool)>(&::System::Net::WebProxy::set_AutoDetect)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xac86aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"set_AutoDetect", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.set_ScriptLocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxy::*)(::System::Uri*)>(&::System::Net::WebProxy::set_ScriptLocation)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xac86b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"set_ScriptLocation", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.get_BypassProxyOnLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebProxy::*)()>(&::System::Net::WebProxy::get_BypassProxyOnLocal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac86bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"get_BypassProxyOnLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.set_BypassProxyOnLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxy::*)(bool)>(&::System::Net::WebProxy::set_BypassProxyOnLocal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xac86bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"set_BypassProxyOnLocal", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.get_BypassList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Net::WebProxy::*)()>(&::System::Net::WebProxy::get_BypassList)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xac86bfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"get_BypassList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.set_BypassList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxy::*)(::ArrayW<::StringW>)>(&::System::Net::WebProxy::set_BypassList)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xac86cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"set_BypassList", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.get_Credentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ICredentials* (::System::Net::WebProxy::*)()>(&::System::Net::WebProxy::get_Credentials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac86d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"get_Credentials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.set_Credentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxy::*)(::System::Net::ICredentials*)>(&::System::Net::WebProxy::set_Credentials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac86d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"set_Credentials", {}, {::i2c::type_of<::System::Net::ICredentials*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.get_UseDefaultCredentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebProxy::*)()>(&::System::Net::WebProxy::get_UseDefaultCredentials)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xac86d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"get_UseDefaultCredentials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.set_UseDefaultCredentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxy::*)(bool)>(&::System::Net::WebProxy::set_UseDefaultCredentials)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xac86e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"set_UseDefaultCredentials", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.get_BypassArrayList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (::System::Net::WebProxy::*)()>(&::System::Net::WebProxy::get_BypassArrayList)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xac86e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"get_BypassArrayList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.CheckForChanges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxy::*)()>(&::System::Net::WebProxy::CheckForChanges)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac86ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"CheckForChanges", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.GetProxy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Net::WebProxy::*)(::System::Uri*)>(&::System::Net::WebProxy::GetProxy)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xac86ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"GetProxy", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.CreateProxyUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (*)(::StringW)>(&::System::Net::WebProxy::CreateProxyUri)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xac868c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"CreateProxyUri", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.UpdateRegExList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxy::*)(bool)>(&::System::Net::WebProxy::UpdateRegExList)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0xac86530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"UpdateRegExList", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.IsMatchInBypassList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebProxy::*)(::System::Uri*)>(&::System::Net::WebProxy::IsMatchInBypassList)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xac871bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"IsMatchInBypassList", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.IsLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebProxy::*)(::System::Uri*)>(&::System::Net::WebProxy::IsLocal)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xac87354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"IsLocal", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.IsLocalInProxyHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebProxy::*)(::System::Uri*)>(&::System::Net::WebProxy::IsLocalInProxyHash)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xac874b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"IsLocalInProxyHash", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.IsBypassed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebProxy::*)(::System::Uri*)>(&::System::Net::WebProxy::IsBypassed)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xac875a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"IsBypassed", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.IsBypassedManual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebProxy::*)(::System::Uri*)>(&::System::Net::WebProxy::IsBypassedManual)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xac870f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"IsBypassedManual", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.GetDefaultProxy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebProxy* (*)()>(&::System::Net::WebProxy::GetDefaultProxy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xac876dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"GetDefaultProxy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxy::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::WebProxy::_ctor)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0xac8776c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.System_Runtime_Serialization_ISerializable_GetObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxy::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::WebProxy::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xac87af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"System.Runtime.Serialization.ISerializable.GetObjectData", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.GetObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxy::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::WebProxy::GetObjectData)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xac87b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebProxy*>(),
                    {::i2c::class_of<::System::Net::WebProxy*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.get_ScriptEngine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::AutoWebProxyScriptEngine* (::System::Net::WebProxy::*)()>(&::System::Net::WebProxy::get_ScriptEngine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac87c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"get_ScriptEngine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.set_ScriptEngine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxy::*)(::System::Net::AutoWebProxyScriptEngine*)>(&::System::Net::WebProxy::set_ScriptEngine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac87c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"set_ScriptEngine", {}, {::i2c::type_of<::System::Net::AutoWebProxyScriptEngine*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.CreateDefaultProxy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IWebProxy* (*)()>(&::System::Net::WebProxy::CreateDefaultProxy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xac87c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"CreateDefaultProxy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxy::*)(bool)>(&::System::Net::WebProxy::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xac8773c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.DeleteScriptEngine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxy::*)()>(&::System::Net::WebProxy::DeleteScriptEngine)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xac86a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"DeleteScriptEngine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.UnsafeUpdateFromRegistry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxy::*)()>(&::System::Net::WebProxy::UnsafeUpdateFromRegistry)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xac87aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"UnsafeUpdateFromRegistry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxy::*)(::System::Net::WebProxyData*)>(&::System::Net::WebProxy::Update)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xac87c9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"Update", {}, {::i2c::type_of<::System::Net::WebProxyData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.System_Net_IAutoWebProxy_GetProxies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ProxyChain* (::System::Net::WebProxy::*)(::System::Uri*)>(&::System::Net::WebProxy::System_Net_IAutoWebProxy_GetProxies)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xac87ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"System.Net.IAutoWebProxy.GetProxies", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.GetProxyAuto
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebProxy::*)(::System::Uri*, ::by_ref<::System::Uri*>)>(&::System::Net::WebProxy::GetProxyAuto)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xac87074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"GetProxyAuto", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::by_ref<::System::Uri*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.IsBypassedAuto
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebProxy::*)(::System::Uri*, ::by_ref<bool>)>(&::System::Net::WebProxy::IsBypassedAuto)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xac87670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"IsBypassedAuto", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.GetProxiesAuto
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Uri*> (::System::Net::WebProxy::*)(::System::Uri*, ::by_ref<int32_t>)>(&::System::Net::WebProxy::GetProxiesAuto)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xac88250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"GetProxiesAuto", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.AbortGetProxiesAuto
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebProxy::*)(::by_ref<int32_t>)>(&::System::Net::WebProxy::AbortGetProxiesAuto)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac882e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"AbortGetProxiesAuto", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.GetProxyAutoFailover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Net::WebProxy::*)(::System::Uri*)>(&::System::Net::WebProxy::GetProxyAutoFailover)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xac882e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"GetProxyAutoFailover", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.AreAllBypassed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::IEnumerable_1<::StringW>*, bool)>(&::System::Net::WebProxy::AreAllBypassed)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0xac87ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"AreAllBypassed", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebProxy.ProxyUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (*)(::StringW)>(&::System::Net::WebProxy::ProxyUri)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xac881b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"ProxyUri", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& System::Net::WebProxy::__cordl_internal_get__UseRegistry()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseRegistry;
}
constexpr bool const& System::Net::WebProxy::__cordl_internal_get__UseRegistry() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseRegistry;
}
constexpr void System::Net::WebProxy::__cordl_internal_set__UseRegistry(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UseRegistry = value;
}
constexpr bool& System::Net::WebProxy::__cordl_internal_get__BypassOnLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BypassOnLocal;
}
constexpr bool const& System::Net::WebProxy::__cordl_internal_get__BypassOnLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BypassOnLocal;
}
constexpr void System::Net::WebProxy::__cordl_internal_set__BypassOnLocal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BypassOnLocal = value;
}
constexpr bool& System::Net::WebProxy::__cordl_internal_get_m_EnableAutoproxy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableAutoproxy;
}
constexpr bool const& System::Net::WebProxy::__cordl_internal_get_m_EnableAutoproxy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableAutoproxy;
}
constexpr void System::Net::WebProxy::__cordl_internal_set_m_EnableAutoproxy(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EnableAutoproxy = value;
}
constexpr ::System::Uri*& System::Net::WebProxy::__cordl_internal_get__ProxyAddress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ProxyAddress;
}
constexpr ::System::Uri* const& System::Net::WebProxy::__cordl_internal_get__ProxyAddress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ProxyAddress;
}
constexpr void System::Net::WebProxy::__cordl_internal_set__ProxyAddress(::System::Uri*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ProxyAddress = value;
}
constexpr ::System::Collections::ArrayList*& System::Net::WebProxy::__cordl_internal_get__BypassList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BypassList;
}
constexpr ::System::Collections::ArrayList* const& System::Net::WebProxy::__cordl_internal_get__BypassList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BypassList;
}
constexpr void System::Net::WebProxy::__cordl_internal_set__BypassList(::System::Collections::ArrayList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BypassList = value;
}
constexpr ::System::Net::ICredentials*& System::Net::WebProxy::__cordl_internal_get__Credentials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Credentials;
}
constexpr ::System::Net::ICredentials* const& System::Net::WebProxy::__cordl_internal_get__Credentials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Credentials;
}
constexpr void System::Net::WebProxy::__cordl_internal_set__Credentials(::System::Net::ICredentials*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Credentials = value;
}
constexpr ::ArrayW<::System::Text::RegularExpressions::Regex*>& System::Net::WebProxy::__cordl_internal_get__RegExBypassList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RegExBypassList;
}
constexpr ::ArrayW<::System::Text::RegularExpressions::Regex*> const& System::Net::WebProxy::__cordl_internal_get__RegExBypassList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RegExBypassList;
}
constexpr void System::Net::WebProxy::__cordl_internal_set__RegExBypassList(::ArrayW<::System::Text::RegularExpressions::Regex*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RegExBypassList = value;
}
constexpr ::System::Collections::Hashtable*& System::Net::WebProxy::__cordl_internal_get__ProxyHostAddresses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ProxyHostAddresses;
}
constexpr ::System::Collections::Hashtable* const& System::Net::WebProxy::__cordl_internal_get__ProxyHostAddresses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ProxyHostAddresses;
}
constexpr void System::Net::WebProxy::__cordl_internal_set__ProxyHostAddresses(::System::Collections::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ProxyHostAddresses = value;
}
constexpr ::System::Net::AutoWebProxyScriptEngine*& System::Net::WebProxy::__cordl_internal_get_m_ScriptEngine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScriptEngine;
}
constexpr ::System::Net::AutoWebProxyScriptEngine* const& System::Net::WebProxy::__cordl_internal_get_m_ScriptEngine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScriptEngine;
}
constexpr void System::Net::WebProxy::__cordl_internal_set_m_ScriptEngine(::System::Net::AutoWebProxyScriptEngine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ScriptEngine = value;
}
inline void System::Net::WebProxy::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebProxy::_ctor(::System::Uri*  Address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Address);
}
inline void System::Net::WebProxy::_ctor(::System::Uri*  Address, bool  BypassOnLocal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Address, BypassOnLocal);
}
inline void System::Net::WebProxy::_ctor(::System::Uri*  Address, bool  BypassOnLocal, ::ArrayW<::StringW>  BypassList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Address, BypassOnLocal, BypassList);
}
inline void System::Net::WebProxy::_ctor(::System::Uri*  Address, bool  BypassOnLocal, ::ArrayW<::StringW>  BypassList, ::System::Net::ICredentials*  Credentials)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Net::ICredentials*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Address, BypassOnLocal, BypassList, Credentials);
}
inline void System::Net::WebProxy::_ctor(::StringW  Host, int32_t  Port)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Host, Port);
}
inline void System::Net::WebProxy::_ctor(::StringW  Address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Address);
}
inline void System::Net::WebProxy::_ctor(::StringW  Address, bool  BypassOnLocal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Address, BypassOnLocal);
}
inline void System::Net::WebProxy::_ctor(::StringW  Address, bool  BypassOnLocal, ::ArrayW<::StringW>  BypassList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Address, BypassOnLocal, BypassList);
}
inline void System::Net::WebProxy::_ctor(::StringW  Address, bool  BypassOnLocal, ::ArrayW<::StringW>  BypassList, ::System::Net::ICredentials*  Credentials)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Net::ICredentials*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Address, BypassOnLocal, BypassList, Credentials);
}
inline ::System::Uri* System::Net::WebProxy::get_Address()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"get_Address", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline void System::Net::WebProxy::set_Address(::System::Uri*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"set_Address", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::WebProxy::set_AutoDetect(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"set_AutoDetect", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::WebProxy::set_ScriptLocation(::System::Uri*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"set_ScriptLocation", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::WebProxy::get_BypassProxyOnLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"get_BypassProxyOnLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::WebProxy::set_BypassProxyOnLocal(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"set_BypassProxyOnLocal", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::StringW> System::Net::WebProxy::get_BypassList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"get_BypassList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline void System::Net::WebProxy::set_BypassList(::ArrayW<::StringW>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"set_BypassList", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::ICredentials* System::Net::WebProxy::get_Credentials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"get_Credentials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ICredentials*>(this, ___internal_method);
}
inline void System::Net::WebProxy::set_Credentials(::System::Net::ICredentials*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"set_Credentials", {}, {::i2c::type_of<::System::Net::ICredentials*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::WebProxy::get_UseDefaultCredentials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"get_UseDefaultCredentials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::WebProxy::set_UseDefaultCredentials(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"set_UseDefaultCredentials", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::ArrayList* System::Net::WebProxy::get_BypassArrayList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"get_BypassArrayList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method);
}
inline void System::Net::WebProxy::CheckForChanges()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"CheckForChanges", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Uri* System::Net::WebProxy::GetProxy(::System::Uri*  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"GetProxy", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method, destination);
}
inline ::System::Uri* System::Net::WebProxy::CreateProxyUri(::StringW  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"CreateProxyUri", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(nullptr, ___internal_method, address);
}
inline void System::Net::WebProxy::UpdateRegExList(bool  canThrow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"UpdateRegExList", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, canThrow);
}
inline bool System::Net::WebProxy::IsMatchInBypassList(::System::Uri*  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"IsMatchInBypassList", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, input);
}
inline bool System::Net::WebProxy::IsLocal(::System::Uri*  host)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"IsLocal", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, host);
}
inline bool System::Net::WebProxy::IsLocalInProxyHash(::System::Uri*  host)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"IsLocalInProxyHash", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, host);
}
inline bool System::Net::WebProxy::IsBypassed(::System::Uri*  host)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"IsBypassed", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, host);
}
inline bool System::Net::WebProxy::IsBypassedManual(::System::Uri*  host)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"IsBypassedManual", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, host);
}
inline ::System::Net::WebProxy* System::Net::WebProxy::GetDefaultProxy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"GetDefaultProxy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebProxy*>(nullptr, ___internal_method);
}
inline void System::Net::WebProxy::_ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Net::WebProxy::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"System.Runtime.Serialization.ISerializable.GetObjectData", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Net::WebProxy::GetObjectData(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebProxy*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline ::System::Net::AutoWebProxyScriptEngine* System::Net::WebProxy::get_ScriptEngine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"get_ScriptEngine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::AutoWebProxyScriptEngine*>(this, ___internal_method);
}
inline void System::Net::WebProxy::set_ScriptEngine(::System::Net::AutoWebProxyScriptEngine*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"set_ScriptEngine", {}, {::i2c::type_of<::System::Net::AutoWebProxyScriptEngine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::IWebProxy* System::Net::WebProxy::CreateDefaultProxy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"CreateDefaultProxy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IWebProxy*>(nullptr, ___internal_method);
}
inline void System::Net::WebProxy::_ctor(bool  enableAutoproxy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enableAutoproxy);
}
inline void System::Net::WebProxy::DeleteScriptEngine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"DeleteScriptEngine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebProxy::UnsafeUpdateFromRegistry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"UnsafeUpdateFromRegistry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebProxy::Update(::System::Net::WebProxyData*  webProxyData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"Update", {}, {::i2c::type_of<::System::Net::WebProxyData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, webProxyData);
}
inline ::System::Net::ProxyChain* System::Net::WebProxy::System_Net_IAutoWebProxy_GetProxies(::System::Uri*  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"System.Net.IAutoWebProxy.GetProxies", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ProxyChain*>(this, ___internal_method, destination);
}
inline bool System::Net::WebProxy::GetProxyAuto(::System::Uri*  destination, ::by_ref<::System::Uri*>  proxyUri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"GetProxyAuto", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::by_ref<::System::Uri*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, destination, proxyUri);
}
inline bool System::Net::WebProxy::IsBypassedAuto(::System::Uri*  destination, ::by_ref<bool>  isBypassed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"IsBypassedAuto", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, destination, isBypassed);
}
inline ::ArrayW<::System::Uri*> System::Net::WebProxy::GetProxiesAuto(::System::Uri*  destination, ::by_ref<int32_t>  syncStatus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"GetProxiesAuto", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Uri*>>(this, ___internal_method, destination, syncStatus);
}
inline void System::Net::WebProxy::AbortGetProxiesAuto(::by_ref<int32_t>  syncStatus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"AbortGetProxiesAuto", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, syncStatus);
}
inline ::System::Uri* System::Net::WebProxy::GetProxyAutoFailover(::System::Uri*  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"GetProxyAutoFailover", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method, destination);
}
inline bool System::Net::WebProxy::AreAllBypassed(::System::Collections::Generic::IEnumerable_1<::StringW>*  proxies, bool  checkFirstOnly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"AreAllBypassed", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, proxies, checkFirstOnly);
}
inline ::System::Uri* System::Net::WebProxy::ProxyUri(::StringW  proxyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebProxy*>(),
                        {"ProxyUri", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(nullptr, ___internal_method, proxyName);
}
inline ::System::Net::WebProxy* System::Net::WebProxy::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebProxy*>());
}
inline ::System::Net::WebProxy* System::Net::WebProxy::New_ctor(::System::Uri*  Address)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebProxy*>(Address));
}
inline ::System::Net::WebProxy* System::Net::WebProxy::New_ctor(::System::Uri*  Address, bool  BypassOnLocal)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebProxy*>(Address, BypassOnLocal));
}
inline ::System::Net::WebProxy* System::Net::WebProxy::New_ctor(::System::Uri*  Address, bool  BypassOnLocal, ::ArrayW<::StringW>  BypassList)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebProxy*>(Address, BypassOnLocal, BypassList));
}
inline ::System::Net::WebProxy* System::Net::WebProxy::New_ctor(::System::Uri*  Address, bool  BypassOnLocal, ::ArrayW<::StringW>  BypassList, ::System::Net::ICredentials*  Credentials)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebProxy*>(Address, BypassOnLocal, BypassList, Credentials));
}
inline ::System::Net::WebProxy* System::Net::WebProxy::New_ctor(::StringW  Host, int32_t  Port)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebProxy*>(Host, Port));
}
inline ::System::Net::WebProxy* System::Net::WebProxy::New_ctor(::StringW  Address)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebProxy*>(Address));
}
inline ::System::Net::WebProxy* System::Net::WebProxy::New_ctor(::StringW  Address, bool  BypassOnLocal)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebProxy*>(Address, BypassOnLocal));
}
inline ::System::Net::WebProxy* System::Net::WebProxy::New_ctor(::StringW  Address, bool  BypassOnLocal, ::ArrayW<::StringW>  BypassList)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebProxy*>(Address, BypassOnLocal, BypassList));
}
inline ::System::Net::WebProxy* System::Net::WebProxy::New_ctor(::StringW  Address, bool  BypassOnLocal, ::ArrayW<::StringW>  BypassList, ::System::Net::ICredentials*  Credentials)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebProxy*>(Address, BypassOnLocal, BypassList, Credentials));
}
inline ::System::Net::WebProxy* System::Net::WebProxy::New_ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebProxy*>(serializationInfo, streamingContext));
}
inline ::System::Net::WebProxy* System::Net::WebProxy::New_ctor(bool  enableAutoproxy)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebProxy*>(enableAutoproxy));
}
/// @brief Convert operator to "::System::Net::IAutoWebProxy"
constexpr  System::Net::WebProxy::operator ::System::Net::IAutoWebProxy*() noexcept {
return static_cast<::System::Net::IAutoWebProxy*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Net::IAutoWebProxy"
constexpr ::System::Net::IAutoWebProxy* System::Net::WebProxy::i___System__Net__IAutoWebProxy() noexcept {
return static_cast<::System::Net::IAutoWebProxy*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Net::IWebProxy"
constexpr  System::Net::WebProxy::operator ::System::Net::IWebProxy*() noexcept {
return static_cast<::System::Net::IWebProxy*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Net::IWebProxy"
constexpr ::System::Net::IWebProxy* System::Net::WebProxy::i___System__Net__IWebProxy() noexcept {
return static_cast<::System::Net::IWebProxy*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr  System::Net::WebProxy::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Net::WebProxy::i___System__Runtime__Serialization__ISerializable() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::WebProxy::WebProxy()   {
}
