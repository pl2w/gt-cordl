#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/DroneGUI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/GorillaTag/zzzz__DroneGUI_KeyData_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__DroneGUI_UIMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DroneGUI)
namespace GlobalNamespace {
struct DroneGUI_KeyData;
}
namespace GlobalNamespace {
struct DroneGUI_UIMode;
}
namespace Liv::Lck::GorillaTag {
class DroneDataModel;
}
namespace Liv::Lck::GorillaTag {
struct RecordingState;
}
namespace UnityEngine {
class GUISkin;
}
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class DroneGUI;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::DroneGUI*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::DroneGUI*, "Liv.Lck.GorillaTag", "DroneGUI");
// Dependencies Liv.Lck.GorillaTag.DroneGUI::KeyData, Liv.Lck.GorillaTag.DroneGUI::UIMode, System.Object
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.DroneGUI
class CORDL_TYPE DroneGUI : public ::System::Object {
public:
// Declarations
using KeyData = ::GlobalNamespace::DroneGUI_KeyData;

using UIMode = ::GlobalNamespace::DroneGUI_UIMode;

/// @brief Field _activateDeactivateButtonStyle, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__activateDeactivateButtonStyle, put=__cordl_internal_set__activateDeactivateButtonStyle)) ::UnityEngine::GUIStyle*  _activateDeactivateButtonStyle;

/// @brief Field _currentUIMode, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentUIMode, put=__cordl_internal_set__currentUIMode)) ::GlobalNamespace::DroneGUI_UIMode  _currentUIMode;

/// @brief Field _guiSkin, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__guiSkin, put=__cordl_internal_set__guiSkin)) ::UnityW<::UnityEngine::GUISkin>  _guiSkin;

/// @brief Field _infoButtonStyle, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__infoButtonStyle, put=__cordl_internal_set__infoButtonStyle)) ::UnityEngine::GUIStyle*  _infoButtonStyle;

/// @brief Field _isDroneModeActive, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDroneModeActive, put=__cordl_internal_set__isDroneModeActive)) bool  _isDroneModeActive;

/// @brief Field _keyStyleActive, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__keyStyleActive, put=__cordl_internal_set__keyStyleActive)) ::UnityEngine::GUIStyle*  _keyStyleActive;

/// @brief Field _keyStyleNormal, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__keyStyleNormal, put=__cordl_internal_set__keyStyleNormal)) ::UnityEngine::GUIStyle*  _keyStyleNormal;

/// @brief Field _keyStyleSpace, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__keyStyleSpace, put=__cordl_internal_set__keyStyleSpace)) ::UnityEngine::GUIStyle*  _keyStyleSpace;

/// @brief Field _labelAlignLeft, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__labelAlignLeft, put=__cordl_internal_set__labelAlignLeft)) ::UnityEngine::GUIStyle*  _labelAlignLeft;

/// @brief Field _labelAlignRight, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__labelAlignRight, put=__cordl_internal_set__labelAlignRight)) ::UnityEngine::GUIStyle*  _labelAlignRight;

/// @brief Field _model, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__model, put=__cordl_internal_set__model)) ::Liv::Lck::GorillaTag::DroneDataModel*  _model;

/// @brief Field _movementKeysA, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__movementKeysA, put=__cordl_internal_set__movementKeysA)) ::ArrayW<::GlobalNamespace::DroneGUI_KeyData>  _movementKeysA;

/// @brief Field _movementKeysD, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__movementKeysD, put=__cordl_internal_set__movementKeysD)) ::ArrayW<::GlobalNamespace::DroneGUI_KeyData>  _movementKeysD;

/// @brief Field _movementKeysE, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__movementKeysE, put=__cordl_internal_set__movementKeysE)) ::ArrayW<::GlobalNamespace::DroneGUI_KeyData>  _movementKeysE;

/// @brief Field _movementKeysQ, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__movementKeysQ, put=__cordl_internal_set__movementKeysQ)) ::ArrayW<::GlobalNamespace::DroneGUI_KeyData>  _movementKeysQ;

/// @brief Field _movementKeysS, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__movementKeysS, put=__cordl_internal_set__movementKeysS)) ::ArrayW<::GlobalNamespace::DroneGUI_KeyData>  _movementKeysS;

/// @brief Field _movementKeysW, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__movementKeysW, put=__cordl_internal_set__movementKeysW)) ::ArrayW<::GlobalNamespace::DroneGUI_KeyData>  _movementKeysW;

/// @brief Field _recordButtonStyle, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__recordButtonStyle, put=__cordl_internal_set__recordButtonStyle)) ::UnityEngine::GUIStyle*  _recordButtonStyle;

/// @brief Field _rotationKeysDown, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__rotationKeysDown, put=__cordl_internal_set__rotationKeysDown)) ::ArrayW<::GlobalNamespace::DroneGUI_KeyData>  _rotationKeysDown;

/// @brief Field _rotationKeysLeft, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__rotationKeysLeft, put=__cordl_internal_set__rotationKeysLeft)) ::ArrayW<::GlobalNamespace::DroneGUI_KeyData>  _rotationKeysLeft;

/// @brief Field _rotationKeysRight, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__rotationKeysRight, put=__cordl_internal_set__rotationKeysRight)) ::ArrayW<::GlobalNamespace::DroneGUI_KeyData>  _rotationKeysRight;

/// @brief Field _rotationKeysUp, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__rotationKeysUp, put=__cordl_internal_set__rotationKeysUp)) ::ArrayW<::GlobalNamespace::DroneGUI_KeyData>  _rotationKeysUp;

/// @brief Field _secondaryButtonStyle, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__secondaryButtonStyle, put=__cordl_internal_set__secondaryButtonStyle)) ::UnityEngine::GUIStyle*  _secondaryButtonStyle;

/// @brief Field _stepperSubButtonStyle, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__stepperSubButtonStyle, put=__cordl_internal_set__stepperSubButtonStyle)) ::UnityEngine::GUIStyle*  _stepperSubButtonStyle;

/// @brief Method GetRecordingButtonText, addr 0x9d1f3c4, size 0xac, virtual false, abstract: false, final false
inline ::StringW GetRecordingButtonText(::Liv::Lck::GorillaTag::RecordingState  state) ;

/// @brief Method Key, addr 0x9d1f814, size 0xb8, virtual false, abstract: false, final false
inline void Key(::GlobalNamespace::DroneGUI_KeyData  data, ::UnityEngine::Vector2  position) ;

/// @brief Method KeysGroup, addr 0x9d1f470, size 0x18c, virtual false, abstract: false, final false
inline void KeysGroup(::ArrayW<::GlobalNamespace::DroneGUI_KeyData>  keys, ::UnityEngine::Vector2  position, ::StringW  label) ;

static inline ::Liv::Lck::GorillaTag::DroneGUI* New_ctor(::Liv::Lck::GorillaTag::DroneDataModel*  model, ::UnityEngine::GUISkin*  skin) ;

/// @brief Method RenderHelpUIMode, addr 0x9d1ed18, size 0x3ec, virtual false, abstract: false, final false
inline void RenderHelpUIMode() ;

/// @brief Method RenderSettingsUIMode, addr 0x9d1e5fc, size 0x71c, virtual false, abstract: false, final false
inline void RenderSettingsUIMode() ;

/// @brief Method Run, addr 0x9d1be14, size 0x140, virtual false, abstract: false, final false
inline void Run() ;

/// @brief Method SetRecordButtonState, addr 0x9d1e4bc, size 0x140, virtual false, abstract: false, final false
inline void SetRecordButtonState(::Liv::Lck::GorillaTag::RecordingState  state) ;

/// @brief Method StepperUI, addr 0x9d1f1d0, size 0x1f4, virtual false, abstract: false, final false
inline float_t StepperUI(float_t  value, float_t  step, float_t  yOffset, ::StringW  label, float_t  min, float_t  max) ;

/// @brief Method ToggleDroneMode, addr 0x9d1f104, size 0x40, virtual false, abstract: false, final false
inline void ToggleDroneMode() ;

/// @brief Method ToggleUI, addr 0x9d1f144, size 0x8c, virtual false, abstract: false, final false
inline bool ToggleUI(bool  value, float_t  yOffset, ::StringW  label) ;

constexpr ::UnityEngine::GUIStyle* const& __cordl_internal_get__activateDeactivateButtonStyle() const;

constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get__activateDeactivateButtonStyle() ;

constexpr ::GlobalNamespace::DroneGUI_UIMode const& __cordl_internal_get__currentUIMode() const;

constexpr ::GlobalNamespace::DroneGUI_UIMode& __cordl_internal_get__currentUIMode() ;

constexpr ::UnityW<::UnityEngine::GUISkin> const& __cordl_internal_get__guiSkin() const;

constexpr ::UnityW<::UnityEngine::GUISkin>& __cordl_internal_get__guiSkin() ;

constexpr ::UnityEngine::GUIStyle* const& __cordl_internal_get__infoButtonStyle() const;

constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get__infoButtonStyle() ;

constexpr bool const& __cordl_internal_get__isDroneModeActive() const;

constexpr bool& __cordl_internal_get__isDroneModeActive() ;

constexpr ::UnityEngine::GUIStyle* const& __cordl_internal_get__keyStyleActive() const;

constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get__keyStyleActive() ;

constexpr ::UnityEngine::GUIStyle* const& __cordl_internal_get__keyStyleNormal() const;

constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get__keyStyleNormal() ;

constexpr ::UnityEngine::GUIStyle* const& __cordl_internal_get__keyStyleSpace() const;

constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get__keyStyleSpace() ;

constexpr ::UnityEngine::GUIStyle* const& __cordl_internal_get__labelAlignLeft() const;

constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get__labelAlignLeft() ;

constexpr ::UnityEngine::GUIStyle* const& __cordl_internal_get__labelAlignRight() const;

constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get__labelAlignRight() ;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel* const& __cordl_internal_get__model() const;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel*& __cordl_internal_get__model() ;

constexpr ::ArrayW<::GlobalNamespace::DroneGUI_KeyData> const& __cordl_internal_get__movementKeysA() const;

constexpr ::ArrayW<::GlobalNamespace::DroneGUI_KeyData>& __cordl_internal_get__movementKeysA() ;

constexpr ::ArrayW<::GlobalNamespace::DroneGUI_KeyData> const& __cordl_internal_get__movementKeysD() const;

constexpr ::ArrayW<::GlobalNamespace::DroneGUI_KeyData>& __cordl_internal_get__movementKeysD() ;

constexpr ::ArrayW<::GlobalNamespace::DroneGUI_KeyData> const& __cordl_internal_get__movementKeysE() const;

constexpr ::ArrayW<::GlobalNamespace::DroneGUI_KeyData>& __cordl_internal_get__movementKeysE() ;

constexpr ::ArrayW<::GlobalNamespace::DroneGUI_KeyData> const& __cordl_internal_get__movementKeysQ() const;

constexpr ::ArrayW<::GlobalNamespace::DroneGUI_KeyData>& __cordl_internal_get__movementKeysQ() ;

constexpr ::ArrayW<::GlobalNamespace::DroneGUI_KeyData> const& __cordl_internal_get__movementKeysS() const;

constexpr ::ArrayW<::GlobalNamespace::DroneGUI_KeyData>& __cordl_internal_get__movementKeysS() ;

constexpr ::ArrayW<::GlobalNamespace::DroneGUI_KeyData> const& __cordl_internal_get__movementKeysW() const;

constexpr ::ArrayW<::GlobalNamespace::DroneGUI_KeyData>& __cordl_internal_get__movementKeysW() ;

constexpr ::UnityEngine::GUIStyle* const& __cordl_internal_get__recordButtonStyle() const;

constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get__recordButtonStyle() ;

constexpr ::ArrayW<::GlobalNamespace::DroneGUI_KeyData> const& __cordl_internal_get__rotationKeysDown() const;

constexpr ::ArrayW<::GlobalNamespace::DroneGUI_KeyData>& __cordl_internal_get__rotationKeysDown() ;

constexpr ::ArrayW<::GlobalNamespace::DroneGUI_KeyData> const& __cordl_internal_get__rotationKeysLeft() const;

constexpr ::ArrayW<::GlobalNamespace::DroneGUI_KeyData>& __cordl_internal_get__rotationKeysLeft() ;

constexpr ::ArrayW<::GlobalNamespace::DroneGUI_KeyData> const& __cordl_internal_get__rotationKeysRight() const;

constexpr ::ArrayW<::GlobalNamespace::DroneGUI_KeyData>& __cordl_internal_get__rotationKeysRight() ;

constexpr ::ArrayW<::GlobalNamespace::DroneGUI_KeyData> const& __cordl_internal_get__rotationKeysUp() const;

constexpr ::ArrayW<::GlobalNamespace::DroneGUI_KeyData>& __cordl_internal_get__rotationKeysUp() ;

constexpr ::UnityEngine::GUIStyle* const& __cordl_internal_get__secondaryButtonStyle() const;

constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get__secondaryButtonStyle() ;

constexpr ::UnityEngine::GUIStyle* const& __cordl_internal_get__stepperSubButtonStyle() const;

constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get__stepperSubButtonStyle() ;

constexpr void __cordl_internal_set__activateDeactivateButtonStyle(::UnityEngine::GUIStyle*  value) ;

constexpr void __cordl_internal_set__currentUIMode(::GlobalNamespace::DroneGUI_UIMode  value) ;

constexpr void __cordl_internal_set__guiSkin(::UnityW<::UnityEngine::GUISkin>  value) ;

constexpr void __cordl_internal_set__infoButtonStyle(::UnityEngine::GUIStyle*  value) ;

constexpr void __cordl_internal_set__isDroneModeActive(bool  value) ;

constexpr void __cordl_internal_set__keyStyleActive(::UnityEngine::GUIStyle*  value) ;

constexpr void __cordl_internal_set__keyStyleNormal(::UnityEngine::GUIStyle*  value) ;

constexpr void __cordl_internal_set__keyStyleSpace(::UnityEngine::GUIStyle*  value) ;

constexpr void __cordl_internal_set__labelAlignLeft(::UnityEngine::GUIStyle*  value) ;

constexpr void __cordl_internal_set__labelAlignRight(::UnityEngine::GUIStyle*  value) ;

constexpr void __cordl_internal_set__model(::Liv::Lck::GorillaTag::DroneDataModel*  value) ;

constexpr void __cordl_internal_set__movementKeysA(::ArrayW<::GlobalNamespace::DroneGUI_KeyData>  value) ;

constexpr void __cordl_internal_set__movementKeysD(::ArrayW<::GlobalNamespace::DroneGUI_KeyData>  value) ;

constexpr void __cordl_internal_set__movementKeysE(::ArrayW<::GlobalNamespace::DroneGUI_KeyData>  value) ;

constexpr void __cordl_internal_set__movementKeysQ(::ArrayW<::GlobalNamespace::DroneGUI_KeyData>  value) ;

constexpr void __cordl_internal_set__movementKeysS(::ArrayW<::GlobalNamespace::DroneGUI_KeyData>  value) ;

constexpr void __cordl_internal_set__movementKeysW(::ArrayW<::GlobalNamespace::DroneGUI_KeyData>  value) ;

constexpr void __cordl_internal_set__recordButtonStyle(::UnityEngine::GUIStyle*  value) ;

constexpr void __cordl_internal_set__rotationKeysDown(::ArrayW<::GlobalNamespace::DroneGUI_KeyData>  value) ;

constexpr void __cordl_internal_set__rotationKeysLeft(::ArrayW<::GlobalNamespace::DroneGUI_KeyData>  value) ;

constexpr void __cordl_internal_set__rotationKeysRight(::ArrayW<::GlobalNamespace::DroneGUI_KeyData>  value) ;

constexpr void __cordl_internal_set__rotationKeysUp(::ArrayW<::GlobalNamespace::DroneGUI_KeyData>  value) ;

constexpr void __cordl_internal_set__secondaryButtonStyle(::UnityEngine::GUIStyle*  value) ;

constexpr void __cordl_internal_set__stepperSubButtonStyle(::UnityEngine::GUIStyle*  value) ;

/// @brief Method .ctor, addr 0x9d165ac, size 0xe9c, virtual false, abstract: false, final false
inline void _ctor(::Liv::Lck::GorillaTag::DroneDataModel*  model, ::UnityEngine::GUISkin*  skin) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DroneGUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DroneGUI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DroneGUI(DroneGUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DroneGUI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DroneGUI(DroneGUI const& ) = delete;

/// @brief Field BUTTON_HEIGHT offset 0xffffffff size 0x4
static constexpr int32_t  BUTTON_HEIGHT{static_cast<int32_t>(0x28)};

/// @brief Field HELP_WEBSITE offset 0xffffffff size 0x8
static constexpr ::ConstString  HELP_WEBSITE{u"https://gorillatag.fandom.com/wiki/LIV_Camera"};

/// @brief Field KEYS_GROUP_SECONDARY_OFFSET offset 0xffffffff size 0x4
static constexpr int32_t  KEYS_GROUP_SECONDARY_OFFSET{static_cast<int32_t>(0xbc)};

/// @brief Field PADDING_TOP offset 0xffffffff size 0x4
static constexpr int32_t  PADDING_TOP{static_cast<int32_t>(0x8)};

/// @brief Field PANEL_HEIGHT offset 0xffffffff size 0x4
static constexpr int32_t  PANEL_HEIGHT{static_cast<int32_t>(0x438)};

/// @brief Field PANEL_WIDTH offset 0xffffffff size 0x4
static constexpr int32_t  PANEL_WIDTH{static_cast<int32_t>(0x170)};

/// @brief Field PRIMARY_OFFSET offset 0xffffffff size 0x4
static constexpr int32_t  PRIMARY_OFFSET{static_cast<int32_t>(0x18)};

/// @brief Field STEPPER_SUBBUTTON_WIDTH offset 0xffffffff size 0x4
static constexpr int32_t  STEPPER_SUBBUTTON_WIDTH{static_cast<int32_t>(0x9c)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29605};

/// @brief Field _guiSkin, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GUISkin>  ____guiSkin;

/// @brief Field _model, offset: 0x18, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneDataModel*  ____model;

/// @brief Field _isDroneModeActive, offset: 0x20, size: 0x1, def value: None
 bool  ____isDroneModeActive;

/// @brief Field _labelAlignRight, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::GUIStyle*  ____labelAlignRight;

/// @brief Field _labelAlignLeft, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::GUIStyle*  ____labelAlignLeft;

/// @brief Field _stepperSubButtonStyle, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::GUIStyle*  ____stepperSubButtonStyle;

/// @brief Field _activateDeactivateButtonStyle, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::GUIStyle*  ____activateDeactivateButtonStyle;

/// @brief Field _recordButtonStyle, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::GUIStyle*  ____recordButtonStyle;

/// @brief Field _infoButtonStyle, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::GUIStyle*  ____infoButtonStyle;

/// @brief Field _secondaryButtonStyle, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::GUIStyle*  ____secondaryButtonStyle;

/// @brief Field _keyStyleNormal, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::GUIStyle*  ____keyStyleNormal;

/// @brief Field _keyStyleActive, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::GUIStyle*  ____keyStyleActive;

/// @brief Field _keyStyleSpace, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::GUIStyle*  ____keyStyleSpace;

/// @brief Field _movementKeysW, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::DroneGUI_KeyData>  ____movementKeysW;

/// @brief Field _movementKeysS, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::DroneGUI_KeyData>  ____movementKeysS;

/// @brief Field _movementKeysA, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::DroneGUI_KeyData>  ____movementKeysA;

/// @brief Field _movementKeysD, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::DroneGUI_KeyData>  ____movementKeysD;

/// @brief Field _movementKeysQ, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::DroneGUI_KeyData>  ____movementKeysQ;

/// @brief Field _movementKeysE, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::DroneGUI_KeyData>  ____movementKeysE;

/// @brief Field _rotationKeysUp, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::DroneGUI_KeyData>  ____rotationKeysUp;

/// @brief Field _rotationKeysDown, offset: 0xb0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::DroneGUI_KeyData>  ____rotationKeysDown;

/// @brief Field _rotationKeysLeft, offset: 0xb8, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::DroneGUI_KeyData>  ____rotationKeysLeft;

/// @brief Field _rotationKeysRight, offset: 0xc0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::DroneGUI_KeyData>  ____rotationKeysRight;

/// @brief Field _currentUIMode, offset: 0xc8, size: 0x4, def value: None
 ::GlobalNamespace::DroneGUI_UIMode  ____currentUIMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::DroneGUI, ____guiSkin) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneGUI, ____model) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneGUI, ____isDroneModeActive) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneGUI, ____labelAlignRight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneGUI, ____labelAlignLeft) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneGUI, ____stepperSubButtonStyle) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneGUI, ____activateDeactivateButtonStyle) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneGUI, ____recordButtonStyle) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneGUI, ____infoButtonStyle) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneGUI, ____secondaryButtonStyle) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneGUI, ____keyStyleNormal) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneGUI, ____keyStyleActive) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneGUI, ____keyStyleSpace) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneGUI, ____movementKeysW) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneGUI, ____movementKeysS) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneGUI, ____movementKeysA) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneGUI, ____movementKeysD) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneGUI, ____movementKeysQ) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneGUI, ____movementKeysE) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneGUI, ____rotationKeysUp) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneGUI, ____rotationKeysDown) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneGUI, ____rotationKeysLeft) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneGUI, ____rotationKeysRight) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneGUI, ____currentUIMode) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::DroneGUI) == 0xd0, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
