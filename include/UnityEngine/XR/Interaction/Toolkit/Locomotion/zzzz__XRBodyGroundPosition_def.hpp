#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/XRBodyGroundPosition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(XRBodyGroundPosition)
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class IXRBodyTransformation;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class XRMovableBody;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class XRBodyGroundPosition;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyGroundPosition*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyGroundPosition*, "UnityEngine.XR.Interaction.Toolkit.Locomotion", "XRBodyGroundPosition");
// Dependencies System.Object, UnityEngine.Vector3
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.XRBodyGroundPosition
class CORDL_TYPE XRBodyGroundPosition : public ::System::Object {
public:
// Declarations
/// @brief Field <targetPosition>k__BackingField, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get__targetPosition_k__BackingField, put=__cordl_internal_set__targetPosition_k__BackingField)) ::UnityEngine::Vector3  _targetPosition_k__BackingField;

 __declspec(property(get=get_targetPosition, put=set_targetPosition)) ::UnityEngine::Vector3  targetPosition;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation*() noexcept;

/// @brief Method Apply, addr 0xb4499c8, size 0x80, virtual true, abstract: false, final false
inline void Apply(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*  body) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyGroundPosition* New_ctor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__targetPosition_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__targetPosition_k__BackingField() ;

constexpr void __cordl_internal_set__targetPosition_k__BackingField(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0xb449a58, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_targetPosition, addr 0xb4499b0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_targetPosition() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation* i___UnityEngine__XR__Interaction__Toolkit__Locomotion__IXRBodyTransformation() noexcept;

/// [CompilerGenerated]
/// @brief Method set_targetPosition, addr 0xb4499bc, size 0xc, virtual false, abstract: false, final false
inline void set_targetPosition(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRBodyGroundPosition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRBodyGroundPosition", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRBodyGroundPosition(XRBodyGroundPosition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRBodyGroundPosition", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRBodyGroundPosition(XRBodyGroundPosition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11341};

/// [CompilerGenerated]
/// @brief Field <targetPosition>k__BackingField, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____targetPosition_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyGroundPosition, ____targetPosition_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyGroundPosition) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion
