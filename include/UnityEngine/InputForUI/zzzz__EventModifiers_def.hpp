#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/EventModifiers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventModifiers)
namespace GlobalNamespace {
struct EventModifiers_Modifiers;
}
// Forward declare root types
namespace UnityEngine::InputForUI {
struct EventModifiers;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputForUI::EventModifiers);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputForUI::EventModifiers, "UnityEngine.InputForUI", "EventModifiers");
// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
// Dependencies 
namespace UnityEngine::InputForUI {
// Is value type: true
// CS Name: UnityEngine.InputForUI.EventModifiers
struct CORDL_TYPE EventModifiers {
public:
// Declarations
using Modifiers = ::GlobalNamespace::EventModifiers_Modifiers;

 __declspec(property(get=get_isAltPressed)) bool  isAltPressed;

 __declspec(property(get=get_isCapsLockEnabled)) bool  isCapsLockEnabled;

 __declspec(property(get=get_isCtrlPressed)) bool  isCtrlPressed;

 __declspec(property(get=get_isFunctionKeyPressed)) bool  isFunctionKeyPressed;

 __declspec(property(get=get_isMetaPressed)) bool  isMetaPressed;

 __declspec(property(get=get_isNumericPressed)) bool  isNumericPressed;

 __declspec(property(get=get_isShiftPressed)) bool  isShiftPressed;

/// @brief Method Append, addr 0xb65e2c4, size 0x78, virtual false, abstract: false, final false
static inline void Append(::by_ref<::StringW>  str, ::StringW  value) ;

/// @brief Method IsPressed, addr 0xb65e22c, size 0x10, virtual false, abstract: false, final false
inline bool IsPressed(::GlobalNamespace::EventModifiers_Modifiers  mod) ;

/// @brief Method Reset, addr 0xb65e2bc, size 0x8, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetPressed, addr 0xb65e2a0, size 0x1c, virtual false, abstract: false, final false
inline void SetPressed(::GlobalNamespace::EventModifiers_Modifiers  modifier, bool  pressed) ;

/// @brief Method ToString, addr 0xb65d8cc, size 0x25c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method get_isAltPressed, addr 0xb65e25c, size 0x10, virtual false, abstract: false, final false
inline bool get_isAltPressed() ;

/// @brief Method get_isCapsLockEnabled, addr 0xb65e27c, size 0xc, virtual false, abstract: false, final false
inline bool get_isCapsLockEnabled() ;

/// @brief Method get_isCtrlPressed, addr 0xb65e24c, size 0x10, virtual false, abstract: false, final false
inline bool get_isCtrlPressed() ;

/// @brief Method get_isFunctionKeyPressed, addr 0xb65e288, size 0xc, virtual false, abstract: false, final false
inline bool get_isFunctionKeyPressed() ;

/// @brief Method get_isMetaPressed, addr 0xb65e26c, size 0x10, virtual false, abstract: false, final false
inline bool get_isMetaPressed() ;

/// @brief Method get_isNumericPressed, addr 0xb65e294, size 0xc, virtual false, abstract: false, final false
inline bool get_isNumericPressed() ;

/// @brief Method get_isShiftPressed, addr 0xb65e23c, size 0x10, virtual false, abstract: false, final false
inline bool get_isShiftPressed() ;

// Ctor Parameters []
// @brief default ctor
constexpr EventModifiers() ;

// Ctor Parameters [CppParam { name: "_state", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr EventModifiers(uint32_t  _state) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31862};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field _state, offset: 0x0, size: 0x4, def value: None
 uint32_t  _state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputForUI::EventModifiers, _state) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputForUI::EventModifiers) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::InputForUI
