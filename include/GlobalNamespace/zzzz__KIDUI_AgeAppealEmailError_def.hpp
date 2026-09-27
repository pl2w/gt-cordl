#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_AgeAppealEmailError.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KIDUI_AgeAppealEmailError)
namespace GlobalNamespace {
class KIDUI_AgeAppealEmailScreen;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GlobalNamespace {
class KIDUI_AgeAppealEmailError;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDUI_AgeAppealEmailError*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUI_AgeAppealEmailError*, "", "KIDUI_AgeAppealEmailError");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUI_AgeAppealEmailError
class CORDL_TYPE KIDUI_AgeAppealEmailError : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _ageAppealEmailScreen, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__ageAppealEmailScreen, put=__cordl_internal_set__ageAppealEmailScreen)) ::UnityW<::GlobalNamespace::KIDUI_AgeAppealEmailScreen>  _ageAppealEmailScreen;

/// @brief Field _emailText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__emailText, put=__cordl_internal_set__emailText)) ::UnityW<::TMPro::TMP_Text>  _emailText;

/// @brief Field hasChallenge, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasChallenge, put=__cordl_internal_set_hasChallenge)) bool  hasChallenge;

/// @brief Field newAge, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_newAge, put=__cordl_internal_set_newAge)) int32_t  newAge;

static inline ::GlobalNamespace::KIDUI_AgeAppealEmailError* New_ctor() ;

/// @brief Method ShowAgeAppealEmailErrorScreen, addr 0x5a4ed54, size 0x50, virtual false, abstract: false, final false
inline void ShowAgeAppealEmailErrorScreen(bool  hasChallenge, int32_t  newAge, ::StringW  email) ;

constexpr ::UnityW<::GlobalNamespace::KIDUI_AgeAppealEmailScreen> const& __cordl_internal_get__ageAppealEmailScreen() const;

constexpr ::UnityW<::GlobalNamespace::KIDUI_AgeAppealEmailScreen>& __cordl_internal_get__ageAppealEmailScreen() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__emailText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__emailText() ;

constexpr bool const& __cordl_internal_get_hasChallenge() const;

constexpr bool& __cordl_internal_get_hasChallenge() ;

constexpr int32_t const& __cordl_internal_get_newAge() const;

constexpr int32_t& __cordl_internal_get_newAge() ;

constexpr void __cordl_internal_set__ageAppealEmailScreen(::UnityW<::GlobalNamespace::KIDUI_AgeAppealEmailScreen>  value) ;

constexpr void __cordl_internal_set__emailText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_hasChallenge(bool  value) ;

constexpr void __cordl_internal_set_newAge(int32_t  value) ;

/// @brief Method .ctor, addr 0x5a4f8ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method onBackPressed, addr 0x5a4f8b0, size 0x3c, virtual false, abstract: false, final false
inline void onBackPressed() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDUI_AgeAppealEmailError() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_AgeAppealEmailError", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUI_AgeAppealEmailError(KIDUI_AgeAppealEmailError && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_AgeAppealEmailError", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUI_AgeAppealEmailError(KIDUI_AgeAppealEmailError const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3006};

/// [SerializeField]
/// @brief Field _ageAppealEmailScreen, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUI_AgeAppealEmailScreen>  ____ageAppealEmailScreen;

/// [SerializeField]
/// @brief Field _emailText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____emailText;

/// @brief Field hasChallenge, offset: 0x30, size: 0x1, def value: None
 bool  ___hasChallenge;

/// @brief Field newAge, offset: 0x34, size: 0x4, def value: None
 int32_t  ___newAge;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDUI_AgeAppealEmailError, ____ageAppealEmailScreen) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AgeAppealEmailError, ____emailText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AgeAppealEmailError, ___hasChallenge) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AgeAppealEmailError, ___newAge) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDUI_AgeAppealEmailError) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
