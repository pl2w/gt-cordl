#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/ScaleModifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Modifier_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__ScaleModifier_AxisParameters_def.hpp"
CORDL_MODULE_EXPORT(ScaleModifier)
namespace GlobalNamespace {
struct ScaleModifier_AxisParameters;
}
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
class GameObject;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class ScaleModifier;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::SceneDecorator::ScaleModifier*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDecorator::ScaleModifier*, "Meta.XR.MRUtilityKit.SceneDecorator", "ScaleModifier");
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies Meta.XR.MRUtilityKit.SceneDecorator.Modifier, Meta.XR.MRUtilityKit.SceneDecorator.ScaleModifier::AxisParameters
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.ScaleModifier
class CORDL_TYPE ScaleModifier : public ::Meta::XR::MRUtilityKit::SceneDecorator::Modifier {
public:
// Declarations
using AxisParameters = ::GlobalNamespace::ScaleModifier_AxisParameters;

/// @brief Field x, offset 0x20, size 0x18 
 __declspec(property(get=__cordl_internal_get_x, put=__cordl_internal_set_x)) ::GlobalNamespace::ScaleModifier_AxisParameters  x;

/// @brief Field y, offset 0x38, size 0x18 
 __declspec(property(get=__cordl_internal_get_y, put=__cordl_internal_set_y)) ::GlobalNamespace::ScaleModifier_AxisParameters  y;

/// @brief Field z, offset 0x50, size 0x18 
 __declspec(property(get=__cordl_internal_get_z, put=__cordl_internal_set_z)) ::GlobalNamespace::ScaleModifier_AxisParameters  z;

/// @brief Method ApplyModifier, addr 0x9f530b4, size 0x20c, virtual true, abstract: false, final false
inline void ApplyModifier(::UnityEngine::GameObject*  decorationGO, ::Meta::XR::MRUtilityKit::MRUKAnchor*  sceneAnchor, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*  sceneDecoration, ::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  candidate) ;

static inline ::Meta::XR::MRUtilityKit::SceneDecorator::ScaleModifier* New_ctor() ;

constexpr ::GlobalNamespace::ScaleModifier_AxisParameters const& __cordl_internal_get_x() const;

constexpr ::GlobalNamespace::ScaleModifier_AxisParameters& __cordl_internal_get_x() ;

constexpr ::GlobalNamespace::ScaleModifier_AxisParameters const& __cordl_internal_get_y() const;

constexpr ::GlobalNamespace::ScaleModifier_AxisParameters& __cordl_internal_get_y() ;

constexpr ::GlobalNamespace::ScaleModifier_AxisParameters const& __cordl_internal_get_z() const;

constexpr ::GlobalNamespace::ScaleModifier_AxisParameters& __cordl_internal_get_z() ;

constexpr void __cordl_internal_set_x(::GlobalNamespace::ScaleModifier_AxisParameters  value) ;

constexpr void __cordl_internal_set_y(::GlobalNamespace::ScaleModifier_AxisParameters  value) ;

constexpr void __cordl_internal_set_z(::GlobalNamespace::ScaleModifier_AxisParameters  value) ;

/// @brief Method .ctor, addr 0x9f532c0, size 0x74, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScaleModifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScaleModifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScaleModifier(ScaleModifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScaleModifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScaleModifier(ScaleModifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25950};

/// [SerializeField]
/// @brief Field x, offset: 0x20, size: 0x18, def value: None
 ::GlobalNamespace::ScaleModifier_AxisParameters  ___x;

/// [SerializeField]
/// @brief Field y, offset: 0x38, size: 0x18, def value: None
 ::GlobalNamespace::ScaleModifier_AxisParameters  ___y;

/// [SerializeField]
/// @brief Field z, offset: 0x50, size: 0x18, def value: None
 ::GlobalNamespace::ScaleModifier_AxisParameters  ___z;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::ScaleModifier, ___x) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::ScaleModifier, ___y) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::ScaleModifier, ___z) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDecorator::ScaleModifier) == 0x68, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
