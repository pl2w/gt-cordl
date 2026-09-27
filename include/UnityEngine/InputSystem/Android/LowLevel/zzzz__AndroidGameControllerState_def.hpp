#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/LowLevel/AndroidGameControllerState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidGameControllerState__axis_e__FixedBuffer_def.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidGameControllerState__buttons_e__FixedBuffer_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidGameControllerState)
namespace GlobalNamespace {
struct AndroidGameControllerState__axis_e__FixedBuffer;
}
namespace GlobalNamespace {
struct AndroidGameControllerState__buttons_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidAxis;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
class AndroidGameControllerState_Variants;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidKeyCode;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Android::LowLevel {
class AndroidGameControllerState_Variants;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidGameControllerState;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState_Variants*);
MARK_VAL_T(::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState_Variants*, "UnityEngine.InputSystem.Android.LowLevel", "AndroidGameControllerState/Variants");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState, "UnityEngine.InputSystem.Android.LowLevel", "AndroidGameControllerState");
// Dependencies UnityEngine.InputSystem.Android.LowLevel.AndroidGameControllerState::<axis>e__FixedBuffer, UnityEngine.InputSystem.Android.LowLevel.AndroidGameControllerState::<buttons>e__FixedBuffer, UnityEngine.InputSystem.Utilities.FourCC
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Android.LowLevel.AndroidGameControllerState
struct CORDL_TYPE AndroidGameControllerState {
public:
// Declarations
using _axis_e__FixedBuffer = ::GlobalNamespace::AndroidGameControllerState__axis_e__FixedBuffer;

using _buttons_e__FixedBuffer = ::GlobalNamespace::AndroidGameControllerState__buttons_e__FixedBuffer;

using Variants = ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState_Variants;

 __declspec(property(get=get_format)) ::UnityEngine::InputSystem::Utilities::FourCC  format;

/// @brief Field kFormat, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_kFormat, put=setStaticF_kFormat)) ::UnityEngine::InputSystem::Utilities::FourCC  kFormat;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*() ;

/// @brief Method WithAxis, addr 0xafebc48, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState WithAxis(::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis  axis, float_t  value) ;

/// @brief Method WithButton, addr 0xafebc04, size 0x44, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState WithButton(::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode  code, bool  value) ;

static inline ::UnityEngine::InputSystem::Utilities::FourCC getStaticF_kFormat() ;

/// @brief Method get_format, addr 0xafebbac, size 0x58, virtual true, abstract: false, final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_format() ;

/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo* i___UnityEngine__InputSystem__LowLevel__IInputStateTypeInfo() ;

static inline void setStaticF_kFormat(::UnityEngine::InputSystem::Utilities::FourCC  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AndroidGameControllerState() ;

// Ctor Parameters [CppParam { name: "buttons", ty: "::GlobalNamespace::AndroidGameControllerState__buttons_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "axis", ty: "::GlobalNamespace::AndroidGameControllerState__axis_e__FixedBuffer", modifiers: "", def_value: None, comment: None }]
constexpr AndroidGameControllerState(::GlobalNamespace::AndroidGameControllerState__buttons_e__FixedBuffer  buttons, ::GlobalNamespace::AndroidGameControllerState__axis_e__FixedBuffer  axis) noexcept;

/// @brief Field MaxAxes offset 0xffffffff size 0x4
static constexpr int32_t  MaxAxes{static_cast<int32_t>(0x30)};

/// @brief Field MaxButtons offset 0xffffffff size 0x4
static constexpr int32_t  MaxButtons{static_cast<int32_t>(0xdc)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13673};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xdc};

/// @brief Field kAxisOffset offset 0xffffffff size 0x4
static constexpr uint32_t  kAxisOffset{static_cast<uint32_t>(0x1cu)};

/// [FixedBuffer(typeof(System.UInt32), 7)]
/// [InputControl(name = "dpad", layout = "Dpad", bit = 19, sizeInBits = 4, variants = "DpadButtons")]
/// [InputControl(name = "dpad/up", bit = 19, variants = "DpadButtons")]
/// [InputControl(name = "dpad/down", bit = 20, variants = "DpadButtons")]
/// [InputControl(name = "dpad/left", bit = 21, variants = "DpadButtons")]
/// [InputControl(name = "dpad/right", bit = 22, variants = "DpadButtons")]
/// [InputControl(name = "buttonSouth", bit = 96, variants = "Gamepad")]
/// [InputControl(name = "buttonWest", bit = 99, variants = "Gamepad")]
/// [InputControl(name = "buttonNorth", bit = 100, variants = "Gamepad")]
/// [InputControl(name = "buttonEast", bit = 97, variants = "Gamepad")]
/// [InputControl(name = "leftStickPress", bit = 106, variants = "Gamepad")]
/// [InputControl(name = "rightStickPress", bit = 107, variants = "Gamepad")]
/// [InputControl(name = "leftShoulder", bit = 102, variants = "Gamepad")]
/// [InputControl(name = "rightShoulder", bit = 103, variants = "Gamepad")]
/// [InputControl(name = "start", bit = 108, variants = "Gamepad")]
/// [InputControl(name = "select", bit = 109, variants = "Gamepad")]
/// @brief Field buttons, offset: 0x0, size: 0x1c, def value: None
 ::GlobalNamespace::AndroidGameControllerState__buttons_e__FixedBuffer  buttons;

/// [FixedBuffer(typeof(System.Single), 48)]
/// [InputControl(name = "dpad", layout = "Dpad", offset = 88, format = "VEC2", sizeInBits = 64, variants = "DpadAxes")]
/// [InputControl(name = "dpad/right", offset = 0, bit = 0, sizeInBits = 32, format = "FLT", parameters = "clamp=3,clampConstant=0,clampMin=0,clampMax=1", variants = "DpadAxes")]
/// [InputControl(name = "dpad/left", offset = 0, bit = 0, sizeInBits = 32, format = "FLT", parameters = "clamp=3,clampConstant=0,clampMin=-1,clampMax=0,invert", variants = "DpadAxes")]
/// [InputControl(name = "dpad/down", offset = 4, bit = 0, sizeInBits = 32, format = "FLT", parameters = "clamp=3,clampConstant=0,clampMin=0,clampMax=1", variants = "DpadAxes")]
/// [InputControl(name = "dpad/up", offset = 4, bit = 0, sizeInBits = 32, format = "FLT", parameters = "clamp=3,clampConstant=0,clampMin=-1,clampMax=0,invert", variants = "DpadAxes")]
/// [InputControl(name = "leftTrigger", offset = 120, parameters = "clamp=1,clampMin=0,clampMax=1.0", variants = "Gamepad")]
/// [InputControl(name = "rightTrigger", offset = 116, parameters = "clamp=1,clampMin=0,clampMax=1.0", variants = "Gamepad")]
/// [InputControl(name = "leftStick", variants = "Gamepad")]
/// [InputControl(name = "leftStick/y", variants = "Gamepad", parameters = "invert")]
/// [InputControl(name = "leftStick/up", variants = "Gamepad", parameters = "invert,clamp=1,clampMin=-1.0,clampMax=0.0")]
/// [InputControl(name = "leftStick/down", variants = "Gamepad", parameters = "invert=false,clamp=1,clampMin=0,clampMax=1.0")]
/// [InputControl(name = "rightStick", offset = 72, sizeInBits = 128, variants = "Gamepad")]
/// [InputControl(name = "rightStick/x", variants = "Gamepad")]
/// [InputControl(name = "rightStick/y", offset = 12, variants = "Gamepad", parameters = "invert")]
/// [InputControl(name = "rightStick/up", offset = 12, variants = "Gamepad", parameters = "invert,clamp=1,clampMin=-1.0,clampMax=0.0")]
/// [InputControl(name = "rightStick/down", offset = 12, variants = "Gamepad", parameters = "invert=false,clamp=1,clampMin=0,clampMax=1.0")]
/// @brief Field axis, offset: 0x1c, size: 0xc0, def value: None
 ::GlobalNamespace::AndroidGameControllerState__axis_e__FixedBuffer  axis;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState, buttons) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState, axis) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState) == 0xdc, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Android::LowLevel
// Dependencies System.Object
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Android.LowLevel.AndroidGameControllerState/Variants
class CORDL_TYPE AndroidGameControllerState_Variants : public ::System::Object {
public:
// Declarations
static inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState_Variants* New_ctor() ;

/// @brief Method .ctor, addr 0xafebcd0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidGameControllerState_Variants() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidGameControllerState_Variants", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidGameControllerState_Variants(AndroidGameControllerState_Variants && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidGameControllerState_Variants", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidGameControllerState_Variants(AndroidGameControllerState_Variants const& ) = delete;

/// @brief Field DPadAxes offset 0xffffffff size 0x8
static constexpr ::ConstString  DPadAxes{u"DpadAxes"};

/// @brief Field DPadButtons offset 0xffffffff size 0x8
static constexpr ::ConstString  DPadButtons{u"DpadButtons"};

/// @brief Field Gamepad offset 0xffffffff size 0x8
static constexpr ::ConstString  Gamepad{u"Gamepad"};

/// @brief Field Joystick offset 0xffffffff size 0x8
static constexpr ::ConstString  Joystick{u"Joystick"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13670};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState_Variants) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Android::LowLevel
