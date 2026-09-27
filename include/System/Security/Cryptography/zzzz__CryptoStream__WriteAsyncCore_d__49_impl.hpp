#pragma once
// IWYU pragma private; include "System/Security/Cryptography/CryptoStream__WriteAsyncCore_d__49.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/Security/Cryptography/zzzz__CryptoStream__WriteAsyncCore_d__49_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Security/Cryptography/zzzz__CryptoStream_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CryptoStream__WriteAsyncCore_d__49.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CryptoStream__WriteAsyncCore_d__49::*)()>(&::GlobalNamespace::CryptoStream__WriteAsyncCore_d__49::MoveNext)> {
  constexpr static std::size_t size = 0xe40;
  constexpr static std::size_t addrs = 0xa15f0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CryptoStream__WriteAsyncCore_d__49>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CryptoStream__WriteAsyncCore_d__49.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CryptoStream__WriteAsyncCore_d__49::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::CryptoStream__WriteAsyncCore_d__49::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa15fee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CryptoStream__WriteAsyncCore_d__49>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CryptoStream__WriteAsyncCore_d__49::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CryptoStream__WriteAsyncCore_d__49>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::CryptoStream__WriteAsyncCore_d__49::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CryptoStream__WriteAsyncCore_d__49>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::CryptoStream__WriteAsyncCore_d__49::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::CryptoStream__WriteAsyncCore_d__49::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::System::Security::Cryptography::CryptoStream*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "useAsync", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_bytesToWrite_5__2", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_currentInputIndex_5__3", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_numOutputBytes_5__4", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_numWholeBlocksInBytes_5__5", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_tempOutputBuffer_5__6", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CryptoStream__WriteAsyncCore_d__49::CryptoStream__WriteAsyncCore_d__49(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, int32_t  count, int32_t  offset, ::System::Security::Cryptography::CryptoStream*  __4__this, ::ArrayW<uint8_t>  buffer, bool  useAsync, ::System::Threading::CancellationToken  cancellationToken, int32_t  _bytesToWrite_5__2, int32_t  _currentInputIndex_5__3, int32_t  _numOutputBytes_5__4, ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__1, int32_t  _numWholeBlocksInBytes_5__5, ::ArrayW<uint8_t>  _tempOutputBuffer_5__6) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->count = count;
this->offset = offset;
this->__4__this = __4__this;
this->buffer = buffer;
this->useAsync = useAsync;
this->cancellationToken = cancellationToken;
this->_bytesToWrite_5__2 = _bytesToWrite_5__2;
this->_currentInputIndex_5__3 = _currentInputIndex_5__3;
this->_numOutputBytes_5__4 = _numOutputBytes_5__4;
this->__u__1 = __u__1;
this->_numWholeBlocksInBytes_5__5 = _numWholeBlocksInBytes_5__5;
this->_tempOutputBuffer_5__6 = _tempOutputBuffer_5__6;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CryptoStream__WriteAsyncCore_d__49::CryptoStream__WriteAsyncCore_d__49()   {
}
