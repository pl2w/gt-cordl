#pragma once
// IWYU pragma private; include "GlobalNamespace/VRRigReliableState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BodyDockPositions_DropPositions_def.hpp"
#include "GlobalNamespace/zzzz__ICosmeticStateSync_def.hpp"
#include "GlobalNamespace/zzzz__ReliableStateData_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_ItemStates_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_PositionState_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VRRigReliableState)
namespace Fusion {
class INetworkStruct;
}
namespace GlobalNamespace {
class BodyDockPositions;
}
namespace GlobalNamespace {
class ICosmeticStateSync;
}
namespace GlobalNamespace {
class IWrappedSerializable;
}
namespace GlobalNamespace {
struct VRRigReliableState_StateSyncSlots;
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
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class VRRigReliableState;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VRRigReliableState*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VRRigReliableState*, "", "VRRigReliableState");
// Dependencies BodyDockPositions::DropPositions, ICosmeticStateSync, ReliableStateData, TransferrableObject::ItemStates, TransferrableObject::PositionState, UnityEngine.Color32, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: VRRigReliableState
class CORDL_TYPE VRRigReliableState : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using StateSyncSlots = ::GlobalNamespace::VRRigReliableState_StateSyncSlots;

/// @brief Field Data, offset 0x98, size 0x54 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) ::GlobalNamespace::ReliableStateData  Data;

 __declspec(property(get=get_HasBracelet)) bool  HasBracelet;

/// @brief Field <isDirty>k__BackingField, offset 0x91, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDirty_k__BackingField, put=__cordl_internal_set__isDirty_k__BackingField)) bool  _isDirty_k__BackingField;

/// @brief Field activeTransferrableObjectIndex, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeTransferrableObjectIndex, put=__cordl_internal_set_activeTransferrableObjectIndex)) ::ArrayW<int32_t>  activeTransferrableObjectIndex;

/// @brief Field bDock, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_bDock, put=__cordl_internal_set_bDock)) ::UnityW<::GlobalNamespace::BodyDockPositions>  bDock;

/// @brief Field braceletBeadColors, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_braceletBeadColors, put=__cordl_internal_set_braceletBeadColors)) ::System::Collections::Generic::List_1<::UnityEngine::Color>*  braceletBeadColors;

/// @brief Field braceletSelfIndex, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_braceletSelfIndex, put=__cordl_internal_set_braceletSelfIndex)) int32_t  braceletSelfIndex;

/// @brief Field isBraceletLeftHanded, offset 0x7c, size 0x1 
 __declspec(property(get=__cordl_internal_get_isBraceletLeftHanded, put=__cordl_internal_set_isBraceletLeftHanded)) bool  isBraceletLeftHanded;

/// @brief Field isBuilderWatchEnabled, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_isBuilderWatchEnabled, put=__cordl_internal_set_isBuilderWatchEnabled)) bool  isBuilderWatchEnabled;

 __declspec(property(get=get_isDirty, put=set_isDirty)) bool  isDirty;

/// @brief Field isMicEnabled, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_isMicEnabled, put=__cordl_internal_set_isMicEnabled)) bool  isMicEnabled;

/// @brief Field isOfflineVRRig, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get_isOfflineVRRig, put=__cordl_internal_set_isOfflineVRRig)) bool  isOfflineVRRig;

/// @brief Field lThrowableProjectileColor, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lThrowableProjectileColor, put=__cordl_internal_set_lThrowableProjectileColor)) ::UnityEngine::Color32  lThrowableProjectileColor;

/// @brief Field lThrowableProjectileIndex, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_lThrowableProjectileIndex, put=__cordl_internal_set_lThrowableProjectileIndex)) int32_t  lThrowableProjectileIndex;

/// @brief Field m_cosmeticStateTargets, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_cosmeticStateTargets, put=__cordl_internal_set_m_cosmeticStateTargets)) ::ArrayW<::GlobalNamespace::ICosmeticStateSync*>  m_cosmeticStateTargets;

/// @brief Field m_cosmeticStates, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_cosmeticStates, put=__cordl_internal_set_m_cosmeticStates)) ::ArrayW<int32_t>  m_cosmeticStates;

/// @brief Field rThrowableProjectileColor, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_rThrowableProjectileColor, put=__cordl_internal_set_rThrowableProjectileColor)) ::UnityEngine::Color32  rThrowableProjectileColor;

/// @brief Field rThrowableProjectileIndex, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_rThrowableProjectileIndex, put=__cordl_internal_set_rThrowableProjectileIndex)) int32_t  rThrowableProjectileIndex;

/// @brief Field randomThrowableIndex, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_randomThrowableIndex, put=__cordl_internal_set_randomThrowableIndex)) int32_t  randomThrowableIndex;

/// @brief Field sizeLayerMask, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_sizeLayerMask, put=__cordl_internal_set_sizeLayerMask)) int32_t  sizeLayerMask;

/// @brief Field transferableDockPositions, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_transferableDockPositions, put=__cordl_internal_set_transferableDockPositions)) ::ArrayW<::GlobalNamespace::BodyDockPositions_DropPositions>  transferableDockPositions;

/// @brief Field transferrableItemStates, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_transferrableItemStates, put=__cordl_internal_set_transferrableItemStates)) ::ArrayW<::GlobalNamespace::TransferrableObject_ItemStates>  transferrableItemStates;

/// @brief Field transferrablePosStates, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_transferrablePosStates, put=__cordl_internal_set_transferrablePosStates)) ::ArrayW<::GlobalNamespace::TransferrableObject_PositionState>  transferrablePosStates;

/// @brief Field wearablesPackedStates, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_wearablesPackedStates, put=__cordl_internal_set_wearablesPackedStates)) int32_t  wearablesPackedStates;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IWrappedSerializable"
constexpr operator  ::GlobalNamespace::IWrappedSerializable*() noexcept;

/// @brief Method Awake, addr 0x57484d4, size 0x19c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CopyStateSyncToSyncArray, addr 0x5748cc8, size 0x124, virtual false, abstract: false, final false
inline void CopyStateSyncToSyncArray() ;

/// @brief Method GetCachedStateAtSlot, addr 0x5748dec, size 0x34, virtual false, abstract: false, final false
inline int32_t GetCachedStateAtSlot(::GlobalNamespace::VRRigReliableState_StateSyncSlots  slot) ;

/// @brief Method GetHeader, addr 0x5749478, size 0x204, virtual false, abstract: false, final false
inline int64_t GetHeader() ;

/// @brief Method GetTransferrableStates, addr 0x574967c, size 0x198, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<int64_t>* GetTransferrableStates(int64_t  header) ;

/// @brief Method IWrappedSerializable.OnSerializeRead, addr 0x5748e20, size 0x310, virtual true, abstract: false, final true
inline void IWrappedSerializable_OnSerializeRead(::System::Object*  newData) ;

/// @brief Method IWrappedSerializable.OnSerializeRead, addr 0x5749cb4, size 0x580, virtual true, abstract: false, final true
inline void IWrappedSerializable_OnSerializeRead(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method IWrappedSerializable.OnSerializeWrite, addr 0x5749290, size 0x1e8, virtual true, abstract: false, final true
inline ::System::Object* IWrappedSerializable_OnSerializeWrite() ;

/// @brief Method IWrappedSerializable.OnSerializeWrite, addr 0x5749934, size 0x380, virtual true, abstract: false, final true
inline void IWrappedSerializable_OnSerializeWrite(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

static inline ::GlobalNamespace::VRRigReliableState* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5748670, size 0x10c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method PackBeadColors, addr 0x5749814, size 0x120, virtual false, abstract: false, final false
static inline int64_t PackBeadColors(::System::Collections::Generic::List_1<::UnityEngine::Color>*  beadColors, int32_t  fromIndex) ;

/// @brief Method RegisterCosmeticStateSyncTarget, addr 0x57488e0, size 0x288, virtual false, abstract: false, final false
inline void RegisterCosmeticStateSyncTarget(::GlobalNamespace::VRRigReliableState_StateSyncSlots  slot, ::GlobalNamespace::ICosmeticStateSync*  target) ;

/// @brief Method SetHeader, addr 0x5749130, size 0x4c, virtual false, abstract: false, final false
inline void SetHeader(int64_t  header, ::by_ref<int32_t>  numBeadsToRead) ;

/// @brief Method SetIsDirty, addr 0x574877c, size 0xc, virtual false, abstract: false, final false
inline void SetIsDirty() ;

/// @brief Method SetIsNotDirty, addr 0x5748788, size 0x8, virtual false, abstract: false, final false
inline void SetIsNotDirty() ;

/// @brief Method SharedStart, addr 0x5748790, size 0x150, virtual false, abstract: false, final false
inline void SharedStart(bool  isOfflineVRRig_, ::GlobalNamespace::BodyDockPositions*  bDock_) ;

/// @brief Method UnRegisterCosmeticStateSyncTarget, addr 0x5748b68, size 0x160, virtual false, abstract: false, final false
inline void UnRegisterCosmeticStateSyncTarget(::GlobalNamespace::VRRigReliableState_StateSyncSlots  slot, ::GlobalNamespace::ICosmeticStateSync*  target) ;

/// @brief Method UnpackBeadColors, addr 0x574917c, size 0x114, virtual false, abstract: false, final false
static inline void UnpackBeadColors(int64_t  packed, int32_t  startIndex, int32_t  endIndex, ::System::Collections::Generic::List_1<::UnityEngine::Color>*  beadColorsResult) ;

constexpr ::GlobalNamespace::ReliableStateData const& __cordl_internal_get_Data() const;

constexpr ::GlobalNamespace::ReliableStateData& __cordl_internal_get_Data() ;

constexpr bool const& __cordl_internal_get__isDirty_k__BackingField() const;

constexpr bool& __cordl_internal_get__isDirty_k__BackingField() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_activeTransferrableObjectIndex() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_activeTransferrableObjectIndex() ;

constexpr ::UnityW<::GlobalNamespace::BodyDockPositions> const& __cordl_internal_get_bDock() const;

constexpr ::UnityW<::GlobalNamespace::BodyDockPositions>& __cordl_internal_get_bDock() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>* const& __cordl_internal_get_braceletBeadColors() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>*& __cordl_internal_get_braceletBeadColors() ;

constexpr int32_t const& __cordl_internal_get_braceletSelfIndex() const;

constexpr int32_t& __cordl_internal_get_braceletSelfIndex() ;

constexpr bool const& __cordl_internal_get_isBraceletLeftHanded() const;

constexpr bool& __cordl_internal_get_isBraceletLeftHanded() ;

constexpr bool const& __cordl_internal_get_isBuilderWatchEnabled() const;

constexpr bool& __cordl_internal_get_isBuilderWatchEnabled() ;

constexpr bool const& __cordl_internal_get_isMicEnabled() const;

constexpr bool& __cordl_internal_get_isMicEnabled() ;

constexpr bool const& __cordl_internal_get_isOfflineVRRig() const;

constexpr bool& __cordl_internal_get_isOfflineVRRig() ;

constexpr ::UnityEngine::Color32 const& __cordl_internal_get_lThrowableProjectileColor() const;

constexpr ::UnityEngine::Color32& __cordl_internal_get_lThrowableProjectileColor() ;

constexpr int32_t const& __cordl_internal_get_lThrowableProjectileIndex() const;

constexpr int32_t& __cordl_internal_get_lThrowableProjectileIndex() ;

constexpr ::ArrayW<::GlobalNamespace::ICosmeticStateSync*> const& __cordl_internal_get_m_cosmeticStateTargets() const;

constexpr ::ArrayW<::GlobalNamespace::ICosmeticStateSync*>& __cordl_internal_get_m_cosmeticStateTargets() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_m_cosmeticStates() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_m_cosmeticStates() ;

constexpr ::UnityEngine::Color32 const& __cordl_internal_get_rThrowableProjectileColor() const;

constexpr ::UnityEngine::Color32& __cordl_internal_get_rThrowableProjectileColor() ;

constexpr int32_t const& __cordl_internal_get_rThrowableProjectileIndex() const;

constexpr int32_t& __cordl_internal_get_rThrowableProjectileIndex() ;

constexpr int32_t const& __cordl_internal_get_randomThrowableIndex() const;

constexpr int32_t& __cordl_internal_get_randomThrowableIndex() ;

constexpr int32_t const& __cordl_internal_get_sizeLayerMask() const;

constexpr int32_t& __cordl_internal_get_sizeLayerMask() ;

constexpr ::ArrayW<::GlobalNamespace::BodyDockPositions_DropPositions> const& __cordl_internal_get_transferableDockPositions() const;

constexpr ::ArrayW<::GlobalNamespace::BodyDockPositions_DropPositions>& __cordl_internal_get_transferableDockPositions() ;

constexpr ::ArrayW<::GlobalNamespace::TransferrableObject_ItemStates> const& __cordl_internal_get_transferrableItemStates() const;

constexpr ::ArrayW<::GlobalNamespace::TransferrableObject_ItemStates>& __cordl_internal_get_transferrableItemStates() ;

constexpr ::ArrayW<::GlobalNamespace::TransferrableObject_PositionState> const& __cordl_internal_get_transferrablePosStates() const;

constexpr ::ArrayW<::GlobalNamespace::TransferrableObject_PositionState>& __cordl_internal_get_transferrablePosStates() ;

constexpr int32_t const& __cordl_internal_get_wearablesPackedStates() const;

constexpr int32_t& __cordl_internal_get_wearablesPackedStates() ;

constexpr void __cordl_internal_set_Data(::GlobalNamespace::ReliableStateData  value) ;

constexpr void __cordl_internal_set__isDirty_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_activeTransferrableObjectIndex(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_bDock(::UnityW<::GlobalNamespace::BodyDockPositions>  value) ;

constexpr void __cordl_internal_set_braceletBeadColors(::System::Collections::Generic::List_1<::UnityEngine::Color>*  value) ;

constexpr void __cordl_internal_set_braceletSelfIndex(int32_t  value) ;

constexpr void __cordl_internal_set_isBraceletLeftHanded(bool  value) ;

constexpr void __cordl_internal_set_isBuilderWatchEnabled(bool  value) ;

constexpr void __cordl_internal_set_isMicEnabled(bool  value) ;

constexpr void __cordl_internal_set_isOfflineVRRig(bool  value) ;

constexpr void __cordl_internal_set_lThrowableProjectileColor(::UnityEngine::Color32  value) ;

constexpr void __cordl_internal_set_lThrowableProjectileIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_cosmeticStateTargets(::ArrayW<::GlobalNamespace::ICosmeticStateSync*>  value) ;

constexpr void __cordl_internal_set_m_cosmeticStates(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_rThrowableProjectileColor(::UnityEngine::Color32  value) ;

constexpr void __cordl_internal_set_rThrowableProjectileIndex(int32_t  value) ;

constexpr void __cordl_internal_set_randomThrowableIndex(int32_t  value) ;

constexpr void __cordl_internal_set_sizeLayerMask(int32_t  value) ;

constexpr void __cordl_internal_set_transferableDockPositions(::ArrayW<::GlobalNamespace::BodyDockPositions_DropPositions>  value) ;

constexpr void __cordl_internal_set_transferrableItemStates(::ArrayW<::GlobalNamespace::TransferrableObject_ItemStates>  value) ;

constexpr void __cordl_internal_set_transferrablePosStates(::ArrayW<::GlobalNamespace::TransferrableObject_PositionState>  value) ;

constexpr void __cordl_internal_set_wearablesPackedStates(int32_t  value) ;

/// @brief Method .ctor, addr 0x574a234, size 0x194, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HasBracelet, addr 0x5748474, size 0x50, virtual false, abstract: false, final false
inline bool get_HasBracelet() ;

/// [CompilerGenerated]
/// @brief Method get_isDirty, addr 0x57484c4, size 0x8, virtual false, abstract: false, final false
inline bool get_isDirty() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() noexcept;

/// @brief Convert to "::GlobalNamespace::IWrappedSerializable"
constexpr ::GlobalNamespace::IWrappedSerializable* i___GlobalNamespace__IWrappedSerializable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_isDirty, addr 0x57484cc, size 0x8, virtual false, abstract: false, final false
inline void set_isDirty(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VRRigReliableState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VRRigReliableState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VRRigReliableState(VRRigReliableState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VRRigReliableState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VRRigReliableState(VRRigReliableState const& ) = delete;

/// @brief Field BRACELET_LEFTHAND_BIT offset 0xffffffff size 0x8
static constexpr int64_t  BRACELET_LEFTHAND_BIT{static_cast<int64_t>(0x40)};

/// @brief Field BRACELET_NUM_BEADS_SHIFT offset 0xffffffff size 0x4
static constexpr int32_t  BRACELET_NUM_BEADS_SHIFT{static_cast<int32_t>(0xc)};

/// @brief Field BRACELET_SELF_INDEX_SHIFT offset 0xffffffff size 0x4
static constexpr int32_t  BRACELET_SELF_INDEX_SHIFT{static_cast<int32_t>(0x3c)};

/// @brief Field BUILDER_WATCH_ENABLED_BIT offset 0xffffffff size 0x8
static constexpr int64_t  BUILDER_WATCH_ENABLED_BIT{static_cast<int64_t>(0x80)};

/// @brief Field DOCK_POSITIONS_SHIFT offset 0xffffffff size 0x4
static constexpr int32_t  DOCK_POSITIONS_SHIFT{static_cast<int32_t>(0x30)};

/// @brief Field IS_MIC_ENABLED_BIT offset 0xffffffff size 0x8
static constexpr int64_t  IS_MIC_ENABLED_BIT{static_cast<int64_t>(0x20)};

/// @brief Field ITEM_STATES_SHIFT offset 0xffffffff size 0x4
static constexpr int32_t  ITEM_STATES_SHIFT{static_cast<int32_t>(0x28)};

/// @brief Field LPROJECTILECOLOR_B_SHIFT offset 0xffffffff size 0x4
static constexpr int32_t  LPROJECTILECOLOR_B_SHIFT{static_cast<int32_t>(0x20)};

/// @brief Field LPROJECTILECOLOR_G_SHIFT offset 0xffffffff size 0x4
static constexpr int32_t  LPROJECTILECOLOR_G_SHIFT{static_cast<int32_t>(0x18)};

/// @brief Field LPROJECTILECOLOR_R_SHIFT offset 0xffffffff size 0x4
static constexpr int32_t  LPROJECTILECOLOR_R_SHIFT{static_cast<int32_t>(0x10)};

/// @brief Field POS_STATES_SHIFT offset 0xffffffff size 0x4
static constexpr int32_t  POS_STATES_SHIFT{static_cast<int32_t>(0x20)};

/// @brief Field RPROJECTILECOLOR_B_SHIFT offset 0xffffffff size 0x4
static constexpr int32_t  RPROJECTILECOLOR_B_SHIFT{static_cast<int32_t>(0x38)};

/// @brief Field RPROJECTILECOLOR_G_SHIFT offset 0xffffffff size 0x4
static constexpr int32_t  RPROJECTILECOLOR_G_SHIFT{static_cast<int32_t>(0x30)};

/// @brief Field RPROJECTILECOLOR_R_SHIFT offset 0xffffffff size 0x4
static constexpr int32_t  RPROJECTILECOLOR_R_SHIFT{static_cast<int32_t>(0x28)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1283};

/// @brief Field m_cosmeticStateTargets, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::ICosmeticStateSync*>  ___m_cosmeticStateTargets;

/// @brief Field m_cosmeticStates, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___m_cosmeticStates;

/// @brief Field activeTransferrableObjectIndex, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___activeTransferrableObjectIndex;

/// @brief Field transferrablePosStates, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::TransferrableObject_PositionState>  ___transferrablePosStates;

/// @brief Field transferrableItemStates, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::TransferrableObject_ItemStates>  ___transferrableItemStates;

/// @brief Field transferableDockPositions, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::BodyDockPositions_DropPositions>  ___transferableDockPositions;

/// @brief Field wearablesPackedStates, offset: 0x50, size: 0x4, def value: None
 int32_t  ___wearablesPackedStates;

/// @brief Field lThrowableProjectileIndex, offset: 0x54, size: 0x4, def value: None
 int32_t  ___lThrowableProjectileIndex;

/// @brief Field rThrowableProjectileIndex, offset: 0x58, size: 0x4, def value: None
 int32_t  ___rThrowableProjectileIndex;

/// @brief Field lThrowableProjectileColor, offset: 0x5c, size: 0x4, def value: None
 ::UnityEngine::Color32  ___lThrowableProjectileColor;

/// @brief Field rThrowableProjectileColor, offset: 0x60, size: 0x4, def value: None
 ::UnityEngine::Color32  ___rThrowableProjectileColor;

/// @brief Field randomThrowableIndex, offset: 0x64, size: 0x4, def value: None
 int32_t  ___randomThrowableIndex;

/// @brief Field isMicEnabled, offset: 0x68, size: 0x1, def value: None
 bool  ___isMicEnabled;

/// @brief Field isOfflineVRRig, offset: 0x69, size: 0x1, def value: None
 bool  ___isOfflineVRRig;

/// @brief Field bDock, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BodyDockPositions>  ___bDock;

/// @brief Field sizeLayerMask, offset: 0x78, size: 0x4, def value: None
 int32_t  ___sizeLayerMask;

/// @brief Field isBraceletLeftHanded, offset: 0x7c, size: 0x1, def value: None
 bool  ___isBraceletLeftHanded;

/// @brief Field braceletSelfIndex, offset: 0x80, size: 0x4, def value: None
 int32_t  ___braceletSelfIndex;

/// @brief Field braceletBeadColors, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Color>*  ___braceletBeadColors;

/// @brief Field isBuilderWatchEnabled, offset: 0x90, size: 0x1, def value: None
 bool  ___isBuilderWatchEnabled;

/// [CompilerGenerated]
/// @brief Field <isDirty>k__BackingField, offset: 0x91, size: 0x1, def value: None
 bool  ____isDirty_k__BackingField;

/// @brief Field Data, offset: 0x98, size: 0x54, def value: None
 ::GlobalNamespace::ReliableStateData  ___Data;

/// @brief Size padding 0xe8 - 0xf0 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VRRigReliableState, ___m_cosmeticStateTargets) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigReliableState, ___m_cosmeticStates) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigReliableState, ___activeTransferrableObjectIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigReliableState, ___transferrablePosStates) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigReliableState, ___transferrableItemStates) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigReliableState, ___transferableDockPositions) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigReliableState, ___wearablesPackedStates) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigReliableState, ___lThrowableProjectileIndex) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigReliableState, ___rThrowableProjectileIndex) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigReliableState, ___lThrowableProjectileColor) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigReliableState, ___rThrowableProjectileColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigReliableState, ___randomThrowableIndex) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigReliableState, ___isMicEnabled) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigReliableState, ___isOfflineVRRig) == 0x69, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigReliableState, ___bDock) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigReliableState, ___sizeLayerMask) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigReliableState, ___isBraceletLeftHanded) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigReliableState, ___braceletSelfIndex) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigReliableState, ___braceletBeadColors) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigReliableState, ___isBuilderWatchEnabled) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigReliableState, ____isDirty_k__BackingField) == 0x91, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigReliableState, ___Data) == 0x98, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VRRigReliableState) == 0xe8, "Size mismatch!");

} // namespace end def GlobalNamespace
