#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTask`1_CallbackWithState_1.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_CallbackWithState_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Guid_def.hpp"
template<typename TResult,typename T>
inline void GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult,T>::setStaticF_Callbacks(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult,T>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult,T>>*, "Callbacks", ::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult,T>>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult,T>>*>(value));
}
template<typename TResult,typename T>
inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult,T>>* GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult,T>::getStaticF_Callbacks()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult,T>>*, "Callbacks", ::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult,T>>();
}
template<typename TResult,typename T>
inline void GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult,T>::setStaticF_Invoker(::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*, "Invoker", ::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult,T>>(std::forward<::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*>(value));
}
template<typename TResult,typename T>
inline ::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>* GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult,T>::getStaticF_Invoker()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*, "Invoker", ::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult,T>>();
}
template<typename TResult,typename T>
inline void GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult,T>::setStaticF_Remover(::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*, "Remover", ::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult,T>>(std::forward<::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*>(value));
}
template<typename TResult,typename T>
inline ::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>* GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult,T>::getStaticF_Remover()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*, "Remover", ::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult,T>>();
}
template<typename TResult,typename T>
inline void GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult,T>::setStaticF_Clearer(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "Clearer", ::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult,T>>(std::forward<::System::Action*>(value));
}
template<typename TResult,typename T>
inline ::System::Action* GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult,T>::getStaticF_Clearer()  {
return ::cordl_internals::getStaticField<::System::Action*, "Clearer", ::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult,T>>();
}
template<typename TResult,typename T>
inline void GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult,T>::Invoke(::System::Guid  taskId, TResult  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult,T>>(),
                        {"Invoke", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<TResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, taskId, result);
}
template<typename TResult,typename T>
inline void GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult,T>::_ctor(T  data, ::System::Action_2<TResult,T>*  delegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult,T>>(),
                        {".ctor", {}, {::i2c::type_of<T>(), ::i2c::type_of<::System::Action_2<TResult,T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, delegate);
}
template<typename TResult,typename T>
inline void GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult,T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult,T>>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template<typename TResult,typename T>
inline bool GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult,T>::Remove(::System::Guid  taskId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult,T>>(),
                        {"Remove", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, taskId);
}
template<typename TResult,typename T>
inline void GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult,T>::Invoke(TResult  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult,T>>(),
                        {"Invoke", {}, {::i2c::type_of<TResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, result);
}
template<typename TResult,typename T>
inline void GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult,T>::Add(::System::Guid  taskId, T  data, ::System::Action_2<TResult,T>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult,T>>(),
                        {"Add", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<T>(), ::i2c::type_of<::System::Action_2<TResult,T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, taskId, data, callback);
}
// Ctor Parameters [CppParam { name: "_data", ty: "T", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_delegate", ty: "::System::Action_2<TResult,T>*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TResult,typename T>
constexpr ::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult,T>::OVRTask_1_CallbackWithState_1(T  _data, ::System::Action_2<TResult,T>*  _delegate) noexcept  {
this->_data = _data;
this->_delegate = _delegate;
}
// Ctor Parameters []
template<typename TResult,typename T>
constexpr ::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult,T>::OVRTask_1_CallbackWithState_1()   {
}
