#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/IXRInteractionOverrideGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IXRInteractionOverrideGroup)
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRGroupMember;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractionGroup;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRSelectInteractor;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractionOverrideGroup;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionOverrideGroup*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionOverrideGroup*, "UnityEngine.XR.Interaction.Toolkit.Interactors", "IXRInteractionOverrideGroup");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractionOverrideGroup
class CORDL_TYPE IXRInteractionOverrideGroup {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*() noexcept;

/// @brief Method AddInteractionOverrideForGroupMember, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void AddInteractionOverrideForGroupMember(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  sourceGroupMember, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  overrideGroupMember) ;

/// @brief Method ClearInteractionOverridesForGroupMember, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool ClearInteractionOverridesForGroupMember(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  sourceGroupMember) ;

/// @brief Method GetInteractionOverridesForGroupMember, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void GetInteractionOverridesForGroupMember(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  sourceGroupMember, ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>*  results) ;

/// @brief Method GroupMemberIsPartOfOverrideChain, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GroupMemberIsPartOfOverrideChain(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  sourceGroupMember, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  potentialOverrideGroupMember) ;

/// @brief Method RemoveInteractionOverrideForGroupMember, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool RemoveInteractionOverrideForGroupMember(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  sourceGroupMember, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  overrideGroupMember) ;

/// @brief Method ShouldAnyMemberOverrideInteraction, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool ShouldAnyMemberOverrideInteraction(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactingInteractor, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>  overridingInteractor) ;

/// @brief Method ShouldOverrideActiveInteraction, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool ShouldOverrideActiveInteraction(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>  overridingInteractor) ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRInteractionGroup() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IXRInteractionOverrideGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IXRInteractionOverrideGroup(IXRInteractionOverrideGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11431};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors
