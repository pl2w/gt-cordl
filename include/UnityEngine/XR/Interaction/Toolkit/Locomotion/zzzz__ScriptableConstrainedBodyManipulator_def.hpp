#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/ScriptableConstrainedBodyManipulator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(ScriptableConstrainedBodyManipulator)
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class IConstrainedXRBodyManipulator;
}
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
class ScriptableConstrainedBodyManipulator;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::ScriptableConstrainedBodyManipulator*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::ScriptableConstrainedBodyManipulator*, "UnityEngine.XR.Interaction.Toolkit.Locomotion", "ScriptableConstrainedBodyManipulator");
// Dependencies UnityEngine.ScriptableObject
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.ScriptableConstrainedBodyManipulator
class CORDL_TYPE ScriptableConstrainedBodyManipulator : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field <linkedBody>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__linkedBody_k__BackingField, put=__cordl_internal_set__linkedBody_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*  _linkedBody_k__BackingField;

 __declspec(property(get=get_isGrounded)) bool  isGrounded;

 __declspec(property(get=get_lastCollisionFlags)) ::UnityEngine::CollisionFlags  lastCollisionFlags;

 __declspec(property(get=get_linkedBody, put=set_linkedBody)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*  linkedBody;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator*() noexcept;

/// @brief Method MoveBody, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::CollisionFlags MoveBody(::UnityEngine::Vector3  motion) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::ScriptableConstrainedBodyManipulator* New_ctor() ;

/// @brief Method OnLinkedToBody, addr 0xb449640, size 0x8, virtual true, abstract: false, final false
inline void OnLinkedToBody(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*  body) ;

/// @brief Method OnUnlinkedFromBody, addr 0xb449648, size 0xc, virtual true, abstract: false, final false
inline void OnUnlinkedFromBody() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody* const& __cordl_internal_get__linkedBody_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*& __cordl_internal_get__linkedBody_k__BackingField() ;

constexpr void __cordl_internal_set__linkedBody_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*  value) ;

/// @brief Method .ctor, addr 0xb449654, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_isGrounded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_isGrounded() ;

/// @brief Method get_lastCollisionFlags, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::CollisionFlags get_lastCollisionFlags() ;

/// [CompilerGenerated]
/// @brief Method get_linkedBody, addr 0xb449630, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody* get_linkedBody() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator* i___UnityEngine__XR__Interaction__Toolkit__Locomotion__IConstrainedXRBodyManipulator() noexcept;

/// [CompilerGenerated]
/// @brief Method set_linkedBody, addr 0xb449638, size 0x8, virtual false, abstract: false, final false
inline void set_linkedBody(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScriptableConstrainedBodyManipulator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScriptableConstrainedBodyManipulator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScriptableConstrainedBodyManipulator(ScriptableConstrainedBodyManipulator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableConstrainedBodyManipulator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScriptableConstrainedBodyManipulator(ScriptableConstrainedBodyManipulator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11337};

/// [CompilerGenerated]
/// @brief Field <linkedBody>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*  ____linkedBody_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::ScriptableConstrainedBodyManipulator, ____linkedBody_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::ScriptableConstrainedBodyManipulator) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion
