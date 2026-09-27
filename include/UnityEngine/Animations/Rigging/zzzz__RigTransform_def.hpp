#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/RigTransform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RigTransform)
// Forward declare root types
namespace UnityEngine::Animations::Rigging {
class RigTransform;
}
// Write type traits
MARK_REF_T(::UnityEngine::Animations::Rigging::RigTransform*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::Rigging::RigTransform*, "UnityEngine.Animations.Rigging", "RigTransform");
// [DisallowMultipleComponent]
// [AddComponentMenu("Animation Rigging/Setup/Rig Transform")]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.animation.rigging@1.3/manual/RiggingWorkflow.html#rig-transform")]
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::Animations::Rigging {
// Is value type: false
// CS Name: UnityEngine.Animations.Rigging.RigTransform
class CORDL_TYPE RigTransform : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::UnityEngine::Animations::Rigging::RigTransform* New_ctor() ;

/// @brief Method .ctor, addr 0xae7b2a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RigTransform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RigTransform", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RigTransform(RigTransform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RigTransform", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RigTransform(RigTransform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32308};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Animations::Rigging::RigTransform) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Animations::Rigging
