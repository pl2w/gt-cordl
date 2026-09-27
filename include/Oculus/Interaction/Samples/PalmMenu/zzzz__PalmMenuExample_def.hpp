#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/PalmMenu/PalmMenuExample.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PalmMenuExample)
namespace Oculus::Interaction {
class PokeInteractable;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace Oculus::Interaction::Samples::PalmMenu {
class PalmMenuExample;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample*, "Oculus.Interaction.Samples.PalmMenu", "PalmMenuExample");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.RectTransform
namespace Oculus::Interaction::Samples::PalmMenu {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.PalmMenu.PalmMenuExample
class CORDL_TYPE PalmMenuExample : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _buttons, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__buttons, put=__cordl_internal_set__buttons)) ::ArrayW<::UnityW<::UnityEngine::RectTransform>>  _buttons;

/// @brief Field _currentSelectedButtonIdx, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentSelectedButtonIdx, put=__cordl_internal_set__currentSelectedButtonIdx)) int32_t  _currentSelectedButtonIdx;

/// @brief Field _defaultButtonDistance, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__defaultButtonDistance, put=__cordl_internal_set__defaultButtonDistance)) float_t  _defaultButtonDistance;

/// @brief Field _hideMenuAudio, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__hideMenuAudio, put=__cordl_internal_set__hideMenuAudio)) ::UnityW<::UnityEngine::AudioSource>  _hideMenuAudio;

/// @brief Field _menuInteractable, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__menuInteractable, put=__cordl_internal_set__menuInteractable)) ::UnityW<::Oculus::Interaction::PokeInteractable>  _menuInteractable;

/// @brief Field _menuPanel, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__menuPanel, put=__cordl_internal_set__menuPanel)) ::UnityW<::UnityEngine::RectTransform>  _menuPanel;

/// @brief Field _menuParent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__menuParent, put=__cordl_internal_set__menuParent)) ::UnityW<::UnityEngine::GameObject>  _menuParent;

/// @brief Field _paginationButtonScaleCurve, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__paginationButtonScaleCurve, put=__cordl_internal_set__paginationButtonScaleCurve)) ::UnityEngine::AnimationCurve*  _paginationButtonScaleCurve;

/// @brief Field _paginationDots, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__paginationDots, put=__cordl_internal_set__paginationDots)) ::ArrayW<::UnityW<::UnityEngine::RectTransform>>  _paginationDots;

/// @brief Field _paginationSwipeAudio, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__paginationSwipeAudio, put=__cordl_internal_set__paginationSwipeAudio)) ::UnityW<::UnityEngine::AudioSource>  _paginationSwipeAudio;

/// @brief Field _selectionIndicatorDot, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__selectionIndicatorDot, put=__cordl_internal_set__selectionIndicatorDot)) ::UnityW<::UnityEngine::RectTransform>  _selectionIndicatorDot;

/// @brief Field _showMenuAudio, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__showMenuAudio, put=__cordl_internal_set__showMenuAudio)) ::UnityW<::UnityEngine::AudioSource>  _showMenuAudio;

/// @brief Method CalculateNearestButtonIdx, addr 0xa4416a4, size 0x1ac, virtual false, abstract: false, final false
inline int32_t CalculateNearestButtonIdx() ;

/// @brief Method LerpToButton, addr 0xa441920, size 0x118, virtual false, abstract: false, final false
inline void LerpToButton() ;

static inline ::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample* New_ctor() ;

/// @brief Method Start, addr 0xa44164c, size 0x58, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method ToggleMenu, addr 0xa441a38, size 0x68, virtual false, abstract: false, final false
inline void ToggleMenu() ;

/// @brief Method Update, addr 0xa441850, size 0xd0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::RectTransform>> const& __cordl_internal_get__buttons() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::RectTransform>>& __cordl_internal_get__buttons() ;

constexpr int32_t const& __cordl_internal_get__currentSelectedButtonIdx() const;

constexpr int32_t& __cordl_internal_get__currentSelectedButtonIdx() ;

constexpr float_t const& __cordl_internal_get__defaultButtonDistance() const;

constexpr float_t& __cordl_internal_get__defaultButtonDistance() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__hideMenuAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__hideMenuAudio() ;

constexpr ::UnityW<::Oculus::Interaction::PokeInteractable> const& __cordl_internal_get__menuInteractable() const;

constexpr ::UnityW<::Oculus::Interaction::PokeInteractable>& __cordl_internal_get__menuInteractable() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__menuPanel() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__menuPanel() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__menuParent() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__menuParent() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__paginationButtonScaleCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__paginationButtonScaleCurve() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::RectTransform>> const& __cordl_internal_get__paginationDots() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::RectTransform>>& __cordl_internal_get__paginationDots() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__paginationSwipeAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__paginationSwipeAudio() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__selectionIndicatorDot() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__selectionIndicatorDot() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__showMenuAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__showMenuAudio() ;

constexpr void __cordl_internal_set__buttons(::ArrayW<::UnityW<::UnityEngine::RectTransform>>  value) ;

constexpr void __cordl_internal_set__currentSelectedButtonIdx(int32_t  value) ;

constexpr void __cordl_internal_set__defaultButtonDistance(float_t  value) ;

constexpr void __cordl_internal_set__hideMenuAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set__menuInteractable(::UnityW<::Oculus::Interaction::PokeInteractable>  value) ;

constexpr void __cordl_internal_set__menuPanel(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__menuParent(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__paginationButtonScaleCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__paginationDots(::ArrayW<::UnityW<::UnityEngine::RectTransform>>  value) ;

constexpr void __cordl_internal_set__paginationSwipeAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set__selectionIndicatorDot(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__showMenuAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

/// @brief Method .ctor, addr 0xa441aa0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PalmMenuExample() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PalmMenuExample", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PalmMenuExample(PalmMenuExample && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PalmMenuExample", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PalmMenuExample(PalmMenuExample const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28353};

/// [SerializeField]
/// @brief Field _menuInteractable, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::PokeInteractable>  ____menuInteractable;

/// [SerializeField]
/// @brief Field _menuParent, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____menuParent;

/// [SerializeField]
/// @brief Field _menuPanel, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____menuPanel;

/// [SerializeField]
/// @brief Field _buttons, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::RectTransform>>  ____buttons;

/// [SerializeField]
/// @brief Field _paginationDots, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::RectTransform>>  ____paginationDots;

/// [SerializeField]
/// @brief Field _selectionIndicatorDot, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____selectionIndicatorDot;

/// [SerializeField]
/// @brief Field _paginationButtonScaleCurve, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____paginationButtonScaleCurve;

/// [SerializeField]
/// @brief Field _defaultButtonDistance, offset: 0x58, size: 0x4, def value: None
 float_t  ____defaultButtonDistance;

/// [SerializeField]
/// @brief Field _paginationSwipeAudio, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____paginationSwipeAudio;

/// [SerializeField]
/// @brief Field _showMenuAudio, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____showMenuAudio;

/// [SerializeField]
/// @brief Field _hideMenuAudio, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____hideMenuAudio;

/// @brief Field _currentSelectedButtonIdx, offset: 0x78, size: 0x4, def value: None
 int32_t  ____currentSelectedButtonIdx;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample, ____menuInteractable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample, ____menuParent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample, ____menuPanel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample, ____buttons) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample, ____paginationDots) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample, ____selectionIndicatorDot) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample, ____paginationButtonScaleCurve) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample, ____defaultButtonDistance) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample, ____paginationSwipeAudio) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample, ____showMenuAudio) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample, ____hideMenuAudio) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample, ____currentSelectedButtonIdx) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample) == 0x80, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples::PalmMenu
