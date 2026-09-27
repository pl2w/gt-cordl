#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlatformMenu.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRInput_RawButton_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlatformMenu_eHandler_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(OVRPlatformMenu)
namespace GlobalNamespace {
struct OVRPlatformMenu_eBackButtonAction;
}
namespace GlobalNamespace {
struct OVRPlatformMenu_eHandler;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRPlatformMenu;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRPlatformMenu*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlatformMenu*, "", "OVRPlatformMenu");
// [HelpURL("https://developer.oculus.com/reference/unity/latest/class_o_v_r_platform_menu")]
// Dependencies OVRInput::RawButton, OVRPlatformMenu::eHandler, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlatformMenu
class CORDL_TYPE OVRPlatformMenu : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using eBackButtonAction = ::GlobalNamespace::OVRPlatformMenu_eBackButtonAction;

using eHandler = ::GlobalNamespace::OVRPlatformMenu_eHandler;

/// @brief Field OnShortPress, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnShortPress, put=__cordl_internal_set_OnShortPress)) ::System::Func_1<bool>*  OnShortPress;

/// @brief Field inputCode, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_inputCode, put=__cordl_internal_set_inputCode)) ::GlobalNamespace::OVRInput_RawButton  inputCode;

/// @brief Field sceneStack, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_sceneStack, put=setStaticF_sceneStack)) ::System::Collections::Generic::Stack_1<::StringW>*  sceneStack;

/// @brief Field shortPressHandler, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_shortPressHandler, put=__cordl_internal_set_shortPressHandler)) ::GlobalNamespace::OVRPlatformMenu_eHandler  shortPressHandler;

/// @brief Method Awake, addr 0xa60d56c, size 0x18c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method HandleBackButtonState, addr 0xa60d504, size 0x68, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlatformMenu_eBackButtonAction HandleBackButtonState() ;

static inline ::GlobalNamespace::OVRPlatformMenu* New_ctor() ;

/// @brief Method RetreatOneLevel, addr 0xa60d7d0, size 0xf4, virtual false, abstract: false, final false
static inline bool RetreatOneLevel() ;

/// @brief Method ShowConfirmQuitMenu, addr 0xa60d6f8, size 0xd8, virtual false, abstract: false, final false
inline void ShowConfirmQuitMenu() ;

/// @brief Method Update, addr 0xa60d8c4, size 0x40, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Func_1<bool>* const& __cordl_internal_get_OnShortPress() const;

constexpr ::System::Func_1<bool>*& __cordl_internal_get_OnShortPress() ;

constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_inputCode() const;

constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_inputCode() ;

constexpr ::GlobalNamespace::OVRPlatformMenu_eHandler const& __cordl_internal_get_shortPressHandler() const;

constexpr ::GlobalNamespace::OVRPlatformMenu_eHandler& __cordl_internal_get_shortPressHandler() ;

constexpr void __cordl_internal_set_OnShortPress(::System::Func_1<bool>*  value) ;

constexpr void __cordl_internal_set_inputCode(::GlobalNamespace::OVRInput_RawButton  value) ;

constexpr void __cordl_internal_set_shortPressHandler(::GlobalNamespace::OVRPlatformMenu_eHandler  value) ;

/// @brief Method .ctor, addr 0xa60d904, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Stack_1<::StringW>* getStaticF_sceneStack() ;

static inline void setStaticF_sceneStack(::System::Collections::Generic::Stack_1<::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlatformMenu() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlatformMenu", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlatformMenu(OVRPlatformMenu && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlatformMenu", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlatformMenu(OVRPlatformMenu const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12043};

/// @brief Field inputCode, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_RawButton  ___inputCode;

/// @brief Field shortPressHandler, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlatformMenu_eHandler  ___shortPressHandler;

/// @brief Field OnShortPress, offset: 0x28, size: 0x8, def value: None
 ::System::Func_1<bool>*  ___OnShortPress;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlatformMenu, ___inputCode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlatformMenu, ___shortPressHandler) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlatformMenu, ___OnShortPress) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlatformMenu) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
