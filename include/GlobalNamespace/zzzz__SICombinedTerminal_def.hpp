#pragma once
// IWYU pragma private; include "GlobalNamespace/SICombinedTerminal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EKioskAnimState_def.hpp"
#include "GlobalNamespace/zzzz__GTAnimator_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SICombinedTerminal)
namespace GlobalNamespace {
struct EKioskAnimState;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
struct SICombinedTerminal_TerminalSubFunction;
}
namespace GlobalNamespace {
class SIGadgetDispenser;
}
namespace GlobalNamespace {
class SIPlayer;
}
namespace GlobalNamespace {
class SIResourceCollection;
}
namespace GlobalNamespace {
class SITechTreeStation;
}
namespace GlobalNamespace {
struct SITouchscreenButton_SITouchscreenButtonType;
}
namespace GlobalNamespace {
class SuperInfectionManager;
}
namespace GlobalNamespace {
class SuperInfection;
}
namespace GlobalNamespace {
class VRRig;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::IO {
class BinaryReader;
}
namespace System::IO {
class BinaryWriter;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SICombinedTerminal;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SICombinedTerminal*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SICombinedTerminal*, "", "SICombinedTerminal");
// Dependencies EKioskAnimState, GTAnimator, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SICombinedTerminal
class CORDL_TYPE SICombinedTerminal : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using TerminalSubFunction = ::GlobalNamespace::SICombinedTerminal_TerminalSubFunction;

 __declspec(property(get=get_ActivePage)) int32_t  ActivePage;

 __declspec(property(get=get_IsAuthority)) bool  IsAuthority;

 __declspec(property(get=get_SIManager)) ::UnityW<::GlobalNamespace::SuperInfectionManager>  SIManager;

/// @brief Field _activePage, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__activePage, put=__cordl_internal_set__activePage)) int32_t  _activePage;

/// @brief Field activePlayer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_activePlayer, put=__cordl_internal_set_activePlayer)) ::UnityW<::GlobalNamespace::SIPlayer>  activePlayer;

/// @brief Field activeUserBounds, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeUserBounds, put=__cordl_internal_set_activeUserBounds)) ::UnityW<::UnityEngine::Collider>  activeUserBounds;

/// @brief Field dispenser, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_dispenser, put=__cordl_internal_set_dispenser)) ::UnityW<::GlobalNamespace::SIGadgetDispenser>  dispenser;

/// @brief Field foldupDelay, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_foldupDelay, put=__cordl_internal_set_foldupDelay)) float_t  foldupDelay;

/// @brief Field foldupTimeStart, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_foldupTimeStart, put=__cordl_internal_set_foldupTimeStart)) float_t  foldupTimeStart;

/// @brief Field index, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Field isOccupied, offset 0x32, size 0x1 
 __declspec(property(get=__cordl_internal_get_isOccupied, put=__cordl_internal_set_isOccupied)) bool  isOccupied;

/// @brief Field isOccupiedByActivePlayer, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_isOccupiedByActivePlayer, put=__cordl_internal_set_isOccupiedByActivePlayer)) bool  isOccupiedByActivePlayer;

/// @brief Field isOccupiedByLocalPlayer, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_isOccupiedByLocalPlayer, put=__cordl_internal_set_isOccupiedByLocalPlayer)) bool  isOccupiedByLocalPlayer;

/// @brief Field m_gtAnimators, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_gtAnimators, put=__cordl_internal_set_m_gtAnimators)) ::ArrayW<::UnityW<::GlobalNamespace::GTAnimator>>  m_gtAnimators;

/// @brief Field onePointTwoText, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_onePointTwoText, put=__cordl_internal_set_onePointTwoText)) ::UnityW<::UnityEngine::Transform>  onePointTwoText;

/// @brief Field resourceCollection, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_resourceCollection, put=__cordl_internal_set_resourceCollection)) ::UnityW<::GlobalNamespace::SIResourceCollection>  resourceCollection;

/// @brief Field rigs, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigs, put=__cordl_internal_set_rigs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  rigs;

/// @brief Field state, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::EKioskAnimState  state;

/// @brief Field superInfection, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_superInfection, put=__cordl_internal_set_superInfection)) ::UnityW<::GlobalNamespace::SuperInfection>  superInfection;

/// @brief Field techTree, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_techTree, put=__cordl_internal_set_techTree)) ::UnityW<::GlobalNamespace::SITechTreeStation>  techTree;

/// @brief Field wasOccupied, offset 0x33, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasOccupied, put=__cordl_internal_set_wasOccupied)) bool  wasOccupied;

/// @brief Field wrongPlayerBuzz, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_wrongPlayerBuzz, put=__cordl_internal_set_wrongPlayerBuzz)) ::UnityW<::UnityEngine::AudioSource>  wrongPlayerBuzz;

/// @brief Field zeroZeroImage, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_zeroZeroImage, put=__cordl_internal_set_zeroZeroImage)) ::UnityW<::UnityEngine::Transform>  zeroZeroImage;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method AnimQueueState, addr 0x59da114, size 0xe4, virtual false, abstract: false, final false
inline void AnimQueueState(::GlobalNamespace::EKioskAnimState  newState) ;

/// @brief Method Awake, addr 0x59da950, size 0xd0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DeserializeZoneData, addr 0x59db408, size 0x7c, virtual false, abstract: false, final false
inline void DeserializeZoneData(::System::IO::BinaryReader*  reader) ;

static inline ::GlobalNamespace::SICombinedTerminal* New_ctor() ;

/// @brief Method OnDisable, addr 0x59d9dd0, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x59d9dc4, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PlayWrongPlayerBuzz, addr 0x59dc234, size 0x74, virtual false, abstract: false, final false
inline void PlayWrongPlayerBuzz(::UnityEngine::Transform*  xForm) ;

/// @brief Method PlayerHandScanned, addr 0x59db73c, size 0x258, virtual false, abstract: false, final false
inline void PlayerHandScanned(int32_t  actorNr) ;

/// @brief Method ReadDataPUN, addr 0x59daccc, size 0x164, virtual false, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method Reset, addr 0x59da1f8, size 0x98, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SerializeZoneData, addr 0x59db318, size 0x70, virtual false, abstract: false, final false
inline void SerializeZoneData(::System::IO::BinaryWriter*  writer) ;

/// @brief Method SetActivePage, addr 0x59da290, size 0x70, virtual false, abstract: false, final false
inline void SetActivePage(int32_t  pageId) ;

/// @brief Method SliceUpdate, addr 0x59d9ddc, size 0x338, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method TouchscreenButtonPressed, addr 0x59db99c, size 0x288, virtual false, abstract: false, final false
inline void TouchscreenButtonPressed(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  buttonType, int32_t  data, int32_t  actorNr, ::GlobalNamespace::SICombinedTerminal_TerminalSubFunction  subFunction) ;

/// @brief Method WriteDataPUN, addr 0x59daa20, size 0x158, virtual false, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr int32_t const& __cordl_internal_get__activePage() const;

constexpr int32_t& __cordl_internal_get__activePage() ;

constexpr ::UnityW<::GlobalNamespace::SIPlayer> const& __cordl_internal_get_activePlayer() const;

constexpr ::UnityW<::GlobalNamespace::SIPlayer>& __cordl_internal_get_activePlayer() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_activeUserBounds() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_activeUserBounds() ;

constexpr ::UnityW<::GlobalNamespace::SIGadgetDispenser> const& __cordl_internal_get_dispenser() const;

constexpr ::UnityW<::GlobalNamespace::SIGadgetDispenser>& __cordl_internal_get_dispenser() ;

constexpr float_t const& __cordl_internal_get_foldupDelay() const;

constexpr float_t& __cordl_internal_get_foldupDelay() ;

constexpr float_t const& __cordl_internal_get_foldupTimeStart() const;

constexpr float_t& __cordl_internal_get_foldupTimeStart() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr bool const& __cordl_internal_get_isOccupied() const;

constexpr bool& __cordl_internal_get_isOccupied() ;

constexpr bool const& __cordl_internal_get_isOccupiedByActivePlayer() const;

constexpr bool& __cordl_internal_get_isOccupiedByActivePlayer() ;

constexpr bool const& __cordl_internal_get_isOccupiedByLocalPlayer() const;

constexpr bool& __cordl_internal_get_isOccupiedByLocalPlayer() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GTAnimator>> const& __cordl_internal_get_m_gtAnimators() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GTAnimator>>& __cordl_internal_get_m_gtAnimators() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_onePointTwoText() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_onePointTwoText() ;

constexpr ::UnityW<::GlobalNamespace::SIResourceCollection> const& __cordl_internal_get_resourceCollection() const;

constexpr ::UnityW<::GlobalNamespace::SIResourceCollection>& __cordl_internal_get_resourceCollection() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* const& __cordl_internal_get_rigs() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*& __cordl_internal_get_rigs() ;

constexpr ::GlobalNamespace::EKioskAnimState const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::EKioskAnimState& __cordl_internal_get_state() ;

constexpr ::UnityW<::GlobalNamespace::SuperInfection> const& __cordl_internal_get_superInfection() const;

constexpr ::UnityW<::GlobalNamespace::SuperInfection>& __cordl_internal_get_superInfection() ;

constexpr ::UnityW<::GlobalNamespace::SITechTreeStation> const& __cordl_internal_get_techTree() const;

constexpr ::UnityW<::GlobalNamespace::SITechTreeStation>& __cordl_internal_get_techTree() ;

constexpr bool const& __cordl_internal_get_wasOccupied() const;

constexpr bool& __cordl_internal_get_wasOccupied() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_wrongPlayerBuzz() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_wrongPlayerBuzz() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_zeroZeroImage() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_zeroZeroImage() ;

constexpr void __cordl_internal_set__activePage(int32_t  value) ;

constexpr void __cordl_internal_set_activePlayer(::UnityW<::GlobalNamespace::SIPlayer>  value) ;

constexpr void __cordl_internal_set_activeUserBounds(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_dispenser(::UnityW<::GlobalNamespace::SIGadgetDispenser>  value) ;

constexpr void __cordl_internal_set_foldupDelay(float_t  value) ;

constexpr void __cordl_internal_set_foldupTimeStart(float_t  value) ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

constexpr void __cordl_internal_set_isOccupied(bool  value) ;

constexpr void __cordl_internal_set_isOccupiedByActivePlayer(bool  value) ;

constexpr void __cordl_internal_set_isOccupiedByLocalPlayer(bool  value) ;

constexpr void __cordl_internal_set_m_gtAnimators(::ArrayW<::UnityW<::GlobalNamespace::GTAnimator>>  value) ;

constexpr void __cordl_internal_set_onePointTwoText(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_resourceCollection(::UnityW<::GlobalNamespace::SIResourceCollection>  value) ;

constexpr void __cordl_internal_set_rigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::EKioskAnimState  value) ;

constexpr void __cordl_internal_set_superInfection(::UnityW<::GlobalNamespace::SuperInfection>  value) ;

constexpr void __cordl_internal_set_techTree(::UnityW<::GlobalNamespace::SITechTreeStation>  value) ;

constexpr void __cordl_internal_set_wasOccupied(bool  value) ;

constexpr void __cordl_internal_set_wrongPlayerBuzz(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_zeroZeroImage(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x59dc2a8, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ActivePage, addr 0x59d9dbc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ActivePage() ;

/// @brief Method get_IsAuthority, addr 0x59d9d70, size 0x34, virtual false, abstract: false, final false
inline bool get_IsAuthority() ;

/// @brief Method get_SIManager, addr 0x59d9da4, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SuperInfectionManager> get_SIManager() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SICombinedTerminal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SICombinedTerminal", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SICombinedTerminal(SICombinedTerminal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SICombinedTerminal", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SICombinedTerminal(SICombinedTerminal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{315};

/// [DebugReadout]
/// @brief Field index, offset: 0x20, size: 0x4, def value: None
 int32_t  ___index;

/// [DebugReadout]
/// @brief Field activePlayer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIPlayer>  ___activePlayer;

/// [DebugReadout]
/// @brief Field isOccupiedByActivePlayer, offset: 0x30, size: 0x1, def value: None
 bool  ___isOccupiedByActivePlayer;

/// [DebugReadout]
/// @brief Field isOccupiedByLocalPlayer, offset: 0x31, size: 0x1, def value: None
 bool  ___isOccupiedByLocalPlayer;

/// [DebugReadout]
/// @brief Field isOccupied, offset: 0x32, size: 0x1, def value: None
 bool  ___isOccupied;

/// [DebugReadout]
/// @brief Field wasOccupied, offset: 0x33, size: 0x1, def value: None
 bool  ___wasOccupied;

/// [DebugReadout]
/// @brief Field superInfection, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SuperInfection>  ___superInfection;

/// @brief Field dispenser, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIGadgetDispenser>  ___dispenser;

/// @brief Field techTree, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SITechTreeStation>  ___techTree;

/// @brief Field resourceCollection, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIResourceCollection>  ___resourceCollection;

/// [SerializeField]
/// @brief Field m_gtAnimators, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::GTAnimator>>  ___m_gtAnimators;

/// @brief Field activeUserBounds, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___activeUserBounds;

/// @brief Field foldupDelay, offset: 0x68, size: 0x4, def value: None
 float_t  ___foldupDelay;

/// @brief Field foldupTimeStart, offset: 0x6c, size: 0x4, def value: None
 float_t  ___foldupTimeStart;

/// @brief Field state, offset: 0x70, size: 0x4, def value: None
 ::GlobalNamespace::EKioskAnimState  ___state;

/// [DebugReadout]
/// @brief Field _activePage, offset: 0x74, size: 0x4, def value: None
 int32_t  ____activePage;

/// [Header("Flattener")]
/// @brief Field zeroZeroImage, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___zeroZeroImage;

/// @brief Field onePointTwoText, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___onePointTwoText;

/// @brief Field rigs, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  ___rigs;

/// @brief Field wrongPlayerBuzz, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___wrongPlayerBuzz;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SICombinedTerminal, ___index) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SICombinedTerminal, ___activePlayer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SICombinedTerminal, ___isOccupiedByActivePlayer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SICombinedTerminal, ___isOccupiedByLocalPlayer) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SICombinedTerminal, ___isOccupied) == 0x32, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SICombinedTerminal, ___wasOccupied) == 0x33, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SICombinedTerminal, ___superInfection) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SICombinedTerminal, ___dispenser) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SICombinedTerminal, ___techTree) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SICombinedTerminal, ___resourceCollection) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SICombinedTerminal, ___m_gtAnimators) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SICombinedTerminal, ___activeUserBounds) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SICombinedTerminal, ___foldupDelay) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SICombinedTerminal, ___foldupTimeStart) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SICombinedTerminal, ___state) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SICombinedTerminal, ____activePage) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SICombinedTerminal, ___zeroZeroImage) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SICombinedTerminal, ___onePointTwoText) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SICombinedTerminal, ___rigs) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SICombinedTerminal, ___wrongPlayerBuzz) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SICombinedTerminal) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
