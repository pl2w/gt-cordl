#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleKeyboard.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ObservableBehavior_def.hpp"
#include "GlobalNamespace/zzzz__SimpleKeyboardButton_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleKeyboard)
namespace GlobalNamespace {
class SimpleKeyboardButton;
}
namespace GlobalNamespace {
class TypingTarget;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SimpleKeyboard;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SimpleKeyboard*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SimpleKeyboard*, "", "SimpleKeyboard");
// Dependencies ObservableBehavior, SimpleKeyboardButton
namespace GlobalNamespace {
// Is value type: false
// CS Name: SimpleKeyboard
class CORDL_TYPE SimpleKeyboard : public ::GlobalNamespace::ObservableBehavior {
public:
// Declarations
/// @brief Field audioClipIndex, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_audioClipIndex, put=__cordl_internal_set_audioClipIndex)) int32_t  audioClipIndex;

/// @brief Field btnPos, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_btnPos, put=__cordl_internal_set_btnPos)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::SimpleKeyboardButton>,::UnityEngine::Vector3>*  btnPos;

/// @brief Field buttons, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttons, put=__cordl_internal_set_buttons)) ::ArrayW<::UnityW<::GlobalNamespace::SimpleKeyboardButton>>  buttons;

/// @brief Field coolDown, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_coolDown, put=__cordl_internal_set_coolDown)) float_t  coolDown;

/// @brief Field keyTravel, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_keyTravel, put=__cordl_internal_set_keyTravel)) float_t  keyTravel;

/// @brief Field lastButton, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastButton, put=__cordl_internal_set_lastButton)) ::UnityW<::GlobalNamespace::SimpleKeyboardButton>  lastButton;

/// @brief Field pressTime, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_pressTime, put=__cordl_internal_set_pressTime)) float_t  pressTime;

/// @brief Field typingTarget, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_typingTarget, put=__cordl_internal_set_typingTarget)) ::UnityW<::GlobalNamespace::TypingTarget>  typingTarget;

/// @brief Method LateUpdate, addr 0x5ac334c, size 0x198, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::SimpleKeyboard* New_ctor() ;

/// @brief Method ObservableSliceUpdate, addr 0x5ac3348, size 0x4, virtual true, abstract: false, final false
inline void ObservableSliceUpdate() ;

/// @brief Method OnBecameObservable, addr 0x5ac327c, size 0xcc, virtual true, abstract: false, final false
inline void OnBecameObservable() ;

/// @brief Method OnLostObservable, addr 0x5ac31b0, size 0xcc, virtual true, abstract: false, final false
inline void OnLostObservable() ;

/// @brief Method Start, addr 0x5ac2c58, size 0xb8, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UnityOnDisable, addr 0x5ac308c, size 0x124, virtual true, abstract: false, final false
inline void UnityOnDisable() ;

/// @brief Method UnityOnEnable, addr 0x5ac2d10, size 0x124, virtual true, abstract: false, final false
inline void UnityOnEnable() ;

constexpr int32_t const& __cordl_internal_get_audioClipIndex() const;

constexpr int32_t& __cordl_internal_get_audioClipIndex() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::SimpleKeyboardButton>,::UnityEngine::Vector3>* const& __cordl_internal_get_btnPos() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::SimpleKeyboardButton>,::UnityEngine::Vector3>*& __cordl_internal_get_btnPos() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SimpleKeyboardButton>> const& __cordl_internal_get_buttons() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SimpleKeyboardButton>>& __cordl_internal_get_buttons() ;

constexpr float_t const& __cordl_internal_get_coolDown() const;

constexpr float_t& __cordl_internal_get_coolDown() ;

constexpr float_t const& __cordl_internal_get_keyTravel() const;

constexpr float_t& __cordl_internal_get_keyTravel() ;

constexpr ::UnityW<::GlobalNamespace::SimpleKeyboardButton> const& __cordl_internal_get_lastButton() const;

constexpr ::UnityW<::GlobalNamespace::SimpleKeyboardButton>& __cordl_internal_get_lastButton() ;

constexpr float_t const& __cordl_internal_get_pressTime() const;

constexpr float_t& __cordl_internal_get_pressTime() ;

constexpr ::UnityW<::GlobalNamespace::TypingTarget> const& __cordl_internal_get_typingTarget() const;

constexpr ::UnityW<::GlobalNamespace::TypingTarget>& __cordl_internal_get_typingTarget() ;

constexpr void __cordl_internal_set_audioClipIndex(int32_t  value) ;

constexpr void __cordl_internal_set_btnPos(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::SimpleKeyboardButton>,::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_buttons(::ArrayW<::UnityW<::GlobalNamespace::SimpleKeyboardButton>>  value) ;

constexpr void __cordl_internal_set_coolDown(float_t  value) ;

constexpr void __cordl_internal_set_keyTravel(float_t  value) ;

constexpr void __cordl_internal_set_lastButton(::UnityW<::GlobalNamespace::SimpleKeyboardButton>  value) ;

constexpr void __cordl_internal_set_pressTime(float_t  value) ;

constexpr void __cordl_internal_set_typingTarget(::UnityW<::GlobalNamespace::TypingTarget>  value) ;

/// @brief Method .ctor, addr 0x5ac34e4, size 0xa8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method buttonPress, addr 0x5ac2e34, size 0x258, virtual false, abstract: false, final false
inline void buttonPress(::GlobalNamespace::SimpleKeyboardButton*  b, bool  isLeft) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimpleKeyboard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimpleKeyboard", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleKeyboard(SimpleKeyboard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleKeyboard", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleKeyboard(SimpleKeyboard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3354};

/// @brief Field lastButton, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SimpleKeyboardButton>  ___lastButton;

/// @brief Field pressTime, offset: 0x48, size: 0x4, def value: None
 float_t  ___pressTime;

/// [SerializeField]
/// @brief Field coolDown, offset: 0x4c, size: 0x4, def value: None
 float_t  ___coolDown;

/// [SerializeField]
/// @brief Field typingTarget, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TypingTarget>  ___typingTarget;

/// [SerializeField]
/// @brief Field buttons, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::SimpleKeyboardButton>>  ___buttons;

/// [SerializeField]
/// @brief Field audioClipIndex, offset: 0x60, size: 0x4, def value: None
 int32_t  ___audioClipIndex;

/// @brief Field btnPos, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::SimpleKeyboardButton>,::UnityEngine::Vector3>*  ___btnPos;

/// [SerializeField]
/// @brief Field keyTravel, offset: 0x70, size: 0x4, def value: None
 float_t  ___keyTravel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SimpleKeyboard, ___lastButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleKeyboard, ___pressTime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleKeyboard, ___coolDown) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleKeyboard, ___typingTarget) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleKeyboard, ___buttons) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleKeyboard, ___audioClipIndex) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleKeyboard, ___btnPos) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleKeyboard, ___keyTravel) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SimpleKeyboard) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
