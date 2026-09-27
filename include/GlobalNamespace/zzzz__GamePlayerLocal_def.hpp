#pragma once
// IWYU pragma private; include "GlobalNamespace/GamePlayerLocal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GamePlayerLocal_GrabSlotExtraRecoveryData_def.hpp"
#include "GlobalNamespace/zzzz__GamePlayerLocal_HandData_def.hpp"
#include "GlobalNamespace/zzzz__GamePlayerLocal_SlotRecoveryData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GamePlayerLocal)
namespace GlobalNamespace {
struct GameEntityCreateData;
}
namespace GlobalNamespace {
struct GameEntityId;
}
namespace GlobalNamespace {
class GameEntityManager;
}
namespace GlobalNamespace {
struct GamePlayerLocal_GrabSlotExtraRecoveryData;
}
namespace GlobalNamespace {
struct GamePlayerLocal_HandData;
}
namespace GlobalNamespace {
struct GamePlayerLocal_HandGrabState;
}
namespace GlobalNamespace {
struct GamePlayerLocal_InputDataMotion;
}
namespace GlobalNamespace {
class GamePlayerLocal_InputData;
}
namespace GlobalNamespace {
struct GamePlayerLocal_SlotRecoveryData;
}
namespace GlobalNamespace {
class GamePlayer;
}
namespace GlobalNamespace {
class IDelayedExecListener;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GamePlayerLocal;
}
namespace GlobalNamespace {
class GamePlayerLocal_InputData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GamePlayerLocal*);
MARK_REF_T(::GlobalNamespace::GamePlayerLocal_InputData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GamePlayerLocal*, "", "GamePlayerLocal");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GamePlayerLocal_InputData*, "", "GamePlayerLocal/InputData");
// Dependencies GamePlayerLocal::GrabSlotExtraRecoveryData, GamePlayerLocal::HandData, GamePlayerLocal::InputData, GamePlayerLocal::SlotRecoveryData, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GamePlayerLocal
class CORDL_TYPE GamePlayerLocal : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using GrabSlotExtraRecoveryData = ::GlobalNamespace::GamePlayerLocal_GrabSlotExtraRecoveryData;

using HandData = ::GlobalNamespace::GamePlayerLocal_HandData;

using HandGrabState = ::GlobalNamespace::GamePlayerLocal_HandGrabState;

using InputData = ::GlobalNamespace::GamePlayerLocal_InputData;

using InputDataMotion = ::GlobalNamespace::GamePlayerLocal_InputDataMotion;

using SlotRecoveryData = ::GlobalNamespace::GamePlayerLocal_SlotRecoveryData;

/// @brief Field _migrationRecoveryList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__migrationRecoveryList, put=setStaticF__migrationRecoveryList)) ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>*  _migrationRecoveryList;

/// @brief Field currGameEntityManager, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_currGameEntityManager, put=__cordl_internal_set_currGameEntityManager)) ::UnityW<::GlobalNamespace::GameEntityManager>  currGameEntityManager;

/// @brief Field gamePlayer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gamePlayer, put=__cordl_internal_set_gamePlayer)) ::UnityW<::GlobalNamespace::GamePlayer>  gamePlayer;

/// @brief Field grabSlotsExtraRecoveryData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_grabSlotsExtraRecoveryData, put=setStaticF_grabSlotsExtraRecoveryData)) ::ArrayW<::GlobalNamespace::GamePlayerLocal_GrabSlotExtraRecoveryData>  grabSlotsExtraRecoveryData;

/// @brief Field hands, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_hands, put=__cordl_internal_set_hands)) ::ArrayW<::GlobalNamespace::GamePlayerLocal_HandData>  hands;

/// @brief Field inputData, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputData, put=__cordl_internal_set_inputData)) ::ArrayW<::GlobalNamespace::GamePlayerLocal_InputData*>  inputData;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::GamePlayerLocal>  instance;

/// @brief Field joinWithItemsSentForCurrentMigration, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_joinWithItemsSentForCurrentMigration, put=__cordl_internal_set_joinWithItemsSentForCurrentMigration)) bool  joinWithItemsSentForCurrentMigration;

/// @brief Field pendingFullMigration, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_pendingFullMigration, put=__cordl_internal_set_pendingFullMigration)) bool  pendingFullMigration;

/// @brief Field slotsRecoveryData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_slotsRecoveryData, put=setStaticF_slotsRecoveryData)) ::ArrayW<::GlobalNamespace::GamePlayerLocal_SlotRecoveryData>  slotsRecoveryData;

/// @brief Field snapSlotsSave_frameWhenQueued, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_snapSlotsSave_frameWhenQueued, put=setStaticF_snapSlotsSave_frameWhenQueued)) int32_t  snapSlotsSave_frameWhenQueued;

/// @brief Field snapSlotsSave_isQueued, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_snapSlotsSave_isQueued, put=setStaticF_snapSlotsSave_isQueued)) bool  snapSlotsSave_isQueued;

/// @brief Field snapSlotsSave_lastSavedHash, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_snapSlotsSave_lastSavedHash, put=setStaticF_snapSlotsSave_lastSavedHash)) int32_t  snapSlotsSave_lastSavedHash;

/// @brief Field snapSlotsSave_lastTime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_snapSlotsSave_lastTime, put=setStaticF_snapSlotsSave_lastTime)) float_t  snapSlotsSave_lastTime;

/// @brief Convert operator to "::GlobalNamespace::IDelayedExecListener"
constexpr operator  ::GlobalNamespace::IDelayedExecListener*() noexcept;

/// @brief Method Awake, addr 0x583c0c4, size 0x258, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearGrabbed, addr 0x583e848, size 0x70, virtual false, abstract: false, final false
inline void ClearGrabbed(int32_t  handIndex) ;

/// @brief Method ClearGrabbedIfHeld, addr 0x583f0e4, size 0x6c, virtual false, abstract: false, final false
inline void ClearGrabbedIfHeld(::GlobalNamespace::GameEntityId  gameBallId, ::GlobalNamespace::GameEntityManager*  manager) ;

/// @brief Method ClearTriggerInteractables, addr 0x583f408, size 0x154, virtual false, abstract: false, final false
inline void ClearTriggerInteractables(int32_t  handIndex) ;

/// @brief Method DebugSlotsReport, addr 0x583c64c, size 0x694, virtual false, abstract: false, final false
inline void DebugSlotsReport(::StringW  header) ;

/// @brief Method GetFingerTransform, addr 0x583f268, size 0xcc, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetFingerTransform(int32_t  handIndex) ;

/// @brief Method GetHandAngularVelocity, addr 0x5840084, size 0x190, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetHandAngularVelocity(int32_t  handIndex) ;

/// @brief Method GetHandSpeed, addr 0x5835700, size 0x40, virtual false, abstract: false, final false
inline float_t GetHandSpeed(int32_t  handIndex) ;

/// @brief Method GetHandVelocity, addr 0x5835740, size 0x248, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetHandVelocity(int32_t  handIndex) ;

/// @brief Method GetXRNode, addr 0x583cce0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::XR::XRNode GetXRNode(int32_t  handIndex) ;

/// @brief Method IDelayedExecListener.OnDelayedAction, addr 0x5840680, size 0x50, virtual true, abstract: false, final true
inline void IDelayedExecListener_OnDelayedAction(int32_t  contextId) ;

/// @brief Method IsHandHolding, addr 0x5840214, size 0x78, virtual false, abstract: false, final false
static inline bool IsHandHolding(::UnityEngine::XR::XRNode  xrNode) ;

/// @brief Method MigrateToEntityManager, addr 0x583e524, size 0x324, virtual false, abstract: false, final false
inline void MigrateToEntityManager(::GlobalNamespace::GameEntityManager*  newEntityManager) ;

static inline ::GlobalNamespace::GamePlayerLocal* New_ctor() ;

/// @brief Method OnJoinRoom, addr 0x583c3b0, size 0x14, virtual false, abstract: false, final false
inline void OnJoinRoom() ;

/// @brief Method OnUpdateInteract, addr 0x583c3c4, size 0x84, virtual false, abstract: false, final false
inline void OnUpdateInteract() ;

/// @brief Method PlayCatchFx, addr 0x584028c, size 0xf8, virtual false, abstract: false, final false
inline void PlayCatchFx(bool  isLeftHand) ;

/// @brief Method PlayThrowFx, addr 0x5840384, size 0x104, virtual false, abstract: false, final false
inline void PlayThrowFx(bool  isLeftHand) ;

/// @brief Method SaveSnapSlotsRateLimited, addr 0x583fcdc, size 0x11c, virtual false, abstract: false, final false
static inline void SaveSnapSlotsRateLimited() ;

/// @brief Method SetGrabSlotRecoveryData, addr 0x584053c, size 0x144, virtual false, abstract: false, final false
static inline void SetGrabSlotRecoveryData(int32_t  slot, int32_t  typeId, int64_t  createData, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method SetGrabbed, addr 0x583ef94, size 0x150, virtual false, abstract: false, final false
inline void SetGrabbed(::GlobalNamespace::GameEntityId  gameBallId, int32_t  handIndex) ;

/// @brief Method SetSlotRecoveryData, addr 0x5840498, size 0xa4, virtual false, abstract: false, final false
static inline void SetSlotRecoveryData(int32_t  slot, int32_t  typeId, int64_t  createData) ;

/// @brief Method TryGetMigrationRecoveryList, addr 0x583e8b8, size 0x6dc, virtual false, abstract: false, final false
static inline bool TryGetMigrationRecoveryList(::GlobalNamespace::GameEntityManager*  newEntityManager, ::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>*>  out_recoveryList) ;

/// @brief Method UpdateHand, addr 0x583c59c, size 0xb0, virtual false, abstract: false, final false
inline void UpdateHand(::GlobalNamespace::GameEntityManager*  emptyHandManager, int32_t  handIndex) ;

/// @brief Method UpdateHandEmpty, addr 0x583ce1c, size 0xa80, virtual false, abstract: false, final false
inline void UpdateHandEmpty(::GlobalNamespace::GameEntityManager*  gameEntityManager, int32_t  handIndex) ;

/// @brief Method UpdateHandHolding, addr 0x583d89c, size 0xc88, virtual false, abstract: false, final false
inline void UpdateHandHolding(::GlobalNamespace::GameEntityManager*  gameEntityManager, int32_t  handIndex) ;

/// @brief Method UpdateInput, addr 0x583c448, size 0x154, virtual false, abstract: false, final false
inline void UpdateInput(int32_t  handIndex) ;

/// @brief Method UpdateStuckState, addr 0x583f150, size 0x118, virtual false, abstract: false, final false
inline void UpdateStuckState() ;

/// @brief Method _LoadSnappedPlayerPrefsToCache, addr 0x5840b08, size 0x2cc, virtual false, abstract: false, final false
static inline void _LoadSnappedPlayerPrefsToCache(::GlobalNamespace::GamePlayer*  gamePlayer) ;

/// @brief Method _SaveSnapSlotsImmediately, addr 0x58406d0, size 0x438, virtual false, abstract: false, final false
static inline void _SaveSnapSlotsImmediately() ;

/// @brief Method _SnapSlotsSave_GetHash, addr 0x5840dd4, size 0x14c, virtual false, abstract: false, final false
static inline int32_t _SnapSlotsSave_GetHash(::ArrayW<::GlobalNamespace::GamePlayerLocal_SlotRecoveryData>  slotsCache) ;

constexpr ::UnityW<::GlobalNamespace::GameEntityManager> const& __cordl_internal_get_currGameEntityManager() const;

constexpr ::UnityW<::GlobalNamespace::GameEntityManager>& __cordl_internal_get_currGameEntityManager() ;

constexpr ::UnityW<::GlobalNamespace::GamePlayer> const& __cordl_internal_get_gamePlayer() const;

constexpr ::UnityW<::GlobalNamespace::GamePlayer>& __cordl_internal_get_gamePlayer() ;

constexpr ::ArrayW<::GlobalNamespace::GamePlayerLocal_HandData> const& __cordl_internal_get_hands() const;

constexpr ::ArrayW<::GlobalNamespace::GamePlayerLocal_HandData>& __cordl_internal_get_hands() ;

constexpr ::ArrayW<::GlobalNamespace::GamePlayerLocal_InputData*> const& __cordl_internal_get_inputData() const;

constexpr ::ArrayW<::GlobalNamespace::GamePlayerLocal_InputData*>& __cordl_internal_get_inputData() ;

constexpr bool const& __cordl_internal_get_joinWithItemsSentForCurrentMigration() const;

constexpr bool& __cordl_internal_get_joinWithItemsSentForCurrentMigration() ;

constexpr bool const& __cordl_internal_get_pendingFullMigration() const;

constexpr bool& __cordl_internal_get_pendingFullMigration() ;

constexpr void __cordl_internal_set_currGameEntityManager(::UnityW<::GlobalNamespace::GameEntityManager>  value) ;

constexpr void __cordl_internal_set_gamePlayer(::UnityW<::GlobalNamespace::GamePlayer>  value) ;

constexpr void __cordl_internal_set_hands(::ArrayW<::GlobalNamespace::GamePlayerLocal_HandData>  value) ;

constexpr void __cordl_internal_set_inputData(::ArrayW<::GlobalNamespace::GamePlayerLocal_InputData*>  value) ;

constexpr void __cordl_internal_set_joinWithItemsSentForCurrentMigration(bool  value) ;

constexpr void __cordl_internal_set_pendingFullMigration(bool  value) ;

/// @brief Method .ctor, addr 0x5840f20, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>* getStaticF__migrationRecoveryList() ;

static inline ::ArrayW<::GlobalNamespace::GamePlayerLocal_GrabSlotExtraRecoveryData> getStaticF_grabSlotsExtraRecoveryData() ;

static inline ::UnityW<::GlobalNamespace::GamePlayerLocal> getStaticF_instance() ;

static inline ::ArrayW<::GlobalNamespace::GamePlayerLocal_SlotRecoveryData> getStaticF_slotsRecoveryData() ;

static inline int32_t getStaticF_snapSlotsSave_frameWhenQueued() ;

static inline bool getStaticF_snapSlotsSave_isQueued() ;

static inline int32_t getStaticF_snapSlotsSave_lastSavedHash() ;

static inline float_t getStaticF_snapSlotsSave_lastTime() ;

/// @brief Convert to "::GlobalNamespace::IDelayedExecListener"
constexpr ::GlobalNamespace::IDelayedExecListener* i___GlobalNamespace__IDelayedExecListener() noexcept;

static inline void setStaticF__migrationRecoveryList(::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>*  value) ;

static inline void setStaticF_grabSlotsExtraRecoveryData(::ArrayW<::GlobalNamespace::GamePlayerLocal_GrabSlotExtraRecoveryData>  value) ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::GamePlayerLocal>  value) ;

static inline void setStaticF_slotsRecoveryData(::ArrayW<::GlobalNamespace::GamePlayerLocal_SlotRecoveryData>  value) ;

static inline void setStaticF_snapSlotsSave_frameWhenQueued(int32_t  value) ;

static inline void setStaticF_snapSlotsSave_isQueued(bool  value) ;

static inline void setStaticF_snapSlotsSave_lastSavedHash(int32_t  value) ;

static inline void setStaticF_snapSlotsSave_lastTime(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GamePlayerLocal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GamePlayerLocal", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GamePlayerLocal(GamePlayerLocal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GamePlayerLocal", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GamePlayerLocal(GamePlayerLocal const& ) = delete;

/// @brief Field MAX_INPUT_HISTORY offset 0xffffffff size 0x4
static constexpr int32_t  MAX_INPUT_HISTORY{static_cast<int32_t>(0x20)};

/// @brief Field SNAP_SLOTS_SAVE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  SNAP_SLOTS_SAVE_KEY{u"GT_SnappedItems_V1"};

/// @brief Field SNAP_SLOTS_SAVE__INTERVAL offset 0xffffffff size 0x4
static constexpr float_t  SNAP_SLOTS_SAVE__INTERVAL{static_cast<float_t>(2.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1790};

/// @brief Field preErr offset 0xffffffff size 0x8
static constexpr ::ConstString  preErr{u"[GamePlayerLocal]  ERROR!!!  "};

/// @brief Field preLog offset 0xffffffff size 0x8
static constexpr ::ConstString  preLog{u"[GamePlayerLocal]  "};

/// @brief Field gamePlayer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GamePlayer>  ___gamePlayer;

/// @brief Field hands, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GamePlayerLocal_HandData>  ___hands;

/// @brief Field inputData, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GamePlayerLocal_InputData*>  ___inputData;

/// @brief Field currGameEntityManager, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntityManager>  ___currGameEntityManager;

/// @brief Field joinWithItemsSentForCurrentMigration, offset: 0x40, size: 0x1, def value: None
 bool  ___joinWithItemsSentForCurrentMigration;

/// @brief Field pendingFullMigration, offset: 0x41, size: 0x1, def value: None
 bool  ___pendingFullMigration;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GamePlayerLocal, ___gamePlayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayerLocal, ___hands) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayerLocal, ___inputData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayerLocal, ___currGameEntityManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayerLocal, ___joinWithItemsSentForCurrentMigration) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayerLocal, ___pendingFullMigration) == 0x41, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GamePlayerLocal) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GamePlayerLocal/InputData
class CORDL_TYPE GamePlayerLocal_InputData : public ::System::Object {
public:
// Declarations
/// @brief Field inputMotionHistory, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputMotionHistory, put=__cordl_internal_set_inputMotionHistory)) ::System::Collections::Generic::List_1<::GlobalNamespace::GamePlayerLocal_InputDataMotion>*  inputMotionHistory;

/// @brief Field maxInputs, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxInputs, put=__cordl_internal_set_maxInputs)) int32_t  maxInputs;

/// @brief Method AddInput, addr 0x583ccf0, size 0x12c, virtual false, abstract: false, final false
inline void AddInput(::GlobalNamespace::GamePlayerLocal_InputDataMotion  data) ;

/// @brief Method GetAvgVel, addr 0x583ff04, size 0x180, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetAvgVel(float_t  ignoreRecent, float_t  window) ;

/// @brief Method GetMaxSpeed, addr 0x583fdf8, size 0x10c, virtual false, abstract: false, final false
inline float_t GetMaxSpeed(float_t  ignoreRecent, float_t  window) ;

static inline ::GlobalNamespace::GamePlayerLocal_InputData* New_ctor(int32_t  maxInputs) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GamePlayerLocal_InputDataMotion>* const& __cordl_internal_get_inputMotionHistory() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GamePlayerLocal_InputDataMotion>*& __cordl_internal_get_inputMotionHistory() ;

constexpr int32_t const& __cordl_internal_get_maxInputs() const;

constexpr int32_t& __cordl_internal_get_maxInputs() ;

constexpr void __cordl_internal_set_inputMotionHistory(::System::Collections::Generic::List_1<::GlobalNamespace::GamePlayerLocal_InputDataMotion>*  value) ;

constexpr void __cordl_internal_set_maxInputs(int32_t  value) ;

/// @brief Method .ctor, addr 0x583c31c, size 0x94, virtual false, abstract: false, final false
inline void _ctor(int32_t  maxInputs) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GamePlayerLocal_InputData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GamePlayerLocal_InputData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GamePlayerLocal_InputData(GamePlayerLocal_InputData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GamePlayerLocal_InputData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GamePlayerLocal_InputData(GamePlayerLocal_InputData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1787};

/// @brief Field maxInputs, offset: 0x10, size: 0x4, def value: None
 int32_t  ___maxInputs;

/// @brief Field inputMotionHistory, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GamePlayerLocal_InputDataMotion>*  ___inputMotionHistory;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GamePlayerLocal_InputData, ___maxInputs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayerLocal_InputData, ___inputMotionHistory) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GamePlayerLocal_InputData) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
