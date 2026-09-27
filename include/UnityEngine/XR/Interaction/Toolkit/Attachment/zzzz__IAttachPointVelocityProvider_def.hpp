#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Attachment/IAttachPointVelocityProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAttachPointVelocityProvider)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
class IAttachPointVelocityProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider*, "UnityEngine.XR.Interaction.Toolkit.Attachment", "IAttachPointVelocityProvider");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit.Interaction")]
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Attachment.IAttachPointVelocityProvider
class CORDL_TYPE IAttachPointVelocityProvider {
public:
// Declarations
/// @brief Method GetAttachPointAngularVelocity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 GetAttachPointAngularVelocity() ;

/// @brief Method GetAttachPointVelocity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 GetAttachPointVelocity() ;

// Ctor Parameters [CppParam { name: "", ty: "IAttachPointVelocityProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAttachPointVelocityProvider(IAttachPointVelocityProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11575};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Attachment
