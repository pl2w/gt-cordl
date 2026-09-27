#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/Debug/ActiveStateModel`1__GetChildrenAsync_d__0.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "Oculus/Interaction/PoseDetection/Debug/zzzz__ActiveStateModel`1__GetChildrenAsync_d__0_def.hpp"
#include "Oculus/Interaction/PoseDetection/Debug/zzzz__ActiveStateModel_1_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
template<typename TActiveState>
inline void GlobalNamespace::ActiveStateModel_1__GetChildrenAsync_d__0<TActiveState>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ActiveStateModel_1__GetChildrenAsync_d__0<TActiveState>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TActiveState>
inline void GlobalNamespace::ActiveStateModel_1__GetChildrenAsync_d__0<TActiveState>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ActiveStateModel_1__GetChildrenAsync_d__0<TActiveState>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TActiveState>
constexpr  GlobalNamespace::ActiveStateModel_1__GetChildrenAsync_d__0<TActiveState>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TActiveState>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::ActiveStateModel_1__GetChildrenAsync_d__0<TActiveState>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "activeState", ty: "::Oculus::Interaction::IActiveState*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Oculus::Interaction::PoseDetection::Debug::ActiveStateModel_1<TActiveState>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TActiveState>
constexpr ::GlobalNamespace::ActiveStateModel_1__GetChildrenAsync_d__0<TActiveState>::ActiveStateModel_1__GetChildrenAsync_d__0(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>  __t__builder, ::Oculus::Interaction::IActiveState*  activeState, ::Oculus::Interaction::PoseDetection::Debug::ActiveStateModel_1<TActiveState>*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->activeState = activeState;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
template<typename TActiveState>
constexpr ::GlobalNamespace::ActiveStateModel_1__GetChildrenAsync_d__0<TActiveState>::ActiveStateModel_1__GetChildrenAsync_d__0()   {
}
