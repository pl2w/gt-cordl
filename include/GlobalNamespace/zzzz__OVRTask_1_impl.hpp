#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTask_1.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ManualResetValueTaskSourceCore_1_impl.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AwaitableCompletionSource_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_CallbackWithState_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Callback_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_CombinedTaskDataWithCompletedTaskId_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_CombinedTaskData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_1_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ValueTaskSourceOnCompletedFlags_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ValueTaskSourceStatus_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Awaitable_1_def.hpp"
template<typename TResult>
inline void GlobalNamespace::OVRTask_1<TResult>::setStaticF_Pending(::System::Collections::Generic::HashSet_1<::System::Guid>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::System::Guid>*, "Pending", ::GlobalNamespace::OVRTask_1<TResult>>(std::forward<::System::Collections::Generic::HashSet_1<::System::Guid>*>(value));
}
template<typename TResult>
inline ::System::Collections::Generic::HashSet_1<::System::Guid>* GlobalNamespace::OVRTask_1<TResult>::getStaticF_Pending()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::System::Guid>*, "Pending", ::GlobalNamespace::OVRTask_1<TResult>>();
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1<TResult>::setStaticF_Results(::System::Collections::Generic::Dictionary_2<::System::Guid,TResult>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid,TResult>*, "Results", ::GlobalNamespace::OVRTask_1<TResult>>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid,TResult>*>(value));
}
template<typename TResult>
inline ::System::Collections::Generic::Dictionary_2<::System::Guid,TResult>* GlobalNamespace::OVRTask_1<TResult>::getStaticF_Results()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid,TResult>*, "Results", ::GlobalNamespace::OVRTask_1<TResult>>();
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1<TResult>::setStaticF_Exceptions(::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Exception*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Exception*>*, "Exceptions", ::GlobalNamespace::OVRTask_1<TResult>>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Exception*>*>(value));
}
template<typename TResult>
inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Exception*>* GlobalNamespace::OVRTask_1<TResult>::getStaticF_Exceptions()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Exception*>*, "Exceptions", ::GlobalNamespace::OVRTask_1<TResult>>();
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1<TResult>::setStaticF_Sources(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_TaskSource<TResult>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_TaskSource<TResult>*>*, "Sources", ::GlobalNamespace::OVRTask_1<TResult>>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_TaskSource<TResult>*>*>(value));
}
template<typename TResult>
inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_TaskSource<TResult>*>* GlobalNamespace::OVRTask_1<TResult>::getStaticF_Sources()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_TaskSource<TResult>*>*, "Sources", ::GlobalNamespace::OVRTask_1<TResult>>();
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1<TResult>::setStaticF_AwaitableSources(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_AwaitableSource<TResult>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_AwaitableSource<TResult>*>*, "AwaitableSources", ::GlobalNamespace::OVRTask_1<TResult>>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_AwaitableSource<TResult>*>*>(value));
}
template<typename TResult>
inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_AwaitableSource<TResult>*>* GlobalNamespace::OVRTask_1<TResult>::getStaticF_AwaitableSources()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_AwaitableSource<TResult>*>*, "AwaitableSources", ::GlobalNamespace::OVRTask_1<TResult>>();
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1<TResult>::setStaticF_Continuations(::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action*>*, "Continuations", ::GlobalNamespace::OVRTask_1<TResult>>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action*>*>(value));
}
template<typename TResult>
inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action*>* GlobalNamespace::OVRTask_1<TResult>::getStaticF_Continuations()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action*>*, "Continuations", ::GlobalNamespace::OVRTask_1<TResult>>();
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1<TResult>::setStaticF_ContinueWithInvokers(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*>*, "ContinueWithInvokers", ::GlobalNamespace::OVRTask_1<TResult>>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*>*>(value));
}
template<typename TResult>
inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*>* GlobalNamespace::OVRTask_1<TResult>::getStaticF_ContinueWithInvokers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*>*, "ContinueWithInvokers", ::GlobalNamespace::OVRTask_1<TResult>>();
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1<TResult>::setStaticF_ContinueWithRemovers(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*>*, "ContinueWithRemovers", ::GlobalNamespace::OVRTask_1<TResult>>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*>*>(value));
}
template<typename TResult>
inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*>* GlobalNamespace::OVRTask_1<TResult>::getStaticF_ContinueWithRemovers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*>*, "ContinueWithRemovers", ::GlobalNamespace::OVRTask_1<TResult>>();
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1<TResult>::setStaticF_ContinueWithClearers(::System::Collections::Generic::HashSet_1<::System::Action*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::System::Action*>*, "ContinueWithClearers", ::GlobalNamespace::OVRTask_1<TResult>>(std::forward<::System::Collections::Generic::HashSet_1<::System::Action*>*>(value));
}
template<typename TResult>
inline ::System::Collections::Generic::HashSet_1<::System::Action*>* GlobalNamespace::OVRTask_1<TResult>::getStaticF_ContinueWithClearers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::System::Action*>*, "ContinueWithClearers", ::GlobalNamespace::OVRTask_1<TResult>>();
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1<TResult>::setStaticF_InternalDataRemovers(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>*>*, "InternalDataRemovers", ::GlobalNamespace::OVRTask_1<TResult>>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>*>*>(value));
}
template<typename TResult>
inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>*>* GlobalNamespace::OVRTask_1<TResult>::getStaticF_InternalDataRemovers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>*>*, "InternalDataRemovers", ::GlobalNamespace::OVRTask_1<TResult>>();
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1<TResult>::setStaticF_InternalDataClearers(::System::Collections::Generic::HashSet_1<::System::Action*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::System::Action*>*, "InternalDataClearers", ::GlobalNamespace::OVRTask_1<TResult>>(std::forward<::System::Collections::Generic::HashSet_1<::System::Action*>*>(value));
}
template<typename TResult>
inline ::System::Collections::Generic::HashSet_1<::System::Action*>* GlobalNamespace::OVRTask_1<TResult>::getStaticF_InternalDataClearers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::System::Action*>*, "InternalDataClearers", ::GlobalNamespace::OVRTask_1<TResult>>();
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1<TResult>::setStaticF_IncrementalResultSubscriberRemovers(::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action_1<::System::Guid>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action_1<::System::Guid>*>*, "IncrementalResultSubscriberRemovers", ::GlobalNamespace::OVRTask_1<TResult>>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action_1<::System::Guid>*>*>(value));
}
template<typename TResult>
inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action_1<::System::Guid>*>* GlobalNamespace::OVRTask_1<TResult>::getStaticF_IncrementalResultSubscriberRemovers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action_1<::System::Guid>*>*, "IncrementalResultSubscriberRemovers", ::GlobalNamespace::OVRTask_1<TResult>>();
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1<TResult>::setStaticF_IncrementalResultSubscriberClearers(::System::Collections::Generic::HashSet_1<::System::Action*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::System::Action*>*, "IncrementalResultSubscriberClearers", ::GlobalNamespace::OVRTask_1<TResult>>(std::forward<::System::Collections::Generic::HashSet_1<::System::Action*>*>(value));
}
template<typename TResult>
inline ::System::Collections::Generic::HashSet_1<::System::Action*>* GlobalNamespace::OVRTask_1<TResult>::getStaticF_IncrementalResultSubscriberClearers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::System::Action*>*, "IncrementalResultSubscriberClearers", ::GlobalNamespace::OVRTask_1<TResult>>();
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1<TResult>::setStaticF_Clear(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "Clear", ::GlobalNamespace::OVRTask_1<TResult>>(std::forward<::System::Action*>(value));
}
template<typename TResult>
inline ::System::Action* GlobalNamespace::OVRTask_1<TResult>::getStaticF_Clear()  {
return ::cordl_internals::getStaticField<::System::Action*, "Clear", ::GlobalNamespace::OVRTask_1<TResult>>();
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1<TResult>::setStaticF__onCombinedTaskCompleted(::System::Action_2<::System::Collections::Generic::List_1<TResult>*,::GlobalNamespace::OVRTask_1<::ArrayW<TResult>>>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::System::Collections::Generic::List_1<TResult>*,::GlobalNamespace::OVRTask_1<::ArrayW<TResult>>>*, "_onCombinedTaskCompleted", ::GlobalNamespace::OVRTask_1<TResult>>(std::forward<::System::Action_2<::System::Collections::Generic::List_1<TResult>*,::GlobalNamespace::OVRTask_1<::ArrayW<TResult>>>*>(value));
}
template<typename TResult>
inline ::System::Action_2<::System::Collections::Generic::List_1<TResult>*,::GlobalNamespace::OVRTask_1<::ArrayW<TResult>>>* GlobalNamespace::OVRTask_1<TResult>::getStaticF__onCombinedTaskCompleted()  {
return ::cordl_internals::getStaticField<::System::Action_2<::System::Collections::Generic::List_1<TResult>*,::GlobalNamespace::OVRTask_1<::ArrayW<TResult>>>*, "_onCombinedTaskCompleted", ::GlobalNamespace::OVRTask_1<TResult>>();
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1<TResult>::_ctor(::System::Guid  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1<TResult>>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, id);
}
template<typename TResult>
inline bool GlobalNamespace::OVRTask_1<TResult>::AddToPending()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1<TResult>>(),
                        {"AddToPending", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename TResult>
inline bool GlobalNamespace::OVRTask_1<TResult>::get_IsPending()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1<TResult>>(),
                        {"get_IsPending", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename TResult>
template<typename T>
inline void GlobalNamespace::OVRTask_1<TResult>::SetInternalData(T  data)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRTask_1<TResult>>(),
                    {"SetInternalData", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data);
}
template<typename TResult>
template<typename T>
inline ::GlobalNamespace::OVRTask_1<TResult> GlobalNamespace::OVRTask_1<TResult>::WithInternalData(T  data)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRTask_1<TResult>>(),
                    {"WithInternalData", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<TResult>>(*this, ___internal_method, data);
}
template<typename TResult>
template<typename T>
inline bool GlobalNamespace::OVRTask_1<TResult>::TryGetInternalData(::by_ref<T>  data)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRTask_1<TResult>>(),
                    {"TryGetInternalData", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, data);
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1<TResult>::SetException(::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1<TResult>>(),
                        {"SetException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, exception);
}
template<typename TResult>
inline bool GlobalNamespace::OVRTask_1<TResult>::TryRemoveInternalData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1<TResult>>(),
                        {"TryRemoveInternalData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename TResult>
inline bool GlobalNamespace::OVRTask_1<TResult>::TryInvokeContinuation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1<TResult>>(),
                        {"TryInvokeContinuation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1<TResult>::SetResult(TResult  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1<TResult>>(),
                        {"SetResult", {}, {::i2c::type_of<TResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, result);
}
template<typename TResult>
template<typename TIncrementalResult>
inline void GlobalNamespace::OVRTask_1<TResult>::SetIncrementalResultCallback(::System::Action_1<TIncrementalResult>*  onIncrementalResultAvailable)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRTask_1<TResult>>(),
                    {"SetIncrementalResultCallback", {::i2c::class_of<TIncrementalResult>()}, {::i2c::type_of<::System::Action_1<TIncrementalResult>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TIncrementalResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, onIncrementalResultAvailable);
}
template<typename TResult>
template<typename TIncrementalResult>
inline void GlobalNamespace::OVRTask_1<TResult>::NotifyIncrementalResult(TIncrementalResult  incrementalResult)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRTask_1<TResult>>(),
                    {"NotifyIncrementalResult", {::i2c::class_of<TIncrementalResult>()}, {::i2c::type_of<TIncrementalResult>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TIncrementalResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, incrementalResult);
}
template<typename TResult>
inline ::GlobalNamespace::OVRTask_1<::System::Collections::Generic::List_1<TResult>*> GlobalNamespace::OVRTask_1<TResult>::WhenAll(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRTask_1<TResult>>*  tasks, ::System::Collections::Generic::List_1<TResult>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1<TResult>>(),
                        {"WhenAll", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRTask_1<TResult>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<TResult>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::System::Collections::Generic::List_1<TResult>*>>(nullptr, ___internal_method, tasks, results);
}
template<typename TResult>
inline ::GlobalNamespace::OVRTask_1<::ArrayW<TResult>> GlobalNamespace::OVRTask_1<TResult>::WhenAll(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRTask_1<TResult>>*  tasks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1<TResult>>(),
                        {"WhenAll", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRTask_1<TResult>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::ArrayW<TResult>>>(nullptr, ___internal_method, tasks);
}
template<typename TResult>
inline bool GlobalNamespace::OVRTask_1<TResult>::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1<TResult>>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename TResult>
inline bool GlobalNamespace::OVRTask_1<TResult>::get_IsFaulted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1<TResult>>(),
                        {"get_IsFaulted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename TResult>
inline ::System::Exception* GlobalNamespace::OVRTask_1<TResult>::GetException()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1<TResult>>(),
                        {"GetException", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(*this, ___internal_method);
}
template<typename TResult>
inline TResult GlobalNamespace::OVRTask_1<TResult>::GetResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1<TResult>>(),
                        {"GetResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TResult>(*this, ___internal_method);
}
template<typename TResult>
inline bool GlobalNamespace::OVRTask_1<TResult>::get_HasResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1<TResult>>(),
                        {"get_HasResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename TResult>
inline bool GlobalNamespace::OVRTask_1<TResult>::TryGetResult(::by_ref<TResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1<TResult>>(),
                        {"TryGetResult", {}, {::i2c::type_of<::by_ref<TResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, result);
}
template<typename TResult>
inline ::System::Threading::Tasks::ValueTask_1<TResult> GlobalNamespace::OVRTask_1<TResult>::ToValueTask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1<TResult>>(),
                        {"ToValueTask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<TResult>>(*this, ___internal_method);
}
template<typename TResult>
inline ::UnityEngine::Awaitable_1<TResult>* GlobalNamespace::OVRTask_1<TResult>::ToAwaitable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1<TResult>>(),
                        {"ToAwaitable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Awaitable_1<TResult>*>(*this, ___internal_method);
}
template<typename TResult>
inline ::GlobalNamespace::OVRTask_1_Awaiter<TResult> GlobalNamespace::OVRTask_1<TResult>::GetAwaiter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1<TResult>>(),
                        {"GetAwaiter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1_Awaiter<TResult>>(*this, ___internal_method);
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1<TResult>::WithContinuation(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1<TResult>>(),
                        {"WithContinuation", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1<TResult>::ContinueWith(::System::Action_1<TResult>*  onCompleted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1<TResult>>(),
                        {"ContinueWith", {}, {::i2c::type_of<::System::Action_1<TResult>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, onCompleted);
}
template<typename TResult>
template<typename T>
inline void GlobalNamespace::OVRTask_1<TResult>::ContinueWith(::System::Action_2<TResult,T>*  onCompleted, T  state)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRTask_1<TResult>>(),
                    {"ContinueWith", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Action_2<TResult,T>*>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, onCompleted, state);
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1<TResult>::ValidateDelegateAndThrow(::System::Object*  delegate, ::StringW  paramName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1<TResult>>(),
                        {"ValidateDelegateAndThrow", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, delegate, paramName);
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1<TResult>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1<TResult>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TResult>
inline bool GlobalNamespace::OVRTask_1<TResult>::Equals(::GlobalNamespace::OVRTask_1<TResult>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1<TResult>>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::OVRTask_1<TResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template<typename TResult>
inline bool GlobalNamespace::OVRTask_1<TResult>::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRTask_1<TResult>>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
template<typename TResult>
inline bool GlobalNamespace::OVRTask_1<TResult>::op_Equality(::GlobalNamespace::OVRTask_1<TResult>  lhs, ::GlobalNamespace::OVRTask_1<TResult>  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1<TResult>>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::OVRTask_1<TResult>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<TResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
template<typename TResult>
inline bool GlobalNamespace::OVRTask_1<TResult>::op_Inequality(::GlobalNamespace::OVRTask_1<TResult>  lhs, ::GlobalNamespace::OVRTask_1<TResult>  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1<TResult>>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::OVRTask_1<TResult>>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<TResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
template<typename TResult>
inline int32_t GlobalNamespace::OVRTask_1<TResult>::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRTask_1<TResult>>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename TResult>
inline ::StringW GlobalNamespace::OVRTask_1<TResult>::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRTask_1<TResult>>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRTask_1<TResult>>"
template<typename TResult>
constexpr  GlobalNamespace::OVRTask_1<TResult>::operator ::System::IEquatable_1<::GlobalNamespace::OVRTask_1<TResult>>*()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRTask_1<TResult>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRTask_1<TResult>>"
template<typename TResult>
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRTask_1<TResult>>* GlobalNamespace::OVRTask_1<TResult>::i___System__IEquatable_1___GlobalNamespace__OVRTask_1_TResult__()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRTask_1<TResult>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename TResult>
constexpr  GlobalNamespace::OVRTask_1<TResult>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename TResult>
constexpr ::System::IDisposable* GlobalNamespace::OVRTask_1<TResult>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_id", ty: "::System::Guid", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TResult>
constexpr ::GlobalNamespace::OVRTask_1<TResult>::OVRTask_1(::System::Guid  _id) noexcept  {
this->_id = _id;
}
// Ctor Parameters []
template<typename TResult>
constexpr ::GlobalNamespace::OVRTask_1<TResult>::OVRTask_1()   {
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1___c<TResult>::setStaticF___9(::GlobalNamespace::OVRTask_1___c<TResult>*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRTask_1___c<TResult>*, "<>9", ::GlobalNamespace::OVRTask_1___c<TResult>*>(std::forward<::GlobalNamespace::OVRTask_1___c<TResult>*>(value));
}
template<typename TResult>
inline ::GlobalNamespace::OVRTask_1___c<TResult>* GlobalNamespace::OVRTask_1___c<TResult>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRTask_1___c<TResult>*, "<>9", ::GlobalNamespace::OVRTask_1___c<TResult>*>();
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1___c<TResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1___c<TResult>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1___c<TResult>::__cctor_b__19_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1___c<TResult>*>(),
                        {"<.cctor>b__19_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1___c<TResult>::__cctor_b__19_1(::System::Collections::Generic::List_1<TResult>*  resultsFromPool, ::GlobalNamespace::OVRTask_1<::ArrayW<TResult>>  task)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1___c<TResult>*>(),
                        {"<.cctor>b__19_1", {}, {::i2c::type_of<::System::Collections::Generic::List_1<TResult>*>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<::ArrayW<TResult>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resultsFromPool, task);
}
template<typename TResult>
inline ::GlobalNamespace::OVRTask_1___c<TResult>* GlobalNamespace::OVRTask_1___c<TResult>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRTask_1___c<TResult>*>());
}
// Ctor Parameters []
template<typename TResult>
constexpr ::GlobalNamespace::OVRTask_1___c<TResult>::OVRTask_1___c()   {
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1_AwaitableSource<TResult>::OnGet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_AwaitableSource<TResult>*>(),
                        {"OnGet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1_AwaitableSource<TResult>::OnReturn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_AwaitableSource<TResult>*>(),
                        {"OnReturn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1_AwaitableSource<TResult>::SetResultAndReturnToPool(/* [IsReadOnly] */ ::by_ref<TResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_AwaitableSource<TResult>*>(),
                        {"SetResultAndReturnToPool", {}, {::i2c::type_of<::by_ref<TResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1_AwaitableSource<TResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_AwaitableSource<TResult>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TResult>
inline ::GlobalNamespace::OVRTask_1_AwaitableSource<TResult>* GlobalNamespace::OVRTask_1_AwaitableSource<TResult>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRTask_1_AwaitableSource<TResult>*>());
}
/// @brief Convert operator to "::GlobalNamespace::OVRObjectPool_IPoolObject"
template<typename TResult>
constexpr  GlobalNamespace::OVRTask_1_AwaitableSource<TResult>::operator ::GlobalNamespace::OVRObjectPool_IPoolObject*() noexcept {
return static_cast<::GlobalNamespace::OVRObjectPool_IPoolObject*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::OVRObjectPool_IPoolObject"
template<typename TResult>
constexpr ::GlobalNamespace::OVRObjectPool_IPoolObject* GlobalNamespace::OVRTask_1_AwaitableSource<TResult>::i___GlobalNamespace__OVRObjectPool_IPoolObject() noexcept {
return static_cast<::GlobalNamespace::OVRObjectPool_IPoolObject*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TResult>
constexpr ::GlobalNamespace::OVRTask_1_AwaitableSource<TResult>::OVRTask_1_AwaitableSource()   {
}
template<typename TResult>
constexpr ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>& GlobalNamespace::OVRTask_1_TaskSource<TResult>::__cordl_internal_get__manualSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____manualSource;
}
template<typename TResult>
constexpr ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult> const& GlobalNamespace::OVRTask_1_TaskSource<TResult>::__cordl_internal_get__manualSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____manualSource;
}
template<typename TResult>
constexpr void GlobalNamespace::OVRTask_1_TaskSource<TResult>::__cordl_internal_set__manualSource(::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____manualSource = value;
}
template<typename TResult>
constexpr ::System::Threading::Tasks::ValueTask_1<TResult>& GlobalNamespace::OVRTask_1_TaskSource<TResult>::__cordl_internal_get__Task_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Task_k__BackingField;
}
template<typename TResult>
constexpr ::System::Threading::Tasks::ValueTask_1<TResult> const& GlobalNamespace::OVRTask_1_TaskSource<TResult>::__cordl_internal_get__Task_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Task_k__BackingField;
}
template<typename TResult>
constexpr void GlobalNamespace::OVRTask_1_TaskSource<TResult>::__cordl_internal_set__Task_k__BackingField(::System::Threading::Tasks::ValueTask_1<TResult>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Task_k__BackingField = value;
}
template<typename TResult>
inline ::System::Threading::Tasks::ValueTask_1<TResult> GlobalNamespace::OVRTask_1_TaskSource<TResult>::get_Task()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_TaskSource<TResult>*>(),
                        {"get_Task", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<TResult>>(this, ___internal_method);
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1_TaskSource<TResult>::set_Task(::System::Threading::Tasks::ValueTask_1<TResult>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_TaskSource<TResult>*>(),
                        {"set_Task", {}, {::i2c::type_of<::System::Threading::Tasks::ValueTask_1<TResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TResult>
inline TResult GlobalNamespace::OVRTask_1_TaskSource<TResult>::GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_TaskSource<TResult>*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TResult>(this, ___internal_method, token);
}
template<typename TResult>
inline ::System::Threading::Tasks::Sources::ValueTaskSourceStatus GlobalNamespace::OVRTask_1_TaskSource<TResult>::GetStatus(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_TaskSource<TResult>*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Sources::ValueTaskSourceStatus>(this, ___internal_method, token);
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1_TaskSource<TResult>::OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token, ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_TaskSource<TResult>*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation, state, token, flags);
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1_TaskSource<TResult>::OVRObjectPool_IPoolObject_OnGet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_TaskSource<TResult>*>(),
                        {"OVRObjectPool.IPoolObject.OnGet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1_TaskSource<TResult>::OVRObjectPool_IPoolObject_OnReturn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_TaskSource<TResult>*>(),
                        {"OVRObjectPool.IPoolObject.OnReturn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1_TaskSource<TResult>::SetResult(TResult  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_TaskSource<TResult>*>(),
                        {"SetResult", {}, {::i2c::type_of<TResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1_TaskSource<TResult>::SetException(::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_TaskSource<TResult>*>(),
                        {"SetException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception);
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1_TaskSource<TResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_TaskSource<TResult>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TResult>
inline ::GlobalNamespace::OVRTask_1_TaskSource<TResult>* GlobalNamespace::OVRTask_1_TaskSource<TResult>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRTask_1_TaskSource<TResult>*>());
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>"
template<typename TResult>
constexpr  GlobalNamespace::OVRTask_1_TaskSource<TResult>::operator ::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>"
template<typename TResult>
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>* GlobalNamespace::OVRTask_1_TaskSource<TResult>::i___System__Threading__Tasks__Sources__IValueTaskSource_1_TResult_() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::OVRObjectPool_IPoolObject"
template<typename TResult>
constexpr  GlobalNamespace::OVRTask_1_TaskSource<TResult>::operator ::GlobalNamespace::OVRObjectPool_IPoolObject*() noexcept {
return static_cast<::GlobalNamespace::OVRObjectPool_IPoolObject*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::OVRObjectPool_IPoolObject"
template<typename TResult>
constexpr ::GlobalNamespace::OVRObjectPool_IPoolObject* GlobalNamespace::OVRTask_1_TaskSource<TResult>::i___GlobalNamespace__OVRObjectPool_IPoolObject() noexcept {
return static_cast<::GlobalNamespace::OVRObjectPool_IPoolObject*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TResult>
constexpr ::GlobalNamespace::OVRTask_1_TaskSource<TResult>::OVRTask_1_TaskSource()   {
}
template<typename TResult>
inline void GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>::setStaticF___9(::GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>*, "<>9", ::GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>*>(std::forward<::GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>*>(value));
}
template<typename TResult>
inline ::GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>* GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>*, "<>9", ::GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>*>();
}
template<typename TResult>
inline void GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TResult>
inline void GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>::__cctor_b__10_0(TResult  result, ::GlobalNamespace::OVRTask_1_CombinedTaskDataWithCompletedTaskId<TResult>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>*>(),
                        {"<.cctor>b__10_0", {}, {::i2c::type_of<TResult>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1_CombinedTaskDataWithCompletedTaskId<TResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, data);
}
template<typename TResult>
inline ::GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>* GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>*>());
}
// Ctor Parameters []
template<typename TResult>
constexpr ::GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>::CombinedTaskData_OVRTask_1___c()   {
}
template<typename TResult,typename T>
inline void GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult,T>::setStaticF_Subscribers(::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action_1<T>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action_1<T>*>*, "Subscribers", ::GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult,T>*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action_1<T>*>*>(value));
}
template<typename TResult,typename T>
inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action_1<T>*>* GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult,T>::getStaticF_Subscribers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action_1<T>*>*, "Subscribers", ::GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult,T>*>();
}
template<typename TResult,typename T>
inline void GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult,T>::setStaticF_Remover(::System::Action_1<::System::Guid>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Guid>*, "Remover", ::GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult,T>*>(std::forward<::System::Action_1<::System::Guid>*>(value));
}
template<typename TResult,typename T>
inline ::System::Action_1<::System::Guid>* GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult,T>::getStaticF_Remover()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Guid>*, "Remover", ::GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult,T>*>();
}
template<typename TResult,typename T>
inline void GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult,T>::setStaticF_Clearer(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "Clearer", ::GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult,T>*>(std::forward<::System::Action*>(value));
}
template<typename TResult,typename T>
inline ::System::Action* GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult,T>::getStaticF_Clearer()  {
return ::cordl_internals::getStaticField<::System::Action*, "Clearer", ::GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult,T>*>();
}
template<typename TResult,typename T>
inline void GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult,T>::Set(::System::Guid  taskId, ::System::Action_1<T>*  subscriber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult,T>*>(),
                        {"Set", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Action_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, taskId, subscriber);
}
template<typename TResult,typename T>
inline void GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult,T>::Notify(::System::Guid  taskId, T  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult,T>*>(),
                        {"Notify", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, taskId, result);
}
template<typename TResult,typename T>
inline void GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult,T>::Remove(::System::Guid  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult,T>*>(),
                        {"Remove", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, id);
}
template<typename TResult,typename T>
inline void GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult,T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult,T>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
template<typename TResult,typename T>
constexpr ::GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult,T>::OVRTask_1_IncrementalResultSubscriber_1()   {
}
template<typename TResult,typename T>
inline void GlobalNamespace::OVRTask_1_InternalData_1<TResult,T>::setStaticF_Data(::System::Collections::Generic::Dictionary_2<::System::Guid,T>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid,T>*, "Data", ::GlobalNamespace::OVRTask_1_InternalData_1<TResult,T>*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid,T>*>(value));
}
template<typename TResult,typename T>
inline ::System::Collections::Generic::Dictionary_2<::System::Guid,T>* GlobalNamespace::OVRTask_1_InternalData_1<TResult,T>::getStaticF_Data()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid,T>*, "Data", ::GlobalNamespace::OVRTask_1_InternalData_1<TResult,T>*>();
}
template<typename TResult,typename T>
inline void GlobalNamespace::OVRTask_1_InternalData_1<TResult,T>::setStaticF_Remover(::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>*, "Remover", ::GlobalNamespace::OVRTask_1_InternalData_1<TResult,T>*>(std::forward<::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>*>(value));
}
template<typename TResult,typename T>
inline ::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>* GlobalNamespace::OVRTask_1_InternalData_1<TResult,T>::getStaticF_Remover()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>*, "Remover", ::GlobalNamespace::OVRTask_1_InternalData_1<TResult,T>*>();
}
template<typename TResult,typename T>
inline void GlobalNamespace::OVRTask_1_InternalData_1<TResult,T>::setStaticF_Clearer(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "Clearer", ::GlobalNamespace::OVRTask_1_InternalData_1<TResult,T>*>(std::forward<::System::Action*>(value));
}
template<typename TResult,typename T>
inline ::System::Action* GlobalNamespace::OVRTask_1_InternalData_1<TResult,T>::getStaticF_Clearer()  {
return ::cordl_internals::getStaticField<::System::Action*, "Clearer", ::GlobalNamespace::OVRTask_1_InternalData_1<TResult,T>*>();
}
template<typename TResult,typename T>
inline bool GlobalNamespace::OVRTask_1_InternalData_1<TResult,T>::TryGet(::System::Guid  taskId, ::by_ref<T>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_InternalData_1<TResult,T>*>(),
                        {"TryGet", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::by_ref<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, taskId, data);
}
template<typename TResult,typename T>
inline void GlobalNamespace::OVRTask_1_InternalData_1<TResult,T>::Set(::System::Guid  taskId, T  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_InternalData_1<TResult,T>*>(),
                        {"Set", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, taskId, data);
}
template<typename TResult,typename T>
inline bool GlobalNamespace::OVRTask_1_InternalData_1<TResult,T>::Remove(::System::Guid  taskId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_InternalData_1<TResult,T>*>(),
                        {"Remove", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, taskId);
}
template<typename TResult,typename T>
inline void GlobalNamespace::OVRTask_1_InternalData_1<TResult,T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_InternalData_1<TResult,T>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
template<typename TResult,typename T>
constexpr ::GlobalNamespace::OVRTask_1_InternalData_1<TResult,T>::OVRTask_1_InternalData_1()   {
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template<typename TResult>
inline bool GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>::Invoke(::System::Guid  guid)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, guid);
}
template<typename TResult>
inline ::System::IAsyncResult* GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>::BeginInvoke(::System::Guid  guid, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, guid, callback, object);
}
template<typename TResult>
inline bool GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
template<typename TResult>
inline ::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>* GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>*>(object, method));
}
// Ctor Parameters []
template<typename TResult>
constexpr ::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>::OVRTask_1_InternalDataRemover()   {
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template<typename TResult>
inline bool GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>::Invoke(::System::Guid  guid)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, guid);
}
template<typename TResult>
inline ::System::IAsyncResult* GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>::BeginInvoke(::System::Guid  guid, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, guid, callback, object);
}
template<typename TResult>
inline bool GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
template<typename TResult>
inline ::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>* GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*>(object, method));
}
// Ctor Parameters []
template<typename TResult>
constexpr ::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>::OVRTask_1_ContinueWithRemover()   {
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>::Invoke(::System::Guid  guid, TResult  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, guid, result);
}
template<typename TResult>
inline ::System::IAsyncResult* GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>::BeginInvoke(::System::Guid  guid, TResult  result, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, guid, result, callback, object);
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
template<typename TResult>
inline ::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>* GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*>(object, method));
}
// Ctor Parameters []
template<typename TResult>
constexpr ::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>::OVRTask_1_ContinueWithInvoker()   {
}
