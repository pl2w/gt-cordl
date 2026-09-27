#pragma once
// IWYU pragma private; include "System/Net/Http/HttpClient__SendAsyncWorker_d__47.hpp"
#include "System/Net/Http/zzzz__HttpCompletionOption_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/Net/Http/zzzz__HttpClient__SendAsyncWorker_d__47_def.hpp"
#include "System/Net/Http/zzzz__HttpClient_def.hpp"
#include "System/Net/Http/zzzz__HttpRequestMessage_def.hpp"
#include "System/Net/Http/zzzz__HttpResponseMessage_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HttpClient__SendAsyncWorker_d__47.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HttpClient__SendAsyncWorker_d__47::*)()>(&::GlobalNamespace::HttpClient__SendAsyncWorker_d__47::MoveNext)> {
  constexpr static std::size_t size = 0x6d8;
  constexpr static std::size_t addrs = 0xa9dfc04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HttpClient__SendAsyncWorker_d__47>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HttpClient__SendAsyncWorker_d__47.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HttpClient__SendAsyncWorker_d__47::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::HttpClient__SendAsyncWorker_d__47::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa9e02dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HttpClient__SendAsyncWorker_d__47>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HttpClient__SendAsyncWorker_d__47::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HttpClient__SendAsyncWorker_d__47>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::HttpClient__SendAsyncWorker_d__47::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HttpClient__SendAsyncWorker_d__47>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::HttpClient__SendAsyncWorker_d__47::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::HttpClient__SendAsyncWorker_d__47::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::System::Net::Http::HttpClient*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "request", ty: "::System::Net::Http::HttpRequestMessage*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "completionOption", ty: "::System::Net::Http::HttpCompletionOption", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_lcts_5__2", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_response_5__3", ty: "::System::Net::Http::HttpResponseMessage*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HttpClient__SendAsyncWorker_d__47::HttpClient__SendAsyncWorker_d__47(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage*>  __t__builder, ::System::Net::Http::HttpClient*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Net::Http::HttpRequestMessage*  request, ::System::Net::Http::HttpCompletionOption  completionOption, ::System::Threading::CancellationTokenSource*  _lcts_5__2, ::System::Net::Http::HttpResponseMessage*  _response_5__3, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*>  __u__1, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->request = request;
this->completionOption = completionOption;
this->_lcts_5__2 = _lcts_5__2;
this->_response_5__3 = _response_5__3;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HttpClient__SendAsyncWorker_d__47::HttpClient__SendAsyncWorker_d__47()   {
}
