#pragma once
// IWYU pragma private; include "Oculus/Interaction/DebugTree/ITreeNode_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITreeNode_1)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace Oculus::Interaction::DebugTree {
template<typename TLeaf>
class ITreeNode_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Interaction::DebugTree::ITreeNode_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::DebugTree::ITreeNode_1, "Oculus.Interaction.DebugTree", "ITreeNode`1");
// Dependencies 
namespace Oculus::Interaction::DebugTree {
// cpp template
template<typename TLeaf>
// Is value type: false
// CS Name: Oculus.Interaction.DebugTree.ITreeNode`1<TLeaf>
class CORDL_TYPE ITreeNode_1 {
public:
// Declarations
 __declspec(property(get=get_Children)) ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::DebugTree::ITreeNode_1<TLeaf>*>*  Children;

 __declspec(property(get=get_Value)) TLeaf  Value;

/// @brief Method get_Children, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::DebugTree::ITreeNode_1<TLeaf>*>* get_Children() ;

/// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline TLeaf get_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "ITreeNode_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITreeNode_1(ITreeNode_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16200};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::DebugTree
