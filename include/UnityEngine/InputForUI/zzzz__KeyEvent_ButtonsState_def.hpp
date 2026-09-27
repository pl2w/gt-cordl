#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/KeyEvent_ButtonsState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputForUI/zzzz__KeyEvent_ButtonsState__buttons_e__FixedBuffer_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KeyEvent_ButtonsState)
namespace GlobalNamespace {
struct ButtonsState_KeyEvent__buttons_e__FixedBuffer;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::InputForUI {
class ButtonsState_KeyEvent__GetAllPressed_d__8;
}
namespace UnityEngine {
struct KeyCode;
}
// Forward declare root types
namespace GlobalNamespace {
struct KeyEvent_ButtonsState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::KeyEvent_ButtonsState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KeyEvent_ButtonsState, "UnityEngine.InputForUI", "KeyEvent/ButtonsState");
// Dependencies UnityEngine.InputForUI.KeyEvent::ButtonsState::<buttons>e__FixedBuffer
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputForUI.KeyEvent/ButtonsState
struct CORDL_TYPE KeyEvent_ButtonsState {
public:
// Declarations
using _buttons_e__FixedBuffer = ::GlobalNamespace::ButtonsState_KeyEvent__buttons_e__FixedBuffer;

using _GetAllPressed_d__8 = ::UnityEngine::InputForUI::ButtonsState_KeyEvent__GetAllPressed_d__8;

/// @brief Method ClearUnchecked, addr 0xb65e5ec, size 0x24, virtual false, abstract: false, final false
inline void ClearUnchecked(uint32_t  index) ;

/// [IteratorStateMachine(typeof(UnityEngine.InputForUI.KeyEvent::ButtonsState::<GetAllPressed>d__8))]
/// @brief Method GetAllPressed, addr 0xb65e63c, size 0x84, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::KeyCode>* GetAllPressed() ;

/// @brief Method GetUnchecked, addr 0xb65e5ac, size 0x1c, virtual false, abstract: false, final false
inline bool GetUnchecked(uint32_t  index) ;

/// @brief Method IsPressed, addr 0xb65e610, size 0x2c, virtual false, abstract: false, final false
inline bool IsPressed(::UnityEngine::KeyCode  keyCode) ;

/// @brief Method Reset, addr 0xb65e72c, size 0x16c, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetPressed, addr 0xb65e6f4, size 0x38, virtual false, abstract: false, final false
inline void SetPressed(::UnityEngine::KeyCode  keyCode, bool  pressed) ;

/// @brief Method SetUnchecked, addr 0xb65e5c8, size 0x24, virtual false, abstract: false, final false
inline void SetUnchecked(uint32_t  index) ;

/// @brief Method ShouldBeProcessed, addr 0xb65e5a0, size 0xc, virtual false, abstract: false, final false
static inline bool ShouldBeProcessed(::UnityEngine::KeyCode  keyCode) ;

/// @brief Method ToString, addr 0xb65e898, size 0x74, virtual true, abstract: false, final false
inline ::StringW ToString() ;

// Ctor Parameters []
// @brief default ctor
constexpr KeyEvent_ButtonsState() ;

// Ctor Parameters [CppParam { name: "buttons", ty: "::GlobalNamespace::ButtonsState_KeyEvent__buttons_e__FixedBuffer", modifiers: "", def_value: None, comment: None }]
constexpr KeyEvent_ButtonsState(::GlobalNamespace::ButtonsState_KeyEvent__buttons_e__FixedBuffer  buttons) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31869};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// [FixedBuffer(typeof(System.Byte), 40)]
/// @brief Field buttons, offset: 0x0, size: 0x28, def value: None
 ::GlobalNamespace::ButtonsState_KeyEvent__buttons_e__FixedBuffer  buttons;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KeyEvent_ButtonsState, buttons) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KeyEvent_ButtonsState) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
