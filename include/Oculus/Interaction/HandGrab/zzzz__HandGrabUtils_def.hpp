#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/HandGrabUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(HandGrabUtils)
namespace GlobalNamespace {
struct HandGrabUtils_HandGrabInteractableData;
}
namespace GlobalNamespace {
struct HandGrabUtils_HandGrabPoseData;
}
namespace Oculus::Interaction::HandGrab {
class HandGrabInteractable;
}
namespace Oculus::Interaction::HandGrab {
class HandGrabPose;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction::HandGrab {
class HandGrabUtils;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandGrab::HandGrabUtils*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandGrab::HandGrabUtils*, "Oculus.Interaction.HandGrab", "HandGrabUtils");
// Dependencies System.Object
namespace Oculus::Interaction::HandGrab {
// Is value type: false
// CS Name: Oculus.Interaction.HandGrab.HandGrabUtils
class CORDL_TYPE HandGrabUtils : public ::System::Object {
public:
// Declarations
using HandGrabInteractableData = ::GlobalNamespace::HandGrabUtils_HandGrabInteractableData;

using HandGrabPoseData = ::GlobalNamespace::HandGrabUtils_HandGrabPoseData;

/// @brief Method CreateHandGrabInteractable, addr 0xa4e22ec, size 0x170, virtual false, abstract: false, final false
static inline ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable> CreateHandGrabInteractable(::UnityEngine::Transform*  parent, ::StringW  name) ;

/// @brief Method CreateHandGrabPose, addr 0xa4e245c, size 0xd8, virtual false, abstract: false, final false
static inline ::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose> CreateHandGrabPose(::UnityEngine::Transform*  parent, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method LoadData, addr 0xa4e2f50, size 0x278, virtual false, abstract: false, final false
static inline void LoadData(::Oculus::Interaction::HandGrab::HandGrabInteractable*  interactable, ::GlobalNamespace::HandGrabUtils_HandGrabInteractableData  data) ;

/// @brief Method LoadHandGrabPose, addr 0xa4e31c8, size 0x130, virtual false, abstract: false, final false
static inline ::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose> LoadHandGrabPose(::Oculus::Interaction::HandGrab::HandGrabInteractable*  interactable, ::GlobalNamespace::HandGrabUtils_HandGrabPoseData  poseData) ;

/// @brief Method LoadHandGrabPoseData, addr 0xa4e2a74, size 0x168, virtual false, abstract: false, final false
static inline void LoadHandGrabPoseData(::Oculus::Interaction::HandGrab::HandGrabPose*  handGrabPose, ::GlobalNamespace::HandGrabUtils_HandGrabPoseData  data, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method MirrorHandGrabPose, addr 0xa4e2534, size 0x3bc, virtual false, abstract: false, final false
static inline void MirrorHandGrabPose(::Oculus::Interaction::HandGrab::HandGrabPose*  originalPoint, ::Oculus::Interaction::HandGrab::HandGrabPose*  mirrorPoint, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method SaveData, addr 0xa4e2cac, size 0x2a4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::HandGrabUtils_HandGrabInteractableData SaveData(::Oculus::Interaction::HandGrab::HandGrabInteractable*  interactable) ;

/// @brief Method SaveHandGrabPoseData, addr 0xa4e28f0, size 0xdc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::HandGrabUtils_HandGrabPoseData SaveHandGrabPoseData(::Oculus::Interaction::HandGrab::HandGrabPose*  handGrabPose) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandGrabUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandGrabUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandGrabUtils(HandGrabUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandGrabUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandGrabUtils(HandGrabUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16331};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::HandGrab::HandGrabUtils) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::HandGrab
