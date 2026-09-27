#pragma once
// IWYU pragma private; include "Oculus/Interaction/DebugTree/INodeUI_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INodeUI_1)
namespace Oculus::Interaction::DebugTree {
template<typename TLeaf>
class ITreeNode_1;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace Oculus::Interaction::DebugTree {
template<typename TLeaf>
class INodeUI_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Interaction::DebugTree::INodeUI_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::DebugTree::INodeUI_1, "Oculus.Interaction.DebugTree", "INodeUI`1");
// Dependencies 
namespace Oculus::Interaction::DebugTree {
// cpp template
template<typename TLeaf>
// Is value type: false
// CS Name: Oculus.Interaction.DebugTree.INodeUI`1<TLeaf>
class CORDL_TYPE INodeUI_1 {
public:
// Declarations
 __declspec(property(get=get_ChildArea)) ::UnityW<::UnityEngine::RectTransform>  ChildArea;

/// @brief Method Bind, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Bind(::Oculus::Interaction::DebugTree::ITreeNode_1<TLeaf>*  node, bool  isRoot, bool  isDuplicate) ;

/// @brief Method get_ChildArea, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::RectTransform> get_ChildArea() ;

// Ctor Parameters [CppParam { name: "", ty: "INodeUI_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
INodeUI_1(INodeUI_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16206};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::DebugTree
