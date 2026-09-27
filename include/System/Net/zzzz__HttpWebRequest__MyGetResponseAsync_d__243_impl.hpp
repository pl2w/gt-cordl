#pragma once
// IWYU pragma private; include "System/Net/HttpWebRequest__MyGetResponseAsync_d__243.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__ValueTuple_5_impl.hpp"
#include "System/Net/zzzz__HttpWebRequest__MyGetResponseAsync_d__243_def.hpp"
#include "System/Net/zzzz__BufferOffsetSize_def.hpp"
#include "System/Net/zzzz__HttpWebRequest_def.hpp"
#include "System/Net/zzzz__HttpWebResponse_def.hpp"
#include "System/Net/zzzz__WebCompletionSource_def.hpp"
#include "System/Net/zzzz__WebException_def.hpp"
#include "System/Net/zzzz__WebOperation_def.hpp"
#include "System/Net/zzzz__WebRequestStream_def.hpp"
#include "System/Net/zzzz__WebResponseStream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HttpWebRequest__MyGetResponseAsync_d__243.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HttpWebRequest__MyGetResponseAsync_d__243::*)()>(&::GlobalNamespace::HttpWebRequest__MyGetResponseAsync_d__243::MoveNext)> {
  constexpr static std::size_t size = 0x10d0;
  constexpr static std::size_t addrs = 0xaca6b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HttpWebRequest__MyGetResponseAsync_d__243>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HttpWebRequest__MyGetResponseAsync_d__243.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HttpWebRequest__MyGetResponseAsync_d__243::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::HttpWebRequest__MyGetResponseAsync_d__243::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xaca7c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HttpWebRequest__MyGetResponseAsync_d__243>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HttpWebRequest__MyGetResponseAsync_d__243::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HttpWebRequest__MyGetResponseAsync_d__243>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::HttpWebRequest__MyGetResponseAsync_d__243::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HttpWebRequest__MyGetResponseAsync_d__243>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::HttpWebRequest__MyGetResponseAsync_d__243::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::HttpWebRequest__MyGetResponseAsync_d__243::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::HttpWebResponse*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::System::Net::HttpWebRequest*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_completion_5__2", ty: "::System::Net::WebCompletionSource*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_operation_5__3", ty: "::System::Net::WebOperation*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_throwMe_5__4", ty: "::System::Net::WebException*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_response_5__5", ty: "::System::Net::HttpWebResponse*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_stream_5__6", ty: "::System::Net::WebResponseStream*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_redirect_5__7", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_mustReadAll_5__8", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ntlm_5__9", ty: "::System::Net::WebOperation*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_writeBuffer_5__10", ty: "::System::Net::BufferOffsetSize*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebRequestStream*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebResponseStream*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__4", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::ValueTuple_5<::System::Net::HttpWebResponse*,bool,bool,::System::Net::BufferOffsetSize*,::System::Net::WebOperation*>>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HttpWebRequest__MyGetResponseAsync_d__243::HttpWebRequest__MyGetResponseAsync_d__243(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::HttpWebResponse*>  __t__builder, ::System::Net::HttpWebRequest*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Net::WebCompletionSource*  _completion_5__2, ::System::Net::WebOperation*  _operation_5__3, ::System::Net::WebException*  _throwMe_5__4, ::System::Net::HttpWebResponse*  _response_5__5, ::System::Net::WebResponseStream*  _stream_5__6, bool  _redirect_5__7, bool  _mustReadAll_5__8, ::System::Net::WebOperation*  _ntlm_5__9, ::System::Net::BufferOffsetSize*  _writeBuffer_5__10, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebRequestStream*>  __u__1, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebResponseStream*>  __u__3, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::ValueTuple_5<::System::Net::HttpWebResponse*,bool,bool,::System::Net::BufferOffsetSize*,::System::Net::WebOperation*>>  __u__4) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->_completion_5__2 = _completion_5__2;
this->_operation_5__3 = _operation_5__3;
this->_throwMe_5__4 = _throwMe_5__4;
this->_response_5__5 = _response_5__5;
this->_stream_5__6 = _stream_5__6;
this->_redirect_5__7 = _redirect_5__7;
this->_mustReadAll_5__8 = _mustReadAll_5__8;
this->_ntlm_5__9 = _ntlm_5__9;
this->_writeBuffer_5__10 = _writeBuffer_5__10;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
this->__u__3 = __u__3;
this->__u__4 = __u__4;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HttpWebRequest__MyGetResponseAsync_d__243::HttpWebRequest__MyGetResponseAsync_d__243()   {
}
