#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/GroupBy`3__GroupBy__CreateLookup_d__12.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GroupBy`3__GroupBy__CreateLookup_d__12)
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource,typename TKey,typename TElement>
class GroupBy_3__GroupBy;
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
template<typename TSource,typename TKey,typename TElement>
struct _GroupBy_GroupBy_3__CreateLookup_d__12;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::_GroupBy_GroupBy_3__CreateLookup_d__12);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::_GroupBy_GroupBy_3__CreateLookup_d__12, "Cysharp.Threading.Tasks.Linq", "GroupBy`3/_GroupBy/<CreateLookup>d__12");
// [CompilerGenerated]
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>
namespace GlobalNamespace {
// cpp template
template<typename TSource,typename TKey,typename TElement>
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.Linq.GroupBy`3/_GroupBy/<CreateLookup>d__12<TSource,TKey,TElement>
struct CORDL_TYPE _GroupBy_GroupBy_3__CreateLookup_d__12 {
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
constexpr _GroupBy_GroupBy_3__CreateLookup_d__12() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_1_Awaiter<::System::Linq::ILookup_2<TKey,TElement>*>", modifiers: "", def_value: None, comment: None }]
constexpr _GroupBy_GroupBy_3__CreateLookup_d__12(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>*  __4__this, ::GlobalNamespace::UniTask_1_Awaiter<::System::Linq::ILookup_2<TKey,TElement>*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20548};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>*  __4__this;

/// @brief Field <>u__1, offset: 0x18, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<::System::Linq::ILookup_2<TKey,TElement>*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
