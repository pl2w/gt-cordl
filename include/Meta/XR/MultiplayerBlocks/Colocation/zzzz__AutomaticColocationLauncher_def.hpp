#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/AutomaticColocationLauncher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AutomaticColocationLauncher)
namespace GlobalNamespace {
struct AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19;
}
namespace GlobalNamespace {
struct AutomaticColocationLauncher__ColocateByPlayerWithOculusIdInternal_d__20;
}
namespace GlobalNamespace {
struct AutomaticColocationLauncher__CreateNewColocatedSpace_d__23;
}
namespace GlobalNamespace {
struct AutomaticColocationLauncher__LocalizeAnchor_d__30;
}
namespace GlobalNamespace {
struct AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28;
}
namespace GlobalNamespace {
class OVRSpatialAnchor;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct Anchor;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct ColocationFailedReason;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class INetworkData;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class INetworkMessenger;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct ShareAndLocalizeParams;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class SharedAnchorManager;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
struct Guid;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Colocation {
class AutomaticColocationLauncher;
}
// Write type traits
MARK_REF_T(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*, "Meta.XR.MultiplayerBlocks.Colocation", "AutomaticColocationLauncher");
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher
class CORDL_TYPE AutomaticColocationLauncher : public ::System::Object {
public:
// Declarations
using _ColocateAutomaticallyInternal_d__19 = ::GlobalNamespace::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19;

using _ColocateByPlayerWithOculusIdInternal_d__20 = ::GlobalNamespace::AutomaticColocationLauncher__ColocateByPlayerWithOculusIdInternal_d__20;

using _CreateNewColocatedSpace_d__23 = ::GlobalNamespace::AutomaticColocationLauncher__CreateNewColocatedSpace_d__23;

using _LocalizeAnchor_d__30 = ::GlobalNamespace::AutomaticColocationLauncher__LocalizeAnchor_d__30;

using _OnAnchorShareRequestReceived_d__28 = ::GlobalNamespace::AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28;

/// @brief Field ColocationFailed, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ColocationFailed, put=__cordl_internal_set_ColocationFailed)) ::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason>*  ColocationFailed;

/// @brief Field ColocationReady, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ColocationReady, put=__cordl_internal_set_ColocationReady)) ::System::Action*  ColocationReady;

/// @brief Field _alignToAnchorTask, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__alignToAnchorTask, put=__cordl_internal_set__alignToAnchorTask)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  _alignToAnchorTask;

/// @brief Field _cameraRig, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraRig, put=__cordl_internal_set__cameraRig)) ::UnityW<::UnityEngine::GameObject>  _cameraRig;

/// @brief Field _myAlignmentAnchor, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__myAlignmentAnchor, put=__cordl_internal_set__myAlignmentAnchor)) ::UnityW<::GlobalNamespace::OVRSpatialAnchor>  _myAlignmentAnchor;

/// @brief Field _myOculusId, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__myOculusId, put=__cordl_internal_set__myOculusId)) uint64_t  _myOculusId;

/// @brief Field _myPlayerId, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__myPlayerId, put=__cordl_internal_set__myPlayerId)) uint64_t  _myPlayerId;

/// @brief Field _networkData, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__networkData, put=__cordl_internal_set__networkData)) ::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*  _networkData;

/// @brief Field _networkMessenger, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__networkMessenger, put=__cordl_internal_set__networkMessenger)) ::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*  _networkMessenger;

/// @brief Field _oculusIdToColocateTo, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__oculusIdToColocateTo, put=__cordl_internal_set__oculusIdToColocateTo)) uint64_t  _oculusIdToColocateTo;

/// @brief Field _sharedAnchorManager, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__sharedAnchorManager, put=__cordl_internal_set__sharedAnchorManager)) ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*  _sharedAnchorManager;

/// @brief Method AlignPlayerToAnchor, addr 0x9f738e0, size 0x88, virtual false, abstract: false, final false
inline void AlignPlayerToAnchor() ;

/// @brief Method ColocateAutomatically, addr 0x9f6a7dc, size 0x4, virtual false, abstract: false, final false
inline void ColocateAutomatically() ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher::<ColocateAutomaticallyInternal>d__19))]
/// @brief Method ColocateAutomaticallyInternal, addr 0x9f73148, size 0xa8, virtual false, abstract: false, final false
inline void ColocateAutomaticallyInternal() ;

/// @brief Method ColocateByPlayerWithOculusId, addr 0x9f731f0, size 0x4, virtual false, abstract: false, final false
inline void ColocateByPlayerWithOculusId(uint64_t  oculusId) ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher::<ColocateByPlayerWithOculusIdInternal>d__20))]
/// @brief Method ColocateByPlayerWithOculusIdInternal, addr 0x9f731f4, size 0xbc, virtual false, abstract: false, final false
inline void ColocateByPlayerWithOculusIdInternal(uint64_t  oculusId) ;

/// @brief Method CreateColocatedSpace, addr 0x9f732b0, size 0x4, virtual false, abstract: false, final false
inline void CreateColocatedSpace() ;

/// @brief Method CreateColocatedSpaceInternal, addr 0x9f732b4, size 0x4, virtual false, abstract: false, final false
inline void CreateColocatedSpaceInternal() ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher::<CreateNewColocatedSpace>d__23))]
/// @brief Method CreateNewColocatedSpace, addr 0x9f73838, size 0xa8, virtual false, abstract: false, final false
inline void CreateNewColocatedSpace() ;

/// @brief Method FindAlignmentAnchorUsedByOculusId, addr 0x9f732b8, size 0x580, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor> FindAlignmentAnchorUsedByOculusId(uint64_t  oculusId) ;

/// @brief Method GetAllAlignmentAnchors, addr 0x9f73968, size 0x328, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>* GetAllAlignmentAnchors() ;

/// @brief Method Init, addr 0x9f6a50c, size 0x220, virtual false, abstract: false, final false
inline void Init(::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*  networkData, ::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*  networkMessenger, ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*  sharedAnchorManager, ::UnityEngine::GameObject*  cameraRig, uint64_t  myPlayerId, uint64_t  myOculusId) ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher::<LocalizeAnchor>d__30))]
/// @brief Method LocalizeAnchor, addr 0x9f74518, size 0xbc, virtual false, abstract: false, final false
inline void LocalizeAnchor(::System::Guid  anchorToLocalize) ;

static inline ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher* New_ctor() ;

/// @brief Method OnAnchorShareRequestCompleted, addr 0x9f742b0, size 0x268, virtual false, abstract: false, final false
inline void OnAnchorShareRequestCompleted(::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams  shareAndLocalizeParams) ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher::<OnAnchorShareRequestReceived>d__28))]
/// @brief Method OnAnchorShareRequestReceived, addr 0x9f741ec, size 0xc4, virtual false, abstract: false, final false
inline void OnAnchorShareRequestReceived(::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams  shareAndLocalizeParams) ;

/// @brief Method SendAnchorShareRequest, addr 0x9f73d58, size 0x480, virtual false, abstract: false, final false
inline void SendAnchorShareRequest(::Meta::XR::MultiplayerBlocks::Colocation::Anchor  anchor) ;

/// @brief Method ShareAndLocalizeAnchor, addr 0x9f73c90, size 0xc8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* ShareAndLocalizeAnchor(::Meta::XR::MultiplayerBlocks::Colocation::Anchor  anchor) ;

constexpr ::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason>* const& __cordl_internal_get_ColocationFailed() const;

constexpr ::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason>*& __cordl_internal_get_ColocationFailed() ;

constexpr ::System::Action* const& __cordl_internal_get_ColocationReady() const;

constexpr ::System::Action*& __cordl_internal_get_ColocationReady() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get__alignToAnchorTask() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get__alignToAnchorTask() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__cameraRig() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__cameraRig() ;

constexpr ::UnityW<::GlobalNamespace::OVRSpatialAnchor> const& __cordl_internal_get__myAlignmentAnchor() const;

constexpr ::UnityW<::GlobalNamespace::OVRSpatialAnchor>& __cordl_internal_get__myAlignmentAnchor() ;

constexpr uint64_t const& __cordl_internal_get__myOculusId() const;

constexpr uint64_t& __cordl_internal_get__myOculusId() ;

constexpr uint64_t const& __cordl_internal_get__myPlayerId() const;

constexpr uint64_t& __cordl_internal_get__myPlayerId() ;

constexpr ::Meta::XR::MultiplayerBlocks::Colocation::INetworkData* const& __cordl_internal_get__networkData() const;

constexpr ::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*& __cordl_internal_get__networkData() ;

constexpr ::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger* const& __cordl_internal_get__networkMessenger() const;

constexpr ::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*& __cordl_internal_get__networkMessenger() ;

constexpr uint64_t const& __cordl_internal_get__oculusIdToColocateTo() const;

constexpr uint64_t& __cordl_internal_get__oculusIdToColocateTo() ;

constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* const& __cordl_internal_get__sharedAnchorManager() const;

constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*& __cordl_internal_get__sharedAnchorManager() ;

constexpr void __cordl_internal_set_ColocationFailed(::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason>*  value) ;

constexpr void __cordl_internal_set_ColocationReady(::System::Action*  value) ;

constexpr void __cordl_internal_set__alignToAnchorTask(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

constexpr void __cordl_internal_set__cameraRig(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__myAlignmentAnchor(::UnityW<::GlobalNamespace::OVRSpatialAnchor>  value) ;

constexpr void __cordl_internal_set__myOculusId(uint64_t  value) ;

constexpr void __cordl_internal_set__myPlayerId(uint64_t  value) ;

constexpr void __cordl_internal_set__networkData(::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*  value) ;

constexpr void __cordl_internal_set__networkMessenger(::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*  value) ;

constexpr void __cordl_internal_set__oculusIdToColocateTo(uint64_t  value) ;

constexpr void __cordl_internal_set__sharedAnchorManager(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*  value) ;

/// @brief Method .ctor, addr 0x9f6a504, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_ColocationFailed, addr 0x9f6a72c, size 0xb0, virtual false, abstract: false, final false
inline void add_ColocationFailed(::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_ColocationReady, addr 0x9f72f60, size 0x9c, virtual false, abstract: false, final false
inline void add_ColocationReady(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_ColocationFailed, addr 0x9f73098, size 0xb0, virtual false, abstract: false, final false
inline void remove_ColocationFailed(::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_ColocationReady, addr 0x9f72ffc, size 0x9c, virtual false, abstract: false, final false
inline void remove_ColocationReady(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AutomaticColocationLauncher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AutomaticColocationLauncher", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AutomaticColocationLauncher(AutomaticColocationLauncher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AutomaticColocationLauncher", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AutomaticColocationLauncher(AutomaticColocationLauncher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30670};

/// [CompilerGenerated]
/// @brief Field ColocationReady, offset: 0x10, size: 0x8, def value: None
 ::System::Action*  ___ColocationReady;

/// [CompilerGenerated]
/// @brief Field ColocationFailed, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason>*  ___ColocationFailed;

/// @brief Field _cameraRig, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____cameraRig;

/// @brief Field _alignToAnchorTask, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  ____alignToAnchorTask;

/// @brief Field _myAlignmentAnchor, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRSpatialAnchor>  ____myAlignmentAnchor;

/// @brief Field _myPlayerId, offset: 0x38, size: 0x8, def value: None
 uint64_t  ____myPlayerId;

/// @brief Field _myOculusId, offset: 0x40, size: 0x8, def value: None
 uint64_t  ____myOculusId;

/// @brief Field _networkData, offset: 0x48, size: 0x8, def value: None
 ::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*  ____networkData;

/// @brief Field _networkMessenger, offset: 0x50, size: 0x8, def value: None
 ::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*  ____networkMessenger;

/// @brief Field _oculusIdToColocateTo, offset: 0x58, size: 0x8, def value: None
 uint64_t  ____oculusIdToColocateTo;

/// @brief Field _sharedAnchorManager, offset: 0x60, size: 0x8, def value: None
 ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*  ____sharedAnchorManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher, ___ColocationReady) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher, ___ColocationFailed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher, ____cameraRig) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher, ____alignToAnchorTask) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher, ____myAlignmentAnchor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher, ____myPlayerId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher, ____myOculusId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher, ____networkData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher, ____networkMessenger) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher, ____oculusIdToColocateTo) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher, ____sharedAnchorManager) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher) == 0x68, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Colocation
