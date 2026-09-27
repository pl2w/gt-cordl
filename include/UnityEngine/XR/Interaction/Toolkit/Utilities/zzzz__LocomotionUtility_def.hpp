#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/LocomotionUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LocomotionUtility)
namespace Unity::XR::CoreUtils {
class XROrigin;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class LocomotionMediator;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class LocomotionProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class XRBodyTransformer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class LocomotionUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::LocomotionUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::LocomotionUtility*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "LocomotionUtility");
// [Extension]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.LocomotionUtility
class CORDL_TYPE LocomotionUtility : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method GetCameraFloorWorldPosition, addr 0xb427774, size 0x54, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetCameraFloorWorldPosition(::Unity::XR::CoreUtils::XROrigin*  xrOrigin) ;

/// @brief Method TryGetOriginTransform, addr 0xb42797c, size 0x100, virtual false, abstract: false, final false
static inline bool TryGetOriginTransform(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*  bodyTransformer, ::by_ref<::UnityEngine::Transform*>  originTransform) ;

/// @brief Method TryGetOriginTransform, addr 0xb4277c8, size 0xa4, virtual false, abstract: false, final false
static inline bool TryGetOriginTransform(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*  locomotionProvider, ::by_ref<::UnityEngine::Transform*>  originTransform) ;

/// @brief Method TryGetOriginTransform, addr 0xb42786c, size 0x110, virtual false, abstract: false, final false
static inline bool TryGetOriginTransform(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator*  mediator, ::by_ref<::UnityEngine::Transform*>  originTransform) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocomotionUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocomotionUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocomotionUtility(LocomotionUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocomotionUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocomotionUtility(LocomotionUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11209};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::LocomotionUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
