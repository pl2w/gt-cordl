#pragma once
// IWYU pragma private; include "Modio/Customizations/WssHandler__WaitForMessage_d__6.hpp"
#include "Modio/Customizations/zzzz__WssMessage_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "Modio/Customizations/zzzz__WssHandler__WaitForMessage_d__6_def.hpp"
#include "Modio/Customizations/zzzz__WssMessage_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WssHandler__WaitForMessage_d__6.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WssHandler__WaitForMessage_d__6::*)()>(&::GlobalNamespace::WssHandler__WaitForMessage_d__6::MoveNext)> {
  constexpr static std::size_t size = 0x904;
  constexpr static std::size_t addrs = 0xa05dce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WssHandler__WaitForMessage_d__6>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WssHandler__WaitForMessage_d__6.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WssHandler__WaitForMessage_d__6::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::WssHandler__WaitForMessage_d__6::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa05e5e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WssHandler__WaitForMessage_d__6>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::WssHandler__WaitForMessage_d__6::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WssHandler__WaitForMessage_d__6>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::WssHandler__WaitForMessage_d__6::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WssHandler__WaitForMessage_d__6>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::WssHandler__WaitForMessage_d__6::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::WssHandler__WaitForMessage_d__6::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Customizations::WssMessage>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "checkPreviousUnhandledMessages", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "messageOperation", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_tcs_5__2", ty: "::System::Threading::Tasks::TaskCompletionSource_1<::Modio::Customizations::WssMessage>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Customizations::WssMessage>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::WssHandler__WaitForMessage_d__6::WssHandler__WaitForMessage_d__6(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Customizations::WssMessage>>  __t__builder, bool  checkPreviousUnhandledMessages, ::StringW  messageOperation, ::System::Threading::Tasks::TaskCompletionSource_1<::Modio::Customizations::WssMessage>*  _tcs_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Customizations::WssMessage>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->checkPreviousUnhandledMessages = checkPreviousUnhandledMessages;
this->messageOperation = messageOperation;
this->_tcs_5__2 = _tcs_5__2;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WssHandler__WaitForMessage_d__6::WssHandler__WaitForMessage_d__6()   {
}
