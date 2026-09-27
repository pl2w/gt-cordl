#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/GroupJoin`4__GroupJoin__CreateLookup_d__17.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GroupJoin`4__GroupJoin__CreateLookup_d__17)
namespace Cysharp::Threading::Tasks::Linq {
template<typename TOuter,typename TInner,typename TKey,typename TResult>
class GroupJoin_4__GroupJoin;
}
namespace System::Linq {
template<typename TKey,typename TElement>
class ILookup_2;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TOuter,typename TInner,typename TKey,typename TResult>
struct _GroupJoin_GroupJoin_4__CreateLookup_d__17;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::_GroupJoin_GroupJoin_4__CreateLookup_d__17);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::_GroupJoin_GroupJoin_4__CreateLookup_d__17, "Cysharp.Threading.Tasks.Linq", "GroupJoin`4/_GroupJoin/<CreateLookup>d__17");
// [CompilerGenerated]
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>
namespace GlobalNamespace {
// cpp template
template<typename TOuter,typename TInner,typename TKey,typename TResult>
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.Linq.GroupJoin`4/_GroupJoin/<CreateLookup>d__17<TOuter,TInner,TKey,TResult>
struct CORDL_TYPE _GroupJoin_GroupJoin_4__CreateLookup_d__17 {
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
constexpr _GroupJoin_GroupJoin_4__CreateLookup_d__17() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Cysharp::Threading::Tasks::Linq::GroupJoin_4__GroupJoin<TOuter,TInner,TKey,TResult>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_1_Awaiter<::System::Linq::ILookup_2<TKey,TInner>*>", modifiers: "", def_value: None, comment: None }]
constexpr _GroupJoin_GroupJoin_4__CreateLookup_d__17(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::Linq::GroupJoin_4__GroupJoin<TOuter,TInner,TKey,TResult>*  __4__this, ::GlobalNamespace::UniTask_1_Awaiter<::System::Linq::ILookup_2<TKey,TInner>*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20566};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::Linq::GroupJoin_4__GroupJoin<TOuter,TInner,TKey,TResult>*  __4__this;

/// @brief Field <>u__1, offset: 0x18, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<::System::Linq::ILookup_2<TKey,TInner>*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
