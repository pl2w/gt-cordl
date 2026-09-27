#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaHeldItemPressableButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__HeldItemButtonConsumeMode_def.hpp"
#include "GlobalNamespace/zzzz__HeldItemButtonMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaHeldItemPressableButton)
namespace GlobalNamespace {
class IDelayedExecListener;
}
namespace GlobalNamespace {
class TransferrableObject;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
class Type;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaHeldItemPressableButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaHeldItemPressableButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaHeldItemPressableButton*, "", "GorillaHeldItemPressableButton");
// Dependencies HeldItemButtonConsumeMode, HeldItemButtonMode, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaHeldItemPressableButton
class CORDL_TYPE GorillaHeldItemPressableButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field acceptAnyHoldableThatMatchesType, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_acceptAnyHoldableThatMatchesType, put=__cordl_internal_set_acceptAnyHoldableThatMatchesType)) bool  acceptAnyHoldableThatMatchesType;

/// @brief Field acceptedHoldables, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_acceptedHoldables, put=__cordl_internal_set_acceptedHoldables)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TransferrableObject>>*  acceptedHoldables;

/// @brief Field acceptedTypes, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_acceptedTypes, put=__cordl_internal_set_acceptedTypes)) ::System::Collections::Generic::List_1<::System::Type*>*  acceptedTypes;

/// @brief Field consumeItem, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_consumeItem, put=__cordl_internal_set_consumeItem)) ::GlobalNamespace::HeldItemButtonConsumeMode  consumeItem;

/// @brief Field delayBetweenSuccessfulPresses, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_delayBetweenSuccessfulPresses, put=__cordl_internal_set_delayBetweenSuccessfulPresses)) float_t  delayBetweenSuccessfulPresses;

/// @brief Field isOn, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_isOn, put=__cordl_internal_set_isOn)) bool  isOn;

/// @brief Field mode, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) ::GlobalNamespace::HeldItemButtonMode  mode;

/// @brief Field onPressButton, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPressButton, put=__cordl_internal_set_onPressButton)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::TransferrableObject>>*  onPressButton;

/// @brief Field onPressed, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPressed, put=__cordl_internal_set_onPressed)) ::System::Action_3<::UnityW<::GlobalNamespace::GorillaHeldItemPressableButton>,::UnityW<::GlobalNamespace::TransferrableObject>,bool>*  onPressed;

/// @brief Field onReleaseButton, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_onReleaseButton, put=__cordl_internal_set_onReleaseButton)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::TransferrableObject>>*  onReleaseButton;

/// @brief Field onReleased, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_onReleased, put=__cordl_internal_set_onReleased)) ::System::Action_3<::UnityW<::GlobalNamespace::GorillaHeldItemPressableButton>,::UnityW<::GlobalNamespace::TransferrableObject>,bool>*  onReleased;

/// @brief Field pressButtonSoundIndex, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_pressButtonSoundIndex, put=__cordl_internal_set_pressButtonSoundIndex)) int32_t  pressButtonSoundIndex;

/// @brief Field touchTime, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_touchTime, put=__cordl_internal_set_touchTime)) float_t  touchTime;

/// @brief Convert operator to "::GlobalNamespace::IDelayedExecListener"
constexpr operator  ::GlobalNamespace::IDelayedExecListener*() noexcept;

/// @brief Method ButtonActivation, addr 0x5998448, size 0x4, virtual true, abstract: false, final false
inline void ButtonActivation(::GlobalNamespace::TransferrableObject*  holdable) ;

/// @brief Method ButtonActivationWithHand, addr 0x599844c, size 0x4, virtual true, abstract: false, final false
inline void ButtonActivationWithHand(::GlobalNamespace::TransferrableObject*  holdable, bool  isLeftHand) ;

static inline ::GlobalNamespace::GorillaHeldItemPressableButton* New_ctor() ;

/// @brief Method OnDelayedAction, addr 0x59984d4, size 0xc, virtual true, abstract: false, final true
inline void OnDelayedAction(int32_t  contextIndex) ;

/// @brief Method OnTriggerEnter, addr 0x5997de4, size 0x664, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  collider) ;

/// @brief Method ResetState, addr 0x5998450, size 0x84, virtual true, abstract: false, final false
inline void ResetState() ;

/// @brief Method Start, addr 0x5997bdc, size 0x208, virtual false, abstract: false, final false
inline void Start() ;

constexpr bool const& __cordl_internal_get_acceptAnyHoldableThatMatchesType() const;

constexpr bool& __cordl_internal_get_acceptAnyHoldableThatMatchesType() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TransferrableObject>>* const& __cordl_internal_get_acceptedHoldables() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TransferrableObject>>*& __cordl_internal_get_acceptedHoldables() ;

constexpr ::System::Collections::Generic::List_1<::System::Type*>* const& __cordl_internal_get_acceptedTypes() const;

constexpr ::System::Collections::Generic::List_1<::System::Type*>*& __cordl_internal_get_acceptedTypes() ;

constexpr ::GlobalNamespace::HeldItemButtonConsumeMode const& __cordl_internal_get_consumeItem() const;

constexpr ::GlobalNamespace::HeldItemButtonConsumeMode& __cordl_internal_get_consumeItem() ;

constexpr float_t const& __cordl_internal_get_delayBetweenSuccessfulPresses() const;

constexpr float_t& __cordl_internal_get_delayBetweenSuccessfulPresses() ;

constexpr bool const& __cordl_internal_get_isOn() const;

constexpr bool& __cordl_internal_get_isOn() ;

constexpr ::GlobalNamespace::HeldItemButtonMode const& __cordl_internal_get_mode() const;

constexpr ::GlobalNamespace::HeldItemButtonMode& __cordl_internal_get_mode() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::TransferrableObject>>* const& __cordl_internal_get_onPressButton() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::TransferrableObject>>*& __cordl_internal_get_onPressButton() ;

constexpr ::System::Action_3<::UnityW<::GlobalNamespace::GorillaHeldItemPressableButton>,::UnityW<::GlobalNamespace::TransferrableObject>,bool>* const& __cordl_internal_get_onPressed() const;

constexpr ::System::Action_3<::UnityW<::GlobalNamespace::GorillaHeldItemPressableButton>,::UnityW<::GlobalNamespace::TransferrableObject>,bool>*& __cordl_internal_get_onPressed() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::TransferrableObject>>* const& __cordl_internal_get_onReleaseButton() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::TransferrableObject>>*& __cordl_internal_get_onReleaseButton() ;

constexpr ::System::Action_3<::UnityW<::GlobalNamespace::GorillaHeldItemPressableButton>,::UnityW<::GlobalNamespace::TransferrableObject>,bool>* const& __cordl_internal_get_onReleased() const;

constexpr ::System::Action_3<::UnityW<::GlobalNamespace::GorillaHeldItemPressableButton>,::UnityW<::GlobalNamespace::TransferrableObject>,bool>*& __cordl_internal_get_onReleased() ;

constexpr int32_t const& __cordl_internal_get_pressButtonSoundIndex() const;

constexpr int32_t& __cordl_internal_get_pressButtonSoundIndex() ;

constexpr float_t const& __cordl_internal_get_touchTime() const;

constexpr float_t& __cordl_internal_get_touchTime() ;

constexpr void __cordl_internal_set_acceptAnyHoldableThatMatchesType(bool  value) ;

constexpr void __cordl_internal_set_acceptedHoldables(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TransferrableObject>>*  value) ;

constexpr void __cordl_internal_set_acceptedTypes(::System::Collections::Generic::List_1<::System::Type*>*  value) ;

constexpr void __cordl_internal_set_consumeItem(::GlobalNamespace::HeldItemButtonConsumeMode  value) ;

constexpr void __cordl_internal_set_delayBetweenSuccessfulPresses(float_t  value) ;

constexpr void __cordl_internal_set_isOn(bool  value) ;

constexpr void __cordl_internal_set_mode(::GlobalNamespace::HeldItemButtonMode  value) ;

constexpr void __cordl_internal_set_onPressButton(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::TransferrableObject>>*  value) ;

constexpr void __cordl_internal_set_onPressed(::System::Action_3<::UnityW<::GlobalNamespace::GorillaHeldItemPressableButton>,::UnityW<::GlobalNamespace::TransferrableObject>,bool>*  value) ;

constexpr void __cordl_internal_set_onReleaseButton(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::TransferrableObject>>*  value) ;

constexpr void __cordl_internal_set_onReleased(::System::Action_3<::UnityW<::GlobalNamespace::GorillaHeldItemPressableButton>,::UnityW<::GlobalNamespace::TransferrableObject>,bool>*  value) ;

constexpr void __cordl_internal_set_pressButtonSoundIndex(int32_t  value) ;

constexpr void __cordl_internal_set_touchTime(float_t  value) ;

/// @brief Method .ctor, addr 0x59984e0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_onPressed, addr 0x599791c, size 0xb0, virtual false, abstract: false, final false
inline void add_onPressed(::System::Action_3<::UnityW<::GlobalNamespace::GorillaHeldItemPressableButton>,::UnityW<::GlobalNamespace::TransferrableObject>,bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_onReleased, addr 0x5997a7c, size 0xb0, virtual false, abstract: false, final false
inline void add_onReleased(::System::Action_3<::UnityW<::GlobalNamespace::GorillaHeldItemPressableButton>,::UnityW<::GlobalNamespace::TransferrableObject>,bool>*  value) ;

/// @brief Convert to "::GlobalNamespace::IDelayedExecListener"
constexpr ::GlobalNamespace::IDelayedExecListener* i___GlobalNamespace__IDelayedExecListener() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_onPressed, addr 0x59979cc, size 0xb0, virtual false, abstract: false, final false
inline void remove_onPressed(::System::Action_3<::UnityW<::GlobalNamespace::GorillaHeldItemPressableButton>,::UnityW<::GlobalNamespace::TransferrableObject>,bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_onReleased, addr 0x5997b2c, size 0xb0, virtual false, abstract: false, final false
inline void remove_onReleased(::System::Action_3<::UnityW<::GlobalNamespace::GorillaHeldItemPressableButton>,::UnityW<::GlobalNamespace::TransferrableObject>,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaHeldItemPressableButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaHeldItemPressableButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaHeldItemPressableButton(GorillaHeldItemPressableButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaHeldItemPressableButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaHeldItemPressableButton(GorillaHeldItemPressableButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2602};

/// @brief Field pressButtonSoundIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  ___pressButtonSoundIndex;

/// @brief Field isOn, offset: 0x24, size: 0x1, def value: None
 bool  ___isOn;

/// @brief Field delayBetweenSuccessfulPresses, offset: 0x28, size: 0x4, def value: None
 float_t  ___delayBetweenSuccessfulPresses;

/// @brief Field touchTime, offset: 0x2c, size: 0x4, def value: None
 float_t  ___touchTime;

/// @brief Field mode, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::HeldItemButtonMode  ___mode;

/// @brief Field acceptedHoldables, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TransferrableObject>>*  ___acceptedHoldables;

/// @brief Field acceptedTypes, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Type*>*  ___acceptedTypes;

/// @brief Field acceptAnyHoldableThatMatchesType, offset: 0x48, size: 0x1, def value: None
 bool  ___acceptAnyHoldableThatMatchesType;

/// @brief Field consumeItem, offset: 0x4c, size: 0x4, def value: None
 ::GlobalNamespace::HeldItemButtonConsumeMode  ___consumeItem;

/// [Space]
/// @brief Field onPressButton, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::TransferrableObject>>*  ___onPressButton;

/// [CompilerGenerated]
/// @brief Field onPressed, offset: 0x58, size: 0x8, def value: None
 ::System::Action_3<::UnityW<::GlobalNamespace::GorillaHeldItemPressableButton>,::UnityW<::GlobalNamespace::TransferrableObject>,bool>*  ___onPressed;

/// [Space]
/// @brief Field onReleaseButton, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::TransferrableObject>>*  ___onReleaseButton;

/// [CompilerGenerated]
/// @brief Field onReleased, offset: 0x68, size: 0x8, def value: None
 ::System::Action_3<::UnityW<::GlobalNamespace::GorillaHeldItemPressableButton>,::UnityW<::GlobalNamespace::TransferrableObject>,bool>*  ___onReleased;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaHeldItemPressableButton, ___pressButtonSoundIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHeldItemPressableButton, ___isOn) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHeldItemPressableButton, ___delayBetweenSuccessfulPresses) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHeldItemPressableButton, ___touchTime) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHeldItemPressableButton, ___mode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHeldItemPressableButton, ___acceptedHoldables) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHeldItemPressableButton, ___acceptedTypes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHeldItemPressableButton, ___acceptAnyHoldableThatMatchesType) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHeldItemPressableButton, ___consumeItem) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHeldItemPressableButton, ___onPressButton) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHeldItemPressableButton, ___onPressed) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHeldItemPressableButton, ___onReleaseButton) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHeldItemPressableButton, ___onReleased) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaHeldItemPressableButton) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
