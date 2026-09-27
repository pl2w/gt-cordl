#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Attachment/IInteractionAttachController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IInteractionAttachController)
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
struct MotionStabilizationMode;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
class IInteractionAttachController;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Attachment::IInteractionAttachController*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Attachment::IInteractionAttachController*, "UnityEngine.XR.Interaction.Toolkit.Attachment", "IInteractionAttachController");
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Attachment.IInteractionAttachController
class CORDL_TYPE IInteractionAttachController {
public:
// Declarations
 __declspec(property(get=get_hasOffset)) bool  hasOffset;

 __declspec(property(get=get_motionStabilizationMode, put=set_motionStabilizationMode)) ::UnityEngine::XR::Interaction::Toolkit::Attachment::MotionStabilizationMode  motionStabilizationMode;

 __declspec(property(get=get_transformToFollow, put=set_transformToFollow)) ::UnityW<::UnityEngine::Transform>  transformToFollow;

/// @brief Method ApplyLocalPositionOffset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ApplyLocalPositionOffset(::UnityEngine::Vector3  offset) ;

/// @brief Method ApplyLocalRotationOffset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ApplyLocalRotationOffset(::UnityEngine::Quaternion  localRotation) ;

/// @brief Method DoUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void DoUpdate(float_t  deltaTime) ;

/// @brief Method GetOrCreateAnchorTransform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Transform> GetOrCreateAnchorTransform(bool  updateTransform) ;

/// @brief Method MoveTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void MoveTo(::UnityEngine::Vector3  targetWorldPosition) ;

/// @brief Method ResetOffset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ResetOffset() ;

/// @brief Method get_hasOffset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_hasOffset() ;

/// @brief Method get_motionStabilizationMode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Attachment::MotionStabilizationMode get_motionStabilizationMode() ;

/// @brief Method get_transformToFollow, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Transform> get_transformToFollow() ;

/// @brief Method set_motionStabilizationMode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_motionStabilizationMode(::UnityEngine::XR::Interaction::Toolkit::Attachment::MotionStabilizationMode  value) ;

/// @brief Method set_transformToFollow, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_transformToFollow(::UnityEngine::Transform*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IInteractionAttachController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IInteractionAttachController(IInteractionAttachController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11582};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Attachment
