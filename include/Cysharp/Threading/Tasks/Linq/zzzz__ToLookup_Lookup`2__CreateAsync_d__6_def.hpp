#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/ToLookup_Lookup`2__CreateAsync_d__6.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ToLookup_Lookup`2__CreateAsync_d__6)
namespace Cysharp::Threading::Tasks::Linq {
template<typename TKey,typename TElement>
class ToLookup_Grouping_2;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename TKey,typename TElement>
class ToLookup_Lookup_2;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
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
template<typename TKey,typename TElement>
struct Lookup_2_ToLookup__CreateAsync_d__6;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::Lookup_2_ToLookup__CreateAsync_d__6);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::Lookup_2_ToLookup__CreateAsync_d__6, "Cysharp.Threading.Tasks.Linq", "ToLookup/Lookup`2/<CreateAsync>d__6");
// [CompilerGenerated]
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T>, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, System.ArraySegment`1<T>
namespace GlobalNamespace {
// cpp template
template<typename TKey,typename TElement>
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.Linq.ToLookup/Lookup`2/<CreateAsync>d__6<TKey,TElement>
struct CORDL_TYPE Lookup_2_ToLookup__CreateAsync_d__6 {
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
constexpr Lookup_2_ToLookup__CreateAsync_d__6() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IEqualityComparer_1<TKey>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "source", ty: "::System::ArraySegment_1<TElement>", modifiers: "", def_value: None, comment: None }, CppParam { name: "keySelector", ty: "::System::Func_2<TElement,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_dict_5__2", ty: "::System::Collections::Generic::Dictionary_2<TKey,::Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_arr_5__3", ty: "::ArrayW<TElement>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_c_5__4", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_i_5__5", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_1_Awaiter<TKey>", modifiers: "", def_value: None, comment: None }]
constexpr Lookup_2_ToLookup__CreateAsync_d__6(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*>  __t__builder, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::ArraySegment_1<TElement>  source, ::System::Func_2<TElement,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::Dictionary_2<TKey,::Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>*>*  _dict_5__2, ::ArrayW<TElement>  _arr_5__3, int32_t  _c_5__4, int32_t  _i_5__5, ::GlobalNamespace::UniTask_1_Awaiter<TKey>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20858};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*>  __t__builder;

/// @brief Field comparer, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer;

/// @brief Field source, offset: 0x28, size: 0x10, def value: None
 ::System::ArraySegment_1<TElement>  source;

/// @brief Field keySelector, offset: 0x38, size: 0x8, def value: None
 ::System::Func_2<TElement,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector;

/// @brief Field <dict>5__2, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<TKey,::Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>*>*  _dict_5__2;

/// @brief Field <arr>5__3, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<TElement>  _arr_5__3;

/// @brief Field <c>5__4, offset: 0x50, size: 0x4, def value: None
 int32_t  _c_5__4;

/// @brief Field <i>5__5, offset: 0x54, size: 0x4, def value: None
 int32_t  _i_5__5;

/// @brief Field <>u__1, offset: 0x58, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<TKey>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
