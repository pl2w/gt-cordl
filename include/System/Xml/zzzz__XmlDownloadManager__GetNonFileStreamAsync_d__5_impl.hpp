#pragma once
// IWYU pragma private; include "System/Xml/XmlDownloadManager__GetNonFileStreamAsync_d__5.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_impl.hpp"
#include "System/Xml/zzzz__XmlDownloadManager__GetNonFileStreamAsync_d__5_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Cache/zzzz__RequestCachePolicy_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/Net/zzzz__WebResponse_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Xml/zzzz__XmlDownloadManager_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XmlDownloadManager__GetNonFileStreamAsync_d__5.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDownloadManager__GetNonFileStreamAsync_d__5::*)()>(&::GlobalNamespace::XmlDownloadManager__GetNonFileStreamAsync_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x814;
  constexpr static std::size_t addrs = 0xabf59dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlDownloadManager__GetNonFileStreamAsync_d__5>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlDownloadManager__GetNonFileStreamAsync_d__5.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlDownloadManager__GetNonFileStreamAsync_d__5::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::XmlDownloadManager__GetNonFileStreamAsync_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xabf61f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlDownloadManager__GetNonFileStreamAsync_d__5>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::XmlDownloadManager__GetNonFileStreamAsync_d__5::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlDownloadManager__GetNonFileStreamAsync_d__5>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::XmlDownloadManager__GetNonFileStreamAsync_d__5::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlDownloadManager__GetNonFileStreamAsync_d__5>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::XmlDownloadManager__GetNonFileStreamAsync_d__5::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::XmlDownloadManager__GetNonFileStreamAsync_d__5::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uri", ty: "::System::Uri*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "credentials", ty: "::System::Net::ICredentials*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "proxy", ty: "::System::Net::IWebProxy*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cachePolicy", ty: "::System::Net::Cache::RequestCachePolicy*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::System::Xml::XmlDownloadManager*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_req_5__2", ty: "::System::Net::WebRequest*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebResponse*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XmlDownloadManager__GetNonFileStreamAsync_d__5::XmlDownloadManager__GetNonFileStreamAsync_d__5(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>  __t__builder, ::System::Uri*  uri, ::System::Net::ICredentials*  credentials, ::System::Net::IWebProxy*  proxy, ::System::Net::Cache::RequestCachePolicy*  cachePolicy, ::System::Xml::XmlDownloadManager*  __4__this, ::System::Net::WebRequest*  _req_5__2, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebResponse*>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->uri = uri;
this->credentials = credentials;
this->proxy = proxy;
this->cachePolicy = cachePolicy;
this->__4__this = __4__this;
this->_req_5__2 = _req_5__2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XmlDownloadManager__GetNonFileStreamAsync_d__5::XmlDownloadManager__GetNonFileStreamAsync_d__5()   {
}
