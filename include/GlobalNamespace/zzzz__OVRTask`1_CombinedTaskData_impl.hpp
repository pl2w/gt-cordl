#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTask`1_CombinedTaskData.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_CombinedTaskData_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_CombinedTaskDataWithCompletedTaskId_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template<typename TResult>
inline void GlobalNamespace::OVRTask_1_CombinedTaskData<TResult>::setStaticF__onSingleTaskCompleted(::System::Action_2<TResult,::GlobalNamespace::OVRTask_1_CombinedTaskDataWithCompletedTaskId<TResult>>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<TResult,::GlobalNamespace::OVRTask_1_CombinedTaskDataWithCompletedTaskId<TResult>>*, "_onSingleTaskCompleted", ::GlobalNamespace::OVRTask_1_CombinedTaskData<TResult>>(std::forward<::System::Action_2<TResult,::GlobalNamespace::OVRTask_1_CombinedTaskDataWithCompletedTaskId<TResult>>*>(value));
}
template<typename TResult>
inline ::System::Action_2<TResult,::GlobalNamespace::OVRTask_1_CombinedTaskDataWithCompletedTaskId<TResult>>* GlobalNamespace::OVRTask_1_CombinedTaskData<TResult>::getStaticF__onSingleTaskCompleted()  {
return ::cordl_internals::getStaticField<::System::Action_2<TResult,::GlobalNamespace::OVRTask_1_CombinedTaskDataWithCompletedTaskId<TResult>>*, "_onSingleTaskCompleted", ::GlobalNamespace::OVRTask_1_CombinedTaskData<TResult>>();
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1_CombinedTaskData<TResult>::OnSingleTaskCompleted(::System::Guid  taskId, TResult  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_CombinedTaskData<TResult>>(),
                        {"OnSingleTaskCompleted", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<TResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, taskId, result);
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1_CombinedTaskData<TResult>::_ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRTask_1<TResult>>*  tasks, ::System::Collections::Generic::List_1<TResult>*  userOwnedResultList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_CombinedTaskData<TResult>>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRTask_1<TResult>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<TResult>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, tasks, userOwnedResultList);
}
template<typename TResult>
inline void GlobalNamespace::OVRTask_1_CombinedTaskData<TResult>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_1_CombinedTaskData<TResult>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template<typename TResult>
constexpr  GlobalNamespace::OVRTask_1_CombinedTaskData<TResult>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename TResult>
constexpr ::System::IDisposable* GlobalNamespace::OVRTask_1_CombinedTaskData<TResult>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Task", ty: "::GlobalNamespace::OVRTask_1<::System::Collections::Generic::List_1<TResult>*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_remainingTaskIds", ty: "::System::Collections::Generic::HashSet_1<::System::Guid>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_originalTaskOrder", ty: "::System::Collections::Generic::List_1<::System::Guid>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_completedTasks", ty: "::System::Collections::Generic::Dictionary_2<::System::Guid,TResult>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_userOwnedResultList", ty: "::System::Collections::Generic::List_1<TResult>*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TResult>
constexpr ::GlobalNamespace::OVRTask_1_CombinedTaskData<TResult>::OVRTask_1_CombinedTaskData(::GlobalNamespace::OVRTask_1<::System::Collections::Generic::List_1<TResult>*>  Task, ::System::Collections::Generic::HashSet_1<::System::Guid>*  _remainingTaskIds, ::System::Collections::Generic::List_1<::System::Guid>*  _originalTaskOrder, ::System::Collections::Generic::Dictionary_2<::System::Guid,TResult>*  _completedTasks, ::System::Collections::Generic::List_1<TResult>*  _userOwnedResultList) noexcept  {
this->Task = Task;
this->_remainingTaskIds = _remainingTaskIds;
this->_originalTaskOrder = _originalTaskOrder;
this->_completedTasks = _completedTasks;
this->_userOwnedResultList = _userOwnedResultList;
}
// Ctor Parameters []
template<typename TResult>
constexpr ::GlobalNamespace::OVRTask_1_CombinedTaskData<TResult>::OVRTask_1_CombinedTaskData()   {
}
