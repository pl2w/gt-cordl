#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/RotationModifierSpaceMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Modifier_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RotationModifierSpaceMap)
namespace Meta::XR::MRUtilityKit::SceneDecorator {
struct Candidate;
}
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class SceneDecoration;
}
namespace Meta::XR::MRUtilityKit {
class MRUKAnchor;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class RotationModifierSpaceMap;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::SceneDecorator::RotationModifierSpaceMap*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDecorator::RotationModifierSpaceMap*, "Meta.XR.MRUtilityKit.SceneDecorator", "RotationModifierSpaceMap");
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies Meta.XR.MRUtilityKit.SceneDecorator.Modifier, UnityEngine.Color
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.RotationModifierSpaceMap
class CORDL_TYPE RotationModifierSpaceMap : public ::Meta::XR::MRUtilityKit::SceneDecorator::Modifier {
public:
// Declarations
/// @brief Field Radius, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Radius, put=__cordl_internal_set_Radius)) float_t  Radius;

/// @brief Field RotateToColor, offset 0x1c, size 0x10 
 __declspec(property(get=__cordl_internal_get_RotateToColor, put=__cordl_internal_set_RotateToColor)) ::UnityEngine::Color  RotateToColor;

/// @brief Method ApplyModifier, addr 0x9f52b38, size 0x52c, virtual true, abstract: false, final false
inline void ApplyModifier(::UnityEngine::GameObject*  decorationGO, ::Meta::XR::MRUtilityKit::MRUKAnchor*  sceneAnchor, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*  sceneDecoration, ::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  candidate) ;

/// @brief Method ColorDistance, addr 0x9f53064, size 0x28, virtual false, abstract: false, final false
inline float_t ColorDistance(::UnityEngine::Color  a, ::UnityEngine::Color  b) ;

static inline ::Meta::XR::MRUtilityKit::SceneDecorator::RotationModifierSpaceMap* New_ctor() ;

constexpr float_t const& __cordl_internal_get_Radius() const;

constexpr float_t& __cordl_internal_get_Radius() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_RotateToColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_RotateToColor() ;

constexpr void __cordl_internal_set_Radius(float_t  value) ;

constexpr void __cordl_internal_set_RotateToColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x9f5308c, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RotationModifierSpaceMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RotationModifierSpaceMap", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RotationModifierSpaceMap(RotationModifierSpaceMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RotationModifierSpaceMap", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RotationModifierSpaceMap(RotationModifierSpaceMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25948};

/// [SerializeField]
/// @brief Field RotateToColor, offset: 0x1c, size: 0x10, def value: None
 ::UnityEngine::Color  ___RotateToColor;

/// [SerializeField]
/// @brief Field Radius, offset: 0x2c, size: 0x4, def value: None
 float_t  ___Radius;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::RotationModifierSpaceMap, ___RotateToColor) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::RotationModifierSpaceMap, ___Radius) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDecorator::RotationModifierSpaceMap) == 0x30, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
