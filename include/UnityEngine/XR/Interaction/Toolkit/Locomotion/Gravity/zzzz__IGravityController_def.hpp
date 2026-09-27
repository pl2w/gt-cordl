#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Gravity/IGravityController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGravityController)
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity {
struct GravityOverride;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity {
class IGravityController;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Gravity", "IGravityController");
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Gravity.IGravityController
class CORDL_TYPE IGravityController {
public:
// Declarations
 __declspec(property(get=get_canProcess)) bool  canProcess;

 __declspec(property(get=get_gravityPaused)) bool  gravityPaused;

/// @brief Method OnGravityLockChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnGravityLockChanged(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride  gravityOverride) ;

/// @brief Method OnGroundedChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnGroundedChanged(bool  isGrounded) ;

/// @brief Method RemoveGravityLock, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void RemoveGravityLock() ;

/// @brief Method TryLockGravity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool TryLockGravity(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride  gravityOverride) ;

/// @brief Method get_canProcess, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_canProcess() ;

/// @brief Method get_gravityPaused, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_gravityPaused() ;

// Ctor Parameters [CppParam { name: "", ty: "IGravityController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGravityController(IGravityController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11378};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity
