#pragma once
// IWYU pragma private; include "GlobalNamespace/ThrowableBugReliableState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
#include "GlobalNamespace/zzzz__ThrowableBugReliableState_BugData_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(ThrowableBugReliableState)
namespace GlobalNamespace {
class IRequestableOwnershipGuardCallbacks;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
struct ThrowableBugReliableState_BugData;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
// Forward declare root types
namespace GlobalNamespace {
class ThrowableBugReliableState;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ThrowableBugReliableState*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ThrowableBugReliableState*, "", "ThrowableBugReliableState");
// [NetworkBehaviourWeaved(3)]
// Dependencies NetworkComponent, ThrowableBugReliableState::BugData, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: ThrowableBugReliableState
class CORDL_TYPE ThrowableBugReliableState : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
using BugData = ::GlobalNamespace::ThrowableBugReliableState_BugData;

/// [Networked]
/// @brief [NetworkedWeaved(0, 3)]
 __declspec(property(get=get_Data, put=set_Data)) ::GlobalNamespace::ThrowableBugReliableState_BugData  Data;

/// @brief Field _Data, offset 0xa8, size 0xc 
 __declspec(property(get=__cordl_internal_get__Data, put=__cordl_internal_set__Data)) ::GlobalNamespace::ThrowableBugReliableState_BugData  _Data;

/// @brief Field travelingDirection, offset 0x9c, size 0xc 
 __declspec(property(get=__cordl_internal_get_travelingDirection, put=__cordl_internal_set_travelingDirection)) ::UnityEngine::Vector3  travelingDirection;

/// @brief Convert operator to "::GlobalNamespace::IRequestableOwnershipGuardCallbacks"
constexpr operator  ::GlobalNamespace::IRequestableOwnershipGuardCallbacks*() noexcept;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x5b34758, size 0x24, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x5b3477c, size 0x28, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

static inline ::GlobalNamespace::ThrowableBugReliableState* New_ctor() ;

/// @brief Method OnMasterClientAssistedTakeoverRequest, addr 0x5b34688, size 0x38, virtual true, abstract: false, final true
inline bool OnMasterClientAssistedTakeoverRequest(::GlobalNamespace::NetPlayer*  fromPlayer, ::GlobalNamespace::NetPlayer*  toPlayer) ;

/// @brief Method OnMyCreatorLeft, addr 0x5b346c0, size 0x38, virtual true, abstract: false, final true
inline void OnMyCreatorLeft() ;

/// @brief Method OnMyOwnerLeft, addr 0x5b34650, size 0x38, virtual true, abstract: false, final true
inline void OnMyOwnerLeft() ;

/// @brief Method OnOwnershipRequest, addr 0x5b34618, size 0x38, virtual true, abstract: false, final true
inline bool OnOwnershipRequest(::GlobalNamespace::NetPlayer*  fromPlayer) ;

/// @brief Method OnOwnershipTransferred, addr 0x5b345e0, size 0x38, virtual true, abstract: false, final true
inline void OnOwnershipTransferred(::GlobalNamespace::NetPlayer*  toPlayer, ::GlobalNamespace::NetPlayer*  fromPlayer) ;

/// @brief Method ReadDataFusion, addr 0x5b342f8, size 0x58, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x5b34418, size 0x1c8, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method WriteDataFusion, addr 0x5b34248, size 0x54, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x5b34390, size 0x88, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr ::GlobalNamespace::ThrowableBugReliableState_BugData const& __cordl_internal_get__Data() const;

constexpr ::GlobalNamespace::ThrowableBugReliableState_BugData& __cordl_internal_get__Data() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_travelingDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_travelingDirection() ;

constexpr void __cordl_internal_set__Data(::GlobalNamespace::ThrowableBugReliableState_BugData  value) ;

constexpr void __cordl_internal_set_travelingDirection(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5b346f8, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Data, addr 0x5b34188, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::ThrowableBugReliableState_BugData get_Data() ;

/// @brief Convert to "::GlobalNamespace::IRequestableOwnershipGuardCallbacks"
constexpr ::GlobalNamespace::IRequestableOwnershipGuardCallbacks* i___GlobalNamespace__IRequestableOwnershipGuardCallbacks() noexcept;

/// @brief Method set_Data, addr 0x5b341e8, size 0x60, virtual false, abstract: false, final false
inline void set_Data(::GlobalNamespace::ThrowableBugReliableState_BugData  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThrowableBugReliableState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThrowableBugReliableState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ThrowableBugReliableState(ThrowableBugReliableState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThrowableBugReliableState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThrowableBugReliableState(ThrowableBugReliableState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3670};

/// @brief Field travelingDirection, offset: 0x9c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___travelingDirection;

/// [WeaverGenerated]
/// [SerializeField]
/// [DefaultForProperty("Data", 0, 3)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _Data, offset: 0xa8, size: 0xc, def value: None
 ::GlobalNamespace::ThrowableBugReliableState_BugData  ____Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ThrowableBugReliableState, ___travelingDirection) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBugReliableState, ____Data) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ThrowableBugReliableState) == 0xb8, "Size mismatch!");

} // namespace end def GlobalNamespace
