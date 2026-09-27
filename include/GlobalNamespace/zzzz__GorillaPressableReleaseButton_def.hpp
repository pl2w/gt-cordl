#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaPressableReleaseButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
CORDL_MODULE_EXPORT(GorillaPressableReleaseButton)
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaPressableReleaseButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaPressableReleaseButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaPressableReleaseButton*, "", "GorillaPressableReleaseButton");
// Dependencies GorillaPressableButton
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaPressableReleaseButton
class CORDL_TYPE GorillaPressableReleaseButton : public ::GlobalNamespace::GorillaPressableButton {
public:
// Declarations
/// @brief Field onReleaseButton, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_onReleaseButton, put=__cordl_internal_set_onReleaseButton)) ::UnityEngine::Events::UnityEvent*  onReleaseButton;

/// @brief Field touchingCollider, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_touchingCollider, put=__cordl_internal_set_touchingCollider)) ::UnityW<::UnityEngine::Collider>  touchingCollider;

/// @brief Method ButtonDeactivation, addr 0x599f2f4, size 0x4, virtual true, abstract: false, final false
inline void ButtonDeactivation() ;

/// @brief Method ButtonDeactivationWithHand, addr 0x599f2f8, size 0x4, virtual true, abstract: false, final false
inline void ButtonDeactivationWithHand(bool  isLeftHand) ;

static inline ::GlobalNamespace::GorillaPressableReleaseButton* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x599e968, size 0x4c0, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x599ee28, size 0x4a0, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method ResetState, addr 0x599f2c8, size 0x2c, virtual true, abstract: false, final false
inline void ResetState() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onReleaseButton() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onReleaseButton() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_touchingCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_touchingCollider() ;

constexpr void __cordl_internal_set_onReleaseButton(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_touchingCollider(::UnityW<::UnityEngine::Collider>  value) ;

/// @brief Method .ctor, addr 0x599f2fc, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaPressableReleaseButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaPressableReleaseButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaPressableReleaseButton(GorillaPressableReleaseButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaPressableReleaseButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaPressableReleaseButton(GorillaPressableReleaseButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2614};

/// @brief Field onReleaseButton, offset: 0xb8, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onReleaseButton;

/// @brief Field touchingCollider, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___touchingCollider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaPressableReleaseButton, ___onReleaseButton) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPressableReleaseButton, ___touchingCollider) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaPressableReleaseButton) == 0xc8, "Size mismatch!");

} // namespace end def GlobalNamespace
