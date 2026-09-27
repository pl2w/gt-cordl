#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/FastKeyboard.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Keyboard_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FastKeyboard)
namespace UnityEngine::InputSystem::Controls {
class AnyKeyControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class DiscreteButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class KeyControl;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class FastKeyboard;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::FastKeyboard*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::FastKeyboard*, "UnityEngine.InputSystem", "FastKeyboard");
// Dependencies UnityEngine.InputSystem.Keyboard
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.FastKeyboard
class CORDL_TYPE FastKeyboard : public ::UnityEngine::InputSystem::Keyboard {
public:
// Declarations
/// @brief Method Initialize_ctrlKeyboard0, addr 0xaf6b39c, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard0(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboard1, addr 0xaf6a298, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard1(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboard2, addr 0xaf6a47c, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard2(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboard3, addr 0xaf6a660, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard3(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboard4, addr 0xaf6a844, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard4(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboard5, addr 0xaf6aa28, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard5(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboard6, addr 0xaf6ac0c, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard6(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboard7, addr 0xaf6adf0, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard7(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboard8, addr 0xaf6afd4, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard8(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboard9, addr 0xaf6b1b8, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard9(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardIMESelected, addr 0xaf73fdc, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlKeyboardIMESelected(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardOEM1, addr 0xaf71ec8, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardOEM1(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardOEM2, addr 0xaf720ac, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardOEM2(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardOEM3, addr 0xaf72290, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardOEM3(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardOEM4, addr 0xaf72474, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardOEM4(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardOEM5, addr 0xaf72658, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardOEM5(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboarda, addr 0xaf66f68, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboarda(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardalt, addr 0xaf6bfb4, size 0x224, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DiscreteButtonControl* Initialize_ctrlKeyboardalt(::UnityEngine::InputSystem::Utilities::InternedString  kDiscreteButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardanyKey, addr 0xaf647e8, size 0x200, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AnyKeyControl* Initialize_ctrlKeyboardanyKey(::UnityEngine::InputSystem::Utilities::InternedString  kAnyKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardb, addr 0xaf67160, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardb(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardbackquote, addr 0xaf651e0, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardbackquote(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardbackslash, addr 0xaf65db0, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardbackslash(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardbackspace, addr 0xaf6ce10, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardbackspace(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardc, addr 0xaf67358, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardc(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardcapsLock, addr 0xaf6dbd8, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardcapsLock(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardcomma, addr 0xaf657c8, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardcomma(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardcontextMenu, addr 0xaf6cc0c, size 0x204, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardcontextMenu(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardctrl, addr 0xaf6c5e0, size 0x224, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DiscreteButtonControl* Initialize_ctrlKeyboardctrl(::UnityEngine::InputSystem::Utilities::InternedString  kDiscreteButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardd, addr 0xaf67550, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardd(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboarddelete, addr 0xaf6d9e0, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboarddelete(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboarddownArrow, addr 0xaf66980, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboarddownArrow(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboarde, addr 0xaf67748, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboarde(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardend, addr 0xaf6d5f0, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardend(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardenter, addr 0xaf64de4, size 0x204, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardenter(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardequals, addr 0xaf66590, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardequals(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardescape, addr 0xaf649e8, size 0x204, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardescape(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardf, addr 0xaf67940, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardf1, addr 0xaf70728, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf1(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardf10, addr 0xaf718e0, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf10(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardf11, addr 0xaf71ad8, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf11(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardf12, addr 0xaf71cd0, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf12(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardf13, addr 0xaf7283c, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf13(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardf14, addr 0xaf72a34, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf14(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardf15, addr 0xaf72c2c, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf15(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardf16, addr 0xaf72e24, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf16(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardf17, addr 0xaf7301c, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf17(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardf18, addr 0xaf73214, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf18(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardf19, addr 0xaf7340c, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf19(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardf2, addr 0xaf70920, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf2(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardf20, addr 0xaf73604, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf20(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardf21, addr 0xaf737fc, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf21(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardf22, addr 0xaf739f4, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf22(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardf23, addr 0xaf73bec, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf23(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardf24, addr 0xaf73de4, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf24(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardf3, addr 0xaf70b18, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf3(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardf4, addr 0xaf70d10, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf4(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardf5, addr 0xaf70f08, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf5(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardf6, addr 0xaf71100, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf6(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardf7, addr 0xaf712f8, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf7(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardf8, addr 0xaf714f0, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf8(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardf9, addr 0xaf716e8, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf9(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardg, addr 0xaf67b38, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardg(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardh, addr 0xaf67d30, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardh(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardhome, addr 0xaf6d3f8, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardhome(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardi, addr 0xaf67f28, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardi(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardinsert, addr 0xaf6d7e8, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardinsert(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardj, addr 0xaf68120, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardj(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardk, addr 0xaf68318, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardk(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardl, addr 0xaf68510, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardl(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardleftAlt, addr 0xaf6bbac, size 0x204, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardleftAlt(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardleftArrow, addr 0xaf66b78, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardleftArrow(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardleftBracket, addr 0xaf65fa8, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardleftBracket(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardleftCtrl, addr 0xaf6c1d8, size 0x204, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardleftCtrl(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardleftMeta, addr 0xaf6c804, size 0x204, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardleftMeta(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardleftShift, addr 0xaf6b580, size 0x204, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardleftShift(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardm, addr 0xaf68708, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardm(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardminus, addr 0xaf66398, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardminus(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardn, addr 0xaf68900, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardn(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardnumLock, addr 0xaf6ddd0, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumLock(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpad0, addr 0xaf70530, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad0(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpad1, addr 0xaf6f378, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad1(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpad2, addr 0xaf6f570, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad2(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpad3, addr 0xaf6f768, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad3(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpad4, addr 0xaf6f960, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad4(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpad5, addr 0xaf6fb58, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad5(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpad6, addr 0xaf6fd50, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad6(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpad7, addr 0xaf6ff48, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad7(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpad8, addr 0xaf70140, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad8(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpad9, addr 0xaf70338, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad9(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpadDivide, addr 0xaf6e7a8, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpadDivide(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpadEnter, addr 0xaf6e5b0, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpadEnter(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpadEquals, addr 0xaf6f180, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpadEquals(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpadMinus, addr 0xaf6ed90, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpadMinus(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpadMultiply, addr 0xaf6e9a0, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpadMultiply(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpadPeriod, addr 0xaf6ef88, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpadPeriod(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpadPlus, addr 0xaf6eb98, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpadPlus(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardo, addr 0xaf68af8, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardo(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardp, addr 0xaf68cf0, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardp(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardpageDown, addr 0xaf6d008, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardpageDown(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardpageUp, addr 0xaf6d200, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardpageUp(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardpause, addr 0xaf6e3b8, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardpause(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardperiod, addr 0xaf659c0, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardperiod(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardprintScreen, addr 0xaf6dfc8, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardprintScreen(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardq, addr 0xaf68ee8, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardq(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardquote, addr 0xaf653d8, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardquote(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardr, addr 0xaf690e0, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardr(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardrightAlt, addr 0xaf6bdb0, size 0x204, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardrightAlt(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardrightArrow, addr 0xaf66d70, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardrightArrow(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardrightBracket, addr 0xaf661a0, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardrightBracket(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardrightCtrl, addr 0xaf6c3dc, size 0x204, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardrightCtrl(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardrightMeta, addr 0xaf6ca08, size 0x204, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardrightMeta(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardrightShift, addr 0xaf6b784, size 0x204, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardrightShift(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboards, addr 0xaf692d8, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboards(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardscrollLock, addr 0xaf6e1c0, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardscrollLock(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardsemicolon, addr 0xaf655d0, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardsemicolon(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardshift, addr 0xaf6b988, size 0x224, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DiscreteButtonControl* Initialize_ctrlKeyboardshift(::UnityEngine::InputSystem::Utilities::InternedString  kDiscreteButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardslash, addr 0xaf65bb8, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardslash(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardspace, addr 0xaf64bec, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardspace(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardt, addr 0xaf694d0, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardt(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardtab, addr 0xaf64fe8, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardtab(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardu, addr 0xaf696c8, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardu(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardupArrow, addr 0xaf66788, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardupArrow(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardv, addr 0xaf698c0, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardv(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardw, addr 0xaf69ab8, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardw(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardx, addr 0xaf69cb0, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardx(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardy, addr 0xaf69ea8, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardy(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardz, addr 0xaf6a0a0, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardz(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

static inline ::UnityEngine::InputSystem::FastKeyboard* New_ctor() ;

/// @brief Method .ctor, addr 0xaf61250, size 0x3598, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FastKeyboard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FastKeyboard", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FastKeyboard(FastKeyboard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FastKeyboard", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FastKeyboard(FastKeyboard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13461};

/// @brief Field metadata offset 0xffffffff size 0x8
static constexpr ::ConstString  metadata{u";AnyKey;Button;Axis;Key;DiscreteButton;Keyboard"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::FastKeyboard) == 0x1f0, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
