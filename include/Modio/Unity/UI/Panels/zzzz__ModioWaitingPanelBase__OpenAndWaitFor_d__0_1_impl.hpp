#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/ModioWaitingPanelBase__OpenAndWaitFor_d__0_1.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioWaitingPanelBase__OpenAndWaitFor_d__0_1_def.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioWaitingPanelBase_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
template<typename T>
inline void GlobalNamespace::ModioWaitingPanelBase__OpenAndWaitFor_d__0_1<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioWaitingPanelBase__OpenAndWaitFor_d__0_1<T>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::ModioWaitingPanelBase__OpenAndWaitFor_d__0_1<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioWaitingPanelBase__OpenAndWaitFor_d__0_1<T>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T>
constexpr  GlobalNamespace::ModioWaitingPanelBase__OpenAndWaitFor_d__0_1<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::ModioWaitingPanelBase__OpenAndWaitFor_d__0_1<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Modio::Unity::UI::Panels::ModioWaitingPanelBase>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "action", ty: "::System::Action_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<T>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::ModioWaitingPanelBase__OpenAndWaitFor_d__0_1<T>::ModioWaitingPanelBase__OpenAndWaitFor_d__0_1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::Modio::Unity::UI::Panels::ModioWaitingPanelBase>  __4__this, ::System::Threading::Tasks::Task_1<T>*  task, ::System::Action_1<T>*  action, ::System::Runtime::CompilerServices::TaskAwaiter_1<T>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->task = task;
this->action = action;
this->__u__1 = __u__1;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::ModioWaitingPanelBase__OpenAndWaitFor_d__0_1<T>::ModioWaitingPanelBase__OpenAndWaitFor_d__0_1()   {
}
