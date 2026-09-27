#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/DontDestroyOnLoadModifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Modifier_def.hpp"
CORDL_MODULE_EXPORT(DontDestroyOnLoadModifier)
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
class DontDestroyOnLoadModifier;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::SceneDecorator::DontDestroyOnLoadModifier*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDecorator::DontDestroyOnLoadModifier*, "Meta.XR.MRUtilityKit.SceneDecorator", "DontDestroyOnLoadModifier");
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies Meta.XR.MRUtilityKit.SceneDecorator.Modifier
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.DontDestroyOnLoadModifier
class CORDL_TYPE DontDestroyOnLoadModifier : public ::Meta::XR::MRUtilityKit::SceneDecorator::Modifier {
public:
// Declarations
/// @brief Method ApplyModifier, addr 0x9f525a0, size 0x58, virtual true, abstract: false, final false
inline void ApplyModifier(::UnityEngine::GameObject*  decorationGO, ::Meta::XR::MRUtilityKit::MRUKAnchor*  sceneAnchor, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*  sceneDecoration, ::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  candidate) ;

static inline ::Meta::XR::MRUtilityKit::SceneDecorator::DontDestroyOnLoadModifier* New_ctor() ;

/// @brief Method .ctor, addr 0x9f525f8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DontDestroyOnLoadModifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DontDestroyOnLoadModifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DontDestroyOnLoadModifier(DontDestroyOnLoadModifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DontDestroyOnLoadModifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DontDestroyOnLoadModifier(DontDestroyOnLoadModifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25943};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDecorator::DontDestroyOnLoadModifier) == 0x20, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
