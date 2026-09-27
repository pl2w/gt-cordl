#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/XROriginMovement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(XROriginMovement)
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
class XROriginMovement;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*, "UnityEngine.XR.Interaction.Toolkit.Locomotion", "XROriginMovement");
// Dependencies System.Object, UnityEngine.Vector3
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.XROriginMovement
class CORDL_TYPE XROriginMovement : public ::System::Object {
public:
// Declarations
/// @brief Field <forceUnconstrained>k__BackingField, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get__forceUnconstrained_k__BackingField, put=__cordl_internal_set__forceUnconstrained_k__BackingField)) bool  _forceUnconstrained_k__BackingField;

/// @brief Field <motion>k__BackingField, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get__motion_k__BackingField, put=__cordl_internal_set__motion_k__BackingField)) ::UnityEngine::Vector3  _motion_k__BackingField;

 __declspec(property(get=get_forceUnconstrained, put=set_forceUnconstrained)) bool  forceUnconstrained;

 __declspec(property(get=get_motion, put=set_motion)) ::UnityEngine::Vector3  motion;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation*() noexcept;

/// @brief Method Apply, addr 0xb449864, size 0x120, virtual true, abstract: false, final false
inline void Apply(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*  body) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement* New_ctor() ;

constexpr bool const& __cordl_internal_get__forceUnconstrained_k__BackingField() const;

constexpr bool& __cordl_internal_get__forceUnconstrained_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__motion_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__motion_k__BackingField() ;

constexpr void __cordl_internal_set__forceUnconstrained_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__motion_k__BackingField(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0xb4499a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_forceUnconstrained, addr 0xb449854, size 0x8, virtual false, abstract: false, final false
inline bool get_forceUnconstrained() ;

/// [CompilerGenerated]
/// @brief Method get_motion, addr 0xb44983c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_motion() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation* i___UnityEngine__XR__Interaction__Toolkit__Locomotion__IXRBodyTransformation() noexcept;

/// [CompilerGenerated]
/// @brief Method set_forceUnconstrained, addr 0xb44985c, size 0x8, virtual false, abstract: false, final false
inline void set_forceUnconstrained(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_motion, addr 0xb449848, size 0xc, virtual false, abstract: false, final false
inline void set_motion(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XROriginMovement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XROriginMovement", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XROriginMovement(XROriginMovement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XROriginMovement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XROriginMovement(XROriginMovement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11340};

/// [CompilerGenerated]
/// @brief Field <motion>k__BackingField, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____motion_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <forceUnconstrained>k__BackingField, offset: 0x1c, size: 0x1, def value: None
 bool  ____forceUnconstrained_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement, ____motion_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement, ____forceUnconstrained_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion
