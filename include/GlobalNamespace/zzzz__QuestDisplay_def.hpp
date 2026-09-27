#pragma once
// IWYU pragma private; include "GlobalNamespace/QuestDisplay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(QuestDisplay)
namespace GlobalNamespace {
class ProgressDisplay;
}
namespace GlobalNamespace {
class RotatingQuest;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class QuestDisplay;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::QuestDisplay*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::QuestDisplay*, "", "QuestDisplay");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: QuestDisplay
class CORDL_TYPE QuestDisplay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsChanged)) bool  IsChanged;

/// @brief Field _lastUpdate, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastUpdate, put=__cordl_internal_set__lastUpdate)) int32_t  _lastUpdate;

/// @brief Field dailyCompleteIndicator, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_dailyCompleteIndicator, put=__cordl_internal_set_dailyCompleteIndicator)) ::UnityW<::UnityEngine::GameObject>  dailyCompleteIndicator;

/// @brief Field dailyIncompleteIndicator, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_dailyIncompleteIndicator, put=__cordl_internal_set_dailyIncompleteIndicator)) ::UnityW<::UnityEngine::GameObject>  dailyIncompleteIndicator;

/// @brief Field progressDisplay, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_progressDisplay, put=__cordl_internal_set_progressDisplay)) ::UnityW<::GlobalNamespace::ProgressDisplay>  progressDisplay;

/// @brief Field quest, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_quest, put=__cordl_internal_set_quest)) ::GlobalNamespace::RotatingQuest*  quest;

/// @brief Field statusText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_statusText, put=__cordl_internal_set_statusText)) ::UnityW<::TMPro::TMP_Text>  statusText;

/// @brief Field text, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_text, put=__cordl_internal_set_text)) ::UnityW<::TMPro::TMP_Text>  text;

/// @brief Field weeklyCompleteIndicator, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_weeklyCompleteIndicator, put=__cordl_internal_set_weeklyCompleteIndicator)) ::UnityW<::UnityEngine::GameObject>  weeklyCompleteIndicator;

/// @brief Field weeklyIncompleteIndicator, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_weeklyIncompleteIndicator, put=__cordl_internal_set_weeklyIncompleteIndicator)) ::UnityW<::UnityEngine::GameObject>  weeklyIncompleteIndicator;

static inline ::GlobalNamespace::QuestDisplay* New_ctor() ;

/// @brief Method UpdateCompletionIndicator, addr 0x562bd28, size 0xc0, virtual false, abstract: false, final false
inline void UpdateCompletionIndicator() ;

/// @brief Method UpdateDisplay, addr 0x5625900, size 0xcc, virtual false, abstract: false, final false
inline void UpdateDisplay() ;

constexpr int32_t const& __cordl_internal_get__lastUpdate() const;

constexpr int32_t& __cordl_internal_get__lastUpdate() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_dailyCompleteIndicator() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_dailyCompleteIndicator() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_dailyIncompleteIndicator() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_dailyIncompleteIndicator() ;

constexpr ::UnityW<::GlobalNamespace::ProgressDisplay> const& __cordl_internal_get_progressDisplay() const;

constexpr ::UnityW<::GlobalNamespace::ProgressDisplay>& __cordl_internal_get_progressDisplay() ;

constexpr ::GlobalNamespace::RotatingQuest* const& __cordl_internal_get_quest() const;

constexpr ::GlobalNamespace::RotatingQuest*& __cordl_internal_get_quest() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_statusText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_statusText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_text() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_text() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_weeklyCompleteIndicator() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_weeklyCompleteIndicator() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_weeklyIncompleteIndicator() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_weeklyIncompleteIndicator() ;

constexpr void __cordl_internal_set__lastUpdate(int32_t  value) ;

constexpr void __cordl_internal_set_dailyCompleteIndicator(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_dailyIncompleteIndicator(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_progressDisplay(::UnityW<::GlobalNamespace::ProgressDisplay>  value) ;

constexpr void __cordl_internal_set_quest(::GlobalNamespace::RotatingQuest*  value) ;

constexpr void __cordl_internal_set_statusText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_text(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_weeklyCompleteIndicator(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_weeklyIncompleteIndicator(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x562bde8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsChanged, addr 0x56258dc, size 0x24, virtual false, abstract: false, final false
inline bool get_IsChanged() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QuestDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QuestDisplay", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
QuestDisplay(QuestDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QuestDisplay", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
QuestDisplay(QuestDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{610};

/// [SerializeField]
/// @brief Field progressDisplay, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressDisplay>  ___progressDisplay;

/// [SerializeField]
/// @brief Field text, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___text;

/// [SerializeField]
/// @brief Field statusText, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___statusText;

/// [SerializeField]
/// @brief Field dailyIncompleteIndicator, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___dailyIncompleteIndicator;

/// [SerializeField]
/// @brief Field dailyCompleteIndicator, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___dailyCompleteIndicator;

/// [SerializeField]
/// @brief Field weeklyIncompleteIndicator, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___weeklyIncompleteIndicator;

/// [SerializeField]
/// @brief Field weeklyCompleteIndicator, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___weeklyCompleteIndicator;

/// @brief Field quest, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::RotatingQuest*  ___quest;

/// @brief Field _lastUpdate, offset: 0x60, size: 0x4, def value: None
 int32_t  ____lastUpdate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::QuestDisplay, ___progressDisplay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuestDisplay, ___text) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuestDisplay, ___statusText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuestDisplay, ___dailyIncompleteIndicator) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuestDisplay, ___dailyCompleteIndicator) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuestDisplay, ___weeklyIncompleteIndicator) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuestDisplay, ___weeklyCompleteIndicator) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuestDisplay, ___quest) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuestDisplay, ____lastUpdate) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::QuestDisplay) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
