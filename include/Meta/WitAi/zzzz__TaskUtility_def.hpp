#pragma once
// IWYU pragma private; include "Meta/WitAi/TaskUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TaskUtility)
namespace GlobalNamespace {
struct TaskUtility__WaitForTimeout_d__3;
}
namespace Meta::WitAi {
class TaskUtility___c__DisplayClass2_0;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
struct DateTime;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class IAsyncResult;
}
namespace UnityEngine {
class AsyncOperation;
}
// Forward declare root types
namespace Meta::WitAi {
class TaskUtility;
}
namespace Meta::WitAi {
class TaskUtility___c__DisplayClass2_0;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TaskUtility*);
MARK_REF_T(::Meta::WitAi::TaskUtility___c__DisplayClass2_0*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TaskUtility*, "Meta.WitAi", "TaskUtility");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TaskUtility___c__DisplayClass2_0*, "Meta.WitAi", "TaskUtility/<>c__DisplayClass2_0");
// Dependencies System.Object
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.TaskUtility
class CORDL_TYPE TaskUtility : public ::System::Object {
public:
// Declarations
using _WaitForTimeout_d__3 = ::GlobalNamespace::TaskUtility__WaitForTimeout_d__3;

using __c__DisplayClass2_0 = ::Meta::WitAi::TaskUtility___c__DisplayClass2_0;

/// @brief Method FromAsyncOp, addr 0x9e3da94, size 0x184, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* FromAsyncOp(::UnityEngine::AsyncOperation*  asyncOperation) ;

/// @brief Method FromAsyncResult, addr 0x9e3d900, size 0x190, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* FromAsyncResult(::System::IAsyncResult*  asyncResult) ;

/// @brief Method StubForTaskFactory, addr 0x9e3da90, size 0x4, virtual false, abstract: false, final false
static inline void StubForTaskFactory(::System::IAsyncResult*  result) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.TaskUtility::<WaitForTimeout>d__3))]
/// @brief Method WaitForTimeout, addr 0x9e3dc20, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* WaitForTimeout(int32_t  timeoutMs, ::System::Func_1<::System::DateTime>*  getLastUpdate, ::System::Threading::Tasks::Task*  completionTask) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TaskUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TaskUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskUtility(TaskUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskUtility(TaskUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30992};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::TaskUtility) == 0x10, "Size mismatch!");

} // namespace end def Meta::WitAi
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.TaskUtility/<>c__DisplayClass2_0
class CORDL_TYPE TaskUtility___c__DisplayClass2_0 : public ::System::Object {
public:
// Declarations
/// @brief Field completion, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_completion, put=__cordl_internal_set_completion)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  completion;

static inline ::Meta::WitAi::TaskUtility___c__DisplayClass2_0* New_ctor() ;

/// @brief Method <FromAsyncOp>b__0, addr 0x9e3dd20, size 0x54, virtual false, abstract: false, final false
inline void _FromAsyncOp_b__0(::UnityEngine::AsyncOperation*  operation) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get_completion() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get_completion() ;

constexpr void __cordl_internal_set_completion(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

/// @brief Method .ctor, addr 0x9e3dc18, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TaskUtility___c__DisplayClass2_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TaskUtility___c__DisplayClass2_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskUtility___c__DisplayClass2_0(TaskUtility___c__DisplayClass2_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskUtility___c__DisplayClass2_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskUtility___c__DisplayClass2_0(TaskUtility___c__DisplayClass2_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30990};

/// @brief Field completion, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  ___completion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TaskUtility___c__DisplayClass2_0, ___completion) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TaskUtility___c__DisplayClass2_0) == 0x18, "Size mismatch!");

} // namespace end def Meta::WitAi
