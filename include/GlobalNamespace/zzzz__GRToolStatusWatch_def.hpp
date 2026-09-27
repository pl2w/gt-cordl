#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolStatusWatch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRToolStatusWatch_WatchState_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GRToolStatusWatch)
namespace GlobalNamespace {
class GRPlayer;
}
namespace GlobalNamespace {
class GRToolProgressionManager;
}
namespace GlobalNamespace {
struct GRToolStatusWatch_WatchState;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class IGameEntityComponent;
}
namespace System::Text {
class StringBuilder;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GRToolStatusWatch;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRToolStatusWatch*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRToolStatusWatch*, "", "GRToolStatusWatch");
// Dependencies GRToolStatusWatch::WatchState, UnityEngine.GameObject, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRToolStatusWatch
class CORDL_TYPE GRToolStatusWatch : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using WatchState = ::GlobalNamespace::GRToolStatusWatch_WatchState;

/// @brief Field currentPlayer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentPlayer, put=__cordl_internal_set_currentPlayer)) ::UnityW<::GlobalNamespace::GRPlayer>  currentPlayer;

/// @brief Field disabledText, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_disabledText, put=__cordl_internal_set_disabledText)) ::UnityW<::TMPro::TextMeshPro>  disabledText;

/// @brief Field disabledVisuals, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_disabledVisuals, put=__cordl_internal_set_disabledVisuals)) ::UnityW<::UnityEngine::GameObject>  disabledVisuals;

/// @brief Field enabledVisuals, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_enabledVisuals, put=__cordl_internal_set_enabledVisuals)) ::UnityW<::UnityEngine::GameObject>  enabledVisuals;

/// @brief Field gameEntity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntity, put=__cordl_internal_set_gameEntity)) ::UnityW<::GlobalNamespace::GameEntity>  gameEntity;

/// @brief Field gimbaledCompass, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_gimbaledCompass, put=__cordl_internal_set_gimbaledCompass)) ::UnityW<::UnityEngine::Transform>  gimbaledCompass;

/// @brief Field healthHearts, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_healthHearts, put=__cordl_internal_set_healthHearts)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  healthHearts;

/// @brief Field homeBase, offset 0x58, size 0xc 
 __declspec(property(get=__cordl_internal_get_homeBase, put=__cordl_internal_set_homeBase)) ::UnityEngine::Vector3  homeBase;

/// @brief Field lastCredits, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastCredits, put=__cordl_internal_set_lastCredits)) int32_t  lastCredits;

/// @brief Field lastGrade, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastGrade, put=__cordl_internal_set_lastGrade)) int32_t  lastGrade;

/// @brief Field lastJuice, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastJuice, put=__cordl_internal_set_lastJuice)) int32_t  lastJuice;

/// @brief Field lastKills, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastKills, put=__cordl_internal_set_lastKills)) int32_t  lastKills;

/// @brief Field progression, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_progression, put=__cordl_internal_set_progression)) ::UnityW<::GlobalNamespace::GRToolProgressionManager>  progression;

/// @brief Field sb, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_sb, put=__cordl_internal_set_sb)) ::System::Text::StringBuilder*  sb;

/// @brief Field shieldSymbol, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_shieldSymbol, put=__cordl_internal_set_shieldSymbol)) ::UnityW<::UnityEngine::GameObject>  shieldSymbol;

/// @brief Field state, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::GRToolStatusWatch_WatchState  state;

/// @brief Field statsText, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_statsText, put=__cordl_internal_set_statsText)) ::UnityW<::TMPro::TextMeshPro>  statsText;

/// @brief Field visibleHP, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_visibleHP, put=__cordl_internal_set_visibleHP)) int32_t  visibleHP;

/// @brief Field visibleShield, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_visibleShield, put=__cordl_internal_set_visibleShield)) int32_t  visibleShield;

/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr operator  ::GlobalNamespace::IGameEntityComponent*() noexcept;

static inline ::GlobalNamespace::GRToolStatusWatch* New_ctor() ;

/// @brief Method OnEntityDestroy, addr 0x58f0c88, size 0x4, virtual true, abstract: false, final true
inline void OnEntityDestroy() ;

/// @brief Method OnEntityInit, addr 0x58f0628, size 0x228, virtual true, abstract: false, final true
inline void OnEntityInit() ;

/// @brief Method OnEntityStateChange, addr 0x58f0c8c, size 0x4, virtual true, abstract: false, final true
inline void OnEntityStateChange(int64_t  prevState, int64_t  newState) ;

/// @brief Method RemoveSnappedPlayer, addr 0x58f0dac, size 0x7c, virtual false, abstract: false, final false
inline void RemoveSnappedPlayer() ;

/// @brief Method Update, addr 0x58f0e28, size 0x78, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateSnappedPlayer, addr 0x58f0c90, size 0x11c, virtual false, abstract: false, final false
inline void UpdateSnappedPlayer() ;

/// @brief Method UpdateVisuals, addr 0x58f0850, size 0x438, virtual false, abstract: false, final false
inline void UpdateVisuals() ;

constexpr ::UnityW<::GlobalNamespace::GRPlayer> const& __cordl_internal_get_currentPlayer() const;

constexpr ::UnityW<::GlobalNamespace::GRPlayer>& __cordl_internal_get_currentPlayer() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_disabledText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_disabledText() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_disabledVisuals() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_disabledVisuals() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_enabledVisuals() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_enabledVisuals() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_gameEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_gameEntity() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_gimbaledCompass() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_gimbaledCompass() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_healthHearts() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_healthHearts() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_homeBase() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_homeBase() ;

constexpr int32_t const& __cordl_internal_get_lastCredits() const;

constexpr int32_t& __cordl_internal_get_lastCredits() ;

constexpr int32_t const& __cordl_internal_get_lastGrade() const;

constexpr int32_t& __cordl_internal_get_lastGrade() ;

constexpr int32_t const& __cordl_internal_get_lastJuice() const;

constexpr int32_t& __cordl_internal_get_lastJuice() ;

constexpr int32_t const& __cordl_internal_get_lastKills() const;

constexpr int32_t& __cordl_internal_get_lastKills() ;

constexpr ::UnityW<::GlobalNamespace::GRToolProgressionManager> const& __cordl_internal_get_progression() const;

constexpr ::UnityW<::GlobalNamespace::GRToolProgressionManager>& __cordl_internal_get_progression() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_sb() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get_sb() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_shieldSymbol() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_shieldSymbol() ;

constexpr ::GlobalNamespace::GRToolStatusWatch_WatchState const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::GRToolStatusWatch_WatchState& __cordl_internal_get_state() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_statsText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_statsText() ;

constexpr int32_t const& __cordl_internal_get_visibleHP() const;

constexpr int32_t& __cordl_internal_get_visibleHP() ;

constexpr int32_t const& __cordl_internal_get_visibleShield() const;

constexpr int32_t& __cordl_internal_get_visibleShield() ;

constexpr void __cordl_internal_set_currentPlayer(::UnityW<::GlobalNamespace::GRPlayer>  value) ;

constexpr void __cordl_internal_set_disabledText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_disabledVisuals(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_enabledVisuals(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_gimbaledCompass(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_healthHearts(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_homeBase(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastCredits(int32_t  value) ;

constexpr void __cordl_internal_set_lastGrade(int32_t  value) ;

constexpr void __cordl_internal_set_lastJuice(int32_t  value) ;

constexpr void __cordl_internal_set_lastKills(int32_t  value) ;

constexpr void __cordl_internal_set_progression(::UnityW<::GlobalNamespace::GRToolProgressionManager>  value) ;

constexpr void __cordl_internal_set_sb(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set_shieldSymbol(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::GRToolStatusWatch_WatchState  value) ;

constexpr void __cordl_internal_set_statsText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_visibleHP(int32_t  value) ;

constexpr void __cordl_internal_set_visibleShield(int32_t  value) ;

/// @brief Method .ctor, addr 0x58f0ea0, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* i___GlobalNamespace__IGameEntityComponent() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRToolStatusWatch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRToolStatusWatch", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRToolStatusWatch(GRToolStatusWatch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRToolStatusWatch", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRToolStatusWatch(GRToolStatusWatch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2116};

/// @brief Field gameEntity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___gameEntity;

/// @brief Field currentPlayer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRPlayer>  ___currentPlayer;

/// @brief Field visibleHP, offset: 0x30, size: 0x4, def value: None
 int32_t  ___visibleHP;

/// @brief Field visibleShield, offset: 0x34, size: 0x4, def value: None
 int32_t  ___visibleShield;

/// @brief Field disabledVisuals, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___disabledVisuals;

/// @brief Field enabledVisuals, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___enabledVisuals;

/// @brief Field healthHearts, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___healthHearts;

/// @brief Field shieldSymbol, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___shieldSymbol;

/// @brief Field homeBase, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___homeBase;

/// @brief Field gimbaledCompass, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___gimbaledCompass;

/// @brief Field statsText, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___statsText;

/// @brief Field disabledText, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___disabledText;

/// @brief Field lastKills, offset: 0x80, size: 0x4, def value: None
 int32_t  ___lastKills;

/// @brief Field lastCredits, offset: 0x84, size: 0x4, def value: None
 int32_t  ___lastCredits;

/// @brief Field lastJuice, offset: 0x88, size: 0x4, def value: None
 int32_t  ___lastJuice;

/// @brief Field lastGrade, offset: 0x8c, size: 0x4, def value: None
 int32_t  ___lastGrade;

/// @brief Field sb, offset: 0x90, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ___sb;

/// @brief Field state, offset: 0x98, size: 0x4, def value: None
 ::GlobalNamespace::GRToolStatusWatch_WatchState  ___state;

/// @brief Field progression, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRToolProgressionManager>  ___progression;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRToolStatusWatch, ___gameEntity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolStatusWatch, ___currentPlayer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolStatusWatch, ___visibleHP) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolStatusWatch, ___visibleShield) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolStatusWatch, ___disabledVisuals) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolStatusWatch, ___enabledVisuals) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolStatusWatch, ___healthHearts) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolStatusWatch, ___shieldSymbol) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolStatusWatch, ___homeBase) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolStatusWatch, ___gimbaledCompass) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolStatusWatch, ___statsText) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolStatusWatch, ___disabledText) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolStatusWatch, ___lastKills) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolStatusWatch, ___lastCredits) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolStatusWatch, ___lastJuice) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolStatusWatch, ___lastGrade) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolStatusWatch, ___sb) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolStatusWatch, ___state) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolStatusWatch, ___progression) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRToolStatusWatch) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace
