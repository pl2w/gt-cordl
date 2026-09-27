#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/IXRGroupMember.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IXRGroupMember)
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractionGroup;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRGroupMember;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*, "UnityEngine.XR.Interaction.Toolkit.Interactors", "IXRGroupMember");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.IXRGroupMember
class CORDL_TYPE IXRGroupMember {
public:
// Declarations
 __declspec(property(get=get_containingGroup)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  containingGroup;

/// @brief Method OnRegisteringAsGroupMember, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnRegisteringAsGroupMember(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  group) ;

/// @brief Method OnRegisteringAsNonGroupMember, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnRegisteringAsNonGroupMember() ;

/// @brief Method get_containingGroup, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* get_containingGroup() ;

// Ctor Parameters [CppParam { name: "", ty: "IXRGroupMember", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IXRGroupMember(IXRGroupMember const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11426};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors
