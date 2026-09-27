#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/HandGrabUtils_HandGrabInteractableData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Grab/zzzz__GrabTypeFlags_def.hpp"
#include "Oculus/Interaction/Grab/zzzz__PoseMeasureParameters_def.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__GrabbingRule_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandAlignType_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(HandGrabUtils_HandGrabInteractableData)
namespace GlobalNamespace {
struct HandGrabUtils_HandGrabPoseData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct HandGrabUtils_HandGrabInteractableData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HandGrabUtils_HandGrabInteractableData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandGrabUtils_HandGrabInteractableData, "Oculus.Interaction.HandGrab", "HandGrabUtils/HandGrabInteractableData");
// Dependencies Oculus.Interaction.Grab.GrabTypeFlags, Oculus.Interaction.Grab.PoseMeasureParameters, Oculus.Interaction.GrabAPI.GrabbingRule, Oculus.Interaction.HandGrab.HandAlignType
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.HandGrab.HandGrabUtils/HandGrabInteractableData
struct CORDL_TYPE HandGrabUtils_HandGrabInteractableData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr HandGrabUtils_HandGrabInteractableData() ;

// Ctor Parameters [CppParam { name: "poses", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::HandGrabUtils_HandGrabPoseData>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "grabType", ty: "::Oculus::Interaction::Grab::GrabTypeFlags", modifiers: "", def_value: None, comment: None }, CppParam { name: "handAlignment", ty: "::Oculus::Interaction::HandGrab::HandAlignType", modifiers: "", def_value: None, comment: None }, CppParam { name: "scoringModifier", ty: "::Oculus::Interaction::Grab::PoseMeasureParameters", modifiers: "", def_value: None, comment: None }, CppParam { name: "pinchGrabRules", ty: "::Oculus::Interaction::GrabAPI::GrabbingRule", modifiers: "", def_value: None, comment: None }, CppParam { name: "palmGrabRules", ty: "::Oculus::Interaction::GrabAPI::GrabbingRule", modifiers: "", def_value: None, comment: None }]
constexpr HandGrabUtils_HandGrabInteractableData(::System::Collections::Generic::List_1<::GlobalNamespace::HandGrabUtils_HandGrabPoseData>*  poses, ::Oculus::Interaction::Grab::GrabTypeFlags  grabType, ::Oculus::Interaction::HandGrab::HandAlignType  handAlignment, ::Oculus::Interaction::Grab::PoseMeasureParameters  scoringModifier, ::Oculus::Interaction::GrabAPI::GrabbingRule  pinchGrabRules, ::Oculus::Interaction::GrabAPI::GrabbingRule  palmGrabRules) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16329};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field poses, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::HandGrabUtils_HandGrabPoseData>*  poses;

/// @brief Field grabType, offset: 0x8, size: 0x4, def value: None
 ::Oculus::Interaction::Grab::GrabTypeFlags  grabType;

/// @brief Field handAlignment, offset: 0xc, size: 0x4, def value: None
 ::Oculus::Interaction::HandGrab::HandAlignType  handAlignment;

/// @brief Field scoringModifier, offset: 0x10, size: 0x4, def value: None
 ::Oculus::Interaction::Grab::PoseMeasureParameters  scoringModifier;

/// @brief Field pinchGrabRules, offset: 0x14, size: 0x18, def value: None
 ::Oculus::Interaction::GrabAPI::GrabbingRule  pinchGrabRules;

/// @brief Field palmGrabRules, offset: 0x2c, size: 0x18, def value: None
 ::Oculus::Interaction::GrabAPI::GrabbingRule  palmGrabRules;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandGrabUtils_HandGrabInteractableData, poses) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandGrabUtils_HandGrabInteractableData, grabType) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandGrabUtils_HandGrabInteractableData, handAlignment) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandGrabUtils_HandGrabInteractableData, scoringModifier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandGrabUtils_HandGrabInteractableData, pinchGrabRules) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandGrabUtils_HandGrabInteractableData, palmGrabRules) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandGrabUtils_HandGrabInteractableData) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
