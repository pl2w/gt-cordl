#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/XRGroupMemberExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XRGroupMemberExtensions)
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRGroupMember;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractionGroup;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRGroupMemberExtensions;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRGroupMemberExtensions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRGroupMemberExtensions*, "UnityEngine.XR.Interaction.Toolkit.Interactors", "XRGroupMemberExtensions");
// [Extension]
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.XRGroupMemberExtensions
class CORDL_TYPE XRGroupMemberExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method GetTopLevelContainingGroup, addr 0xb4607b4, size 0x120, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* GetTopLevelContainingGroup(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  groupMember) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRGroupMemberExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRGroupMemberExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRGroupMemberExtensions(XRGroupMemberExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRGroupMemberExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRGroupMemberExtensions(XRGroupMemberExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11427};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRGroupMemberExtensions) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors
