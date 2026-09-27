#pragma once
// IWYU pragma private; include "System/IO/StreamWriter__FlushAsyncInternal_d__74.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/IO/zzzz__StreamWriter__FlushAsyncInternal_d__74_def.hpp"
#include "System/IO/zzzz__StreamWriter_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Text/zzzz__Encoder_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StreamWriter__FlushAsyncInternal_d__74.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StreamWriter__FlushAsyncInternal_d__74::*)()>(&::GlobalNamespace::StreamWriter__FlushAsyncInternal_d__74::MoveNext)> {
  constexpr static std::size_t size = 0x5d8;
  constexpr static std::size_t addrs = 0xa29110c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StreamWriter__FlushAsyncInternal_d__74>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StreamWriter__FlushAsyncInternal_d__74.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StreamWriter__FlushAsyncInternal_d__74::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::StreamWriter__FlushAsyncInternal_d__74::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa2916e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StreamWriter__FlushAsyncInternal_d__74>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StreamWriter__FlushAsyncInternal_d__74::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StreamWriter__FlushAsyncInternal_d__74>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::StreamWriter__FlushAsyncInternal_d__74::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StreamWriter__FlushAsyncInternal_d__74>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::StreamWriter__FlushAsyncInternal_d__74::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::StreamWriter__FlushAsyncInternal_d__74::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "haveWrittenPreamble", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_this", ty: "::System::IO::StreamWriter*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "encoding", ty: "::System::Text::Encoding*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "stream", ty: "::System::IO::Stream*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "encoder", ty: "::System::Text::Encoder*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "charBuffer", ty: "::ArrayW<char16_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "charPos", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "byteBuffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "flushEncoder", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "flushStream", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::StreamWriter__FlushAsyncInternal_d__74::StreamWriter__FlushAsyncInternal_d__74(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, bool  haveWrittenPreamble, ::System::IO::StreamWriter*  _this, ::System::Text::Encoding*  encoding, ::System::IO::Stream*  stream, ::System::Threading::CancellationToken  cancellationToken, ::System::Text::Encoder*  encoder, ::ArrayW<char16_t>  charBuffer, int32_t  charPos, ::ArrayW<uint8_t>  byteBuffer, bool  flushEncoder, bool  flushStream, ::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter  __u__1, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->haveWrittenPreamble = haveWrittenPreamble;
this->_this = _this;
this->encoding = encoding;
this->stream = stream;
this->cancellationToken = cancellationToken;
this->encoder = encoder;
this->charBuffer = charBuffer;
this->charPos = charPos;
this->byteBuffer = byteBuffer;
this->flushEncoder = flushEncoder;
this->flushStream = flushStream;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StreamWriter__FlushAsyncInternal_d__74::StreamWriter__FlushAsyncInternal_d__74()   {
}
