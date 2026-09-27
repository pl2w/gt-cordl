#pragma once
// IWYU pragma private; include "System/Net/HttpWebRequest_AuthorizationState.hpp"
#include "System/Net/zzzz__HttpWebRequest_NtlmAuthState_impl.hpp"
#include "System/Net/zzzz__HttpWebRequest_AuthorizationState_def.hpp"
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
#include "System/Net/zzzz__HttpWebRequest_NtlmAuthState_def.hpp"
#include "System/Net/zzzz__HttpWebRequest_def.hpp"
#include "System/Net/zzzz__WebResponse_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HttpWebRequest_AuthorizationState.get_IsCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HttpWebRequest_AuthorizationState::*)()>(&::GlobalNamespace::HttpWebRequest_AuthorizationState::get_IsCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca6a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HttpWebRequest_AuthorizationState>(),
                        {"get_IsCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HttpWebRequest_AuthorizationState.get_NtlmAuthState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HttpWebRequest_NtlmAuthState (::GlobalNamespace::HttpWebRequest_AuthorizationState::*)()>(&::GlobalNamespace::HttpWebRequest_AuthorizationState::get_NtlmAuthState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca6a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HttpWebRequest_AuthorizationState>(),
                        {"get_NtlmAuthState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HttpWebRequest_AuthorizationState.get_IsNtlmAuthenticated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HttpWebRequest_AuthorizationState::*)()>(&::GlobalNamespace::HttpWebRequest_AuthorizationState::get_IsNtlmAuthenticated)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaca6a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HttpWebRequest_AuthorizationState>(),
                        {"get_IsNtlmAuthenticated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HttpWebRequest_AuthorizationState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HttpWebRequest_AuthorizationState::*)(::System::Net::HttpWebRequest*, bool)>(&::GlobalNamespace::HttpWebRequest_AuthorizationState::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xaca0be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HttpWebRequest_AuthorizationState>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::HttpWebRequest*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HttpWebRequest_AuthorizationState.CheckAuthorization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HttpWebRequest_AuthorizationState::*)(::System::Net::WebResponse*, ::System::Net::HttpStatusCode)>(&::GlobalNamespace::HttpWebRequest_AuthorizationState::CheckAuthorization)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0xaca5ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HttpWebRequest_AuthorizationState>(),
                        {"CheckAuthorization", {}, {::i2c::type_of<::System::Net::WebResponse*>(), ::i2c::type_of<::System::Net::HttpStatusCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HttpWebRequest_AuthorizationState.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HttpWebRequest_AuthorizationState::*)()>(&::GlobalNamespace::HttpWebRequest_AuthorizationState::Reset)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xaca678c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HttpWebRequest_AuthorizationState>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HttpWebRequest_AuthorizationState.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::HttpWebRequest_AuthorizationState::*)()>(&::GlobalNamespace::HttpWebRequest_AuthorizationState::ToString)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xaca6a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HttpWebRequest_AuthorizationState>(),
                    {::i2c::class_of<::GlobalNamespace::HttpWebRequest_AuthorizationState>(), 3}
                ));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::HttpWebRequest_AuthorizationState::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HttpWebRequest_AuthorizationState>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::GlobalNamespace::HttpWebRequest_NtlmAuthState GlobalNamespace::HttpWebRequest_AuthorizationState::get_NtlmAuthState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HttpWebRequest_AuthorizationState>(),
                        {"get_NtlmAuthState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HttpWebRequest_NtlmAuthState>(*this, ___internal_method);
}
inline bool GlobalNamespace::HttpWebRequest_AuthorizationState::get_IsNtlmAuthenticated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HttpWebRequest_AuthorizationState>(),
                        {"get_IsNtlmAuthenticated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::HttpWebRequest_AuthorizationState::_ctor(::System::Net::HttpWebRequest*  request, bool  isProxy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HttpWebRequest_AuthorizationState>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::HttpWebRequest*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, request, isProxy);
}
inline bool GlobalNamespace::HttpWebRequest_AuthorizationState::CheckAuthorization(::System::Net::WebResponse*  response, ::System::Net::HttpStatusCode  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HttpWebRequest_AuthorizationState>(),
                        {"CheckAuthorization", {}, {::i2c::type_of<::System::Net::WebResponse*>(), ::i2c::type_of<::System::Net::HttpStatusCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, response, code);
}
inline void GlobalNamespace::HttpWebRequest_AuthorizationState::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HttpWebRequest_AuthorizationState>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::HttpWebRequest_AuthorizationState::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HttpWebRequest_AuthorizationState>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "request", ty: "::System::Net::HttpWebRequest*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isProxy", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isCompleted", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ntlm_auth_state", ty: "::GlobalNamespace::HttpWebRequest_NtlmAuthState", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HttpWebRequest_AuthorizationState::HttpWebRequest_AuthorizationState(::System::Net::HttpWebRequest*  request, bool  isProxy, bool  isCompleted, ::GlobalNamespace::HttpWebRequest_NtlmAuthState  ntlm_auth_state) noexcept  {
this->request = request;
this->isProxy = isProxy;
this->isCompleted = isCompleted;
this->ntlm_auth_state = ntlm_auth_state;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HttpWebRequest_AuthorizationState::HttpWebRequest_AuthorizationState()   {
}
