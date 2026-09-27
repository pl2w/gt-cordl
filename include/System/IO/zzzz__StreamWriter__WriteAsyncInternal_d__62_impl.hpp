#pragma once
// IWYU pragma private; include "System/IO/StreamWriter__WriteAsyncInternal_d__62.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__ReadOnlyMemory_1_impl.hpp"
#include "System/IO/zzzz__StreamWriter__WriteAsyncInternal_d__62_def.hpp"
#include "System/IO/zzzz__StreamWriter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__62.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__62::*)()>(&::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__62::MoveNext)> {
  constexpr static std::size_t size = 0x67c;
  constexpr static std::size_t addrs = 0xa290a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__62>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__62.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__62::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__62::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa2910a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__62>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StreamWriter__WriteAsyncInternal_d__62::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__62>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::StreamWriter__WriteAsyncInternal_d__62::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__62>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::StreamWriter__WriteAsyncInternal_d__62::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::StreamWriter__WriteAsyncInternal_d__62::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "charPos", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "charLen", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_this", ty: "::System::IO::StreamWriter*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "charBuffer", ty: "::ArrayW<char16_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "source", ty: "::System::ReadOnlyMemory_1<char16_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "appendNewLine", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "coreNewLine", ty: "::ArrayW<char16_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "autoFlush", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_copied_5__2", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_i_5__3", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__62::StreamWriter__WriteAsyncInternal_d__62(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, int32_t  charPos, int32_t  charLen, ::System::IO::StreamWriter*  _this, ::ArrayW<char16_t>  charBuffer, ::System::Threading::CancellationToken  cancellationToken, ::System::ReadOnlyMemory_1<char16_t>  source, bool  appendNewLine, ::ArrayW<char16_t>  coreNewLine, bool  autoFlush, int32_t  _copied_5__2, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1, int32_t  _i_5__3) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->charPos = charPos;
this->charLen = charLen;
this->_this = _this;
this->charBuffer = charBuffer;
this->cancellationToken = cancellationToken;
this->source = source;
this->appendNewLine = appendNewLine;
this->coreNewLine = coreNewLine;
this->autoFlush = autoFlush;
this->_copied_5__2 = _copied_5__2;
this->__u__1 = __u__1;
this->_i_5__3 = _i_5__3;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__62::StreamWriter__WriteAsyncInternal_d__62()   {
}
