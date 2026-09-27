#pragma once
// IWYU pragma private; include "System/IO/Stream___ReadAsync_g__FinishReadAsync|44_0_d.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncValueTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_impl.hpp"
#include "System/zzzz__Memory_1_impl.hpp"
#include "System/IO/zzzz__Stream___ReadAsync_g__FinishReadAsync|44_0_d_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Stream___ReadAsync_g__FinishReadAsync_44_0_d.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Stream___ReadAsync_g__FinishReadAsync_44_0_d::*)()>(&::GlobalNamespace::Stream___ReadAsync_g__FinishReadAsync_44_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0xa2a759c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Stream___ReadAsync_g__FinishReadAsync_44_0_d>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream___ReadAsync_g__FinishReadAsync_44_0_d.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Stream___ReadAsync_g__FinishReadAsync_44_0_d::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::Stream___ReadAsync_g__FinishReadAsync_44_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa2a7928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Stream___ReadAsync_g__FinishReadAsync_44_0_d>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Stream___ReadAsync_g__FinishReadAsync_44_0_d::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Stream___ReadAsync_g__FinishReadAsync_44_0_d>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::Stream___ReadAsync_g__FinishReadAsync_44_0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Stream___ReadAsync_g__FinishReadAsync_44_0_d>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::Stream___ReadAsync_g__FinishReadAsync_44_0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::Stream___ReadAsync_g__FinishReadAsync_44_0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "readTask", ty: "::System::Threading::Tasks::Task_1<int32_t>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localBuffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localDestination", ty: "::System::Memory_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Stream___ReadAsync_g__FinishReadAsync_44_0_d::Stream___ReadAsync_g__FinishReadAsync_44_0_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>  __t__builder, ::System::Threading::Tasks::Task_1<int32_t>*  readTask, ::ArrayW<uint8_t>  localBuffer, ::System::Memory_1<uint8_t>  localDestination, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->readTask = readTask;
this->localBuffer = localBuffer;
this->localDestination = localDestination;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Stream___ReadAsync_g__FinishReadAsync_44_0_d::Stream___ReadAsync_g__FinishReadAsync_44_0_d()   {
}
