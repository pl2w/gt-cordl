#pragma once
// IWYU pragma private; include "Oculus/Interaction/DebugTree/DebugTree`1__BuildTreeRecursiveAsync_d__9.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugTree`1__BuildTreeRecursiveAsync_d__9)
namespace Oculus::Interaction::DebugTree {
template<typename TLeaf>
class DebugTree_1_Node;
}
namespace Oculus::Interaction::DebugTree {
template<typename TLeaf>
class DebugTree_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TLeaf>
struct DebugTree_1__BuildTreeRecursiveAsync_d__9;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::DebugTree_1__BuildTreeRecursiveAsync_d__9);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::DebugTree_1__BuildTreeRecursiveAsync_d__9, "Oculus.Interaction.DebugTree", "DebugTree`1/<BuildTreeRecursiveAsync>d__9");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// cpp template
template<typename TLeaf>
// Is value type: true
// CS Name: Oculus.Interaction.DebugTree.DebugTree`1/<BuildTreeRecursiveAsync>d__9<TLeaf>
struct CORDL_TYPE DebugTree_1__BuildTreeRecursiveAsync_d__9 {
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
constexpr DebugTree_1__BuildTreeRecursiveAsync_d__9() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "value", ty: "TLeaf", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_children_5__2", ty: "::System::Collections::Generic::List_1<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IEnumerable_1<TLeaf>*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap2", ty: "::System::Collections::Generic::IEnumerator_1<TLeaf>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>", modifiers: "", def_value: None, comment: None }]
constexpr DebugTree_1__BuildTreeRecursiveAsync_d__9(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>  __t__builder, TLeaf  value, ::Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>*  __4__this, ::System::Collections::Generic::List_1<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>*  _children_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IEnumerable_1<TLeaf>*>  __u__1, ::System::Collections::Generic::IEnumerator_1<TLeaf>*  __7__wrap2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16203};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>  __t__builder;

/// @brief Field value, offset: 0x20, size: 0x8, def value: None
 TLeaf  value;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>*  __4__this;

/// @brief Field <children>5__2, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>*  _children_5__2;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IEnumerable_1<TLeaf>*>  __u__1;

/// @brief Field <>7__wrap2, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<TLeaf>*  __7__wrap2;

/// @brief Field <>u__2, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
