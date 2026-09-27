#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Attachment/IAttachPointVelocityTracker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAttachPointVelocityTracker)
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
class IAttachPointVelocityProvider;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
class IAttachPointVelocityTracker;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker*, "UnityEngine.XR.Interaction.Toolkit.Attachment", "IAttachPointVelocityTracker");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit.Interaction")]
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Attachment.IAttachPointVelocityTracker
class CORDL_TYPE IAttachPointVelocityTracker {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider*() noexcept;

/// @brief Method UpdateAttachPointVelocityData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UpdateAttachPointVelocityData(::UnityEngine::Transform*  attachTransform) ;

/// @brief Method UpdateAttachPointVelocityData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UpdateAttachPointVelocityData(::UnityEngine::Transform*  attachTransform, ::UnityEngine::Transform*  xrOriginTransform) ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider* i___UnityEngine__XR__Interaction__Toolkit__Attachment__IAttachPointVelocityProvider() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IAttachPointVelocityTracker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAttachPointVelocityTracker(IAttachPointVelocityTracker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11577};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Attachment
