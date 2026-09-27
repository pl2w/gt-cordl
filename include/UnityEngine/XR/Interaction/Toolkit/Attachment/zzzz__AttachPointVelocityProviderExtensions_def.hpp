#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Attachment/AttachPointVelocityProviderExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AttachPointVelocityProviderExtensions)
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
class IAttachPointVelocityProvider;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
class AttachPointVelocityProviderExtensions;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityProviderExtensions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityProviderExtensions*, "UnityEngine.XR.Interaction.Toolkit.Attachment", "AttachPointVelocityProviderExtensions");
// [Extension]
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit.Interaction")]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Attachment.AttachPointVelocityProviderExtensions
class CORDL_TYPE AttachPointVelocityProviderExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method GetAttachPointAngularVelocity, addr 0xb4ae0a4, size 0xb4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetAttachPointAngularVelocity(::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider*  provider, ::UnityEngine::Transform*  xrOriginTransform) ;

/// [Extension]
/// @brief Method GetAttachPointVelocity, addr 0xb4adff4, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetAttachPointVelocity(::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider*  provider, ::UnityEngine::Transform*  xrOriginTransform) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AttachPointVelocityProviderExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AttachPointVelocityProviderExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AttachPointVelocityProviderExtensions(AttachPointVelocityProviderExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AttachPointVelocityProviderExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AttachPointVelocityProviderExtensions(AttachPointVelocityProviderExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11576};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityProviderExtensions) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Attachment
