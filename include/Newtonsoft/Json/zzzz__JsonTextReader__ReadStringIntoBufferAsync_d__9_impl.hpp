#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonTextReader__ReadStringIntoBufferAsync_d__9.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader__ReadStringIntoBufferAsync_d__9_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::JsonTextReader__ReadStringIntoBufferAsync_d__9.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JsonTextReader__ReadStringIntoBufferAsync_d__9::*)()>(&::GlobalNamespace::JsonTextReader__ReadStringIntoBufferAsync_d__9::MoveNext)> {
  constexpr static std::size_t size = 0xd34;
  constexpr static std::size_t addrs = 0xa388cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonTextReader__ReadStringIntoBufferAsync_d__9>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JsonTextReader__ReadStringIntoBufferAsync_d__9.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JsonTextReader__ReadStringIntoBufferAsync_d__9::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::JsonTextReader__ReadStringIntoBufferAsync_d__9::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa389a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonTextReader__ReadStringIntoBufferAsync_d__9>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::JsonTextReader__ReadStringIntoBufferAsync_d__9::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonTextReader__ReadStringIntoBufferAsync_d__9>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::JsonTextReader__ReadStringIntoBufferAsync_d__9::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonTextReader__ReadStringIntoBufferAsync_d__9>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::JsonTextReader__ReadStringIntoBufferAsync_d__9::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::JsonTextReader__ReadStringIntoBufferAsync_d__9::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "quote", ty: "char16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_charPos_5__2", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_initialPosition_5__3", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_lastWritePosition_5__4", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_escapeStartPos_5__5", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_writeChar_5__6", ty: "char16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__3", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<char16_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_anotherHighSurrogate_5__7", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_highSurrogate_5__8", ty: "char16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__4", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::JsonTextReader__ReadStringIntoBufferAsync_d__9::JsonTextReader__ReadStringIntoBufferAsync_d__9(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Newtonsoft::Json::JsonTextReader*  __4__this, ::System::Threading::CancellationToken  cancellationToken, char16_t  quote, int32_t  _charPos_5__2, int32_t  _initialPosition_5__3, int32_t  _lastWritePosition_5__4, int32_t  _escapeStartPos_5__5, char16_t  _writeChar_5__6, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>  __u__1, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>  __u__2, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<char16_t>  __u__3, bool  _anotherHighSurrogate_5__7, char16_t  _highSurrogate_5__8, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__4) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->quote = quote;
this->_charPos_5__2 = _charPos_5__2;
this->_initialPosition_5__3 = _initialPosition_5__3;
this->_lastWritePosition_5__4 = _lastWritePosition_5__4;
this->_escapeStartPos_5__5 = _escapeStartPos_5__5;
this->_writeChar_5__6 = _writeChar_5__6;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
this->__u__3 = __u__3;
this->_anotherHighSurrogate_5__7 = _anotherHighSurrogate_5__7;
this->_highSurrogate_5__8 = _highSurrogate_5__8;
this->__u__4 = __u__4;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JsonTextReader__ReadStringIntoBufferAsync_d__9::JsonTextReader__ReadStringIntoBufferAsync_d__9()   {
}
