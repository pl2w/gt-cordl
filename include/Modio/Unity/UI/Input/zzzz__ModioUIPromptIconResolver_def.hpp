#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Input/ModioUIPromptIconResolver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ModioUIPromptIconResolver)
namespace Modio::Unity::UI::Input {
class ModioUIPromptIconResolver_KeyboardMapping;
}
namespace Modio::Unity::UI::Input {
class ModioUIPromptIconResolver_PlatformSprites;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine {
struct RuntimePlatform;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace Modio::Unity::UI::Input {
class ModioUIPromptIconResolver;
}
namespace Modio::Unity::UI::Input {
class ModioUIPromptIconResolver_KeyboardMapping;
}
namespace Modio::Unity::UI::Input {
class ModioUIPromptIconResolver_PlatformSprites;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Input::ModioUIPromptIconResolver*);
MARK_REF_T(::Modio::Unity::UI::Input::ModioUIPromptIconResolver_KeyboardMapping*);
MARK_REF_T(::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Input::ModioUIPromptIconResolver*, "Modio.Unity.UI.Input", "ModioUIPromptIconResolver");
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Input::ModioUIPromptIconResolver_KeyboardMapping*, "Modio.Unity.UI.Input", "ModioUIPromptIconResolver/KeyboardMapping");
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites*, "Modio.Unity.UI.Input", "ModioUIPromptIconResolver/PlatformSprites");
// Dependencies Modio.Unity.UI.Input.ModioUIPromptIconResolver::KeyboardMapping, Modio.Unity.UI.Input.ModioUIPromptIconResolver::PlatformSprites, UnityEngine.MonoBehaviour
namespace Modio::Unity::UI::Input {
// Is value type: false
// CS Name: Modio.Unity.UI.Input.ModioUIPromptIconResolver
class CORDL_TYPE ModioUIPromptIconResolver : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using KeyboardMapping = ::Modio::Unity::UI::Input::ModioUIPromptIconResolver_KeyboardMapping;

using PlatformSprites = ::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites;

/// @brief Field _keyboardMappings, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__keyboardMappings, put=__cordl_internal_set__keyboardMappings)) ::ArrayW<::Modio::Unity::UI::Input::ModioUIPromptIconResolver_KeyboardMapping*>  _keyboardMappings;

/// @brief Field _platforms, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__platforms, put=__cordl_internal_set__platforms)) ::ArrayW<::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites*>  _platforms;

static inline ::Modio::Unity::UI::Input::ModioUIPromptIconResolver* New_ctor() ;

/// @brief Method ResolveIcon, addr 0x9fb6230, size 0xd4, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Sprite> ResolveIcon(::StringW  controlPath, ::UnityEngine::RuntimePlatform  forControllerType) ;

/// @brief Method TryGetKeyboardIcon, addr 0x9fb6164, size 0xcc, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<::UnityW<::UnityEngine::Sprite>,::StringW> TryGetKeyboardIcon(::StringW  controlPath) ;

constexpr ::ArrayW<::Modio::Unity::UI::Input::ModioUIPromptIconResolver_KeyboardMapping*> const& __cordl_internal_get__keyboardMappings() const;

constexpr ::ArrayW<::Modio::Unity::UI::Input::ModioUIPromptIconResolver_KeyboardMapping*>& __cordl_internal_get__keyboardMappings() ;

constexpr ::ArrayW<::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites*> const& __cordl_internal_get__platforms() const;

constexpr ::ArrayW<::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites*>& __cordl_internal_get__platforms() ;

constexpr void __cordl_internal_set__keyboardMappings(::ArrayW<::Modio::Unity::UI::Input::ModioUIPromptIconResolver_KeyboardMapping*>  value) ;

constexpr void __cordl_internal_set__platforms(::ArrayW<::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites*>  value) ;

/// @brief Method .ctor, addr 0x9fb6900, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUIPromptIconResolver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUIPromptIconResolver", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUIPromptIconResolver(ModioUIPromptIconResolver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUIPromptIconResolver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUIPromptIconResolver(ModioUIPromptIconResolver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27131};

/// [SerializeField]
/// @brief Field _platforms, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites*>  ____platforms;

/// [SerializeField]
/// @brief Field _keyboardMappings, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::Modio::Unity::UI::Input::ModioUIPromptIconResolver_KeyboardMapping*>  ____keyboardMappings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIPromptIconResolver, ____platforms) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIPromptIconResolver, ____keyboardMappings) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Input::ModioUIPromptIconResolver) == 0x30, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Input
// Dependencies System.Object
namespace Modio::Unity::UI::Input {
// Is value type: false
// CS Name: Modio.Unity.UI.Input.ModioUIPromptIconResolver/PlatformSprites
class CORDL_TYPE ModioUIPromptIconResolver_PlatformSprites : public ::System::Object {
public:
// Declarations
/// @brief Field buttonEast, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonEast, put=__cordl_internal_set_buttonEast)) ::UnityW<::UnityEngine::Sprite>  buttonEast;

/// @brief Field buttonNorth, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonNorth, put=__cordl_internal_set_buttonNorth)) ::UnityW<::UnityEngine::Sprite>  buttonNorth;

/// @brief Field buttonSouth, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonSouth, put=__cordl_internal_set_buttonSouth)) ::UnityW<::UnityEngine::Sprite>  buttonSouth;

/// @brief Field buttonWest, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonWest, put=__cordl_internal_set_buttonWest)) ::UnityW<::UnityEngine::Sprite>  buttonWest;

/// @brief Field dpad, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_dpad, put=__cordl_internal_set_dpad)) ::UnityW<::UnityEngine::Sprite>  dpad;

/// @brief Field dpadDown, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_dpadDown, put=__cordl_internal_set_dpadDown)) ::UnityW<::UnityEngine::Sprite>  dpadDown;

/// @brief Field dpadLeft, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_dpadLeft, put=__cordl_internal_set_dpadLeft)) ::UnityW<::UnityEngine::Sprite>  dpadLeft;

/// @brief Field dpadRight, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_dpadRight, put=__cordl_internal_set_dpadRight)) ::UnityW<::UnityEngine::Sprite>  dpadRight;

/// @brief Field dpadUp, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_dpadUp, put=__cordl_internal_set_dpadUp)) ::UnityW<::UnityEngine::Sprite>  dpadUp;

/// @brief Field forControllerTypes, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_forControllerTypes, put=__cordl_internal_set_forControllerTypes)) ::System::Collections::Generic::List_1<::UnityEngine::RuntimePlatform>*  forControllerTypes;

/// @brief Field leftShoulder, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftShoulder, put=__cordl_internal_set_leftShoulder)) ::UnityW<::UnityEngine::Sprite>  leftShoulder;

/// @brief Field leftStick, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftStick, put=__cordl_internal_set_leftStick)) ::UnityW<::UnityEngine::Sprite>  leftStick;

/// @brief Field leftStickPress, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftStickPress, put=__cordl_internal_set_leftStickPress)) ::UnityW<::UnityEngine::Sprite>  leftStickPress;

/// @brief Field leftTrigger, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftTrigger, put=__cordl_internal_set_leftTrigger)) ::UnityW<::UnityEngine::Sprite>  leftTrigger;

/// @brief Field rightShoulder, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightShoulder, put=__cordl_internal_set_rightShoulder)) ::UnityW<::UnityEngine::Sprite>  rightShoulder;

/// @brief Field rightStick, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightStick, put=__cordl_internal_set_rightStick)) ::UnityW<::UnityEngine::Sprite>  rightStick;

/// @brief Field rightStickPress, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightStickPress, put=__cordl_internal_set_rightStickPress)) ::UnityW<::UnityEngine::Sprite>  rightStickPress;

/// @brief Field rightTrigger, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightTrigger, put=__cordl_internal_set_rightTrigger)) ::UnityW<::UnityEngine::Sprite>  rightTrigger;

/// @brief Field selectButton, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectButton, put=__cordl_internal_set_selectButton)) ::UnityW<::UnityEngine::Sprite>  selectButton;

/// @brief Field startButton, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_startButton, put=__cordl_internal_set_startButton)) ::UnityW<::UnityEngine::Sprite>  startButton;

/// @brief Method GetSprite, addr 0x9fb6304, size 0x5fc, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Sprite> GetSprite(::StringW  controlPath) ;

static inline ::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_buttonEast() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_buttonEast() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_buttonNorth() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_buttonNorth() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_buttonSouth() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_buttonSouth() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_buttonWest() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_buttonWest() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_dpad() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_dpad() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_dpadDown() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_dpadDown() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_dpadLeft() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_dpadLeft() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_dpadRight() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_dpadRight() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_dpadUp() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_dpadUp() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::RuntimePlatform>* const& __cordl_internal_get_forControllerTypes() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::RuntimePlatform>*& __cordl_internal_get_forControllerTypes() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_leftShoulder() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_leftShoulder() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_leftStick() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_leftStick() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_leftStickPress() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_leftStickPress() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_leftTrigger() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_leftTrigger() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_rightShoulder() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_rightShoulder() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_rightStick() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_rightStick() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_rightStickPress() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_rightStickPress() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_rightTrigger() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_rightTrigger() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_selectButton() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_selectButton() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_startButton() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_startButton() ;

constexpr void __cordl_internal_set_buttonEast(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_buttonNorth(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_buttonSouth(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_buttonWest(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_dpad(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_dpadDown(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_dpadLeft(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_dpadRight(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_dpadUp(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_forControllerTypes(::System::Collections::Generic::List_1<::UnityEngine::RuntimePlatform>*  value) ;

constexpr void __cordl_internal_set_leftShoulder(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_leftStick(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_leftStickPress(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_leftTrigger(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_rightShoulder(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_rightStick(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_rightStickPress(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_rightTrigger(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_selectButton(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_startButton(::UnityW<::UnityEngine::Sprite>  value) ;

/// @brief Method .ctor, addr 0x9fb698c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUIPromptIconResolver_PlatformSprites() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUIPromptIconResolver_PlatformSprites", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUIPromptIconResolver_PlatformSprites(ModioUIPromptIconResolver_PlatformSprites && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUIPromptIconResolver_PlatformSprites", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUIPromptIconResolver_PlatformSprites(ModioUIPromptIconResolver_PlatformSprites const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27130};

/// [SerializeField]
/// @brief Field forControllerTypes, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::RuntimePlatform>*  ___forControllerTypes;

/// @brief Field buttonSouth, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___buttonSouth;

/// @brief Field buttonNorth, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___buttonNorth;

/// @brief Field buttonEast, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___buttonEast;

/// @brief Field buttonWest, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___buttonWest;

/// @brief Field startButton, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___startButton;

/// @brief Field selectButton, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___selectButton;

/// @brief Field leftTrigger, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___leftTrigger;

/// @brief Field rightTrigger, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___rightTrigger;

/// @brief Field leftShoulder, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___leftShoulder;

/// @brief Field rightShoulder, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___rightShoulder;

/// @brief Field dpad, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___dpad;

/// @brief Field dpadUp, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___dpadUp;

/// @brief Field dpadDown, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___dpadDown;

/// @brief Field dpadLeft, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___dpadLeft;

/// @brief Field dpadRight, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___dpadRight;

/// @brief Field leftStick, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___leftStick;

/// @brief Field rightStick, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___rightStick;

/// @brief Field leftStickPress, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___leftStickPress;

/// @brief Field rightStickPress, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___rightStickPress;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites, ___forControllerTypes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites, ___buttonSouth) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites, ___buttonNorth) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites, ___buttonEast) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites, ___buttonWest) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites, ___startButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites, ___selectButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites, ___leftTrigger) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites, ___rightTrigger) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites, ___leftShoulder) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites, ___rightShoulder) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites, ___dpad) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites, ___dpadUp) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites, ___dpadDown) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites, ___dpadLeft) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites, ___dpadRight) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites, ___leftStick) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites, ___rightStick) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites, ___leftStickPress) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites, ___rightStickPress) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites) == 0xb0, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Input
// Dependencies System.Object
namespace Modio::Unity::UI::Input {
// Is value type: false
// CS Name: Modio.Unity.UI.Input.ModioUIPromptIconResolver/KeyboardMapping
class CORDL_TYPE ModioUIPromptIconResolver_KeyboardMapping : public ::System::Object {
public:
// Declarations
/// @brief Field controlPath, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_controlPath, put=__cordl_internal_set_controlPath)) ::StringW  controlPath;

/// @brief Field displayAsText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayAsText, put=__cordl_internal_set_displayAsText)) ::StringW  displayAsText;

/// @brief Field icon, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_icon, put=__cordl_internal_set_icon)) ::UnityW<::UnityEngine::Sprite>  icon;

static inline ::Modio::Unity::UI::Input::ModioUIPromptIconResolver_KeyboardMapping* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_controlPath() const;

constexpr ::StringW& __cordl_internal_get_controlPath() ;

constexpr ::StringW const& __cordl_internal_get_displayAsText() const;

constexpr ::StringW& __cordl_internal_get_displayAsText() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_icon() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_icon() ;

constexpr void __cordl_internal_set_controlPath(::StringW  value) ;

constexpr void __cordl_internal_set_displayAsText(::StringW  value) ;

constexpr void __cordl_internal_set_icon(::UnityW<::UnityEngine::Sprite>  value) ;

/// @brief Method .ctor, addr 0x9fb6908, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUIPromptIconResolver_KeyboardMapping() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUIPromptIconResolver_KeyboardMapping", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUIPromptIconResolver_KeyboardMapping(ModioUIPromptIconResolver_KeyboardMapping && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUIPromptIconResolver_KeyboardMapping", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUIPromptIconResolver_KeyboardMapping(ModioUIPromptIconResolver_KeyboardMapping const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27129};

/// @brief Field controlPath, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___controlPath;

/// @brief Field icon, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___icon;

/// @brief Field displayAsText, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___displayAsText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIPromptIconResolver_KeyboardMapping, ___controlPath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIPromptIconResolver_KeyboardMapping, ___icon) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIPromptIconResolver_KeyboardMapping, ___displayAsText) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Input::ModioUIPromptIconResolver_KeyboardMapping) == 0x28, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Input
