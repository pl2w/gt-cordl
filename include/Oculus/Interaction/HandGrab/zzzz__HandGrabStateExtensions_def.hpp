#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/HandGrabStateExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HandGrabStateExtensions)
namespace Oculus::Interaction::HandGrab {
class IHandGrabState;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction::HandGrab {
class HandGrabStateExtensions;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandGrab::HandGrabStateExtensions*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandGrab::HandGrabStateExtensions*, "Oculus.Interaction.HandGrab", "HandGrabStateExtensions");
// [Extension]
// Dependencies System.Object
namespace Oculus::Interaction::HandGrab {
// Is value type: false
// CS Name: Oculus.Interaction.HandGrab.HandGrabStateExtensions
class CORDL_TYPE HandGrabStateExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method GetTargetGrabPose, addr 0xa4db3fc, size 0x28c, virtual false, abstract: false, final false
static inline ::UnityEngine::Pose GetTargetGrabPose(::Oculus::Interaction::HandGrab::IHandGrabState*  grabState) ;

/// [Extension]
/// @brief Method GetVisualWristPose, addr 0xa4e3454, size 0x2dc, virtual false, abstract: false, final false
static inline ::UnityEngine::Pose GetVisualWristPose(::Oculus::Interaction::HandGrab::IHandGrabState*  grabState) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandGrabStateExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandGrabStateExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandGrabStateExtensions(HandGrabStateExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandGrabStateExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandGrabStateExtensions(HandGrabStateExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16337};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::HandGrab::HandGrabStateExtensions) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::HandGrab
