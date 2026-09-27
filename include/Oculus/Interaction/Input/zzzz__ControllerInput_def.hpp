#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/ControllerInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__ControllerButtonUsage_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ControllerInput)
namespace Oculus::Interaction::Input {
struct ControllerAxis1DUsage;
}
namespace Oculus::Interaction::Input {
struct ControllerAxis2DUsage;
}
namespace Oculus::Interaction::Input {
struct ControllerButtonUsage;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
struct ControllerInput;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::Input::ControllerInput);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::ControllerInput, "Oculus.Interaction.Input", "ControllerInput");
// Dependencies Oculus.Interaction.Input.ControllerButtonUsage, UnityEngine.Vector2
namespace Oculus::Interaction::Input {
// Is value type: true
// CS Name: Oculus.Interaction.Input.ControllerInput
struct CORDL_TYPE ControllerInput {
public:
// Declarations
 __declspec(property(get=get_ButtonUsageMask, put=set_ButtonUsageMask)) ::Oculus::Interaction::Input::ControllerButtonUsage  ButtonUsageMask;

 __declspec(property(get=get_Grip, put=set_Grip)) float_t  Grip;

 __declspec(property(get=get_GripButton)) bool  GripButton;

 __declspec(property(get=get_MenuButton)) bool  MenuButton;

 __declspec(property(get=get_Primary2DAxis, put=set_Primary2DAxis)) ::UnityEngine::Vector2  Primary2DAxis;

 __declspec(property(get=get_Primary2DAxisClick)) bool  Primary2DAxisClick;

 __declspec(property(get=get_Primary2DAxisTouch)) bool  Primary2DAxisTouch;

 __declspec(property(get=get_PrimaryButton)) bool  PrimaryButton;

 __declspec(property(get=get_PrimaryTouch)) bool  PrimaryTouch;

 __declspec(property(get=get_Secondary2DAxis, put=set_Secondary2DAxis)) ::UnityEngine::Vector2  Secondary2DAxis;

 __declspec(property(get=get_SecondaryButton)) bool  SecondaryButton;

 __declspec(property(get=get_SecondaryTouch)) bool  SecondaryTouch;

 __declspec(property(get=get_Thumbrest)) bool  Thumbrest;

 __declspec(property(get=get_Trigger, put=set_Trigger)) float_t  Trigger;

 __declspec(property(get=get_TriggerButton)) bool  TriggerButton;

/// @brief Method Clear, addr 0xa50598c, size 0x64, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method SetAxis1D, addr 0xa505a0c, size 0x24, virtual false, abstract: false, final false
inline void SetAxis1D(::Oculus::Interaction::Input::ControllerAxis1DUsage  usage, float_t  value) ;

/// @brief Method SetAxis2D, addr 0xa505a30, size 0x20, virtual false, abstract: false, final false
inline void SetAxis2D(::Oculus::Interaction::Input::ControllerAxis2DUsage  usage, ::UnityEngine::Vector2  value) ;

/// @brief Method SetButton, addr 0xa5059f0, size 0x1c, virtual false, abstract: false, final false
inline void SetButton(::Oculus::Interaction::Input::ControllerButtonUsage  usage, bool  value) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_ButtonUsageMask, addr 0xa5058dc, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::ControllerButtonUsage get_ButtonUsageMask() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Grip, addr 0xa50595c, size 0x8, virtual false, abstract: false, final false
inline float_t get_Grip() ;

/// @brief Method get_GripButton, addr 0xa4fbd08, size 0xc, virtual false, abstract: false, final false
inline bool get_GripButton() ;

/// @brief Method get_MenuButton, addr 0xa50591c, size 0xc, virtual false, abstract: false, final false
inline bool get_MenuButton() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Primary2DAxis, addr 0xa50596c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_Primary2DAxis() ;

/// @brief Method get_Primary2DAxisClick, addr 0xa505928, size 0xc, virtual false, abstract: false, final false
inline bool get_Primary2DAxisClick() ;

/// @brief Method get_Primary2DAxisTouch, addr 0xa505934, size 0xc, virtual false, abstract: false, final false
inline bool get_Primary2DAxisTouch() ;

/// @brief Method get_PrimaryButton, addr 0xa5058ec, size 0xc, virtual false, abstract: false, final false
inline bool get_PrimaryButton() ;

/// @brief Method get_PrimaryTouch, addr 0xa5058f8, size 0xc, virtual false, abstract: false, final false
inline bool get_PrimaryTouch() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Secondary2DAxis, addr 0xa50597c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_Secondary2DAxis() ;

/// @brief Method get_SecondaryButton, addr 0xa505904, size 0xc, virtual false, abstract: false, final false
inline bool get_SecondaryButton() ;

/// @brief Method get_SecondaryTouch, addr 0xa505910, size 0xc, virtual false, abstract: false, final false
inline bool get_SecondaryTouch() ;

/// @brief Method get_Thumbrest, addr 0xa505940, size 0xc, virtual false, abstract: false, final false
inline bool get_Thumbrest() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Trigger, addr 0xa50594c, size 0x8, virtual false, abstract: false, final false
inline float_t get_Trigger() ;

/// @brief Method get_TriggerButton, addr 0xa4fbcfc, size 0xc, virtual false, abstract: false, final false
inline bool get_TriggerButton() ;

/// [CompilerGenerated]
/// @brief Method set_ButtonUsageMask, addr 0xa5058e4, size 0x8, virtual false, abstract: false, final false
inline void set_ButtonUsageMask(::Oculus::Interaction::Input::ControllerButtonUsage  value) ;

/// [CompilerGenerated]
/// @brief Method set_Grip, addr 0xa505964, size 0x8, virtual false, abstract: false, final false
inline void set_Grip(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Primary2DAxis, addr 0xa505974, size 0x8, virtual false, abstract: false, final false
inline void set_Primary2DAxis(::UnityEngine::Vector2  value) ;

/// [CompilerGenerated]
/// @brief Method set_Secondary2DAxis, addr 0xa505984, size 0x8, virtual false, abstract: false, final false
inline void set_Secondary2DAxis(::UnityEngine::Vector2  value) ;

/// [CompilerGenerated]
/// @brief Method set_Trigger, addr 0xa505954, size 0x8, virtual false, abstract: false, final false
inline void set_Trigger(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ControllerInput() ;

// Ctor Parameters [CppParam { name: "_ButtonUsageMask_k__BackingField", ty: "::Oculus::Interaction::Input::ControllerButtonUsage", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Trigger_k__BackingField", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Grip_k__BackingField", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Primary2DAxis_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Secondary2DAxis_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }]
constexpr ControllerInput(::Oculus::Interaction::Input::ControllerButtonUsage  _ButtonUsageMask_k__BackingField, float_t  _Trigger_k__BackingField, float_t  _Grip_k__BackingField, ::UnityEngine::Vector2  _Primary2DAxis_k__BackingField, ::UnityEngine::Vector2  _Secondary2DAxis_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16459};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// [CompilerGenerated]
/// @brief Field <ButtonUsageMask>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::Oculus::Interaction::Input::ControllerButtonUsage  _ButtonUsageMask_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Trigger>k__BackingField, offset: 0x4, size: 0x4, def value: None
 float_t  _Trigger_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Grip>k__BackingField, offset: 0x8, size: 0x4, def value: None
 float_t  _Grip_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Primary2DAxis>k__BackingField, offset: 0xc, size: 0x8, def value: None
 ::UnityEngine::Vector2  _Primary2DAxis_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Secondary2DAxis>k__BackingField, offset: 0x14, size: 0x8, def value: None
 ::UnityEngine::Vector2  _Secondary2DAxis_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::ControllerInput, _ButtonUsageMask_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerInput, _Trigger_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerInput, _Grip_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerInput, _Primary2DAxis_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerInput, _Secondary2DAxis_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::ControllerInput) == 0x1c, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
