#pragma once
// IWYU pragma private; include "GlobalNamespace/GRUIScoreboardEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GRUIScoreboardEntry)
namespace GlobalNamespace {
struct GRUIScoreboard_ScoreboardScreen;
}
namespace GlobalNamespace {
class VRRig;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class GRUIScoreboardEntry;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRUIScoreboardEntry*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRUIScoreboardEntry*, "", "GRUIScoreboardEntry");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRUIScoreboardEntry
class CORDL_TYPE GRUIScoreboardEntry : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field currencySet, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_currencySet, put=__cordl_internal_set_currencySet)) int32_t  currencySet;

/// @brief Field defaultUIParent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultUIParent, put=__cordl_internal_set_defaultUIParent)) ::UnityW<::UnityEngine::GameObject>  defaultUIParent;

/// @brief Field playerActorId, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_playerActorId, put=__cordl_internal_set_playerActorId)) int32_t  playerActorId;

/// @brief Field playerCurrencyLabel, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCurrencyLabel, put=__cordl_internal_set_playerCurrencyLabel)) ::UnityW<::TMPro::TMP_Text>  playerCurrencyLabel;

/// @brief Field playerCutLabel, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCutLabel, put=__cordl_internal_set_playerCutLabel)) ::UnityW<::TMPro::TMP_Text>  playerCutLabel;

/// @brief Field playerNameLabel, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerNameLabel, put=__cordl_internal_set_playerNameLabel)) ::UnityW<::TMPro::TMP_Text>  playerNameLabel;

/// @brief Field playerPercentageLabel, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerPercentageLabel, put=__cordl_internal_set_playerPercentageLabel)) ::UnityW<::TMPro::TMP_Text>  playerPercentageLabel;

/// @brief Field playerTimeLabel, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerTimeLabel, put=__cordl_internal_set_playerTimeLabel)) ::UnityW<::TMPro::TMP_Text>  playerTimeLabel;

/// @brief Field playerTitleLabel, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerTitleLabel, put=__cordl_internal_set_playerTitleLabel)) ::UnityW<::TMPro::TMP_Text>  playerTitleLabel;

/// @brief Field shiftCutParent, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_shiftCutParent, put=__cordl_internal_set_shiftCutParent)) ::UnityW<::UnityEngine::GameObject>  shiftCutParent;

/// @brief Field titleSet, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_titleSet, put=__cordl_internal_set_titleSet)) ::StringW  titleSet;

static inline ::GlobalNamespace::GRUIScoreboardEntry* New_ctor() ;

/// @brief Method Refresh, addr 0x58ecb4c, size 0x69c, virtual false, abstract: false, final false
inline void Refresh(::GlobalNamespace::VRRig*  vrRig, ::GlobalNamespace::GRUIScoreboard_ScoreboardScreen  screenType) ;

/// @brief Method Setup, addr 0x58ec9a0, size 0x10, virtual false, abstract: false, final false
inline void Setup(::GlobalNamespace::VRRig*  vrRig, int32_t  playerActorId, ::GlobalNamespace::GRUIScoreboard_ScoreboardScreen  screenType) ;

constexpr int32_t const& __cordl_internal_get_currencySet() const;

constexpr int32_t& __cordl_internal_get_currencySet() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_defaultUIParent() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_defaultUIParent() ;

constexpr int32_t const& __cordl_internal_get_playerActorId() const;

constexpr int32_t& __cordl_internal_get_playerActorId() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_playerCurrencyLabel() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_playerCurrencyLabel() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_playerCutLabel() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_playerCutLabel() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_playerNameLabel() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_playerNameLabel() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_playerPercentageLabel() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_playerPercentageLabel() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_playerTimeLabel() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_playerTimeLabel() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_playerTitleLabel() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_playerTitleLabel() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_shiftCutParent() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_shiftCutParent() ;

constexpr ::StringW const& __cordl_internal_get_titleSet() const;

constexpr ::StringW& __cordl_internal_get_titleSet() ;

constexpr void __cordl_internal_set_currencySet(int32_t  value) ;

constexpr void __cordl_internal_set_defaultUIParent(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_playerActorId(int32_t  value) ;

constexpr void __cordl_internal_set_playerCurrencyLabel(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_playerCutLabel(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_playerNameLabel(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_playerPercentageLabel(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_playerTimeLabel(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_playerTitleLabel(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_shiftCutParent(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_titleSet(::StringW  value) ;

/// @brief Method .ctor, addr 0x58ed1e8, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRUIScoreboardEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRUIScoreboardEntry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRUIScoreboardEntry(GRUIScoreboardEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRUIScoreboardEntry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRUIScoreboardEntry(GRUIScoreboardEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2105};

/// [SerializeField]
/// @brief Field playerNameLabel, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___playerNameLabel;

/// [SerializeField]
/// @brief Field playerCutLabel, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___playerCutLabel;

/// @brief Field defaultUIParent, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___defaultUIParent;

/// [SerializeField]
/// @brief Field playerTitleLabel, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___playerTitleLabel;

/// [SerializeField]
/// @brief Field playerCurrencyLabel, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___playerCurrencyLabel;

/// @brief Field shiftCutParent, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___shiftCutParent;

/// [SerializeField]
/// @brief Field playerTimeLabel, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___playerTimeLabel;

/// [SerializeField]
/// @brief Field playerPercentageLabel, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___playerPercentageLabel;

/// @brief Field playerActorId, offset: 0x60, size: 0x4, def value: None
 int32_t  ___playerActorId;

/// @brief Field currencySet, offset: 0x64, size: 0x4, def value: None
 int32_t  ___currencySet;

/// @brief Field titleSet, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___titleSet;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRUIScoreboardEntry, ___playerNameLabel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIScoreboardEntry, ___playerCutLabel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIScoreboardEntry, ___defaultUIParent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIScoreboardEntry, ___playerTitleLabel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIScoreboardEntry, ___playerCurrencyLabel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIScoreboardEntry, ___shiftCutParent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIScoreboardEntry, ___playerTimeLabel) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIScoreboardEntry, ___playerPercentageLabel) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIScoreboardEntry, ___playerActorId) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIScoreboardEntry, ___currencySet) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIScoreboardEntry, ___titleSet) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRUIScoreboardEntry) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
