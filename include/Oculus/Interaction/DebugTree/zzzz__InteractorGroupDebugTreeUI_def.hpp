#pragma once
// IWYU pragma private; include "Oculus/Interaction/DebugTree/InteractorGroupDebugTreeUI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/DebugTree/zzzz__DebugTreeUI_1_def.hpp"
#include "Oculus/Interaction/DebugTree/zzzz__DebugTree_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(InteractorGroupDebugTreeUI)
namespace Oculus::Interaction::DebugTree {
template<typename TLeaf>
class DebugTree_1;
}
namespace Oculus::Interaction::DebugTree {
template<typename TLeaf>
class INodeUI_1;
}
namespace Oculus::Interaction::DebugTree {
class InteractorGroupDebugTreeUI_InteractorGroupDebugTree;
}
namespace Oculus::Interaction {
class IInteractor;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction::DebugTree {
class InteractorGroupDebugTreeUI;
}
namespace Oculus::Interaction::DebugTree {
class InteractorGroupDebugTreeUI_InteractorGroupDebugTree;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI*);
MARK_REF_T(::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI_InteractorGroupDebugTree*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI*, "Oculus.Interaction.DebugTree", "InteractorGroupDebugTreeUI");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI_InteractorGroupDebugTree*, "Oculus.Interaction.DebugTree", "InteractorGroupDebugTreeUI/InteractorGroupDebugTree");
// Dependencies Oculus.Interaction.DebugTree.DebugTreeUI`1<TLeaf>
namespace Oculus::Interaction::DebugTree {
// Is value type: false
// CS Name: Oculus.Interaction.DebugTree.InteractorGroupDebugTreeUI
class CORDL_TYPE InteractorGroupDebugTreeUI : public ::Oculus::Interaction::DebugTree::DebugTreeUI_1<::Oculus::Interaction::IInteractor*> {
public:
// Declarations
using InteractorGroupDebugTree = ::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI_InteractorGroupDebugTree;

 __declspec(property(get=get_NodePrefab)) ::Oculus::Interaction::DebugTree::INodeUI_1<::Oculus::Interaction::IInteractor*>*  NodePrefab;

 __declspec(property(get=get_Value)) ::Oculus::Interaction::IInteractor*  Value;

/// @brief Field _nodePrefab, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__nodePrefab, put=__cordl_internal_set__nodePrefab)) ::UnityW<::UnityEngine::Component>  _nodePrefab;

/// @brief Field _root, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__root, put=__cordl_internal_set__root)) ::UnityW<::UnityEngine::Object>  _root;

/// @brief Method CreateTree, addr 0xa4b1d8c, size 0x58, virtual true, abstract: false, final false
inline ::Oculus::Interaction::DebugTree::DebugTree_1<::Oculus::Interaction::IInteractor*>* CreateTree(::Oculus::Interaction::IInteractor*  value) ;

static inline ::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI* New_ctor() ;

/// @brief Method TitleForValue, addr 0xa4b1e3c, size 0xcc, virtual true, abstract: false, final false
inline ::StringW TitleForValue(::Oculus::Interaction::IInteractor*  value) ;

constexpr ::UnityW<::UnityEngine::Component> const& __cordl_internal_get__nodePrefab() const;

constexpr ::UnityW<::UnityEngine::Component>& __cordl_internal_get__nodePrefab() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__root() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__root() ;

constexpr void __cordl_internal_set__nodePrefab(::UnityW<::UnityEngine::Component>  value) ;

constexpr void __cordl_internal_set__root(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0xa4b1f08, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_NodePrefab, addr 0xa4b1d44, size 0x48, virtual true, abstract: false, final false
inline ::Oculus::Interaction::DebugTree::INodeUI_1<::Oculus::Interaction::IInteractor*>* get_NodePrefab() ;

/// @brief Method get_Value, addr 0xa4b1cfc, size 0x48, virtual true, abstract: false, final false
inline ::Oculus::Interaction::IInteractor* get_Value() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteractorGroupDebugTreeUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteractorGroupDebugTreeUI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractorGroupDebugTreeUI(InteractorGroupDebugTreeUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractorGroupDebugTreeUI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractorGroupDebugTreeUI(InteractorGroupDebugTreeUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16211};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IInteractor), new[] {  })]
/// @brief Field _root, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____root;

/// [Tooltip("The node prefab which will be used to build the visual tree.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.DebugTree.INodeUI`1<TLeaf>), new[] {  })]
/// @brief Field _nodePrefab, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Component>  ____nodePrefab;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI, ____root) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI, ____nodePrefab) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI) == 0x58, "Size mismatch!");

} // namespace end def Oculus::Interaction::DebugTree
// Dependencies Oculus.Interaction.DebugTree.DebugTree`1<TLeaf>
namespace Oculus::Interaction::DebugTree {
// Is value type: false
// CS Name: Oculus.Interaction.DebugTree.InteractorGroupDebugTreeUI/InteractorGroupDebugTree
class CORDL_TYPE InteractorGroupDebugTreeUI_InteractorGroupDebugTree : public ::Oculus::Interaction::DebugTree::DebugTree_1<::Oculus::Interaction::IInteractor*> {
public:
// Declarations
static inline ::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI_InteractorGroupDebugTree* New_ctor(::Oculus::Interaction::IInteractor*  root) ;

/// @brief Method TryGetChildrenAsync, addr 0xa4b1f50, size 0x138, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractor*>*>* TryGetChildrenAsync(::Oculus::Interaction::IInteractor*  node) ;

/// @brief Method .ctor, addr 0xa4b1de4, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::IInteractor*  root) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteractorGroupDebugTreeUI_InteractorGroupDebugTree() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteractorGroupDebugTreeUI_InteractorGroupDebugTree", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractorGroupDebugTreeUI_InteractorGroupDebugTree(InteractorGroupDebugTreeUI_InteractorGroupDebugTree && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractorGroupDebugTreeUI_InteractorGroupDebugTree", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractorGroupDebugTreeUI_InteractorGroupDebugTree(InteractorGroupDebugTreeUI_InteractorGroupDebugTree const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16210};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI_InteractorGroupDebugTree) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::DebugTree
