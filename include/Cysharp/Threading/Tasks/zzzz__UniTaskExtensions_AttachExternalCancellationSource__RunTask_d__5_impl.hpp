#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskExtensions_AttachExternalCancellationSource__RunTask_d__5.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_Awaiter_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskExtensions_AttachExternalCancellationSource__RunTask_d__5_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskExtensions_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AttachExternalCancellationSource_UniTaskExtensions__RunTask_d__5.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AttachExternalCancellationSource_UniTaskExtensions__RunTask_d__5::*)()>(&::GlobalNamespace::AttachExternalCancellationSource_UniTaskExtensions__RunTask_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0xadfd644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AttachExternalCancellationSource_UniTaskExtensions__RunTask_d__5>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AttachExternalCancellationSource_UniTaskExtensions__RunTask_d__5.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AttachExternalCancellationSource_UniTaskExtensions__RunTask_d__5::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::AttachExternalCancellationSource_UniTaskExtensions__RunTask_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xadfdb3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AttachExternalCancellationSource_UniTaskExtensions__RunTask_d__5>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AttachExternalCancellationSource_UniTaskExtensions__RunTask_d__5::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AttachExternalCancellationSource_UniTaskExtensions__RunTask_d__5>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::AttachExternalCancellationSource_UniTaskExtensions__RunTask_d__5::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AttachExternalCancellationSource_UniTaskExtensions__RunTask_d__5>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::AttachExternalCancellationSource_UniTaskExtensions__RunTask_d__5::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::AttachExternalCancellationSource_UniTaskExtensions__RunTask_d__5::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "task", ty: "::Cysharp::Threading::Tasks::UniTask", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Cysharp::Threading::Tasks::UniTaskExtensions_AttachExternalCancellationSource*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_Awaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AttachExternalCancellationSource_UniTaskExtensions__RunTask_d__5::AttachExternalCancellationSource_UniTaskExtensions__RunTask_d__5(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::UniTask  task, ::Cysharp::Threading::Tasks::UniTaskExtensions_AttachExternalCancellationSource*  __4__this, ::GlobalNamespace::UniTask_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->task = task;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AttachExternalCancellationSource_UniTaskExtensions__RunTask_d__5::AttachExternalCancellationSource_UniTaskExtensions__RunTask_d__5()   {
}
