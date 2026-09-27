#pragma once
// IWYU pragma private; include "GlobalNamespace/ConsentHoldButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ConsentHoldButton_Feedback_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ConsentHoldButton)
namespace GlobalNamespace {
struct ConsentHoldButton_Feedback;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace GlobalNamespace {
class ConsentHoldButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ConsentHoldButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConsentHoldButton*, "", "ConsentHoldButton");
// Dependencies ConsentHoldButton::Feedback, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConsentHoldButton
class CORDL_TYPE ConsentHoldButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Feedback = ::GlobalNamespace::ConsentHoldButton_Feedback;

/// @brief Field HoldComplete, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_HoldComplete, put=__cordl_internal_set_HoldComplete)) ::System::Action*  HoldComplete;

/// @brief Field cooldownUntil, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_cooldownUntil, put=__cordl_internal_set_cooldownUntil)) float_t  cooldownUntil;

/// @brief Field elapsed, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_elapsed, put=__cordl_internal_set_elapsed)) float_t  elapsed;

/// @brief Field feedback, offset 0x30, size 0x18 
 __declspec(property(get=__cordl_internal_get_feedback, put=__cordl_internal_set_feedback)) ::GlobalNamespace::ConsentHoldButton_Feedback  feedback;

/// @brief Field fill, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_fill, put=__cordl_internal_set_fill)) ::UnityW<::UnityEngine::RectTransform>  fill;

/// @brief Field holdDurationSeconds, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_holdDurationSeconds, put=__cordl_internal_set_holdDurationSeconds)) float_t  holdDurationSeconds;

/// @brief Field leftHandPressable, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_leftHandPressable, put=__cordl_internal_set_leftHandPressable)) bool  leftHandPressable;

/// @brief Field pressing, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_pressing, put=__cordl_internal_set_pressing)) bool  pressing;

/// @brief Field pressingCollider, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_pressingCollider, put=__cordl_internal_set_pressingCollider)) ::UnityW<::UnityEngine::Collider>  pressingCollider;

/// @brief Field pressingHandIsLeft, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_pressingHandIsLeft, put=__cordl_internal_set_pressingHandIsLeft)) bool  pressingHandIsLeft;

/// @brief Field rightHandPressable, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get_rightHandPressable, put=__cordl_internal_set_rightHandPressable)) bool  rightHandPressable;

static inline ::GlobalNamespace::ConsentHoldButton* New_ctor() ;

/// @brief Method OnDisable, addr 0x5a6a92c, size 0x4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnTriggerEnter, addr 0x5a6a930, size 0x210, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5a6ab40, size 0x84, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method ResetHold, addr 0x5a6a880, size 0xac, virtual false, abstract: false, final false
inline void ResetHold() ;

/// @brief Method Update, addr 0x5a6abc4, size 0x4b8, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Action* const& __cordl_internal_get_HoldComplete() const;

constexpr ::System::Action*& __cordl_internal_get_HoldComplete() ;

constexpr float_t const& __cordl_internal_get_cooldownUntil() const;

constexpr float_t& __cordl_internal_get_cooldownUntil() ;

constexpr float_t const& __cordl_internal_get_elapsed() const;

constexpr float_t& __cordl_internal_get_elapsed() ;

constexpr ::GlobalNamespace::ConsentHoldButton_Feedback const& __cordl_internal_get_feedback() const;

constexpr ::GlobalNamespace::ConsentHoldButton_Feedback& __cordl_internal_get_feedback() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_fill() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_fill() ;

constexpr float_t const& __cordl_internal_get_holdDurationSeconds() const;

constexpr float_t& __cordl_internal_get_holdDurationSeconds() ;

constexpr bool const& __cordl_internal_get_leftHandPressable() const;

constexpr bool& __cordl_internal_get_leftHandPressable() ;

constexpr bool const& __cordl_internal_get_pressing() const;

constexpr bool& __cordl_internal_get_pressing() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_pressingCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_pressingCollider() ;

constexpr bool const& __cordl_internal_get_pressingHandIsLeft() const;

constexpr bool& __cordl_internal_get_pressingHandIsLeft() ;

constexpr bool const& __cordl_internal_get_rightHandPressable() const;

constexpr bool& __cordl_internal_get_rightHandPressable() ;

constexpr void __cordl_internal_set_HoldComplete(::System::Action*  value) ;

constexpr void __cordl_internal_set_cooldownUntil(float_t  value) ;

constexpr void __cordl_internal_set_elapsed(float_t  value) ;

constexpr void __cordl_internal_set_feedback(::GlobalNamespace::ConsentHoldButton_Feedback  value) ;

constexpr void __cordl_internal_set_fill(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set_holdDurationSeconds(float_t  value) ;

constexpr void __cordl_internal_set_leftHandPressable(bool  value) ;

constexpr void __cordl_internal_set_pressing(bool  value) ;

constexpr void __cordl_internal_set_pressingCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_pressingHandIsLeft(bool  value) ;

constexpr void __cordl_internal_set_rightHandPressable(bool  value) ;

/// @brief Method .ctor, addr 0x5a6b07c, size 0x34, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_HoldComplete, addr 0x5a6a748, size 0x9c, virtual false, abstract: false, final false
inline void add_HoldComplete(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_HoldComplete, addr 0x5a6a7e4, size 0x9c, virtual false, abstract: false, final false
inline void remove_HoldComplete(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConsentHoldButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConsentHoldButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConsentHoldButton(ConsentHoldButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConsentHoldButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConsentHoldButton(ConsentHoldButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3096};

/// [Tooltip("Seconds the button must be held before it triggers.")]
/// [SerializeField]
/// @brief Field holdDurationSeconds, offset: 0x20, size: 0x4, def value: None
 float_t  ___holdDurationSeconds;

/// [SerializeField]
/// @brief Field leftHandPressable, offset: 0x24, size: 0x1, def value: None
 bool  ___leftHandPressable;

/// [SerializeField]
/// @brief Field rightHandPressable, offset: 0x25, size: 0x1, def value: None
 bool  ___rightHandPressable;

/// [Tooltip("Stretched child image scaled on X from 0 to 1 while held (pivot must be on the left edge).")]
/// [SerializeField]
/// @brief Field fill, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___fill;

/// [SerializeField]
/// @brief Field feedback, offset: 0x30, size: 0x18, def value: None
 ::GlobalNamespace::ConsentHoldButton_Feedback  ___feedback;

/// [CompilerGenerated]
/// @brief Field HoldComplete, offset: 0x48, size: 0x8, def value: None
 ::System::Action*  ___HoldComplete;

/// @brief Field pressing, offset: 0x50, size: 0x1, def value: None
 bool  ___pressing;

/// @brief Field elapsed, offset: 0x54, size: 0x4, def value: None
 float_t  ___elapsed;

/// @brief Field pressingCollider, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___pressingCollider;

/// @brief Field pressingHandIsLeft, offset: 0x60, size: 0x1, def value: None
 bool  ___pressingHandIsLeft;

/// @brief Field cooldownUntil, offset: 0x64, size: 0x4, def value: None
 float_t  ___cooldownUntil;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConsentHoldButton, ___holdDurationSeconds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentHoldButton, ___leftHandPressable) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentHoldButton, ___rightHandPressable) == 0x25, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentHoldButton, ___fill) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentHoldButton, ___feedback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentHoldButton, ___HoldComplete) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentHoldButton, ___pressing) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentHoldButton, ___elapsed) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentHoldButton, ___pressingCollider) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentHoldButton, ___pressingHandIsLeft) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentHoldButton, ___cooldownUntil) == 0x64, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ConsentHoldButton) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
