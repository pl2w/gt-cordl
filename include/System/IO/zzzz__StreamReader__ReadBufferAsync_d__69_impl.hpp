#pragma once
// IWYU pragma private; include "System/IO/StreamReader__ReadBufferAsync_d__69.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable`1_ConfiguredValueTaskAwaiter_impl.hpp"
#include "System/IO/zzzz__StreamReader__ReadBufferAsync_d__69_def.hpp"
#include "System/IO/zzzz__StreamReader_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StreamReader__ReadBufferAsync_d__69.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StreamReader__ReadBufferAsync_d__69::*)()>(&::GlobalNamespace::StreamReader__ReadBufferAsync_d__69::MoveNext)> {
  constexpr static std::size_t size = 0x788;
  constexpr static std::size_t addrs = 0xa28b2c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StreamReader__ReadBufferAsync_d__69>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StreamReader__ReadBufferAsync_d__69.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StreamReader__ReadBufferAsync_d__69::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::StreamReader__ReadBufferAsync_d__69::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa28ba4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StreamReader__ReadBufferAsync_d__69>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StreamReader__ReadBufferAsync_d__69::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StreamReader__ReadBufferAsync_d__69>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::StreamReader__ReadBufferAsync_d__69::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StreamReader__ReadBufferAsync_d__69>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::StreamReader__ReadBufferAsync_d__69::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::StreamReader__ReadBufferAsync_d__69::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::System::IO::StreamReader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_tmpByteBuffer_5__2", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_tmpStream_5__3", ty: "::System::IO::Stream*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::StreamReader__ReadBufferAsync_d__69::StreamReader__ReadBufferAsync_d__69(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>  __t__builder, ::System::IO::StreamReader*  __4__this, ::ArrayW<uint8_t>  _tmpByteBuffer_5__2, ::System::IO::Stream*  _tmpStream_5__3, ::GlobalNamespace::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_tmpByteBuffer_5__2 = _tmpByteBuffer_5__2;
this->_tmpStream_5__3 = _tmpStream_5__3;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StreamReader__ReadBufferAsync_d__69::StreamReader__ReadBufferAsync_d__69()   {
}
