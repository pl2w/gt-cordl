#pragma once
// IWYU pragma private; include "Oculus/Interaction/DebugTree/DebugTree_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DebugTree_1)
namespace GlobalNamespace {
template<typename TLeaf>
struct DebugTree_1__BuildTreeAsync_d__8;
}
namespace GlobalNamespace {
template<typename TLeaf>
struct DebugTree_1__BuildTreeRecursiveAsync_d__9;
}
namespace GlobalNamespace {
template<typename TLeaf>
struct DebugTree_1__RebuildAsync_d__7;
}
namespace Oculus::Interaction::DebugTree {
template<typename TLeaf>
class DebugTree_1_Node;
}
namespace Oculus::Interaction::DebugTree {
template<typename TLeaf>
class ITreeNode_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace Oculus::Interaction::DebugTree {
template<typename TLeaf>
class DebugTree_1;
}
namespace Oculus::Interaction::DebugTree {
template<typename TLeaf>
class DebugTree_1_Node;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Interaction::DebugTree::DebugTree_1);
MARK_GEN_REF_T_PTR(::Oculus::Interaction::DebugTree::DebugTree_1_Node);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::DebugTree::DebugTree_1, "Oculus.Interaction.DebugTree", "DebugTree`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::DebugTree::DebugTree_1_Node, "Oculus.Interaction.DebugTree", "DebugTree`1/Node");
// Dependencies System.Object
namespace Oculus::Interaction::DebugTree {
// cpp template
template<typename TLeaf>
// Is value type: false
// CS Name: Oculus.Interaction.DebugTree.DebugTree`1<TLeaf>
class CORDL_TYPE DebugTree_1 : public ::System::Object {
public:
// Declarations
using _BuildTreeAsync_d__8 = ::GlobalNamespace::DebugTree_1__BuildTreeAsync_d__8<TLeaf>;

using _BuildTreeRecursiveAsync_d__9 = ::GlobalNamespace::DebugTree_1__BuildTreeRecursiveAsync_d__9<TLeaf>;

using _RebuildAsync_d__7 = ::GlobalNamespace::DebugTree_1__RebuildAsync_d__7<TLeaf>;

using Node = ::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>;

/// @brief Field Root, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Root, put=__cordl_internal_set_Root)) TLeaf  Root;

/// @brief Field _existingNodes, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__existingNodes, put=__cordl_internal_set__existingNodes)) ::System::Collections::Generic::Dictionary_2<TLeaf,::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>*  _existingNodes;

/// @brief Field _rootNode, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__rootNode, put=__cordl_internal_set__rootNode)) ::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*  _rootNode;

/// [AsyncStateMachine(typeof(Oculus.Interaction.DebugTree.DebugTree`1::<BuildTreeAsync>d__8<TLeaf>))]
/// @brief Method BuildTreeAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>* BuildTreeAsync(TLeaf  root) ;

/// [AsyncStateMachine(typeof(Oculus.Interaction.DebugTree.DebugTree`1::<BuildTreeRecursiveAsync>d__9<TLeaf>))]
/// @brief Method BuildTreeRecursiveAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>* BuildTreeRecursiveAsync(TLeaf  value) ;

/// @brief Method GetRootNode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Oculus::Interaction::DebugTree::ITreeNode_1<TLeaf>* GetRootNode() ;

static inline ::Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>* New_ctor(TLeaf  root) ;

/// [Obsolete("Use async method instead.", true)]
/// @brief Method Rebuild, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Rebuild() ;

/// [AsyncStateMachine(typeof(Oculus.Interaction.DebugTree.DebugTree`1::<RebuildAsync>d__7<TLeaf>))]
/// @brief Method RebuildAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* RebuildAsync() ;

/// [Obsolete("Use async method instead.", true)]
/// @brief Method TryGetChildren, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TryGetChildren(TLeaf  node, ::by_ref<::System::Collections::Generic::IEnumerable_1<TLeaf>*>  children) ;

/// @brief Method TryGetChildrenAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<TLeaf>*>* TryGetChildrenAsync(TLeaf  node) ;

constexpr TLeaf const& __cordl_internal_get_Root() const;

constexpr TLeaf& __cordl_internal_get_Root() ;

constexpr ::System::Collections::Generic::Dictionary_2<TLeaf,::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>* const& __cordl_internal_get__existingNodes() const;

constexpr ::System::Collections::Generic::Dictionary_2<TLeaf,::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>*& __cordl_internal_get__existingNodes() ;

constexpr ::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>* const& __cordl_internal_get__rootNode() const;

constexpr ::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*& __cordl_internal_get__rootNode() ;

constexpr void __cordl_internal_set_Root(TLeaf  value) ;

constexpr void __cordl_internal_set__existingNodes(::System::Collections::Generic::Dictionary_2<TLeaf,::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>*  value) ;

constexpr void __cordl_internal_set__rootNode(::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(TLeaf  root) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugTree_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugTree_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugTree_1(DebugTree_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugTree_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugTree_1(DebugTree_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16205};

/// @brief Field _existingNodes, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<TLeaf,::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>*  ____existingNodes;

/// @brief Field Root, offset: 0x18, size: 0x8, def value: None
 TLeaf  ___Root;

/// @brief Field _rootNode, offset: 0x20, size: 0x8, def value: None
 ::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*  ____rootNode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::DebugTree
// Dependencies System.Object
namespace Oculus::Interaction::DebugTree {
// cpp template
template<typename TLeaf>
// Is value type: false
// CS Name: Oculus.Interaction.DebugTree.DebugTree`1/Node<TLeaf>
class CORDL_TYPE DebugTree_1_Node : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Children, put=set_Children)) ::System::Collections::Generic::List_1<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>*  Children;

 __declspec(property(get=Oculus_Interaction_DebugTree_ITreeNode_TLeaf__get_Children)) ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::DebugTree::ITreeNode_1<TLeaf>*>*  Oculus_Interaction_DebugTree_ITreeNode_TLeaf__Children;

 __declspec(property(get=Oculus_Interaction_DebugTree_ITreeNode_TLeaf__get_Value)) TLeaf  Oculus_Interaction_DebugTree_ITreeNode_TLeaf__Value;

 __declspec(property(get=get_Value, put=set_Value)) TLeaf  Value;

/// @brief Field <Children>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Children_k__BackingField, put=__cordl_internal_set__Children_k__BackingField)) ::System::Collections::Generic::List_1<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>*  _Children_k__BackingField;

/// @brief Field <Value>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Value_k__BackingField, put=__cordl_internal_set__Value_k__BackingField)) TLeaf  _Value_k__BackingField;

/// @brief Convert operator to "::Oculus::Interaction::DebugTree::ITreeNode_1<TLeaf>"
constexpr operator  ::Oculus::Interaction::DebugTree::ITreeNode_1<TLeaf>*() noexcept;

static inline ::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>* New_ctor() ;

/// @brief Method Oculus.Interaction.DebugTree.ITreeNode<TLeaf>.get_Children, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::DebugTree::ITreeNode_1<TLeaf>*>* Oculus_Interaction_DebugTree_ITreeNode_TLeaf__get_Children() ;

/// @brief Method Oculus.Interaction.DebugTree.ITreeNode<TLeaf>.get_Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TLeaf Oculus_Interaction_DebugTree_ITreeNode_TLeaf__get_Value() ;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>* const& __cordl_internal_get__Children_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>*& __cordl_internal_get__Children_k__BackingField() ;

constexpr TLeaf const& __cordl_internal_get__Value_k__BackingField() const;

constexpr TLeaf& __cordl_internal_get__Value_k__BackingField() ;

constexpr void __cordl_internal_set__Children_k__BackingField(::System::Collections::Generic::List_1<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>*  value) ;

constexpr void __cordl_internal_set__Value_k__BackingField(TLeaf  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Children, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>* get_Children() ;

/// [CompilerGenerated]
/// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TLeaf get_Value() ;

/// @brief Convert to "::Oculus::Interaction::DebugTree::ITreeNode_1<TLeaf>"
constexpr ::Oculus::Interaction::DebugTree::ITreeNode_1<TLeaf>* i___Oculus__Interaction__DebugTree__ITreeNode_1_TLeaf_() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Children, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Children(::System::Collections::Generic::List_1<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Value(TLeaf  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugTree_1_Node() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugTree_1_Node", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugTree_1_Node(DebugTree_1_Node && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugTree_1_Node", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugTree_1_Node(DebugTree_1_Node const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16201};

/// [CompilerGenerated]
/// @brief Field <Value>k__BackingField, offset: 0x10, size: 0x8, def value: None
 TLeaf  ____Value_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Children>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Oculus::Interaction::DebugTree::DebugTree_1_Node<TLeaf>*>*  ____Children_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::DebugTree
