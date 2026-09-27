#pragma once
// IWYU pragma private; include "System/Net/WebClient__UploadBitsAsync_d__152.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable`1_ConfiguredValueTaskAwaiter_impl.hpp"
#include "System/Net/zzzz__WebClient__UploadBitsAsync_d__152_def.hpp"
#include "System/ComponentModel/zzzz__AsyncOperation_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__WebClient_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WebClient__UploadBitsAsync_d__152.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WebClient__UploadBitsAsync_d__152::*)()>(&::GlobalNamespace::WebClient__UploadBitsAsync_d__152::MoveNext)> {
  constexpr static std::size_t size = 0x1204;
  constexpr static std::size_t addrs = 0xac51674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WebClient__UploadBitsAsync_d__152>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WebClient__UploadBitsAsync_d__152.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WebClient__UploadBitsAsync_d__152::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::WebClient__UploadBitsAsync_d__152::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xac52878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WebClient__UploadBitsAsync_d__152>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::WebClient__UploadBitsAsync_d__152::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WebClient__UploadBitsAsync_d__152>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::WebClient__UploadBitsAsync_d__152::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WebClient__UploadBitsAsync_d__152>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::WebClient__UploadBitsAsync_d__152::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::WebClient__UploadBitsAsync_d__152::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::System::Net::WebClient*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "request", ty: "::System::Net::WebRequest*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "header", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "footer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "asyncOp", ty: "::System::ComponentModel::AsyncOperation*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "readStream", ty: "::System::IO::Stream*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "chunkSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "completionDelegate", ty: "::System::Action_3<::ArrayW<uint8_t>,::System::Exception*,::System::ComponentModel::AsyncOperation*>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_exception_5__2", ty: "::System::Exception*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_writeStream_5__3", ty: "::System::IO::Stream*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::IO::Stream*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap3", ty: "::System::IO::Stream*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_bytesRead_5__5", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__3", ty: "::GlobalNamespace::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_toWrite_5__6", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::WebClient__UploadBitsAsync_d__152::WebClient__UploadBitsAsync_d__152(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::System::Net::WebClient*  __4__this, ::System::Net::WebRequest*  request, ::ArrayW<uint8_t>  header, ::ArrayW<uint8_t>  footer, ::System::ComponentModel::AsyncOperation*  asyncOp, ::System::IO::Stream*  readStream, ::ArrayW<uint8_t>  buffer, int32_t  chunkSize, ::System::Action_3<::ArrayW<uint8_t>,::System::Exception*,::System::ComponentModel::AsyncOperation*>*  completionDelegate, ::System::Exception*  _exception_5__2, ::System::IO::Stream*  _writeStream_5__3, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::IO::Stream*>  __u__1, ::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter  __u__2, ::System::IO::Stream*  __7__wrap3, int32_t  _bytesRead_5__5, ::GlobalNamespace::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>  __u__3, int32_t  _toWrite_5__6) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->request = request;
this->header = header;
this->footer = footer;
this->asyncOp = asyncOp;
this->readStream = readStream;
this->buffer = buffer;
this->chunkSize = chunkSize;
this->completionDelegate = completionDelegate;
this->_exception_5__2 = _exception_5__2;
this->_writeStream_5__3 = _writeStream_5__3;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
this->__7__wrap3 = __7__wrap3;
this->_bytesRead_5__5 = _bytesRead_5__5;
this->__u__3 = __u__3;
this->_toWrite_5__6 = _toWrite_5__6;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WebClient__UploadBitsAsync_d__152::WebClient__UploadBitsAsync_d__152()   {
}
