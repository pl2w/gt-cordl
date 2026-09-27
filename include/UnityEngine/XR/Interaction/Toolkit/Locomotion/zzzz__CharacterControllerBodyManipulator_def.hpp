#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/CharacterControllerBodyManipulator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__ScriptableConstrainedBodyManipulator_def.hpp"
CORDL_MODULE_EXPORT(CharacterControllerBodyManipulator)
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class XRMovableBody;
}
namespace UnityEngine {
class CharacterController;
}
namespace UnityEngine {
struct CollisionFlags;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class CharacterControllerBodyManipulator;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator*, "UnityEngine.XR.Interaction.Toolkit.Locomotion", "CharacterControllerBodyManipulator");
// [CreateAssetMenu(fileName = "CharacterControllerBodyManipulator", menuName = "XR/Locomotion/Character Controller Body Manipulator")]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.CharacterControllerBodyManipulator.html")]
// Dependencies UnityEngine.XR.Interaction.Toolkit.Locomotion.ScriptableConstrainedBodyManipulator
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.CharacterControllerBodyManipulator
class CORDL_TYPE CharacterControllerBodyManipulator : public ::UnityEngine::XR::Interaction::Toolkit::Locomotion::ScriptableConstrainedBodyManipulator {
public:
// Declarations
/// @brief Field <characterController>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__characterController_k__BackingField, put=__cordl_internal_set__characterController_k__BackingField)) ::UnityW<::UnityEngine::CharacterController>  _characterController_k__BackingField;

 __declspec(property(get=get_characterController, put=set_characterController)) ::UnityW<::UnityEngine::CharacterController>  characterController;

 __declspec(property(get=get_isGrounded)) bool  isGrounded;

 __declspec(property(get=get_lastCollisionFlags)) ::UnityEngine::CollisionFlags  lastCollisionFlags;

/// @brief Method MoveBody, addr 0xb446d9c, size 0x158, virtual true, abstract: false, final false
inline ::UnityEngine::CollisionFlags MoveBody(::UnityEngine::Vector3  motion) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator* New_ctor() ;

/// @brief Method OnLinkedToBody, addr 0xb446b88, size 0x1f0, virtual true, abstract: false, final false
inline void OnLinkedToBody(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*  body) ;

/// @brief Method OnUnlinkedFromBody, addr 0xb446d78, size 0x24, virtual true, abstract: false, final false
inline void OnUnlinkedFromBody() ;

constexpr ::UnityW<::UnityEngine::CharacterController> const& __cordl_internal_get__characterController_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::CharacterController>& __cordl_internal_get__characterController_k__BackingField() ;

constexpr void __cordl_internal_set__characterController_k__BackingField(::UnityW<::UnityEngine::CharacterController>  value) ;

/// @brief Method .ctor, addr 0xb446ef4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_characterController, addr 0xb446b78, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::CharacterController> get_characterController() ;

/// @brief Method get_isGrounded, addr 0xb446af0, size 0x88, virtual true, abstract: false, final false
inline bool get_isGrounded() ;

/// @brief Method get_lastCollisionFlags, addr 0xb446a68, size 0x88, virtual true, abstract: false, final false
inline ::UnityEngine::CollisionFlags get_lastCollisionFlags() ;

/// [CompilerGenerated]
/// @brief Method set_characterController, addr 0xb446b80, size 0x8, virtual false, abstract: false, final false
inline void set_characterController(::UnityEngine::CharacterController*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CharacterControllerBodyManipulator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CharacterControllerBodyManipulator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CharacterControllerBodyManipulator(CharacterControllerBodyManipulator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CharacterControllerBodyManipulator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CharacterControllerBodyManipulator(CharacterControllerBodyManipulator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11327};

/// [CompilerGenerated]
/// @brief Field <characterController>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CharacterController>  ____characterController_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator, ____characterController_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion
