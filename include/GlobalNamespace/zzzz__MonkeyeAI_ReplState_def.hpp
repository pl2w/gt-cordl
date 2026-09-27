#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeyeAI_ReplState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MonkeyeAI_ReplState_EStates_def.hpp"
#include "GlobalNamespace/zzzz__MonkeyeAI_ReplState_MonkeyeAI_RepStateData_def.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MonkeyeAI_ReplState)
namespace GlobalNamespace {
struct MonkeyeAI_ReplState_EStates;
}
namespace GlobalNamespace {
struct MonkeyeAI_ReplState_MonkeyeAI_RepStateData;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
// Forward declare root types
namespace GlobalNamespace {
class MonkeyeAI_ReplState;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MonkeyeAI_ReplState*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeyeAI_ReplState*, "", "MonkeyeAI_ReplState");
// [NetworkBehaviourWeaved(42)]
// Dependencies MonkeyeAI_ReplState::EStates, MonkeyeAI_ReplState::MonkeyeAI_RepStateData, NetworkComponent, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: MonkeyeAI_ReplState
class CORDL_TYPE MonkeyeAI_ReplState : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
using EStates = ::GlobalNamespace::MonkeyeAI_ReplState_EStates;

using MonkeyeAI_RepStateData = ::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData;

/// [Networked]
/// @brief [NetworkedWeaved(0, 42)]
 __declspec(property(get=get_Data, put=set_Data)) ::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData  Data;

/// @brief Field _Data, offset 0xc0, size 0xa8 
 __declspec(property(get=__cordl_internal_get__Data, put=__cordl_internal_set__Data)) ::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData  _Data;

/// @brief Field alpha, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_alpha, put=__cordl_internal_set_alpha)) float_t  alpha;

/// @brief Field attackPos, offset 0xa8, size 0xc 
 __declspec(property(get=__cordl_internal_get_attackPos, put=__cordl_internal_set_attackPos)) ::UnityEngine::Vector3  attackPos;

/// @brief Field floorEnabled, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get_floorEnabled, put=__cordl_internal_set_floorEnabled)) bool  floorEnabled;

/// @brief Field freezePlayer, offset 0xba, size 0x1 
 __declspec(property(get=__cordl_internal_get_freezePlayer, put=__cordl_internal_set_freezePlayer)) bool  freezePlayer;

/// @brief Field portalEnabled, offset 0xb9, size 0x1 
 __declspec(property(get=__cordl_internal_get_portalEnabled, put=__cordl_internal_set_portalEnabled)) bool  portalEnabled;

/// @brief Field state, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::MonkeyeAI_ReplState_EStates  state;

/// @brief Field timer, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_timer, put=__cordl_internal_set_timer)) float_t  timer;

/// @brief Field userId, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_userId, put=__cordl_internal_set_userId)) ::StringW  userId;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x5c06764, size 0x64, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x5c067c8, size 0x64, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

static inline ::GlobalNamespace::MonkeyeAI_ReplState* New_ctor() ;

/// @brief Method ReadDataFusion, addr 0x5c05e88, size 0x278, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x5c0638c, size 0x3d0, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method WriteDataFusion, addr 0x5c05c48, size 0x84, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x5c06200, size 0x18c, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr ::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData const& __cordl_internal_get__Data() const;

constexpr ::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData& __cordl_internal_get__Data() ;

constexpr float_t const& __cordl_internal_get_alpha() const;

constexpr float_t& __cordl_internal_get_alpha() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_attackPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_attackPos() ;

constexpr bool const& __cordl_internal_get_floorEnabled() const;

constexpr bool& __cordl_internal_get_floorEnabled() ;

constexpr bool const& __cordl_internal_get_freezePlayer() const;

constexpr bool& __cordl_internal_get_freezePlayer() ;

constexpr bool const& __cordl_internal_get_portalEnabled() const;

constexpr bool& __cordl_internal_get_portalEnabled() ;

constexpr ::GlobalNamespace::MonkeyeAI_ReplState_EStates const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::MonkeyeAI_ReplState_EStates& __cordl_internal_get_state() ;

constexpr float_t const& __cordl_internal_get_timer() const;

constexpr float_t& __cordl_internal_get_timer() ;

constexpr ::StringW const& __cordl_internal_get_userId() const;

constexpr ::StringW& __cordl_internal_get_userId() ;

constexpr void __cordl_internal_set__Data(::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData  value) ;

constexpr void __cordl_internal_set_alpha(float_t  value) ;

constexpr void __cordl_internal_set_attackPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_floorEnabled(bool  value) ;

constexpr void __cordl_internal_set_freezePlayer(bool  value) ;

constexpr void __cordl_internal_set_portalEnabled(bool  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::MonkeyeAI_ReplState_EStates  value) ;

constexpr void __cordl_internal_set_timer(float_t  value) ;

constexpr void __cordl_internal_set_userId(::StringW  value) ;

/// @brief Method .ctor, addr 0x5c0675c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Data, addr 0x5c05b8c, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData get_Data() ;

/// @brief Method set_Data, addr 0x5c05bec, size 0x5c, virtual false, abstract: false, final false
inline void set_Data(::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeyeAI_ReplState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeyeAI_ReplState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeyeAI_ReplState(MonkeyeAI_ReplState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeyeAI_ReplState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeyeAI_ReplState(MonkeyeAI_ReplState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{426};

/// @brief Field state, offset: 0x9c, size: 0x4, def value: None
 ::GlobalNamespace::MonkeyeAI_ReplState_EStates  ___state;

/// @brief Field userId, offset: 0xa0, size: 0x8, def value: None
 ::StringW  ___userId;

/// @brief Field attackPos, offset: 0xa8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___attackPos;

/// @brief Field timer, offset: 0xb4, size: 0x4, def value: None
 float_t  ___timer;

/// @brief Field floorEnabled, offset: 0xb8, size: 0x1, def value: None
 bool  ___floorEnabled;

/// @brief Field portalEnabled, offset: 0xb9, size: 0x1, def value: None
 bool  ___portalEnabled;

/// @brief Field freezePlayer, offset: 0xba, size: 0x1, def value: None
 bool  ___freezePlayer;

/// @brief Field alpha, offset: 0xbc, size: 0x4, def value: None
 float_t  ___alpha;

/// [WeaverGenerated]
/// [DefaultForProperty("Data", 0, 42)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _Data, offset: 0xc0, size: 0xa8, def value: None
 ::GlobalNamespace::MonkeyeAI_ReplState_MonkeyeAI_RepStateData  ____Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeyeAI_ReplState, ___state) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI_ReplState, ___userId) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI_ReplState, ___attackPos) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI_ReplState, ___timer) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI_ReplState, ___floorEnabled) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI_ReplState, ___portalEnabled) == 0xb9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI_ReplState, ___freezePlayer) == 0xba, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI_ReplState, ___alpha) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI_ReplState, ____Data) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeyeAI_ReplState) == 0x168, "Size mismatch!");

} // namespace end def GlobalNamespace
