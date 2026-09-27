#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderPieceTimer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderPieceTimer)
namespace GlobalNamespace {
class BuilderPiece;
}
namespace GlobalNamespace {
class IBuilderPieceComponent;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace GorillaTagScripts::Builder {
class BuilderSmallHandTrigger;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GorillaTagScripts::Builder {
class BuilderPieceTimer;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Builder::BuilderPieceTimer*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::BuilderPieceTimer*, "GorillaTagScripts.Builder", "BuilderPieceTimer");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.BuilderPieceTimer
class CORDL_TYPE BuilderPieceTimer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field activateSoundBank, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_activateSoundBank, put=__cordl_internal_set_activateSoundBank)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  activateSoundBank;

/// @brief Field buttonTrigger, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonTrigger, put=__cordl_internal_set_buttonTrigger)) ::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>  buttonTrigger;

/// @brief Field debounceTime, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_debounceTime, put=__cordl_internal_set_debounceTime)) float_t  debounceTime;

/// @brief Field displayText, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayText, put=__cordl_internal_set_displayText)) ::UnityW<::TMPro::TMP_Text>  displayText;

/// @brief Field isBoth, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_isBoth, put=__cordl_internal_set_isBoth)) bool  isBoth;

/// @brief Field isStart, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_isStart, put=__cordl_internal_set_isStart)) bool  isStart;

/// @brief Field lastTriggeredTime, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastTriggeredTime, put=__cordl_internal_set_lastTriggeredTime)) float_t  lastTriggeredTime;

/// @brief Field latestTime, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_latestTime, put=__cordl_internal_set_latestTime)) double_t  latestTime;

/// @brief Field myPiece, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_myPiece, put=__cordl_internal_set_myPiece)) ::UnityW<::GlobalNamespace::BuilderPiece>  myPiece;

/// @brief Field stopSoundBank, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_stopSoundBank, put=__cordl_internal_set_stopSoundBank)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  stopSoundBank;

/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceComponent"
constexpr operator  ::GlobalNamespace::IBuilderPieceComponent*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method Awake, addr 0x5c2a338, size 0x90, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GorillaTagScripts::Builder::BuilderPieceTimer* New_ctor() ;

/// @brief Method OnButtonPressed, addr 0x5c2a4a0, size 0x1ac, virtual false, abstract: false, final false
inline void OnButtonPressed() ;

/// @brief Method OnDestroy, addr 0x5c2a3c8, size 0xd8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnLocalTimerStarted, addr 0x5c2a81c, size 0xa0, virtual false, abstract: false, final false
inline void OnLocalTimerStarted() ;

/// @brief Method OnPieceActivate, addr 0x5c2ac54, size 0x280, virtual true, abstract: false, final true
inline void OnPieceActivate() ;

/// @brief Method OnPieceCreate, addr 0x5c2a998, size 0x17c, virtual true, abstract: false, final true
inline void OnPieceCreate(int32_t  pieceType, int32_t  pieceId) ;

/// @brief Method OnPieceDeactivate, addr 0x5c2aed4, size 0x250, virtual true, abstract: false, final true
inline void OnPieceDeactivate() ;

/// @brief Method OnPieceDestroy, addr 0x5c2ab14, size 0x13c, virtual true, abstract: false, final true
inline void OnPieceDestroy() ;

/// @brief Method OnPiecePlacementDeserialized, addr 0x5c2ac50, size 0x4, virtual true, abstract: false, final true
inline void OnPiecePlacementDeserialized() ;

/// @brief Method OnTimerStopped, addr 0x5c2a64c, size 0x1d0, virtual false, abstract: false, final false
inline void OnTimerStopped(int32_t  actorNum, int32_t  timeDelta) ;

/// @brief Method OnZoneChanged, addr 0x5c2a8bc, size 0xdc, virtual false, abstract: false, final false
inline void OnZoneChanged() ;

/// @brief Method Tick, addr 0x5c2b134, size 0x1c8, virtual true, abstract: false, final true
inline void Tick() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_activateSoundBank() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_activateSoundBank() ;

constexpr ::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger> const& __cordl_internal_get_buttonTrigger() const;

constexpr ::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>& __cordl_internal_get_buttonTrigger() ;

constexpr float_t const& __cordl_internal_get_debounceTime() const;

constexpr float_t& __cordl_internal_get_debounceTime() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_displayText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_displayText() ;

constexpr bool const& __cordl_internal_get_isBoth() const;

constexpr bool& __cordl_internal_get_isBoth() ;

constexpr bool const& __cordl_internal_get_isStart() const;

constexpr bool& __cordl_internal_get_isStart() ;

constexpr float_t const& __cordl_internal_get_lastTriggeredTime() const;

constexpr float_t& __cordl_internal_get_lastTriggeredTime() ;

constexpr double_t const& __cordl_internal_get_latestTime() const;

constexpr double_t& __cordl_internal_get_latestTime() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& __cordl_internal_get_myPiece() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& __cordl_internal_get_myPiece() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_stopSoundBank() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_stopSoundBank() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_activateSoundBank(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_buttonTrigger(::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>  value) ;

constexpr void __cordl_internal_set_debounceTime(float_t  value) ;

constexpr void __cordl_internal_set_displayText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_isBoth(bool  value) ;

constexpr void __cordl_internal_set_isStart(bool  value) ;

constexpr void __cordl_internal_set_lastTriggeredTime(float_t  value) ;

constexpr void __cordl_internal_set_latestTime(double_t  value) ;

constexpr void __cordl_internal_set_myPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value) ;

constexpr void __cordl_internal_set_stopSoundBank(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

/// @brief Method .ctor, addr 0x5c2b2fc, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x5c2b124, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::IBuilderPieceComponent"
constexpr ::GlobalNamespace::IBuilderPieceComponent* i___GlobalNamespace__IBuilderPieceComponent() noexcept;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x5c2b12c, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderPieceTimer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceTimer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderPieceTimer(BuilderPieceTimer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceTimer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderPieceTimer(BuilderPieceTimer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4161};

/// [SerializeField]
/// @brief Field myPiece, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  ___myPiece;

/// [SerializeField]
/// @brief Field isStart, offset: 0x28, size: 0x1, def value: None
 bool  ___isStart;

/// [SerializeField]
/// @brief Field isBoth, offset: 0x29, size: 0x1, def value: None
 bool  ___isBoth;

/// [SerializeField]
/// @brief Field buttonTrigger, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>  ___buttonTrigger;

/// [SerializeField]
/// @brief Field activateSoundBank, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___activateSoundBank;

/// [SerializeField]
/// @brief Field stopSoundBank, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___stopSoundBank;

/// [SerializeField]
/// @brief Field debounceTime, offset: 0x48, size: 0x4, def value: None
 float_t  ___debounceTime;

/// @brief Field lastTriggeredTime, offset: 0x4c, size: 0x4, def value: None
 float_t  ___lastTriggeredTime;

/// @brief Field latestTime, offset: 0x50, size: 0x8, def value: None
 double_t  ___latestTime;

/// [SerializeField]
/// @brief Field displayText, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___displayText;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x60, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceTimer, ___myPiece) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceTimer, ___isStart) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceTimer, ___isBoth) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceTimer, ___buttonTrigger) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceTimer, ___activateSoundBank) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceTimer, ___stopSoundBank) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceTimer, ___debounceTime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceTimer, ___lastTriggeredTime) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceTimer, ___latestTime) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceTimer, ___displayText) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceTimer, ____TickRunning_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::BuilderPieceTimer) == 0x68, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
