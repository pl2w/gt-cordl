#pragma once
// IWYU pragma private; include "Modio/API/HttpClient/ModioAPIHttpClient__DownloadFile_d__15.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "Modio/API/HttpClient/zzzz__ModioAPIHttpClient__DownloadFile_d__15_def.hpp"
#include "Modio/API/HttpClient/zzzz__ModioAPIHttpClient_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/IO/zzzz__StreamReader_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Http/zzzz__HttpRequestMessage_def.hpp"
#include "System/Net/Http/zzzz__HttpResponseMessage_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ModioAPIHttpClient__DownloadFile_d__15.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModioAPIHttpClient__DownloadFile_d__15::*)()>(&::GlobalNamespace::ModioAPIHttpClient__DownloadFile_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x1338;
  constexpr static std::size_t addrs = 0x9fe0bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioAPIHttpClient__DownloadFile_d__15>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModioAPIHttpClient__DownloadFile_d__15.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModioAPIHttpClient__DownloadFile_d__15::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::ModioAPIHttpClient__DownloadFile_d__15::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9fe1f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioAPIHttpClient__DownloadFile_d__15>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ModioAPIHttpClient__DownloadFile_d__15::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioAPIHttpClient__DownloadFile_d__15>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::ModioAPIHttpClient__DownloadFile_d__15::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioAPIHttpClient__DownloadFile_d__15>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::ModioAPIHttpClient__DownloadFile_d__15::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::ModioAPIHttpClient__DownloadFile_d__15::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::System::IO::Stream*>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Modio::API::HttpClient::ModioAPIHttpClient*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_target_5__2", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_httpRequest_5__3", ty: "::System::Net::Http::HttpRequestMessage*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_cachedShutdownToken_5__4", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_response_5__5", ty: "::System::Net::Http::HttpResponseMessage*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__4", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::IO::Stream*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_streamReader_5__6", ty: "::System::IO::StreamReader*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ModioAPIHttpClient__DownloadFile_d__15::ModioAPIHttpClient__DownloadFile_d__15(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::System::IO::Stream*>>  __t__builder, ::Modio::API::HttpClient::ModioAPIHttpClient*  __4__this, ::StringW  url, ::System::Threading::CancellationToken  token, ::StringW  _target_5__2, ::System::Net::Http::HttpRequestMessage*  _httpRequest_5__3, ::System::Threading::CancellationToken  _cachedShutdownToken_5__4, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2, ::System::Net::Http::HttpResponseMessage*  _response_5__5, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>  __u__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::IO::Stream*>  __u__4, ::System::IO::StreamReader*  _streamReader_5__6) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->url = url;
this->token = token;
this->_target_5__2 = _target_5__2;
this->_httpRequest_5__3 = _httpRequest_5__3;
this->_cachedShutdownToken_5__4 = _cachedShutdownToken_5__4;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
this->_response_5__5 = _response_5__5;
this->__u__3 = __u__3;
this->__u__4 = __u__4;
this->_streamReader_5__6 = _streamReader_5__6;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModioAPIHttpClient__DownloadFile_d__15::ModioAPIHttpClient__DownloadFile_d__15()   {
}
