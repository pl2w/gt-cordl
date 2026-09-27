#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/KeepUprightWithSurfaceModifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Modifier_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(KeepUprightWithSurfaceModifier)
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
class KeepUprightWithSurfaceModifier;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::SceneDecorator::KeepUprightWithSurfaceModifier*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDecorator::KeepUprightWithSurfaceModifier*, "Meta.XR.MRUtilityKit.SceneDecorator", "KeepUprightWithSurfaceModifier");
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies Meta.XR.MRUtilityKit.SceneDecorator.Modifier, UnityEngine.Vector3
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.KeepUprightWithSurfaceModifier
class CORDL_TYPE KeepUprightWithSurfaceModifier : public ::Meta::XR::MRUtilityKit::SceneDecorator::Modifier {
public:
// Declarations
/// @brief Field uprightAxis, offset 0x1c, size 0xc 
 __declspec(property(get=__cordl_internal_get_uprightAxis, put=__cordl_internal_set_uprightAxis)) ::UnityEngine::Vector3  uprightAxis;

/// @brief Method ApplyModifier, addr 0x9f52794, size 0x14c, virtual true, abstract: false, final false
inline void ApplyModifier(::UnityEngine::GameObject*  decorationGO, ::Meta::XR::MRUtilityKit::MRUKAnchor*  sceneAnchor, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*  sceneDecoration, ::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  candidate) ;

static inline ::Meta::XR::MRUtilityKit::SceneDecorator::KeepUprightWithSurfaceModifier* New_ctor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_uprightAxis() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_uprightAxis() ;

constexpr void __cordl_internal_set_uprightAxis(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x9f528e0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KeepUprightWithSurfaceModifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KeepUprightWithSurfaceModifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KeepUprightWithSurfaceModifier(KeepUprightWithSurfaceModifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KeepUprightWithSurfaceModifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KeepUprightWithSurfaceModifier(KeepUprightWithSurfaceModifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25945};

/// [SerializeField]
/// @brief Field uprightAxis, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___uprightAxis;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::KeepUprightWithSurfaceModifier, ___uprightAxis) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDecorator::KeepUprightWithSurfaceModifier) == 0x28, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
