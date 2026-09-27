#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerAgeGateWarningStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EImageVisibility_def.hpp"
#include "GlobalNamespace/zzzz__WarningButtonResult_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PlayerAgeGateWarningStatus)
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
struct PlayerAgeGateWarningStatus;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlayerAgeGateWarningStatus);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerAgeGateWarningStatus, "", "PlayerAgeGateWarningStatus");
// Dependencies EImageVisibility, WarningButtonResult
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerAgeGateWarningStatus
struct CORDL_TYPE PlayerAgeGateWarningStatus {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PlayerAgeGateWarningStatus() ;

// Ctor Parameters [CppParam { name: "header", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "body", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "leftButtonText", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "rightButtonText", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "leftButtonResult", ty: "::GlobalNamespace::WarningButtonResult", modifiers: "", def_value: None, comment: None }, CppParam { name: "rightButtonResult", ty: "::GlobalNamespace::WarningButtonResult", modifiers: "", def_value: None, comment: None }, CppParam { name: "noWarningResult", ty: "::GlobalNamespace::WarningButtonResult", modifiers: "", def_value: None, comment: None }, CppParam { name: "showImage", ty: "::GlobalNamespace::EImageVisibility", modifiers: "", def_value: None, comment: None }, CppParam { name: "onLeftButtonPressedAction", ty: "::System::Action*", modifiers: "", def_value: None, comment: None }, CppParam { name: "onRightButtonPressedAction", ty: "::System::Action*", modifiers: "", def_value: None, comment: None }]
constexpr PlayerAgeGateWarningStatus(::StringW  header, ::StringW  body, ::StringW  leftButtonText, ::StringW  rightButtonText, ::GlobalNamespace::WarningButtonResult  leftButtonResult, ::GlobalNamespace::WarningButtonResult  rightButtonResult, ::GlobalNamespace::WarningButtonResult  noWarningResult, ::GlobalNamespace::EImageVisibility  showImage, ::System::Action*  onLeftButtonPressedAction, ::System::Action*  onRightButtonPressedAction) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3051};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field header, offset: 0x0, size: 0x8, def value: None
 ::StringW  header;

/// @brief Field body, offset: 0x8, size: 0x8, def value: None
 ::StringW  body;

/// @brief Field leftButtonText, offset: 0x10, size: 0x8, def value: None
 ::StringW  leftButtonText;

/// @brief Field rightButtonText, offset: 0x18, size: 0x8, def value: None
 ::StringW  rightButtonText;

/// @brief Field leftButtonResult, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::WarningButtonResult  leftButtonResult;

/// @brief Field rightButtonResult, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::WarningButtonResult  rightButtonResult;

/// @brief Field noWarningResult, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::WarningButtonResult  noWarningResult;

/// @brief Field showImage, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::EImageVisibility  showImage;

/// @brief Field onLeftButtonPressedAction, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  onLeftButtonPressedAction;

/// @brief Field onRightButtonPressedAction, offset: 0x38, size: 0x8, def value: None
 ::System::Action*  onRightButtonPressedAction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerAgeGateWarningStatus, header) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAgeGateWarningStatus, body) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAgeGateWarningStatus, leftButtonText) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAgeGateWarningStatus, rightButtonText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAgeGateWarningStatus, leftButtonResult) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAgeGateWarningStatus, rightButtonResult) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAgeGateWarningStatus, noWarningResult) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAgeGateWarningStatus, showImage) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAgeGateWarningStatus, onLeftButtonPressedAction) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAgeGateWarningStatus, onRightButtonPressedAction) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerAgeGateWarningStatus) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
