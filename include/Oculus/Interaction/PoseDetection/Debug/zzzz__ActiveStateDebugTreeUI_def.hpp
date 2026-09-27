#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/Debug/ActiveStateDebugTreeUI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/DebugTree/zzzz__DebugTreeUI_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ActiveStateDebugTreeUI)
namespace Oculus::Interaction::DebugTree {
template<typename TLeaf>
class DebugTree_1;
}
namespace Oculus::Interaction::DebugTree {
template<typename TLeaf>
class INodeUI_1;
}
namespace Oculus::Interaction {
class IActiveState;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection::Debug {
class ActiveStateDebugTreeUI;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI*, "Oculus.Interaction.PoseDetection.Debug", "ActiveStateDebugTreeUI");
// Dependencies Oculus.Interaction.DebugTree.DebugTreeUI`1<TLeaf>
namespace Oculus::Interaction::PoseDetection::Debug {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.Debug.ActiveStateDebugTreeUI
class CORDL_TYPE ActiveStateDebugTreeUI : public ::Oculus::Interaction::DebugTree::DebugTreeUI_1<::Oculus::Interaction::IActiveState*> {
public:
// Declarations
 __declspec(property(get=get_NodePrefab)) ::Oculus::Interaction::DebugTree::INodeUI_1<::Oculus::Interaction::IActiveState*>*  NodePrefab;

 __declspec(property(get=get_Value)) ::Oculus::Interaction::IActiveState*  Value;

/// @brief Field _activeState, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeState, put=__cordl_internal_set__activeState)) ::UnityW<::UnityEngine::Object>  _activeState;

/// @brief Field _nodePrefab, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__nodePrefab, put=__cordl_internal_set__nodePrefab)) ::UnityW<::UnityEngine::Component>  _nodePrefab;

/// @brief Method CreateTree, addr 0xa4aab34, size 0x58, virtual true, abstract: false, final false
inline ::Oculus::Interaction::DebugTree::DebugTree_1<::Oculus::Interaction::IActiveState*>* CreateTree(::Oculus::Interaction::IActiveState*  value) ;

static inline ::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI* New_ctor() ;

/// @brief Method TitleForValue, addr 0xa4aab8c, size 0xcc, virtual true, abstract: false, final false
inline ::StringW TitleForValue(::Oculus::Interaction::IActiveState*  value) ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__activeState() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__activeState() ;

constexpr ::UnityW<::UnityEngine::Component> const& __cordl_internal_get__nodePrefab() const;

constexpr ::UnityW<::UnityEngine::Component>& __cordl_internal_get__nodePrefab() ;

constexpr void __cordl_internal_set__activeState(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__nodePrefab(::UnityW<::UnityEngine::Component>  value) ;

/// @brief Method .ctor, addr 0xa4aac58, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_NodePrefab, addr 0xa4aaaec, size 0x48, virtual true, abstract: false, final false
inline ::Oculus::Interaction::DebugTree::INodeUI_1<::Oculus::Interaction::IActiveState*>* get_NodePrefab() ;

/// @brief Method get_Value, addr 0xa4aaaa4, size 0x48, virtual true, abstract: false, final false
inline ::Oculus::Interaction::IActiveState* get_Value() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActiveStateDebugTreeUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActiveStateDebugTreeUI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ActiveStateDebugTreeUI(ActiveStateDebugTreeUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActiveStateDebugTreeUI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActiveStateDebugTreeUI(ActiveStateDebugTreeUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16179};

/// [Tooltip("The IActiveState to debug.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IActiveState), new[] {  })]
/// @brief Field _activeState, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____activeState;

/// [Tooltip("The node prefab which will be used to build the visual tree.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.DebugTree.INodeUI`1<TLeaf>), new[] {  })]
/// @brief Field _nodePrefab, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Component>  ____nodePrefab;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI, ____activeState) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI, ____nodePrefab) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI) == 0x58, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection::Debug
