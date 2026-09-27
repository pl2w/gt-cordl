#pragma once
// IWYU pragma private; include "GlobalNamespace/SIUIPlayerQuestEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SIUIPlayerQuestEntry)
namespace GlobalNamespace {
class SIUIProgressBar;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class SIUIPlayerQuestEntry;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIUIPlayerQuestEntry*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIUIPlayerQuestEntry*, "", "SIUIPlayerQuestEntry");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIUIPlayerQuestEntry
class CORDL_TYPE SIUIPlayerQuestEntry : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field background, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_background, put=__cordl_internal_set_background)) ::UnityW<::UnityEngine::UI::Image>  background;

/// @brief Field completeOverlay, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_completeOverlay, put=__cordl_internal_set_completeOverlay)) ::UnityW<::UnityEngine::GameObject>  completeOverlay;

/// @brief Field lastQuestId, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastQuestId, put=__cordl_internal_set_lastQuestId)) int32_t  lastQuestId;

/// @brief Field lastQuestProgress, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastQuestProgress, put=__cordl_internal_set_lastQuestProgress)) int32_t  lastQuestProgress;

/// @brief Field newQuestTag, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_newQuestTag, put=__cordl_internal_set_newQuestTag)) ::UnityW<::UnityEngine::GameObject>  newQuestTag;

/// @brief Field noQuestAvailable, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_noQuestAvailable, put=__cordl_internal_set_noQuestAvailable)) ::UnityW<::UnityEngine::GameObject>  noQuestAvailable;

/// @brief Field progress, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_progress, put=__cordl_internal_set_progress)) ::UnityW<::GlobalNamespace::SIUIProgressBar>  progress;

/// @brief Field questDescription, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_questDescription, put=__cordl_internal_set_questDescription)) ::UnityW<::TMPro::TextMeshProUGUI>  questDescription;

/// @brief Field questInfo, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_questInfo, put=__cordl_internal_set_questInfo)) ::UnityW<::UnityEngine::GameObject>  questInfo;

/// @brief Method Awake, addr 0x5af7d8c, size 0xc, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::SIUIPlayerQuestEntry* New_ctor() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_background() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_background() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_completeOverlay() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_completeOverlay() ;

constexpr int32_t const& __cordl_internal_get_lastQuestId() const;

constexpr int32_t& __cordl_internal_get_lastQuestId() ;

constexpr int32_t const& __cordl_internal_get_lastQuestProgress() const;

constexpr int32_t& __cordl_internal_get_lastQuestProgress() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_newQuestTag() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_newQuestTag() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_noQuestAvailable() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_noQuestAvailable() ;

constexpr ::UnityW<::GlobalNamespace::SIUIProgressBar> const& __cordl_internal_get_progress() const;

constexpr ::UnityW<::GlobalNamespace::SIUIProgressBar>& __cordl_internal_get_progress() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_questDescription() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_questDescription() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_questInfo() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_questInfo() ;

constexpr void __cordl_internal_set_background(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_completeOverlay(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_lastQuestId(int32_t  value) ;

constexpr void __cordl_internal_set_lastQuestProgress(int32_t  value) ;

constexpr void __cordl_internal_set_newQuestTag(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_noQuestAvailable(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_progress(::UnityW<::GlobalNamespace::SIUIProgressBar>  value) ;

constexpr void __cordl_internal_set_questDescription(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_questInfo(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5af7d98, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIUIPlayerQuestEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIUIPlayerQuestEntry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIUIPlayerQuestEntry(SIUIPlayerQuestEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIUIPlayerQuestEntry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIUIPlayerQuestEntry(SIUIPlayerQuestEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{379};

/// @brief Field background, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___background;

/// @brief Field progress, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIUIProgressBar>  ___progress;

/// @brief Field questDescription, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___questDescription;

/// @brief Field completeOverlay, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___completeOverlay;

/// @brief Field questInfo, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___questInfo;

/// @brief Field noQuestAvailable, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___noQuestAvailable;

/// @brief Field newQuestTag, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___newQuestTag;

/// @brief Field lastQuestId, offset: 0x58, size: 0x4, def value: None
 int32_t  ___lastQuestId;

/// @brief Field lastQuestProgress, offset: 0x5c, size: 0x4, def value: None
 int32_t  ___lastQuestProgress;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIUIPlayerQuestEntry, ___background) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIUIPlayerQuestEntry, ___progress) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIUIPlayerQuestEntry, ___questDescription) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIUIPlayerQuestEntry, ___completeOverlay) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIUIPlayerQuestEntry, ___questInfo) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIUIPlayerQuestEntry, ___noQuestAvailable) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIUIPlayerQuestEntry, ___newQuestTag) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIUIPlayerQuestEntry, ___lastQuestId) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIUIPlayerQuestEntry, ___lastQuestProgress) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIUIPlayerQuestEntry) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
