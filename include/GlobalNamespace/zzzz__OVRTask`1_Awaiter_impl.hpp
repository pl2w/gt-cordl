#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTask`1_Awaiter.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/zzzz__Action_def.hpp"
template<typename TResult>
inline void GlobalNamespace::OVRTask_1_Awaiter<TResult>::_ctor(::GlobalNamespace::OVRTask_1<TResult>  task)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_Awaiter<TResult>>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::OVRTask_1<TResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, task);
}
template<typename TResult>
inline bool GlobalNamespace::OVRTask_1_Awaiter<TResult>::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_Awaiter<TResult>>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1_Awaiter<TResult>::System_Runtime_CompilerServices_INotifyCompletion_OnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_Awaiter<TResult>>(),
                        {"System.Runtime.CompilerServices.INotifyCompletion.OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
template<typename TResult>
inline TResult GlobalNamespace::OVRTask_1_Awaiter<TResult>::GetResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_Awaiter<TResult>>(),
                        {"GetResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TResult>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
template<typename TResult>
constexpr  GlobalNamespace::OVRTask_1_Awaiter<TResult>::operator ::System::Runtime::CompilerServices::INotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
template<typename TResult>
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* GlobalNamespace::OVRTask_1_Awaiter<TResult>::i___System__Runtime__CompilerServices__INotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_task", ty: "::GlobalNamespace::OVRTask_1<TResult>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TResult>
constexpr ::GlobalNamespace::OVRTask_1_Awaiter<TResult>::OVRTask_1_Awaiter(::GlobalNamespace::OVRTask_1<TResult>  _task) noexcept  {
this->_task = _task;
}
// Ctor Parameters []
template<typename TResult>
constexpr ::GlobalNamespace::OVRTask_1_Awaiter<TResult>::OVRTask_1_Awaiter()   {
}
