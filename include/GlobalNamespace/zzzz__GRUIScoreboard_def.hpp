#pragma once
// IWYU pragma private; include "GlobalNamespace/GRUIScoreboard.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRUIScoreboard_ScoreboardScreen_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GRUIScoreboard)
namespace GlobalNamespace {
class GRUIScoreboardEntry;
}
namespace GlobalNamespace {
struct GRUIScoreboard_ScoreboardScreen;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class GRUIScoreboard;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRUIScoreboard*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRUIScoreboard*, "", "GRUIScoreboard");
// Dependencies GRUIScoreboard::ScoreboardScreen, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRUIScoreboard
class CORDL_TYPE GRUIScoreboard : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ScoreboardScreen = ::GlobalNamespace::GRUIScoreboard_ScoreboardScreen;

/// @brief Field buttonText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonText, put=__cordl_internal_set_buttonText)) ::UnityW<::TMPro::TMP_Text>  buttonText;

/// @brief Field calcTextParent, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_calcTextParent, put=__cordl_internal_set_calcTextParent)) ::UnityW<::UnityEngine::GameObject>  calcTextParent;

/// @brief Field currentScreen, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentScreen, put=__cordl_internal_set_currentScreen)) ::GlobalNamespace::GRUIScoreboard_ScoreboardScreen  currentScreen;

/// @brief Field entries, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_entries, put=__cordl_internal_set_entries)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRUIScoreboardEntry>>*  entries;

/// @brief Field infoTextParent, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_infoTextParent, put=__cordl_internal_set_infoTextParent)) ::UnityW<::UnityEngine::GameObject>  infoTextParent;

/// @brief Field total, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_total, put=__cordl_internal_set_total)) ::UnityW<::TMPro::TMP_Text>  total;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

static inline ::GlobalNamespace::GRUIScoreboard* New_ctor() ;

/// @brief Method OnDisable, addr 0x58ec994, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x58ec988, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Refresh, addr 0x58ec704, size 0x284, virtual false, abstract: false, final false
inline void Refresh(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  vrRigs) ;

/// @brief Method SliceUpdate, addr 0x58ec680, size 0x84, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method SwitchState, addr 0x58eca9c, size 0x9c, virtual false, abstract: false, final false
inline void SwitchState() ;

/// @brief Method SwitchToScreen, addr 0x58ec9b0, size 0xec, virtual false, abstract: false, final false
inline void SwitchToScreen(::GlobalNamespace::GRUIScoreboard_ScoreboardScreen  screenType) ;

/// @brief Method ValidPage, addr 0x58ecb38, size 0xc, virtual false, abstract: false, final false
static inline bool ValidPage(::GlobalNamespace::GRUIScoreboard_ScoreboardScreen  screen) ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_buttonText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_buttonText() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_calcTextParent() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_calcTextParent() ;

constexpr ::GlobalNamespace::GRUIScoreboard_ScoreboardScreen const& __cordl_internal_get_currentScreen() const;

constexpr ::GlobalNamespace::GRUIScoreboard_ScoreboardScreen& __cordl_internal_get_currentScreen() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRUIScoreboardEntry>>* const& __cordl_internal_get_entries() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRUIScoreboardEntry>>*& __cordl_internal_get_entries() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_infoTextParent() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_infoTextParent() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_total() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_total() ;

constexpr void __cordl_internal_set_buttonText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_calcTextParent(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_currentScreen(::GlobalNamespace::GRUIScoreboard_ScoreboardScreen  value) ;

constexpr void __cordl_internal_set_entries(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRUIScoreboardEntry>>*  value) ;

constexpr void __cordl_internal_set_infoTextParent(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_total(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x58ecb44, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRUIScoreboard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRUIScoreboard", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRUIScoreboard(GRUIScoreboard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRUIScoreboard", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRUIScoreboard(GRUIScoreboard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2104};

/// @brief Field entries, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRUIScoreboardEntry>>*  ___entries;

/// @brief Field total, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___total;

/// @brief Field buttonText, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___buttonText;

/// @brief Field currentScreen, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::GRUIScoreboard_ScoreboardScreen  ___currentScreen;

/// @brief Field infoTextParent, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___infoTextParent;

/// @brief Field calcTextParent, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___calcTextParent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRUIScoreboard, ___entries) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIScoreboard, ___total) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIScoreboard, ___buttonText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIScoreboard, ___currentScreen) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIScoreboard, ___infoTextParent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIScoreboard, ___calcTextParent) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRUIScoreboard) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
