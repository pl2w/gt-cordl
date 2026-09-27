#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDAgeAppeal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(KIDAgeAppeal)
namespace GlobalNamespace {
class AgeSliderWithProgressBar;
}
namespace GlobalNamespace {
struct KIDAgeAppeal__OnNewAgeConfirmed_d__6;
}
namespace GlobalNamespace {
class KIDUI_AgeAppealEmailScreen;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class KIDAgeAppeal;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDAgeAppeal*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDAgeAppeal*, "", "KIDAgeAppeal");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDAgeAppeal
class CORDL_TYPE KIDAgeAppeal : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _OnNewAgeConfirmed_d__6 = ::GlobalNamespace::KIDAgeAppeal__OnNewAgeConfirmed_d__6;

/// @brief Field _ageAppealEmailScreen, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__ageAppealEmailScreen, put=__cordl_internal_set__ageAppealEmailScreen)) ::UnityW<::GlobalNamespace::KIDUI_AgeAppealEmailScreen>  _ageAppealEmailScreen;

/// @brief Field _ageSlider, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__ageSlider, put=__cordl_internal_set__ageSlider)) ::UnityW<::GlobalNamespace::AgeSliderWithProgressBar>  _ageSlider;

/// @brief Field _ageText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__ageText, put=__cordl_internal_set__ageText)) ::UnityW<::TMPro::TMP_Text>  _ageText;

/// @brief Field _inputsContainer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputsContainer, put=__cordl_internal_set__inputsContainer)) ::UnityW<::UnityEngine::GameObject>  _inputsContainer;

/// @brief Field _monkeLoader, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__monkeLoader, put=__cordl_internal_set__monkeLoader)) ::UnityW<::UnityEngine::GameObject>  _monkeLoader;

static inline ::GlobalNamespace::KIDAgeAppeal* New_ctor() ;

/// [AsyncStateMachine(typeof(KIDAgeAppeal::<OnNewAgeConfirmed>d__6))]
/// @brief Method OnNewAgeConfirmed, addr 0x5a27704, size 0xa8, virtual false, abstract: false, final false
inline void OnNewAgeConfirmed() ;

/// @brief Method ShowAgeAppealScreen, addr 0x5a2764c, size 0xb8, virtual false, abstract: false, final false
inline void ShowAgeAppealScreen() ;

constexpr ::UnityW<::GlobalNamespace::KIDUI_AgeAppealEmailScreen> const& __cordl_internal_get__ageAppealEmailScreen() const;

constexpr ::UnityW<::GlobalNamespace::KIDUI_AgeAppealEmailScreen>& __cordl_internal_get__ageAppealEmailScreen() ;

constexpr ::UnityW<::GlobalNamespace::AgeSliderWithProgressBar> const& __cordl_internal_get__ageSlider() const;

constexpr ::UnityW<::GlobalNamespace::AgeSliderWithProgressBar>& __cordl_internal_get__ageSlider() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__ageText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__ageText() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__inputsContainer() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__inputsContainer() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__monkeLoader() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__monkeLoader() ;

constexpr void __cordl_internal_set__ageAppealEmailScreen(::UnityW<::GlobalNamespace::KIDUI_AgeAppealEmailScreen>  value) ;

constexpr void __cordl_internal_set__ageSlider(::UnityW<::GlobalNamespace::AgeSliderWithProgressBar>  value) ;

constexpr void __cordl_internal_set__ageText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__inputsContainer(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__monkeLoader(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5a277ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDAgeAppeal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDAgeAppeal", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDAgeAppeal(KIDAgeAppeal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDAgeAppeal", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDAgeAppeal(KIDAgeAppeal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2900};

/// [SerializeField]
/// @brief Field _ageText, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____ageText;

/// [SerializeField]
/// @brief Field _ageAppealEmailScreen, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUI_AgeAppealEmailScreen>  ____ageAppealEmailScreen;

/// [SerializeField]
/// @brief Field _inputsContainer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____inputsContainer;

/// [SerializeField]
/// @brief Field _monkeLoader, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____monkeLoader;

/// @brief Field _ageSlider, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AgeSliderWithProgressBar>  ____ageSlider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDAgeAppeal, ____ageText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDAgeAppeal, ____ageAppealEmailScreen) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDAgeAppeal, ____inputsContainer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDAgeAppeal, ____monkeLoader) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDAgeAppeal, ____ageSlider) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDAgeAppeal) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
