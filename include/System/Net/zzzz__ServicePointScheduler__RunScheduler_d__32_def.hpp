#pragma once
// IWYU pragma private; include "System/Net/ServicePointScheduler__RunScheduler_d__32.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ServicePointScheduler__RunScheduler_d__32)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Net {
class ServicePointScheduler_ConnectionGroup;
}
namespace System::Net {
class ServicePointScheduler;
}
namespace System::Net {
class WebConnection;
}
namespace System::Net {
class WebOperation;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
// Forward declare root types
namespace GlobalNamespace {
struct ServicePointScheduler__RunScheduler_d__32;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ServicePointScheduler__RunScheduler_d__32);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ServicePointScheduler__RunScheduler_d__32, "System.Net", "ServicePointScheduler/<RunScheduler>d__32");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.ValueTuple`2<T1, T2>, System.ValueTuple`3<T1, T2, T3>
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.ServicePointScheduler/<RunScheduler>d__32
struct CORDL_TYPE ServicePointScheduler__RunScheduler_d__32 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xacb4270, size 0xbf0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xacb4e60, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ServicePointScheduler__RunScheduler_d__32() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::System::Net::ServicePointScheduler*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_operationArray_5__2", ty: "::ArrayW<::System::ValueTuple_2<::System::Net::ServicePointScheduler_ConnectionGroup*,::System::Net::WebOperation*>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_idleArray_5__3", ty: "::ArrayW<::System::ValueTuple_3<::System::Net::ServicePointScheduler_ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_taskList_5__4", ty: "::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_schedulerTask_5__5", ty: "::System::Threading::Tasks::Task_1<bool>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_finalCleanup_5__6", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>", modifiers: "", def_value: None, comment: None }]
constexpr ServicePointScheduler__RunScheduler_d__32(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Net::ServicePointScheduler*  __4__this, ::ArrayW<::System::ValueTuple_2<::System::Net::ServicePointScheduler_ConnectionGroup*,::System::Net::WebOperation*>>  _operationArray_5__2, ::ArrayW<::System::ValueTuple_3<::System::Net::ServicePointScheduler_ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>>  _idleArray_5__3, ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*  _taskList_5__4, ::System::Threading::Tasks::Task_1<bool>*  _schedulerTask_5__5, bool  _finalCleanup_5__6, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10723};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::System::Net::ServicePointScheduler*  __4__this;

/// @brief Field <operationArray>5__2, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::System::ValueTuple_2<::System::Net::ServicePointScheduler_ConnectionGroup*,::System::Net::WebOperation*>>  _operationArray_5__2;

/// @brief Field <idleArray>5__3, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::System::ValueTuple_3<::System::Net::ServicePointScheduler_ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>>  _idleArray_5__3;

/// @brief Field <taskList>5__4, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*  _taskList_5__4;

/// @brief Field <schedulerTask>5__5, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::Tasks::Task_1<bool>*  _schedulerTask_5__5;

/// @brief Field <finalCleanup>5__6, offset: 0x48, size: 0x1, def value: None
 bool  _finalCleanup_5__6;

/// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ServicePointScheduler__RunScheduler_d__32, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServicePointScheduler__RunScheduler_d__32, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServicePointScheduler__RunScheduler_d__32, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServicePointScheduler__RunScheduler_d__32, _operationArray_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServicePointScheduler__RunScheduler_d__32, _idleArray_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServicePointScheduler__RunScheduler_d__32, _taskList_5__4) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServicePointScheduler__RunScheduler_d__32, _schedulerTask_5__5) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServicePointScheduler__RunScheduler_d__32, _finalCleanup_5__6) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServicePointScheduler__RunScheduler_d__32, __u__1) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ServicePointScheduler__RunScheduler_d__32) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
