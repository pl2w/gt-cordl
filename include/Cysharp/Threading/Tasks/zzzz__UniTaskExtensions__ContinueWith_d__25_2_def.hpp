#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskExtensions__ContinueWith_d__25_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UniTaskExtensions__ContinueWith_d__25_2)
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T,typename TR>
struct UniTaskExtensions__ContinueWith_d__25_2;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::UniTaskExtensions__ContinueWith_d__25_2);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::UniTaskExtensions__ContinueWith_d__25_2, "Cysharp.Threading.Tasks", "UniTaskExtensions/<ContinueWith>d__25`2");
// [CompilerGenerated]
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T>, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, Cysharp.Threading.Tasks.UniTask`1<T>
namespace GlobalNamespace {
// cpp template
template<typename T,typename TR>
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UniTaskExtensions/<ContinueWith>d__25`2<T,TR>
struct CORDL_TYPE UniTaskExtensions__ContinueWith_d__25_2 {
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
constexpr UniTaskExtensions__ContinueWith_d__25_2() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<TR>", modifiers: "", def_value: None, comment: None }, CppParam { name: "continuationFunction", ty: "::System::Func_2<T,::Cysharp::Threading::Tasks::UniTask_1<TR>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "task", ty: "::Cysharp::Threading::Tasks::UniTask_1<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap1", ty: "::System::Func_2<T,::Cysharp::Threading::Tasks::UniTask_1<TR>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_1_Awaiter<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::UniTask_1_Awaiter<TR>", modifiers: "", def_value: None, comment: None }]
constexpr UniTaskExtensions__ContinueWith_d__25_2(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<TR>  __t__builder, ::System::Func_2<T,::Cysharp::Threading::Tasks::UniTask_1<TR>>*  continuationFunction, ::Cysharp::Threading::Tasks::UniTask_1<T>  task, ::System::Func_2<T,::Cysharp::Threading::Tasks::UniTask_1<TR>>*  __7__wrap1, ::GlobalNamespace::UniTask_1_Awaiter<T>  __u__1, ::GlobalNamespace::UniTask_1_Awaiter<TR>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21844};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<TR>  __t__builder;

/// @brief Field continuationFunction, offset: 0x20, size: 0x8, def value: None
 ::System::Func_2<T,::Cysharp::Threading::Tasks::UniTask_1<TR>>*  continuationFunction;

/// @brief Field task, offset: 0x28, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1<T>  task;

/// @brief Field <>7__wrap1, offset: 0x40, size: 0x8, def value: None
 ::System::Func_2<T,::Cysharp::Threading::Tasks::UniTask_1<TR>>*  __7__wrap1;

/// @brief Field <>u__1, offset: 0x48, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<T>  __u__1;

/// @brief Field <>u__2, offset: 0x60, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<TR>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
