#pragma once
// IWYU pragma private; include "Fusion/NetworkSceneAsyncOp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkSceneAsyncOp_Awaiter_def.hpp"
#include "Fusion/zzzz__SceneRef_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkSceneAsyncOp)
namespace Fusion {
class IAsyncOperation;
}
namespace Fusion {
class ICoroutine;
}
namespace Fusion {
class NetworkSceneAsyncOp__CreateDeferredOpTask_d__17;
}
namespace Fusion {
class NetworkSceneAsyncOp___c__DisplayClass18_0;
}
namespace Fusion {
struct SceneRef;
}
namespace GlobalNamespace {
struct NetworkSceneAsyncOp_Awaiter;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class SendOrPostCallback;
}
namespace System::Threading {
class SynchronizationContext;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
class Exception;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AsyncOperation;
}
// Forward declare root types
namespace Fusion {
class Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0;
}
namespace Fusion {
class Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1;
}
namespace Fusion {
class NetworkSceneAsyncOp__CreateDeferredOpTask_d__17;
}
namespace Fusion {
class NetworkSceneAsyncOp___c__DisplayClass18_0;
}
namespace Fusion {
struct NetworkSceneAsyncOp;
}
// Write type traits
MARK_REF_T(::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0*);
MARK_REF_T(::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1*);
MARK_REF_T(::Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17*);
MARK_REF_T(::Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0*);
MARK_VAL_T(::Fusion::NetworkSceneAsyncOp);
DEFINE_IL2CPP_CLASS(::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0*, "Fusion", "NetworkSceneAsyncOp/Awaiter/<>c__DisplayClass5_0");
DEFINE_IL2CPP_CLASS(::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1*, "Fusion", "NetworkSceneAsyncOp/Awaiter/<>c__DisplayClass5_1");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17*, "Fusion", "NetworkSceneAsyncOp/<CreateDeferredOpTask>d__17");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0*, "Fusion", "NetworkSceneAsyncOp/<>c__DisplayClass18_0");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkSceneAsyncOp, "Fusion", "NetworkSceneAsyncOp");
// [CompilerGenerated]
// Dependencies Fusion.NetworkSceneAsyncOp::Awaiter, Fusion.SceneRef, System.Object, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkSceneAsyncOp/<CreateDeferredOpTask>d__17
class CORDL_TYPE NetworkSceneAsyncOp__CreateDeferredOpTask_d__17 : public ::System::Object {
public:
// Declarations
/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get___t__builder, put=__cordl_internal_set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>u__1, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get___u__1, put=__cordl_internal_set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Field <>u__2, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get___u__2, put=__cordl_internal_set___u__2)) ::GlobalNamespace::NetworkSceneAsyncOp_Awaiter  __u__2;

/// @brief Field blockingTask, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_blockingTask, put=__cordl_internal_set_blockingTask)) ::System::Threading::Tasks::Task*  blockingTask;

/// @brief Field op, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_op, put=__cordl_internal_set_op)) ::System::Func_2<::Fusion::SceneRef,::Fusion::NetworkSceneAsyncOp>*  op;

/// @brief Field sceneRef, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_sceneRef, put=__cordl_internal_set_sceneRef)) ::Fusion::SceneRef  sceneRef;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept;

/// @brief Method MoveNext, addr 0x5fddff0, size 0x430, virtual true, abstract: false, final true
inline void MoveNext() ;

static inline ::Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17* New_ctor() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5fde420, size 0x4, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __cordl_internal_get___t__builder() const;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __cordl_internal_get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __cordl_internal_get___u__1() const;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __cordl_internal_get___u__1() ;

constexpr ::GlobalNamespace::NetworkSceneAsyncOp_Awaiter const& __cordl_internal_get___u__2() const;

constexpr ::GlobalNamespace::NetworkSceneAsyncOp_Awaiter& __cordl_internal_get___u__2() ;

constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get_blockingTask() const;

constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get_blockingTask() ;

constexpr ::System::Func_2<::Fusion::SceneRef,::Fusion::NetworkSceneAsyncOp>* const& __cordl_internal_get_op() const;

constexpr ::System::Func_2<::Fusion::SceneRef,::Fusion::NetworkSceneAsyncOp>*& __cordl_internal_get_op() ;

constexpr ::Fusion::SceneRef const& __cordl_internal_get_sceneRef() const;

constexpr ::Fusion::SceneRef& __cordl_internal_get_sceneRef() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr void __cordl_internal_set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr void __cordl_internal_set___u__2(::GlobalNamespace::NetworkSceneAsyncOp_Awaiter  value) ;

constexpr void __cordl_internal_set_blockingTask(::System::Threading::Tasks::Task*  value) ;

constexpr void __cordl_internal_set_op(::System::Func_2<::Fusion::SceneRef,::Fusion::NetworkSceneAsyncOp>*  value) ;

constexpr void __cordl_internal_set_sceneRef(::Fusion::SceneRef  value) ;

/// @brief Method .ctor, addr 0x5fdd910, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkSceneAsyncOp__CreateDeferredOpTask_d__17() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkSceneAsyncOp__CreateDeferredOpTask_d__17", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkSceneAsyncOp__CreateDeferredOpTask_d__17(NetworkSceneAsyncOp__CreateDeferredOpTask_d__17 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkSceneAsyncOp__CreateDeferredOpTask_d__17", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkSceneAsyncOp__CreateDeferredOpTask_d__17(NetworkSceneAsyncOp__CreateDeferredOpTask_d__17 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19282};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>t__builder, offset: 0x18, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  _____t__builder;

/// @brief Field sceneRef, offset: 0x30, size: 0x4, def value: None
 ::Fusion::SceneRef  ___sceneRef;

/// @brief Field blockingTask, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  ___blockingTask;

/// @brief Field op, offset: 0x40, size: 0x8, def value: None
 ::System::Func_2<::Fusion::SceneRef,::Fusion::NetworkSceneAsyncOp>*  ___op;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  _____u__1;

/// @brief Field <>u__2, offset: 0x50, size: 0x10, def value: None
 ::GlobalNamespace::NetworkSceneAsyncOp_Awaiter  _____u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17, _____t__builder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17, ___sceneRef) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17, ___blockingTask) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17, ___op) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17, _____u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17, _____u__2) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17) == 0x60, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies Fusion.NetworkSceneAsyncOp, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkSceneAsyncOp/<>c__DisplayClass18_0
class CORDL_TYPE NetworkSceneAsyncOp___c__DisplayClass18_0 : public ::System::Object {
public:
// Declarations
/// @brief Field action, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_action, put=__cordl_internal_set_action)) ::System::Action_1<::Fusion::NetworkSceneAsyncOp>*  action;

/// @brief Field captured, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_captured, put=__cordl_internal_set_captured)) ::Fusion::NetworkSceneAsyncOp  captured;

static inline ::Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0* New_ctor() ;

/// @brief Method <AddOnCompleted>b__0, addr 0x5fddf78, size 0x28, virtual false, abstract: false, final false
inline void _AddOnCompleted_b__0(::UnityEngine::AsyncOperation*  _) ;

/// @brief Method <AddOnCompleted>b__1, addr 0x5fddfa0, size 0x28, virtual false, abstract: false, final false
inline void _AddOnCompleted_b__1(::Fusion::IAsyncOperation*  _) ;

/// @brief Method <AddOnCompleted>b__2, addr 0x5fddfc8, size 0x28, virtual false, abstract: false, final false
inline void _AddOnCompleted_b__2(::System::Threading::Tasks::Task*  _) ;

constexpr ::System::Action_1<::Fusion::NetworkSceneAsyncOp>* const& __cordl_internal_get_action() const;

constexpr ::System::Action_1<::Fusion::NetworkSceneAsyncOp>*& __cordl_internal_get_action() ;

constexpr ::Fusion::NetworkSceneAsyncOp const& __cordl_internal_get_captured() const;

constexpr ::Fusion::NetworkSceneAsyncOp& __cordl_internal_get_captured() ;

constexpr void __cordl_internal_set_action(::System::Action_1<::Fusion::NetworkSceneAsyncOp>*  value) ;

constexpr void __cordl_internal_set_captured(::Fusion::NetworkSceneAsyncOp  value) ;

/// @brief Method .ctor, addr 0x5fddc14, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkSceneAsyncOp___c__DisplayClass18_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkSceneAsyncOp___c__DisplayClass18_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkSceneAsyncOp___c__DisplayClass18_0(NetworkSceneAsyncOp___c__DisplayClass18_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkSceneAsyncOp___c__DisplayClass18_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkSceneAsyncOp___c__DisplayClass18_0(NetworkSceneAsyncOp___c__DisplayClass18_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19281};

/// @brief Field action, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::Fusion::NetworkSceneAsyncOp>*  ___action;

/// @brief Field captured, offset: 0x18, size: 0x10, def value: None
 ::Fusion::NetworkSceneAsyncOp  ___captured;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0, ___action) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0, ___captured) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0) == 0x28, "Size mismatch!");

} // namespace end def Fusion
// [IsReadOnly]
// Dependencies Fusion.SceneRef
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkSceneAsyncOp
struct CORDL_TYPE NetworkSceneAsyncOp {
public:
// Declarations
using _CreateDeferredOpTask_d__17 = ::Fusion::NetworkSceneAsyncOp__CreateDeferredOpTask_d__17;

using __c__DisplayClass18_0 = ::Fusion::NetworkSceneAsyncOp___c__DisplayClass18_0;

using Awaiter = ::GlobalNamespace::NetworkSceneAsyncOp_Awaiter;

 __declspec(property(get=get_Error)) ::System::Exception*  Error;

 __declspec(property(get=get_IsDone)) bool  IsDone;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Method AddOnCompleted, addr 0x5fdd918, size 0x2fc, virtual false, abstract: false, final false
inline void AddOnCompleted(::System::Action_1<::Fusion::NetworkSceneAsyncOp>*  action) ;

/// [AsyncStateMachine(typeof(Fusion.NetworkSceneAsyncOp::<CreateDeferredOpTask>d__17))]
/// [DebuggerStepThrough]
/// @brief Method CreateDeferredOpTask, addr 0x5fdd7d8, size 0x138, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* CreateDeferredOpTask(::Fusion::SceneRef  sceneRef, ::System::Threading::Tasks::Task*  blockingTask, ::System::Func_2<::Fusion::SceneRef,::Fusion::NetworkSceneAsyncOp>*  op) ;

/// @brief Method FromAsyncOperation, addr 0x5fdd58c, size 0x7c, virtual false, abstract: false, final false
static inline ::Fusion::NetworkSceneAsyncOp FromAsyncOperation(::Fusion::SceneRef  sceneRef, ::UnityEngine::AsyncOperation*  asyncOp) ;

/// @brief Method FromCompleted, addr 0x5fdd788, size 0x30, virtual false, abstract: false, final false
static inline ::Fusion::NetworkSceneAsyncOp FromCompleted(::Fusion::SceneRef  sceneRef) ;

/// @brief Method FromCoroutine, addr 0x5fdd608, size 0x7c, virtual false, abstract: false, final false
static inline ::Fusion::NetworkSceneAsyncOp FromCoroutine(::Fusion::SceneRef  sceneRef, ::Fusion::ICoroutine*  coroutine) ;

/// @brief Method FromDeferred, addr 0x5fdd7b8, size 0x20, virtual false, abstract: false, final false
static inline ::Fusion::NetworkSceneAsyncOp FromDeferred(::Fusion::SceneRef  sceneRef, ::System::Threading::Tasks::Task*  blockingTask, ::System::Func_2<::Fusion::SceneRef,::Fusion::NetworkSceneAsyncOp>*  op) ;

/// @brief Method FromError, addr 0x5fdd700, size 0x88, virtual false, abstract: false, final false
static inline ::Fusion::NetworkSceneAsyncOp FromError(::Fusion::SceneRef  sceneRef, ::System::Exception*  error) ;

/// @brief Method FromTask, addr 0x5fdd684, size 0x7c, virtual false, abstract: false, final false
static inline ::Fusion::NetworkSceneAsyncOp FromTask(::Fusion::SceneRef  sceneRef, ::System::Threading::Tasks::Task*  task) ;

/// @brief Method GetAwaiter, addr 0x5fddc1c, size 0x30, virtual false, abstract: false, final false
inline ::GlobalNamespace::NetworkSceneAsyncOp_Awaiter GetAwaiter() ;

/// @brief Method System.Collections.IEnumerator.MoveNext, addr 0x5fddc64, size 0x18, virtual true, abstract: false, final true
inline bool System_Collections_IEnumerator_MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5fddc7c, size 0x4, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5fddc80, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method ThrowIfError, addr 0x5fdd36c, size 0x220, virtual false, abstract: false, final false
inline void ThrowIfError() ;

/// @brief Method .ctor, addr 0x5fdd040, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Fusion::SceneRef  sceneRef) ;

/// @brief Method .ctor, addr 0x5fdcfe0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::Fusion::SceneRef  sceneRef, ::System::Object*  data) ;

/// @brief Method get_Error, addr 0x5fdd214, size 0x158, virtual false, abstract: false, final false
inline ::System::Exception* get_Error() ;

/// @brief Method get_IsDone, addr 0x5fdd060, size 0x1b4, virtual false, abstract: false, final false
inline bool get_IsDone() ;

/// @brief Method get_IsValid, addr 0x5fdd050, size 0x10, virtual false, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkSceneAsyncOp() ;

// Ctor Parameters [CppParam { name: "SceneRef", ty: "::Fusion::SceneRef", modifiers: "", def_value: None, comment: None }, CppParam { name: "_data", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }]
constexpr NetworkSceneAsyncOp(::Fusion::SceneRef  SceneRef, ::System::Object*  _data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19283};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field SceneRef, offset: 0x0, size: 0x4, def value: None
 ::Fusion::SceneRef  SceneRef;

/// @brief Field _data, offset: 0x8, size: 0x8, def value: None
 ::System::Object*  _data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkSceneAsyncOp, SceneRef) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneAsyncOp, _data) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkSceneAsyncOp) == 0x10, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkSceneAsyncOp/Awaiter/<>c__DisplayClass5_1
class CORDL_TYPE Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0*  CS$__8__locals1;

/// @brief Field capturedContext, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_capturedContext, put=__cordl_internal_set_capturedContext)) ::System::Threading::SynchronizationContext*  capturedContext;

static inline ::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1* New_ctor() ;

/// @brief Method <OnCompleted>b__0, addr 0x5fdde98, size 0xe0, virtual false, abstract: false, final false
inline void _OnCompleted_b__0(::Fusion::NetworkSceneAsyncOp  _) ;

constexpr ::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr ::System::Threading::SynchronizationContext* const& __cordl_internal_get_capturedContext() const;

constexpr ::System::Threading::SynchronizationContext*& __cordl_internal_get_capturedContext() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0*  value) ;

constexpr void __cordl_internal_set_capturedContext(::System::Threading::SynchronizationContext*  value) ;

/// @brief Method .ctor, addr 0x5fdde70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1(Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1(Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19279};

/// @brief Field capturedContext, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::SynchronizationContext*  ___capturedContext;

/// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
 ::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1, ___capturedContext) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_1) == 0x20, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkSceneAsyncOp/Awaiter/<>c__DisplayClass5_0
class CORDL_TYPE Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9__1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__1, put=__cordl_internal_set___9__1)) ::System::Threading::SendOrPostCallback*  __9__1;

/// @brief Field continuation, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_continuation, put=__cordl_internal_set_continuation)) ::System::Action*  continuation;

static inline ::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0* New_ctor() ;

/// @brief Method <OnCompleted>b__1, addr 0x5fdde78, size 0x20, virtual false, abstract: false, final false
inline void _OnCompleted_b__1(::System::Object*  __) ;

constexpr ::System::Threading::SendOrPostCallback* const& __cordl_internal_get___9__1() const;

constexpr ::System::Threading::SendOrPostCallback*& __cordl_internal_get___9__1() ;

constexpr ::System::Action* const& __cordl_internal_get_continuation() const;

constexpr ::System::Action*& __cordl_internal_get_continuation() ;

constexpr void __cordl_internal_set___9__1(::System::Threading::SendOrPostCallback*  value) ;

constexpr void __cordl_internal_set_continuation(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x5fdde68, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0(Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0(Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19278};

/// @brief Field continuation, offset: 0x10, size: 0x8, def value: None
 ::System::Action*  ___continuation;

/// @brief Field <>9__1, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::SendOrPostCallback*  _____9__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0, ___continuation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0, _____9__1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::Awaiter_NetworkSceneAsyncOp___c__DisplayClass5_0) == 0x20, "Size mismatch!");

} // namespace end def Fusion
