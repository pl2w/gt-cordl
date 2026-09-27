#pragma once
// IWYU pragma private; include "VYaml/Internal/StreamHelper__ReadAsSequenceAsync_d__0.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncValueTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable`1_ConfiguredValueTaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "VYaml/Internal/zzzz__StreamHelper__ReadAsSequenceAsync_d__0_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "VYaml/Internal/zzzz__ReusableByteSequenceBuilder_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StreamHelper__ReadAsSequenceAsync_d__0.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StreamHelper__ReadAsSequenceAsync_d__0::*)()>(&::GlobalNamespace::StreamHelper__ReadAsSequenceAsync_d__0::MoveNext)> {
  constexpr static std::size_t size = 0x9ac;
  constexpr static std::size_t addrs = 0xb96ab68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StreamHelper__ReadAsSequenceAsync_d__0>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StreamHelper__ReadAsSequenceAsync_d__0.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StreamHelper__ReadAsSequenceAsync_d__0::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::StreamHelper__ReadAsSequenceAsync_d__0::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb96b514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StreamHelper__ReadAsSequenceAsync_d__0>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StreamHelper__ReadAsSequenceAsync_d__0::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StreamHelper__ReadAsSequenceAsync_d__0>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::StreamHelper__ReadAsSequenceAsync_d__0::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StreamHelper__ReadAsSequenceAsync_d__0>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::StreamHelper__ReadAsSequenceAsync_d__0::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::StreamHelper__ReadAsSequenceAsync_d__0::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<::VYaml::Internal::ReusableByteSequenceBuilder*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "stream", ty: "::System::IO::Stream*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellation", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_builder_5__2", ty: "::VYaml::Internal::ReusableByteSequenceBuilder*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_buffer_5__3", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_offset_5__4", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::StreamHelper__ReadAsSequenceAsync_d__0::StreamHelper__ReadAsSequenceAsync_d__0(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<::VYaml::Internal::ReusableByteSequenceBuilder*>  __t__builder, ::System::IO::Stream*  stream, ::System::Threading::CancellationToken  cancellation, ::VYaml::Internal::ReusableByteSequenceBuilder*  _builder_5__2, ::ArrayW<uint8_t>  _buffer_5__3, int32_t  _offset_5__4, ::GlobalNamespace::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->stream = stream;
this->cancellation = cancellation;
this->_builder_5__2 = _builder_5__2;
this->_buffer_5__3 = _buffer_5__3;
this->_offset_5__4 = _offset_5__4;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StreamHelper__ReadAsSequenceAsync_d__0::StreamHelper__ReadAsSequenceAsync_d__0()   {
}
