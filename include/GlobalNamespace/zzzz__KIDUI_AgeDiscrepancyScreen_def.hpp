#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_AgeDiscrepancyScreen.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KIDUI_AgeDiscrepancyScreen)
namespace GlobalNamespace {
struct KIDUI_AgeDiscrepancyScreen__ShowAgeDiscrepancyScreenWithAwait_d__8;
}
namespace GlobalNamespace {
struct KIDUI_AgeDiscrepancyScreen__ShowAgeDiscrepancyScreenWithAwait_d__9;
}
namespace GlobalNamespace {
struct KIDUI_AgeDiscrepancyScreen__WaitForCompletion_d__10;
}
namespace GlobalNamespace {
class LocalizedText;
}
namespace System::Threading::Tasks {
class Task;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class IntVariable;
}
namespace UnityEngine::Localization {
class LocalizedString;
}
// Forward declare root types
namespace GlobalNamespace {
class KIDUI_AgeDiscrepancyScreen;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDUI_AgeDiscrepancyScreen*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUI_AgeDiscrepancyScreen*, "", "KIDUI_AgeDiscrepancyScreen");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUI_AgeDiscrepancyScreen
class CORDL_TYPE KIDUI_AgeDiscrepancyScreen : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _ShowAgeDiscrepancyScreenWithAwait_d__8 = ::GlobalNamespace::KIDUI_AgeDiscrepancyScreen__ShowAgeDiscrepancyScreenWithAwait_d__8;

using _ShowAgeDiscrepancyScreenWithAwait_d__9 = ::GlobalNamespace::KIDUI_AgeDiscrepancyScreen__ShowAgeDiscrepancyScreenWithAwait_d__9;

using _WaitForCompletion_d__10 = ::GlobalNamespace::KIDUI_AgeDiscrepancyScreen__WaitForCompletion_d__10;

/// @brief Field _accountAgeVar, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__accountAgeVar, put=__cordl_internal_set__accountAgeVar)) ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  _accountAgeVar;

/// @brief Field _bodyLocStr, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__bodyLocStr, put=__cordl_internal_set__bodyLocStr)) ::UnityEngine::Localization::LocalizedString*  _bodyLocStr;

/// @brief Field _bodyTextLoc, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__bodyTextLoc, put=__cordl_internal_set__bodyTextLoc)) ::UnityW<::GlobalNamespace::LocalizedText>  _bodyTextLoc;

/// @brief Field _descriptionText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__descriptionText, put=__cordl_internal_set__descriptionText)) ::UnityW<::TMPro::TMP_Text>  _descriptionText;

/// @brief Field _hasCompleted, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasCompleted, put=__cordl_internal_set__hasCompleted)) bool  _hasCompleted;

/// @brief Field _lowestAgeVar, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__lowestAgeVar, put=__cordl_internal_set__lowestAgeVar)) ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  _lowestAgeVar;

/// @brief Field _userAgeVar, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__userAgeVar, put=__cordl_internal_set__userAgeVar)) ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  _userAgeVar;

/// @brief Method Awake, addr 0x5a4f8f4, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckLocalizationReferences, addr 0x5a4f8f8, size 0x30c, virtual false, abstract: false, final false
inline void CheckLocalizationReferences() ;

static inline ::GlobalNamespace::KIDUI_AgeDiscrepancyScreen* New_ctor() ;

/// @brief Method OnHoldComplete, addr 0x5a4fed0, size 0xc, virtual false, abstract: false, final false
inline void OnHoldComplete() ;

/// @brief Method OnQuitPressed, addr 0x5a4fedc, size 0x50, virtual false, abstract: false, final false
inline void OnQuitPressed() ;

/// [AsyncStateMachine(typeof(KIDUI_AgeDiscrepancyScreen::<ShowAgeDiscrepancyScreenWithAwait>d__8))]
/// @brief Method ShowAgeDiscrepancyScreenWithAwait, addr 0x5a4fc04, size 0xf8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ShowAgeDiscrepancyScreenWithAwait(::StringW  description) ;

/// [AsyncStateMachine(typeof(KIDUI_AgeDiscrepancyScreen::<ShowAgeDiscrepancyScreenWithAwait>d__9))]
/// @brief Method ShowAgeDiscrepancyScreenWithAwait, addr 0x5a4fcfc, size 0xfc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ShowAgeDiscrepancyScreenWithAwait(int32_t  userAge, int32_t  accAge, int32_t  lowestAge) ;

/// [AsyncStateMachine(typeof(KIDUI_AgeDiscrepancyScreen::<WaitForCompletion>d__10))]
/// @brief Method WaitForCompletion, addr 0x5a4fdf8, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WaitForCompletion() ;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable* const& __cordl_internal_get__accountAgeVar() const;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*& __cordl_internal_get__accountAgeVar() ;

constexpr ::UnityEngine::Localization::LocalizedString* const& __cordl_internal_get__bodyLocStr() const;

constexpr ::UnityEngine::Localization::LocalizedString*& __cordl_internal_get__bodyLocStr() ;

constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& __cordl_internal_get__bodyTextLoc() const;

constexpr ::UnityW<::GlobalNamespace::LocalizedText>& __cordl_internal_get__bodyTextLoc() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__descriptionText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__descriptionText() ;

constexpr bool const& __cordl_internal_get__hasCompleted() const;

constexpr bool& __cordl_internal_get__hasCompleted() ;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable* const& __cordl_internal_get__lowestAgeVar() const;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*& __cordl_internal_get__lowestAgeVar() ;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable* const& __cordl_internal_get__userAgeVar() const;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*& __cordl_internal_get__userAgeVar() ;

constexpr void __cordl_internal_set__accountAgeVar(::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  value) ;

constexpr void __cordl_internal_set__bodyLocStr(::UnityEngine::Localization::LocalizedString*  value) ;

constexpr void __cordl_internal_set__bodyTextLoc(::UnityW<::GlobalNamespace::LocalizedText>  value) ;

constexpr void __cordl_internal_set__descriptionText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__hasCompleted(bool  value) ;

constexpr void __cordl_internal_set__lowestAgeVar(::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  value) ;

constexpr void __cordl_internal_set__userAgeVar(::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  value) ;

/// @brief Method .ctor, addr 0x5a4ff2c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDUI_AgeDiscrepancyScreen() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_AgeDiscrepancyScreen", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUI_AgeDiscrepancyScreen(KIDUI_AgeDiscrepancyScreen && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_AgeDiscrepancyScreen", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUI_AgeDiscrepancyScreen(KIDUI_AgeDiscrepancyScreen const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3010};

/// [SerializeField]
/// @brief Field _descriptionText, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____descriptionText;

/// [Header("Localization")]
/// [SerializeField]
/// @brief Field _bodyTextLoc, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalizedText>  ____bodyTextLoc;

/// @brief Field _hasCompleted, offset: 0x30, size: 0x1, def value: None
 bool  ____hasCompleted;

/// @brief Field _bodyLocStr, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedString*  ____bodyLocStr;

/// @brief Field _userAgeVar, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  ____userAgeVar;

/// @brief Field _accountAgeVar, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  ____accountAgeVar;

/// @brief Field _lowestAgeVar, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  ____lowestAgeVar;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDUI_AgeDiscrepancyScreen, ____descriptionText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AgeDiscrepancyScreen, ____bodyTextLoc) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AgeDiscrepancyScreen, ____hasCompleted) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AgeDiscrepancyScreen, ____bodyLocStr) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AgeDiscrepancyScreen, ____userAgeVar) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AgeDiscrepancyScreen, ____accountAgeVar) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AgeDiscrepancyScreen, ____lowestAgeVar) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDUI_AgeDiscrepancyScreen) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
