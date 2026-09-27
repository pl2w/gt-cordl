#pragma once
// IWYU pragma private; include "GlobalNamespace/SIQuestBoard.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SIQuestBoard_RoomFXDurationState_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SIQuestBoard)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
struct SIQuestBoard_RoomFXDurationState;
}
namespace GlobalNamespace {
class SIUIPlayerQuestDisplay;
}
namespace GlobalNamespace {
struct SuperInfectionManager_RoomFXType;
}
namespace GlobalNamespace {
class SuperInfection;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class SIQuestBoard;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIQuestBoard*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIQuestBoard*, "", "SIQuestBoard");
// Dependencies SIQuestBoard::RoomFXDurationState, UnityEngine.Bounds, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIQuestBoard
class CORDL_TYPE SIQuestBoard : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using RoomFXDurationState = ::GlobalNamespace::SIQuestBoard_RoomFXDurationState;

/// @brief Field RoomFXDurationReadout, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_RoomFXDurationReadout, put=__cordl_internal_set_RoomFXDurationReadout)) ::UnityW<::TMPro::TextMeshPro>  RoomFXDurationReadout;

/// @brief Field _lastTotalSeconds, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__lastTotalSeconds, put=setStaticF__lastTotalSeconds)) int32_t  _lastTotalSeconds;

/// @brief Field _timeToNewQuests_chars, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__timeToNewQuests_chars, put=setStaticF__timeToNewQuests_chars)) ::ArrayW<char16_t>  _timeToNewQuests_chars;

/// @brief Field bonusPointArea, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_bonusPointArea, put=__cordl_internal_set_bonusPointArea)) ::UnityW<::UnityEngine::BoxCollider>  bonusPointArea;

/// @brief Field bounds, offset 0x38, size 0x18 
 __declspec(property(get=__cordl_internal_get_bounds, put=__cordl_internal_set_bounds)) ::UnityEngine::Bounds  bounds;

/// @brief Field celebrateParticle, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_celebrateParticle, put=__cordl_internal_set_celebrateParticle)) ::UnityW<::UnityEngine::ParticleSystem>  celebrateParticle;

/// @brief Field currentDuration, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentDuration, put=__cordl_internal_set_currentDuration)) ::GlobalNamespace::SIQuestBoard_RoomFXDurationState  currentDuration;

/// @brief Field questDisplays, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_questDisplays, put=__cordl_internal_set_questDisplays)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIUIPlayerQuestDisplay>>*  questDisplays;

/// @brief Field roomFXDurations, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_roomFXDurations, put=__cordl_internal_set_roomFXDurations)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIQuestBoard_RoomFXDurationState,float_t>*  roomFXDurations;

/// @brief Field superInfection, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_superInfection, put=__cordl_internal_set_superInfection)) ::UnityW<::GlobalNamespace::SuperInfection>  superInfection;

/// @brief Field timeToNewQuests, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeToNewQuests, put=__cordl_internal_set_timeToNewQuests)) ::UnityW<::TMPro::TextMeshProUGUI>  timeToNewQuests;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method AuthorityUpdateScreenAssignments, addr 0x5ae5178, size 0x378, virtual false, abstract: false, final false
inline void AuthorityUpdateScreenAssignments() ;

/// @brief Method CheatAddBonusPoints, addr 0x5ae5590, size 0x4, virtual false, abstract: false, final false
inline void CheatAddBonusPoints(int32_t  points) ;

/// @brief Method CheatAddPoints, addr 0x5ae558c, size 0x4, virtual false, abstract: false, final false
inline void CheatAddPoints(int32_t  points) ;

/// @brief Method CheatRoomFXDurationMinus, addr 0x5ae565c, size 0xc8, virtual false, abstract: false, final false
inline void CheatRoomFXDurationMinus() ;

/// @brief Method CheatRoomFXDurationPlus, addr 0x5ae5594, size 0xc8, virtual false, abstract: false, final false
inline void CheatRoomFXDurationPlus() ;

/// @brief Method CheatRoomFX_Bouncy, addr 0x5ae5824, size 0x54, virtual false, abstract: false, final false
inline void CheatRoomFX_Bouncy() ;

/// @brief Method CheatRoomFX_ConstLowG, addr 0x5ae57d0, size 0x54, virtual false, abstract: false, final false
inline void CheatRoomFX_ConstLowG() ;

/// @brief Method CheatRoomFX_LunarMode, addr 0x5ae577c, size 0x54, virtual false, abstract: false, final false
inline void CheatRoomFX_LunarMode() ;

/// @brief Method CheatRoomFX_Supercharge, addr 0x5ae5878, size 0x54, virtual false, abstract: false, final false
inline void CheatRoomFX_Supercharge() ;

/// @brief Method CheatRoomFX_Underwater, addr 0x5ae5724, size 0x54, virtual false, abstract: false, final false
inline void CheatRoomFX_Underwater() ;

/// @brief Method ForceCompleteQuest, addr 0x5ae5588, size 0x4, virtual false, abstract: false, final false
inline void ForceCompleteQuest(int32_t  index) ;

/// @brief Method GrantBonusPointProgress, addr 0x5ae4e98, size 0xf8, virtual false, abstract: false, final false
inline void GrantBonusPointProgress() ;

/// @brief Method IGorillaSliceableSimple.SliceUpdate, addr 0x5ae4f90, size 0x1e8, virtual true, abstract: false, final true
inline void IGorillaSliceableSimple_SliceUpdate() ;

static inline ::GlobalNamespace::SIQuestBoard* New_ctor() ;

/// @brief Method OnDisable, addr 0x5ae557c, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5ae54f0, size 0x8c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ReadDataPUN, addr 0x5ae4db4, size 0xe4, virtual false, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method StartRoomFX, addr 0x5ae5778, size 0x4, virtual false, abstract: false, final false
inline void StartRoomFX(::GlobalNamespace::SuperInfectionManager_RoomFXType  fxType, float_t  duration) ;

/// @brief Method WriteDataPUN, addr 0x5ae4cec, size 0xc8, virtual false, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_RoomFXDurationReadout() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_RoomFXDurationReadout() ;

constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get_bonusPointArea() const;

constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get_bonusPointArea() ;

constexpr ::UnityEngine::Bounds const& __cordl_internal_get_bounds() const;

constexpr ::UnityEngine::Bounds& __cordl_internal_get_bounds() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_celebrateParticle() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_celebrateParticle() ;

constexpr ::GlobalNamespace::SIQuestBoard_RoomFXDurationState const& __cordl_internal_get_currentDuration() const;

constexpr ::GlobalNamespace::SIQuestBoard_RoomFXDurationState& __cordl_internal_get_currentDuration() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIUIPlayerQuestDisplay>>* const& __cordl_internal_get_questDisplays() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIUIPlayerQuestDisplay>>*& __cordl_internal_get_questDisplays() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIQuestBoard_RoomFXDurationState,float_t>* const& __cordl_internal_get_roomFXDurations() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIQuestBoard_RoomFXDurationState,float_t>*& __cordl_internal_get_roomFXDurations() ;

constexpr ::UnityW<::GlobalNamespace::SuperInfection> const& __cordl_internal_get_superInfection() const;

constexpr ::UnityW<::GlobalNamespace::SuperInfection>& __cordl_internal_get_superInfection() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_timeToNewQuests() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_timeToNewQuests() ;

constexpr void __cordl_internal_set_RoomFXDurationReadout(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_bonusPointArea(::UnityW<::UnityEngine::BoxCollider>  value) ;

constexpr void __cordl_internal_set_bounds(::UnityEngine::Bounds  value) ;

constexpr void __cordl_internal_set_celebrateParticle(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_currentDuration(::GlobalNamespace::SIQuestBoard_RoomFXDurationState  value) ;

constexpr void __cordl_internal_set_questDisplays(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIUIPlayerQuestDisplay>>*  value) ;

constexpr void __cordl_internal_set_roomFXDurations(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIQuestBoard_RoomFXDurationState,float_t>*  value) ;

constexpr void __cordl_internal_set_superInfection(::UnityW<::GlobalNamespace::SuperInfection>  value) ;

constexpr void __cordl_internal_set_timeToNewQuests(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

/// @brief Method .ctor, addr 0x5ae58cc, size 0x11c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__lastTotalSeconds() ;

static inline ::ArrayW<char16_t> getStaticF__timeToNewQuests_chars() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

static inline void setStaticF__lastTotalSeconds(int32_t  value) ;

static inline void setStaticF__timeToNewQuests_chars(::ArrayW<char16_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIQuestBoard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIQuestBoard", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIQuestBoard(SIQuestBoard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIQuestBoard", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIQuestBoard(SIQuestBoard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{337};

/// @brief Field _timeToNewQuests_index offset 0xffffffff size 0x4
static constexpr int32_t  _timeToNewQuests_index{static_cast<int32_t>(0xf)};

/// @brief Field superInfection, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SuperInfection>  ___superInfection;

/// @brief Field questDisplays, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIUIPlayerQuestDisplay>>*  ___questDisplays;

/// @brief Field bonusPointArea, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::BoxCollider>  ___bonusPointArea;

/// @brief Field bounds, offset: 0x38, size: 0x18, def value: None
 ::UnityEngine::Bounds  ___bounds;

/// @brief Field celebrateParticle, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___celebrateParticle;

/// @brief Field timeToNewQuests, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___timeToNewQuests;

/// @brief Field roomFXDurations, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIQuestBoard_RoomFXDurationState,float_t>*  ___roomFXDurations;

/// @brief Field currentDuration, offset: 0x68, size: 0x4, def value: None
 ::GlobalNamespace::SIQuestBoard_RoomFXDurationState  ___currentDuration;

/// [SerializeField]
/// @brief Field RoomFXDurationReadout, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___RoomFXDurationReadout;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIQuestBoard, ___superInfection) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIQuestBoard, ___questDisplays) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIQuestBoard, ___bonusPointArea) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIQuestBoard, ___bounds) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIQuestBoard, ___celebrateParticle) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIQuestBoard, ___timeToNewQuests) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIQuestBoard, ___roomFXDurations) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIQuestBoard, ___currentDuration) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIQuestBoard, ___RoomFXDurationReadout) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIQuestBoard) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
