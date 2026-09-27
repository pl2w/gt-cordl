#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/IConstrainedXRBodyManipulator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IConstrainedXRBodyManipulator)
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class XRMovableBody;
}
namespace UnityEngine {
struct CollisionFlags;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class IConstrainedXRBodyManipulator;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator*, "UnityEngine.XR.Interaction.Toolkit.Locomotion", "IConstrainedXRBodyManipulator");
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.IConstrainedXRBodyManipulator
class CORDL_TYPE IConstrainedXRBodyManipulator {
public:
// Declarations
 __declspec(property(get=get_isGrounded)) bool  isGrounded;

 __declspec(property(get=get_lastCollisionFlags)) ::UnityEngine::CollisionFlags  lastCollisionFlags;

 __declspec(property(get=get_linkedBody)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*  linkedBody;

/// @brief Method MoveBody, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::CollisionFlags MoveBody(::UnityEngine::Vector3  motion) ;

/// @brief Method OnLinkedToBody, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnLinkedToBody(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*  body) ;

/// @brief Method OnUnlinkedFromBody, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnUnlinkedFromBody() ;

/// @brief Method get_isGrounded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_isGrounded() ;

/// @brief Method get_lastCollisionFlags, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::CollisionFlags get_lastCollisionFlags() ;

/// @brief Method get_linkedBody, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody* get_linkedBody() ;

// Ctor Parameters [CppParam { name: "", ty: "IConstrainedXRBodyManipulator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IConstrainedXRBodyManipulator(IConstrainedXRBodyManipulator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11328};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion
