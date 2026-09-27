#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/CombineLatest`10__CombineLatest__DisposeAsync_d__83.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_Awaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CombineLatest`10__CombineLatest__DisposeAsync_d__83)
namespace Cysharp::Threading::Tasks::Linq {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename TResult>
class CombineLatest_10__CombineLatest;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename TResult>
struct _CombineLatest_CombineLatest_10__DisposeAsync_d__83;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::_CombineLatest_CombineLatest_10__DisposeAsync_d__83);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::_CombineLatest_CombineLatest_10__DisposeAsync_d__83, "Cysharp.Threading.Tasks.Linq", "CombineLatest`10/_CombineLatest/<DisposeAsync>d__83");
// [CompilerGenerated]
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace GlobalNamespace {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename TResult>
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.Linq.CombineLatest`10/_CombineLatest/<DisposeAsync>d__83<T1,T2,T3,T4,T5,T6,T7,T8,T9,TResult>
struct CORDL_TYPE _CombineLatest_CombineLatest_10__DisposeAsync_d__83 {
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
constexpr _CombineLatest_CombineLatest_10__DisposeAsync_d__83() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Cysharp::Threading::Tasks::Linq::CombineLatest_10__CombineLatest<T1,T2,T3,T4,T5,T6,T7,T8,T9,TResult>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_Awaiter", modifiers: "", def_value: None, comment: None }]
constexpr _CombineLatest_CombineLatest_10__DisposeAsync_d__83(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::Linq::CombineLatest_10__CombineLatest<T1,T2,T3,T4,T5,T6,T7,T8,T9,TResult>*  __4__this, ::GlobalNamespace::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20472};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::Linq::CombineLatest_10__CombineLatest<T1,T2,T3,T4,T5,T6,T7,T8,T9,TResult>*  __4__this;

/// @brief Field <>u__1, offset: 0x20, size: 0x10, def value: None
 ::GlobalNamespace::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
