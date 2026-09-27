#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTask`1_Callback.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Callback_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Guid_def.hpp"
template<typename TResult>
inline void GlobalNamespace::OVRTask_1_Callback<TResult>::setStaticF_Callbacks(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_Callback<TResult>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_Callback<TResult>>*, "Callbacks", ::GlobalNamespace::OVRTask_1_Callback<TResult>>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_Callback<TResult>>*>(value));
}
template<typename TResult>
inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_Callback<TResult>>* GlobalNamespace::OVRTask_1_Callback<TResult>::getStaticF_Callbacks()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_Callback<TResult>>*, "Callbacks", ::GlobalNamespace::OVRTask_1_Callback<TResult>>();
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1_Callback<TResult>::setStaticF_Invoker(::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*, "Invoker", ::GlobalNamespace::OVRTask_1_Callback<TResult>>(std::forward<::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*>(value));
}
template<typename TResult>
inline ::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>* GlobalNamespace::OVRTask_1_Callback<TResult>::getStaticF_Invoker()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*, "Invoker", ::GlobalNamespace::OVRTask_1_Callback<TResult>>();
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1_Callback<TResult>::setStaticF_Remover(::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*, "Remover", ::GlobalNamespace::OVRTask_1_Callback<TResult>>(std::forward<::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*>(value));
}
template<typename TResult>
inline ::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>* GlobalNamespace::OVRTask_1_Callback<TResult>::getStaticF_Remover()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*, "Remover", ::GlobalNamespace::OVRTask_1_Callback<TResult>>();
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1_Callback<TResult>::setStaticF_Clearer(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "Clearer", ::GlobalNamespace::OVRTask_1_Callback<TResult>>(std::forward<::System::Action*>(value));
}
template<typename TResult>
inline ::System::Action* GlobalNamespace::OVRTask_1_Callback<TResult>::getStaticF_Clearer()  {
return ::cordl_internals::getStaticField<::System::Action*, "Clearer", ::GlobalNamespace::OVRTask_1_Callback<TResult>>();
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1_Callback<TResult>::Invoke(::System::Guid  taskId, TResult  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_Callback<TResult>>(),
                        {"Invoke", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<TResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, taskId, result);
}
template<typename TResult>
inline bool GlobalNamespace::OVRTask_1_Callback<TResult>::Remove(::System::Guid  taskId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_Callback<TResult>>(),
                        {"Remove", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, taskId);
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1_Callback<TResult>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_Callback<TResult>>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1_Callback<TResult>::Invoke(TResult  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_Callback<TResult>>(),
                        {"Invoke", {}, {::i2c::type_of<TResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, result);
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1_Callback<TResult>::_ctor(::System::Action_1<TResult>*  delegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_Callback<TResult>>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action_1<TResult>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, delegate);
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1_Callback<TResult>::Add(::System::Guid  taskId, ::System::Action_1<TResult>*  delegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_Callback<TResult>>(),
                        {"Add", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Action_1<TResult>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, taskId, delegate);
}
// Ctor Parameters [CppParam { name: "_delegate", ty: "::System::Action_1<TResult>*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TResult>
constexpr ::GlobalNamespace::OVRTask_1_Callback<TResult>::OVRTask_1_Callback(::System::Action_1<TResult>*  _delegate) noexcept  {
this->_delegate = _delegate;
}
// Ctor Parameters []
template<typename TResult>
constexpr ::GlobalNamespace::OVRTask_1_Callback<TResult>::OVRTask_1_Callback()   {
}
