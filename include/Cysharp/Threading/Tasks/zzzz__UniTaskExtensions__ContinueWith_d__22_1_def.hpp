#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskExtensions__ContinueWith_d__22_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UniTaskExtensions__ContinueWith_d__22_1)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct UniTaskExtensions__ContinueWith_d__22_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::UniTaskExtensions__ContinueWith_d__22_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::UniTaskExtensions__ContinueWith_d__22_1, "Cysharp.Threading.Tasks", "UniTaskExtensions/<ContinueWith>d__22`1");
// [CompilerGenerated]
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, Cysharp.Threading.Tasks.UniTask`1<T>
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UniTaskExtensions/<ContinueWith>d__22`1<T>
struct CORDL_TYPE UniTaskExtensions__ContinueWith_d__22_1 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr UniTaskExtensions__ContinueWith_d__22_1() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "continuationFunction", ty: "::System::Action_1<T>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "task", ty: "::Cysharp::Threading::Tasks::UniTask_1<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap1", ty: "::System::Action_1<T>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_1_Awaiter<T>", modifiers: "", def_value: None, comment: None }]
constexpr UniTaskExtensions__ContinueWith_d__22_1(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::System::Action_1<T>*  continuationFunction, ::Cysharp::Threading::Tasks::UniTask_1<T>  task, ::System::Action_1<T>*  __7__wrap1, ::GlobalNamespace::UniTask_1_Awaiter<T>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21841};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field continuationFunction, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<T>*  continuationFunction;

/// @brief Field task, offset: 0x20, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1<T>  task;

/// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<T>*  __7__wrap1;

/// @brief Field <>u__1, offset: 0x40, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<T>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
