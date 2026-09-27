#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTask`1_CombinedTaskData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRTask`1_CombinedTaskData)
namespace GlobalNamespace {
template<typename TResult>
class CombinedTaskData_OVRTask_1___c;
}
namespace GlobalNamespace {
template<typename TResult>
struct OVRTask_1_CombinedTaskDataWithCompletedTaskId;
}
namespace GlobalNamespace {
template<typename TResult>
struct OVRTask_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
struct Guid;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TResult>
struct OVRTask_1_CombinedTaskData;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::OVRTask_1_CombinedTaskData);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::OVRTask_1_CombinedTaskData, "", "OVRTask`1/CombinedTaskData");
// [IsReadOnly]
// Dependencies OVRTask`1<TResult>
namespace GlobalNamespace {
// cpp template
template<typename TResult>
// Is value type: true
// CS Name: OVRTask`1/CombinedTaskData<TResult>
struct CORDL_TYPE OVRTask_1_CombinedTaskData {
public:
// Declarations
using __c = ::GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>;

/// @brief Field _onSingleTaskCompleted, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__onSingleTaskCompleted, put=setStaticF__onSingleTaskCompleted)) ::System::Action_2<TResult,::GlobalNamespace::OVRTask_1_CombinedTaskDataWithCompletedTaskId<TResult>>*  _onSingleTaskCompleted;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method OnSingleTaskCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnSingleTaskCompleted(::System::Guid  taskId, TResult  result) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRTask_1<TResult>>*  tasks, ::System::Collections::Generic::List_1<TResult>*  userOwnedResultList) ;

static inline ::System::Action_2<TResult,::GlobalNamespace::OVRTask_1_CombinedTaskDataWithCompletedTaskId<TResult>>* getStaticF__onSingleTaskCompleted() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

static inline void setStaticF__onSingleTaskCompleted(::System::Action_2<TResult,::GlobalNamespace::OVRTask_1_CombinedTaskDataWithCompletedTaskId<TResult>>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRTask_1_CombinedTaskData() ;

// Ctor Parameters [CppParam { name: "Task", ty: "::GlobalNamespace::OVRTask_1<::System::Collections::Generic::List_1<TResult>*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_remainingTaskIds", ty: "::System::Collections::Generic::HashSet_1<::System::Guid>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_originalTaskOrder", ty: "::System::Collections::Generic::List_1<::System::Guid>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_completedTasks", ty: "::System::Collections::Generic::Dictionary_2<::System::Guid,TResult>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_userOwnedResultList", ty: "::System::Collections::Generic::List_1<TResult>*", modifiers: "", def_value: None, comment: None }]
constexpr OVRTask_1_CombinedTaskData(::GlobalNamespace::OVRTask_1<::System::Collections::Generic::List_1<TResult>*>  Task, ::System::Collections::Generic::HashSet_1<::System::Guid>*  _remainingTaskIds, ::System::Collections::Generic::List_1<::System::Guid>*  _originalTaskOrder, ::System::Collections::Generic::Dictionary_2<::System::Guid,TResult>*  _completedTasks, ::System::Collections::Generic::List_1<TResult>*  _userOwnedResultList) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12580};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field Task, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1<::System::Collections::Generic::List_1<TResult>*>  Task;

/// @brief Field _remainingTaskIds, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::System::Guid>*  _remainingTaskIds;

/// @brief Field _originalTaskOrder, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Guid>*  _originalTaskOrder;

/// @brief Field _completedTasks, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Guid,TResult>*  _completedTasks;

/// @brief Field _userOwnedResultList, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<TResult>*  _userOwnedResultList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
