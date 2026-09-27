#pragma once
// IWYU pragma private; include "Fusion/Async/TaskManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_YieldAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TaskManager)
namespace Fusion::Async {
class TaskManager__Delay_d__9;
}
namespace Fusion::Async {
class TaskManager___c__DisplayClass6_0;
}
namespace Fusion::Async {
class TaskManager___c__DisplayClass7_0;
}
namespace Fusion::Async {
class TaskManager___c__DisplayClass8_0;
}
namespace Fusion::Async {
class __c__DisplayClass6_0_TaskManager___Service_b__0_d;
}
namespace Fusion::Async {
class __c__DisplayClass7_0_TaskManager___Run_b__0_d;
}
namespace Fusion::Async {
class __c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
struct TaskCreationOptions;
}
namespace System::Threading::Tasks {
class TaskFactory;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Exception;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Fusion::Async {
class TaskManager;
}
namespace Fusion::Async {
class TaskManager__Delay_d__9;
}
namespace Fusion::Async {
class TaskManager___c__DisplayClass6_0;
}
namespace Fusion::Async {
class TaskManager___c__DisplayClass7_0;
}
namespace Fusion::Async {
class TaskManager___c__DisplayClass8_0;
}
namespace Fusion::Async {
class __c__DisplayClass6_0_TaskManager___Service_b__0_d;
}
namespace Fusion::Async {
class __c__DisplayClass7_0_TaskManager___Run_b__0_d;
}
namespace Fusion::Async {
class __c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d;
}
// Write type traits
MARK_REF_T(::Fusion::Async::TaskManager*);
MARK_REF_T(::Fusion::Async::TaskManager__Delay_d__9*);
MARK_REF_T(::Fusion::Async::TaskManager___c__DisplayClass6_0*);
MARK_REF_T(::Fusion::Async::TaskManager___c__DisplayClass7_0*);
MARK_REF_T(::Fusion::Async::TaskManager___c__DisplayClass8_0*);
MARK_REF_T(::Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d*);
MARK_REF_T(::Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d*);
MARK_REF_T(::Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d*);
DEFINE_IL2CPP_CLASS(::Fusion::Async::TaskManager*, "Fusion.Async", "TaskManager");
DEFINE_IL2CPP_CLASS(::Fusion::Async::TaskManager__Delay_d__9*, "Fusion.Async", "TaskManager/<Delay>d__9");
DEFINE_IL2CPP_CLASS(::Fusion::Async::TaskManager___c__DisplayClass6_0*, "Fusion.Async", "TaskManager/<>c__DisplayClass6_0");
DEFINE_IL2CPP_CLASS(::Fusion::Async::TaskManager___c__DisplayClass7_0*, "Fusion.Async", "TaskManager/<>c__DisplayClass7_0");
DEFINE_IL2CPP_CLASS(::Fusion::Async::TaskManager___c__DisplayClass8_0*, "Fusion.Async", "TaskManager/<>c__DisplayClass8_0");
DEFINE_IL2CPP_CLASS(::Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d*, "Fusion.Async", "TaskManager/<>c__DisplayClass6_0/<<Service>b__0>d");
DEFINE_IL2CPP_CLASS(::Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d*, "Fusion.Async", "TaskManager/<>c__DisplayClass7_0/<<Run>b__0>d");
DEFINE_IL2CPP_CLASS(::Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d*, "Fusion.Async", "TaskManager/<>c__DisplayClass8_0/<<ContinueWhenAll>b__0>d");
// Dependencies System.Object
namespace Fusion::Async {
// Is value type: false
// CS Name: Fusion.Async.TaskManager
class CORDL_TYPE TaskManager : public ::System::Object {
public:
// Declarations
using _Delay_d__9 = ::Fusion::Async::TaskManager__Delay_d__9;

using __c__DisplayClass6_0 = ::Fusion::Async::TaskManager___c__DisplayClass6_0;

using __c__DisplayClass7_0 = ::Fusion::Async::TaskManager___c__DisplayClass7_0;

using __c__DisplayClass8_0 = ::Fusion::Async::TaskManager___c__DisplayClass8_0;

/// @brief Field <TaskFactory>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__TaskFactory_k__BackingField, put=setStaticF__TaskFactory_k__BackingField)) ::System::Threading::Tasks::TaskFactory*  _TaskFactory_k__BackingField;

/// @brief Method ContinueWhenAll, addr 0x5f42304, size 0x270, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* ContinueWhenAll(::ArrayW<::System::Threading::Tasks::Task*>  precedingTasks, ::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*  action, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Fusion.Async.TaskManager::<Delay>d__9))]
/// [DebuggerStepThrough]
/// @brief Method Delay, addr 0x5f4257c, size 0x11c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* Delay(int32_t  delay, ::System::Threading::CancellationToken  token) ;

/// @brief Method Run, addr 0x5f420b8, size 0x244, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* Run(::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*  action, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::TaskCreationOptions  options) ;

/// @brief Method Service, addr 0x5f41de8, size 0x2c8, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* Service(::System::Func_1<::System::Threading::Tasks::Task_1<bool>*>*  recurringAction, ::System::Threading::CancellationToken  cancellationToken, int32_t  interval, ::StringW  serviceName) ;

/// [Conditional("FUSION_UNITY")]
/// @brief Method Setup, addr 0x5f41b88, size 0x260, virtual false, abstract: false, final false
static inline void Setup() ;

static inline ::System::Threading::Tasks::TaskFactory* getStaticF__TaskFactory_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_TaskFactory, addr 0x5f41ac8, size 0x58, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::TaskFactory* get_TaskFactory() ;

static inline void setStaticF__TaskFactory_k__BackingField(::System::Threading::Tasks::TaskFactory*  value) ;

/// [CompilerGenerated]
/// @brief Method set_TaskFactory, addr 0x5f41b20, size 0x68, virtual false, abstract: false, final false
static inline void set_TaskFactory(::System::Threading::Tasks::TaskFactory*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TaskManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TaskManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskManager(TaskManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskManager(TaskManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31329};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Async::TaskManager) == 0x10, "Size mismatch!");

} // namespace end def Fusion::Async
// [CompilerGenerated]
// Dependencies System.Object, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.YieldAwaitable::YieldAwaiter, System.Threading.CancellationToken
namespace Fusion::Async {
// Is value type: false
// CS Name: Fusion.Async.TaskManager/<Delay>d__9
class CORDL_TYPE TaskManager__Delay_d__9 : public ::System::Object {
public:
// Declarations
/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get___t__builder, put=__cordl_internal_set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>u__1, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get___u__1, put=__cordl_internal_set___u__1)) ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__1;

/// @brief Field <>u__2, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get___u__2, put=__cordl_internal_set___u__2)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__2;

/// @brief Field <endTime>5__1, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__endTime_5__1, put=__cordl_internal_set__endTime_5__1)) float_t  _endTime_5__1;

/// @brief Field delay, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_delay, put=__cordl_internal_set_delay)) int32_t  delay;

/// @brief Field token, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_token, put=__cordl_internal_set_token)) ::System::Threading::CancellationToken  token;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept;

/// @brief Method MoveNext, addr 0x5f4393c, size 0x45c, virtual true, abstract: false, final true
inline void MoveNext() ;

static inline ::Fusion::Async::TaskManager__Delay_d__9* New_ctor() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5f43d98, size 0x434, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __cordl_internal_get___t__builder() const;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __cordl_internal_get___t__builder() ;

constexpr ::GlobalNamespace::YieldAwaitable_YieldAwaiter const& __cordl_internal_get___u__1() const;

constexpr ::GlobalNamespace::YieldAwaitable_YieldAwaiter& __cordl_internal_get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __cordl_internal_get___u__2() const;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __cordl_internal_get___u__2() ;

constexpr float_t const& __cordl_internal_get__endTime_5__1() const;

constexpr float_t& __cordl_internal_get__endTime_5__1() ;

constexpr int32_t const& __cordl_internal_get_delay() const;

constexpr int32_t& __cordl_internal_get_delay() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_token() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_token() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr void __cordl_internal_set___u__1(::GlobalNamespace::YieldAwaitable_YieldAwaiter  value) ;

constexpr void __cordl_internal_set___u__2(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr void __cordl_internal_set__endTime_5__1(float_t  value) ;

constexpr void __cordl_internal_set_delay(int32_t  value) ;

constexpr void __cordl_internal_set_token(::System::Threading::CancellationToken  value) ;

/// @brief Method .ctor, addr 0x5f42698, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TaskManager__Delay_d__9() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TaskManager__Delay_d__9", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskManager__Delay_d__9(TaskManager__Delay_d__9 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskManager__Delay_d__9", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskManager__Delay_d__9(TaskManager__Delay_d__9 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31328};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>t__builder, offset: 0x18, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  _____t__builder;

/// @brief Field delay, offset: 0x30, size: 0x4, def value: None
 int32_t  ___delay;

/// @brief Field token, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___token;

/// @brief Field <endTime>5__1, offset: 0x40, size: 0x4, def value: None
 float_t  ____endTime_5__1;

/// @brief Field <>u__1, offset: 0x44, size: 0x1, def value: None
 ::GlobalNamespace::YieldAwaitable_YieldAwaiter  _____u__1;

/// @brief Field <>u__2, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  _____u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Async::TaskManager__Delay_d__9, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Async::TaskManager__Delay_d__9, _____t__builder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Async::TaskManager__Delay_d__9, ___delay) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Async::TaskManager__Delay_d__9, ___token) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::Async::TaskManager__Delay_d__9, ____endTime_5__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::Async::TaskManager__Delay_d__9, _____u__1) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Fusion::Async::TaskManager__Delay_d__9, _____u__2) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Fusion::Async::TaskManager__Delay_d__9) == 0x50, "Size mismatch!");

} // namespace end def Fusion::Async
// [CompilerGenerated]
// Dependencies System.Object, System.Threading.CancellationToken
namespace Fusion::Async {
// Is value type: false
// CS Name: Fusion.Async.TaskManager/<>c__DisplayClass8_0
class CORDL_TYPE TaskManager___c__DisplayClass8_0 : public ::System::Object {
public:
// Declarations
using __ContinueWhenAll_b__0_d = ::Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d;

/// @brief Field action, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_action, put=__cordl_internal_set_action)) ::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*  action;

/// @brief Field cancellationToken, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

static inline ::Fusion::Async::TaskManager___c__DisplayClass8_0* New_ctor() ;

/// [AsyncStateMachine(typeof(Fusion.Async.TaskManager::<>c__DisplayClass8_0::<<ContinueWhenAll>b__0>d))]
/// [DebuggerStepThrough]
/// @brief Method <ContinueWhenAll>b__0, addr 0x5f43480, size 0x128, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* _ContinueWhenAll_b__0(::ArrayW<::System::Threading::Tasks::Task*>  tasks) ;

constexpr ::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>* const& __cordl_internal_get_action() const;

constexpr ::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*& __cordl_internal_get_action() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr void __cordl_internal_set_action(::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

/// @brief Method .ctor, addr 0x5f42574, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TaskManager___c__DisplayClass8_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TaskManager___c__DisplayClass8_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskManager___c__DisplayClass8_0(TaskManager___c__DisplayClass8_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskManager___c__DisplayClass8_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskManager___c__DisplayClass8_0(TaskManager___c__DisplayClass8_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31327};

/// @brief Field cancellationToken, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field action, offset: 0x18, size: 0x8, def value: None
 ::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*  ___action;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Async::TaskManager___c__DisplayClass8_0, ___cancellationToken) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Async::TaskManager___c__DisplayClass8_0, ___action) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::Async::TaskManager___c__DisplayClass8_0) == 0x20, "Size mismatch!");

} // namespace end def Fusion::Async
// Dependencies System.Object, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Threading.Tasks.Task
namespace Fusion::Async {
// Is value type: false
// CS Name: Fusion.Async.TaskManager/<>c__DisplayClass8_0/<<ContinueWhenAll>b__0>d
class CORDL_TYPE __c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d : public ::System::Object {
public:
// Declarations
/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>4__this, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Fusion::Async::TaskManager___c__DisplayClass8_0*  __4__this;

/// @brief Field <>t__builder, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get___t__builder, put=__cordl_internal_set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>u__1, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get___u__1, put=__cordl_internal_set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Field <e>5__1, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__e_5__1, put=__cordl_internal_set__e_5__1)) ::System::Exception*  _e_5__1;

/// @brief Field tasks, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_tasks, put=__cordl_internal_set_tasks)) ::ArrayW<::System::Threading::Tasks::Task*>  tasks;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept;

/// @brief Method MoveNext, addr 0x5f435b0, size 0x388, virtual true, abstract: false, final true
inline void MoveNext() ;

static inline ::Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d* New_ctor() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5f43938, size 0x4, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::Fusion::Async::TaskManager___c__DisplayClass8_0* const& __cordl_internal_get___4__this() const;

constexpr ::Fusion::Async::TaskManager___c__DisplayClass8_0*& __cordl_internal_get___4__this() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __cordl_internal_get___t__builder() const;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __cordl_internal_get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __cordl_internal_get___u__1() const;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __cordl_internal_get___u__1() ;

constexpr ::System::Exception* const& __cordl_internal_get__e_5__1() const;

constexpr ::System::Exception*& __cordl_internal_get__e_5__1() ;

constexpr ::ArrayW<::System::Threading::Tasks::Task*> const& __cordl_internal_get_tasks() const;

constexpr ::ArrayW<::System::Threading::Tasks::Task*>& __cordl_internal_get_tasks() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___4__this(::Fusion::Async::TaskManager___c__DisplayClass8_0*  value) ;

constexpr void __cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr void __cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr void __cordl_internal_set__e_5__1(::System::Exception*  value) ;

constexpr void __cordl_internal_set_tasks(::ArrayW<::System::Threading::Tasks::Task*>  value) ;

/// @brief Method .ctor, addr 0x5f435a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d(__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d(__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31326};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>t__builder, offset: 0x18, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  _____t__builder;

/// @brief Field tasks, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::System::Threading::Tasks::Task*>  ___tasks;

/// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
 ::Fusion::Async::TaskManager___c__DisplayClass8_0*  _____4__this;

/// @brief Field <e>5__1, offset: 0x40, size: 0x8, def value: None
 ::System::Exception*  ____e_5__1;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  _____u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d, _____t__builder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d, ___tasks) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d, _____4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d, ____e_5__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d, _____u__1) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Fusion::Async::__c__DisplayClass8_0_TaskManager___ContinueWhenAll_b__0_d) == 0x50, "Size mismatch!");

} // namespace end def Fusion::Async
// [CompilerGenerated]
// Dependencies System.Object, System.Threading.CancellationToken
namespace Fusion::Async {
// Is value type: false
// CS Name: Fusion.Async.TaskManager/<>c__DisplayClass7_0
class CORDL_TYPE TaskManager___c__DisplayClass7_0 : public ::System::Object {
public:
// Declarations
using __Run_b__0_d = ::Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d;

/// @brief Field action, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_action, put=__cordl_internal_set_action)) ::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*  action;

/// @brief Field cancellationToken, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

static inline ::Fusion::Async::TaskManager___c__DisplayClass7_0* New_ctor() ;

/// [AsyncStateMachine(typeof(Fusion.Async.TaskManager::<>c__DisplayClass7_0::<<Run>b__0>d))]
/// [DebuggerStepThrough]
/// @brief Method <Run>b__0, addr 0x5f42fd8, size 0x114, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* _Run_b__0() ;

constexpr ::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>* const& __cordl_internal_get_action() const;

constexpr ::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*& __cordl_internal_get_action() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr void __cordl_internal_set_action(::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

/// @brief Method .ctor, addr 0x5f422fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TaskManager___c__DisplayClass7_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TaskManager___c__DisplayClass7_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskManager___c__DisplayClass7_0(TaskManager___c__DisplayClass7_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskManager___c__DisplayClass7_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskManager___c__DisplayClass7_0(TaskManager___c__DisplayClass7_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31325};

/// @brief Field cancellationToken, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field action, offset: 0x18, size: 0x8, def value: None
 ::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*  ___action;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Async::TaskManager___c__DisplayClass7_0, ___cancellationToken) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Async::TaskManager___c__DisplayClass7_0, ___action) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::Async::TaskManager___c__DisplayClass7_0) == 0x20, "Size mismatch!");

} // namespace end def Fusion::Async
// Dependencies System.Object, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace Fusion::Async {
// Is value type: false
// CS Name: Fusion.Async.TaskManager/<>c__DisplayClass7_0/<<Run>b__0>d
class CORDL_TYPE __c__DisplayClass7_0_TaskManager___Run_b__0_d : public ::System::Object {
public:
// Declarations
/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Fusion::Async::TaskManager___c__DisplayClass7_0*  __4__this;

/// @brief Field <>t__builder, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get___t__builder, put=__cordl_internal_set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>u__1, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___u__1, put=__cordl_internal_set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Field <e>5__1, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__e_5__1, put=__cordl_internal_set__e_5__1)) ::System::Exception*  _e_5__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept;

/// @brief Method MoveNext, addr 0x5f430f4, size 0x388, virtual true, abstract: false, final true
inline void MoveNext() ;

static inline ::Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d* New_ctor() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5f4347c, size 0x4, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::Fusion::Async::TaskManager___c__DisplayClass7_0* const& __cordl_internal_get___4__this() const;

constexpr ::Fusion::Async::TaskManager___c__DisplayClass7_0*& __cordl_internal_get___4__this() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __cordl_internal_get___t__builder() const;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __cordl_internal_get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __cordl_internal_get___u__1() const;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __cordl_internal_get___u__1() ;

constexpr ::System::Exception* const& __cordl_internal_get__e_5__1() const;

constexpr ::System::Exception*& __cordl_internal_get__e_5__1() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___4__this(::Fusion::Async::TaskManager___c__DisplayClass7_0*  value) ;

constexpr void __cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr void __cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr void __cordl_internal_set__e_5__1(::System::Exception*  value) ;

/// @brief Method .ctor, addr 0x5f430ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __c__DisplayClass7_0_TaskManager___Run_b__0_d() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__c__DisplayClass7_0_TaskManager___Run_b__0_d", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
__c__DisplayClass7_0_TaskManager___Run_b__0_d(__c__DisplayClass7_0_TaskManager___Run_b__0_d && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__c__DisplayClass7_0_TaskManager___Run_b__0_d", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
__c__DisplayClass7_0_TaskManager___Run_b__0_d(__c__DisplayClass7_0_TaskManager___Run_b__0_d const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31324};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>t__builder, offset: 0x18, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  _____t__builder;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::Fusion::Async::TaskManager___c__DisplayClass7_0*  _____4__this;

/// @brief Field <e>5__1, offset: 0x38, size: 0x8, def value: None
 ::System::Exception*  ____e_5__1;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  _____u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d, _____t__builder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d, ____e_5__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d, _____u__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Fusion::Async::__c__DisplayClass7_0_TaskManager___Run_b__0_d) == 0x48, "Size mismatch!");

} // namespace end def Fusion::Async
// [CompilerGenerated]
// Dependencies System.Object, System.Threading.CancellationToken
namespace Fusion::Async {
// Is value type: false
// CS Name: Fusion.Async.TaskManager/<>c__DisplayClass6_0
class CORDL_TYPE TaskManager___c__DisplayClass6_0 : public ::System::Object {
public:
// Declarations
using __Service_b__0_d = ::Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d;

/// @brief Field cancellationToken, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field interval, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_interval, put=__cordl_internal_set_interval)) int32_t  interval;

/// @brief Field recurringAction, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_recurringAction, put=__cordl_internal_set_recurringAction)) ::System::Func_1<::System::Threading::Tasks::Task_1<bool>*>*  recurringAction;

/// @brief Field serviceName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_serviceName, put=__cordl_internal_set_serviceName)) ::StringW  serviceName;

static inline ::Fusion::Async::TaskManager___c__DisplayClass6_0* New_ctor() ;

/// [AsyncStateMachine(typeof(Fusion.Async.TaskManager::<>c__DisplayClass6_0::<<Service>b__0>d))]
/// [DebuggerStepThrough]
/// @brief Method <Service>b__0, addr 0x5f42750, size 0x114, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* _Service_b__0() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr int32_t const& __cordl_internal_get_interval() const;

constexpr int32_t& __cordl_internal_get_interval() ;

constexpr ::System::Func_1<::System::Threading::Tasks::Task_1<bool>*>* const& __cordl_internal_get_recurringAction() const;

constexpr ::System::Func_1<::System::Threading::Tasks::Task_1<bool>*>*& __cordl_internal_get_recurringAction() ;

constexpr ::StringW const& __cordl_internal_get_serviceName() const;

constexpr ::StringW& __cordl_internal_get_serviceName() ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_interval(int32_t  value) ;

constexpr void __cordl_internal_set_recurringAction(::System::Func_1<::System::Threading::Tasks::Task_1<bool>*>*  value) ;

constexpr void __cordl_internal_set_serviceName(::StringW  value) ;

/// @brief Method .ctor, addr 0x5f420b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TaskManager___c__DisplayClass6_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TaskManager___c__DisplayClass6_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskManager___c__DisplayClass6_0(TaskManager___c__DisplayClass6_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskManager___c__DisplayClass6_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskManager___c__DisplayClass6_0(TaskManager___c__DisplayClass6_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31323};

/// @brief Field serviceName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___serviceName;

/// @brief Field recurringAction, offset: 0x18, size: 0x8, def value: None
 ::System::Func_1<::System::Threading::Tasks::Task_1<bool>*>*  ___recurringAction;

/// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field interval, offset: 0x28, size: 0x4, def value: None
 int32_t  ___interval;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Async::TaskManager___c__DisplayClass6_0, ___serviceName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Async::TaskManager___c__DisplayClass6_0, ___recurringAction) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Async::TaskManager___c__DisplayClass6_0, ___cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Async::TaskManager___c__DisplayClass6_0, ___interval) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Fusion::Async::TaskManager___c__DisplayClass6_0) == 0x30, "Size mismatch!");

} // namespace end def Fusion::Async
// Dependencies System.Object, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Fusion::Async {
// Is value type: false
// CS Name: Fusion.Async.TaskManager/<>c__DisplayClass6_0/<<Service>b__0>d
class CORDL_TYPE __c__DisplayClass6_0_TaskManager___Service_b__0_d : public ::System::Object {
public:
// Declarations
/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Fusion::Async::TaskManager___c__DisplayClass6_0*  __4__this;

/// @brief Field <>s__1, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get___s__1, put=__cordl_internal_set___s__1)) bool  __s__1;

/// @brief Field <>t__builder, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get___t__builder, put=__cordl_internal_set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>u__1, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get___u__1, put=__cordl_internal_set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Field <>u__2, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get___u__2, put=__cordl_internal_set___u__2)) ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__2;

/// @brief Field <e>5__2, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__e_5__2, put=__cordl_internal_set__e_5__2)) ::System::Exception*  _e_5__2;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept;

/// @brief Method MoveNext, addr 0x5f4286c, size 0x768, virtual true, abstract: false, final true
inline void MoveNext() ;

static inline ::Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d* New_ctor() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5f42fd4, size 0x4, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::Fusion::Async::TaskManager___c__DisplayClass6_0* const& __cordl_internal_get___4__this() const;

constexpr ::Fusion::Async::TaskManager___c__DisplayClass6_0*& __cordl_internal_get___4__this() ;

constexpr bool const& __cordl_internal_get___s__1() const;

constexpr bool& __cordl_internal_get___s__1() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __cordl_internal_get___t__builder() const;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __cordl_internal_get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __cordl_internal_get___u__1() const;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __cordl_internal_get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& __cordl_internal_get___u__2() const;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& __cordl_internal_get___u__2() ;

constexpr ::System::Exception* const& __cordl_internal_get__e_5__2() const;

constexpr ::System::Exception*& __cordl_internal_get__e_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___4__this(::Fusion::Async::TaskManager___c__DisplayClass6_0*  value) ;

constexpr void __cordl_internal_set___s__1(bool  value) ;

constexpr void __cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr void __cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr void __cordl_internal_set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value) ;

constexpr void __cordl_internal_set__e_5__2(::System::Exception*  value) ;

/// @brief Method .ctor, addr 0x5f42864, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __c__DisplayClass6_0_TaskManager___Service_b__0_d() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__c__DisplayClass6_0_TaskManager___Service_b__0_d", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
__c__DisplayClass6_0_TaskManager___Service_b__0_d(__c__DisplayClass6_0_TaskManager___Service_b__0_d && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__c__DisplayClass6_0_TaskManager___Service_b__0_d", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
__c__DisplayClass6_0_TaskManager___Service_b__0_d(__c__DisplayClass6_0_TaskManager___Service_b__0_d const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31322};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>t__builder, offset: 0x18, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  _____t__builder;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::Fusion::Async::TaskManager___c__DisplayClass6_0*  _____4__this;

/// @brief Field <>s__1, offset: 0x38, size: 0x1, def value: None
 bool  _____s__1;

/// @brief Field <e>5__2, offset: 0x40, size: 0x8, def value: None
 ::System::Exception*  ____e_5__2;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  _____u__1;

/// @brief Field <>u__2, offset: 0x50, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  _____u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d, _____t__builder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d, _____s__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d, ____e_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d, _____u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d, _____u__2) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Fusion::Async::__c__DisplayClass6_0_TaskManager___Service_b__0_d) == 0x58, "Size mismatch!");

} // namespace end def Fusion::Async
