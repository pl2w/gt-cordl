#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/RotationModifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Modifier_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RotationModifier)
namespace Meta::XR::MRUtilityKit::SceneDecorator {
struct Candidate;
}
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class Mask;
}
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class SceneDecoration;
}
namespace Meta::XR::MRUtilityKit {
class MRUKAnchor;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class RotationModifier;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::SceneDecorator::RotationModifier*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDecorator::RotationModifier*, "Meta.XR.MRUtilityKit.SceneDecorator", "RotationModifier");
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies Meta.XR.MRUtilityKit.SceneDecorator.Modifier, UnityEngine.Vector3
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.RotationModifier
class CORDL_TYPE RotationModifier : public ::Meta::XR::MRUtilityKit::SceneDecorator::Modifier {
public:
// Declarations
/// @brief Field limitMax, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_limitMax, put=__cordl_internal_set_limitMax)) float_t  limitMax;

/// @brief Field limitMin, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_limitMin, put=__cordl_internal_set_limitMin)) float_t  limitMin;

/// @brief Field localSpace, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_localSpace, put=__cordl_internal_set_localSpace)) bool  localSpace;

/// @brief Field mask, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_mask, put=__cordl_internal_set_mask)) ::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Mask>  mask;

/// @brief Field offset, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_offset, put=__cordl_internal_set_offset)) float_t  offset;

/// @brief Field rotationAxis, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_rotationAxis, put=__cordl_internal_set_rotationAxis)) ::UnityEngine::Vector3  rotationAxis;

/// @brief Field scale, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_scale, put=__cordl_internal_set_scale)) float_t  scale;

/// @brief Method ApplyModifier, addr 0x9f52900, size 0x204, virtual true, abstract: false, final false
inline void ApplyModifier(::UnityEngine::GameObject*  decorationGO, ::Meta::XR::MRUtilityKit::MRUKAnchor*  sceneAnchor, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*  sceneDecoration, ::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  candidate) ;

static inline ::Meta::XR::MRUtilityKit::SceneDecorator::RotationModifier* New_ctor() ;

constexpr float_t const& __cordl_internal_get_limitMax() const;

constexpr float_t& __cordl_internal_get_limitMax() ;

constexpr float_t const& __cordl_internal_get_limitMin() const;

constexpr float_t& __cordl_internal_get_limitMin() ;

constexpr bool const& __cordl_internal_get_localSpace() const;

constexpr bool& __cordl_internal_get_localSpace() ;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Mask> const& __cordl_internal_get_mask() const;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Mask>& __cordl_internal_get_mask() ;

constexpr float_t const& __cordl_internal_get_offset() const;

constexpr float_t& __cordl_internal_get_offset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rotationAxis() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rotationAxis() ;

constexpr float_t const& __cordl_internal_get_scale() const;

constexpr float_t& __cordl_internal_get_scale() ;

constexpr void __cordl_internal_set_limitMax(float_t  value) ;

constexpr void __cordl_internal_set_limitMin(float_t  value) ;

constexpr void __cordl_internal_set_localSpace(bool  value) ;

constexpr void __cordl_internal_set_mask(::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Mask>  value) ;

constexpr void __cordl_internal_set_offset(float_t  value) ;

constexpr void __cordl_internal_set_rotationAxis(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_scale(float_t  value) ;

/// @brief Method .ctor, addr 0x9f52b04, size 0x34, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RotationModifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RotationModifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RotationModifier(RotationModifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RotationModifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RotationModifier(RotationModifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25947};

/// [SerializeField]
/// @brief Field mask, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Mask>  ___mask;

/// [SerializeField]
/// @brief Field limitMin, offset: 0x28, size: 0x4, def value: None
 float_t  ___limitMin;

/// [SerializeField]
/// @brief Field limitMax, offset: 0x2c, size: 0x4, def value: None
 float_t  ___limitMax;

/// [SerializeField]
/// @brief Field scale, offset: 0x30, size: 0x4, def value: None
 float_t  ___scale;

/// [SerializeField]
/// @brief Field offset, offset: 0x34, size: 0x4, def value: None
 float_t  ___offset;

/// [SerializeField]
/// @brief Field rotationAxis, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rotationAxis;

/// [SerializeField]
/// @brief Field localSpace, offset: 0x44, size: 0x1, def value: None
 bool  ___localSpace;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::RotationModifier, ___mask) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::RotationModifier, ___limitMin) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::RotationModifier, ___limitMax) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::RotationModifier, ___scale) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::RotationModifier, ___offset) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::RotationModifier, ___rotationAxis) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::RotationModifier, ___localSpace) == 0x44, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDecorator::RotationModifier) == 0x48, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
