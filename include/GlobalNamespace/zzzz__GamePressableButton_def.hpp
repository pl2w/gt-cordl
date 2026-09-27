#pragma once
// IWYU pragma private; include "GlobalNamespace/GamePressableButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GamePressableButton)
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class IClickable;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class GamePressableButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GamePressableButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GamePressableButton*, "", "GamePressableButton");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GamePressableButton
class CORDL_TYPE GamePressableButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field activeWhileGrabbed, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_activeWhileGrabbed, put=__cordl_internal_set_activeWhileGrabbed)) bool  activeWhileGrabbed;

/// @brief Field activeWhileSnapped, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get_activeWhileSnapped, put=__cordl_internal_set_activeWhileSnapped)) bool  activeWhileSnapped;

/// @brief Field debounceTime, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_debounceTime, put=__cordl_internal_set_debounceTime)) float_t  debounceTime;

/// @brief Field gameEntity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntity, put=__cordl_internal_set_gameEntity)) ::UnityW<::GlobalNamespace::GameEntity>  gameEntity;

/// @brief Field onPressButton, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPressButton, put=__cordl_internal_set_onPressButton)) ::UnityEngine::Events::UnityEvent*  onPressButton;

/// @brief Field pressButtonSoundIndex, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_pressButtonSoundIndex, put=__cordl_internal_set_pressButtonSoundIndex)) int32_t  pressButtonSoundIndex;

/// @brief Field requireEquipped, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_requireEquipped, put=__cordl_internal_set_requireEquipped)) bool  requireEquipped;

/// @brief Field touchTime, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_touchTime, put=__cordl_internal_set_touchTime)) float_t  touchTime;

/// @brief Convert operator to "::GlobalNamespace::IClickable"
constexpr operator  ::GlobalNamespace::IClickable*() noexcept;

/// @brief Method CheckValidEquippedState, addr 0x5841588, size 0xfc, virtual false, abstract: false, final false
inline bool CheckValidEquippedState(bool  pressedHandLeft) ;

/// @brief Method Click, addr 0x5841034, size 0x4, virtual true, abstract: false, final true
inline void Click(bool  leftHand) ;

static inline ::GlobalNamespace::GamePressableButton* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5841488, size 0x100, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  collider) ;

/// @brief Method PressButton, addr 0x5841038, size 0x450, virtual false, abstract: false, final false
inline void PressButton(bool  isLeftHand) ;

constexpr bool const& __cordl_internal_get_activeWhileGrabbed() const;

constexpr bool& __cordl_internal_get_activeWhileGrabbed() ;

constexpr bool const& __cordl_internal_get_activeWhileSnapped() const;

constexpr bool& __cordl_internal_get_activeWhileSnapped() ;

constexpr float_t const& __cordl_internal_get_debounceTime() const;

constexpr float_t& __cordl_internal_get_debounceTime() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_gameEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_gameEntity() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onPressButton() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onPressButton() ;

constexpr int32_t const& __cordl_internal_get_pressButtonSoundIndex() const;

constexpr int32_t& __cordl_internal_get_pressButtonSoundIndex() ;

constexpr bool const& __cordl_internal_get_requireEquipped() const;

constexpr bool& __cordl_internal_get_requireEquipped() ;

constexpr float_t const& __cordl_internal_get_touchTime() const;

constexpr float_t& __cordl_internal_get_touchTime() ;

constexpr void __cordl_internal_set_activeWhileGrabbed(bool  value) ;

constexpr void __cordl_internal_set_activeWhileSnapped(bool  value) ;

constexpr void __cordl_internal_set_debounceTime(float_t  value) ;

constexpr void __cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_onPressButton(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_pressButtonSoundIndex(int32_t  value) ;

constexpr void __cordl_internal_set_requireEquipped(bool  value) ;

constexpr void __cordl_internal_set_touchTime(float_t  value) ;

/// @brief Method .ctor, addr 0x5841684, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IClickable"
constexpr ::GlobalNamespace::IClickable* i___GlobalNamespace__IClickable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GamePressableButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GamePressableButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GamePressableButton(GamePressableButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GamePressableButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GamePressableButton(GamePressableButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1791};

/// [SerializeField]
/// @brief Field gameEntity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___gameEntity;

/// [SerializeField]
/// @brief Field requireEquipped, offset: 0x28, size: 0x1, def value: None
 bool  ___requireEquipped;

/// [SerializeField]
/// @brief Field activeWhileGrabbed, offset: 0x29, size: 0x1, def value: None
 bool  ___activeWhileGrabbed;

/// [SerializeField]
/// @brief Field activeWhileSnapped, offset: 0x2a, size: 0x1, def value: None
 bool  ___activeWhileSnapped;

/// @brief Field onPressButton, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onPressButton;

/// [Header("Button Press")]
/// @brief Field debounceTime, offset: 0x38, size: 0x4, def value: None
 float_t  ___debounceTime;

/// @brief Field pressButtonSoundIndex, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___pressButtonSoundIndex;

/// @brief Field touchTime, offset: 0x40, size: 0x4, def value: None
 float_t  ___touchTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GamePressableButton, ___gameEntity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePressableButton, ___requireEquipped) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePressableButton, ___activeWhileGrabbed) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePressableButton, ___activeWhileSnapped) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePressableButton, ___onPressButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePressableButton, ___debounceTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePressableButton, ___pressButtonSoundIndex) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePressableButton, ___touchTime) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GamePressableButton) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
