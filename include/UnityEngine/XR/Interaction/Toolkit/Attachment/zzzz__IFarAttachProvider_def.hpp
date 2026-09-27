#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Attachment/IFarAttachProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IFarAttachProvider)
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
struct InteractableFarAttachMode;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
class IFarAttachProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Attachment::IFarAttachProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Attachment::IFarAttachProvider*, "UnityEngine.XR.Interaction.Toolkit.Attachment", "IFarAttachProvider");
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Attachment.IFarAttachProvider
class CORDL_TYPE IFarAttachProvider {
public:
// Declarations
 __declspec(property(get=get_farAttachMode, put=set_farAttachMode)) ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractableFarAttachMode  farAttachMode;

/// @brief Method get_farAttachMode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractableFarAttachMode get_farAttachMode() ;

/// @brief Method set_farAttachMode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_farAttachMode(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractableFarAttachMode  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IFarAttachProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IFarAttachProvider(IFarAttachProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11580};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Attachment
