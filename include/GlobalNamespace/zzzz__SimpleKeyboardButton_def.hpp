#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleKeyboardButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SimpleButton_def.hpp"
#include "GlobalNamespace/zzzz__SimpleKeyboardButton_ButtonFunction_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SimpleKeyboardButton)
namespace GlobalNamespace {
struct SimpleKeyboardButton_ButtonFunction;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SimpleKeyboardButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SimpleKeyboardButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SimpleKeyboardButton*, "", "SimpleKeyboardButton");
// Dependencies SimpleButton, SimpleKeyboardButton::ButtonFunction
namespace GlobalNamespace {
// Is value type: false
// CS Name: SimpleKeyboardButton
class CORDL_TYPE SimpleKeyboardButton : public ::GlobalNamespace::SimpleButton {
public:
// Declarations
using ButtonFunction = ::GlobalNamespace::SimpleKeyboardButton_ButtonFunction;

 __declspec(property(get=get_Function)) ::GlobalNamespace::SimpleKeyboardButton_ButtonFunction  Function;

/// @brief Field KeyPress, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_KeyPress, put=__cordl_internal_set_KeyPress)) ::UnityEngine::Events::UnityEvent_1<::StringW>*  KeyPress;

 __declspec(property(get=get_KeyValue)) ::StringW  KeyValue;

/// @brief Field OnKeyPress, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnKeyPress, put=__cordl_internal_set_OnKeyPress)) ::System::Action_2<::UnityW<::GlobalNamespace::SimpleKeyboardButton>,bool>*  OnKeyPress;

/// @brief Field buttonFunction, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_buttonFunction, put=__cordl_internal_set_buttonFunction)) ::GlobalNamespace::SimpleKeyboardButton_ButtonFunction  buttonFunction;

/// @brief Field keyValue, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_keyValue, put=__cordl_internal_set_keyValue)) ::StringW  keyValue;

static inline ::GlobalNamespace::SimpleKeyboardButton* New_ctor() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::StringW>* const& __cordl_internal_get_KeyPress() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::StringW>*& __cordl_internal_get_KeyPress() ;

constexpr ::System::Action_2<::UnityW<::GlobalNamespace::SimpleKeyboardButton>,bool>* const& __cordl_internal_get_OnKeyPress() const;

constexpr ::System::Action_2<::UnityW<::GlobalNamespace::SimpleKeyboardButton>,bool>*& __cordl_internal_get_OnKeyPress() ;

constexpr ::GlobalNamespace::SimpleKeyboardButton_ButtonFunction const& __cordl_internal_get_buttonFunction() const;

constexpr ::GlobalNamespace::SimpleKeyboardButton_ButtonFunction& __cordl_internal_get_buttonFunction() ;

constexpr ::StringW const& __cordl_internal_get_keyValue() const;

constexpr ::StringW& __cordl_internal_get_keyValue() ;

constexpr void __cordl_internal_set_KeyPress(::UnityEngine::Events::UnityEvent_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_OnKeyPress(::System::Action_2<::UnityW<::GlobalNamespace::SimpleKeyboardButton>,bool>*  value) ;

constexpr void __cordl_internal_set_buttonFunction(::GlobalNamespace::SimpleKeyboardButton_ButtonFunction  value) ;

constexpr void __cordl_internal_set_keyValue(::StringW  value) ;

/// @brief Method .ctor, addr 0x5ac361c, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Function, addr 0x5ac3594, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SimpleKeyboardButton_ButtonFunction get_Function() ;

/// @brief Method get_KeyValue, addr 0x5ac358c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_KeyValue() ;

/// @brief Method handlePress, addr 0x5ac359c, size 0x80, virtual true, abstract: false, final false
inline void handlePress(bool  isLeft) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimpleKeyboardButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimpleKeyboardButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleKeyboardButton(SimpleKeyboardButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleKeyboardButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleKeyboardButton(SimpleKeyboardButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3356};

/// [SerializeField]
/// @brief Field keyValue, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___keyValue;

/// [SerializeField]
/// @brief Field buttonFunction, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::SimpleKeyboardButton_ButtonFunction  ___buttonFunction;

/// [SerializeField]
/// @brief Field KeyPress, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::StringW>*  ___KeyPress;

/// @brief Field OnKeyPress, offset: 0x60, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::GlobalNamespace::SimpleKeyboardButton>,bool>*  ___OnKeyPress;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SimpleKeyboardButton, ___keyValue) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleKeyboardButton, ___buttonFunction) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleKeyboardButton, ___KeyPress) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleKeyboardButton, ___OnKeyPress) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SimpleKeyboardButton) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
