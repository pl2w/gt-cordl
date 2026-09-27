#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/ColocationSessionEventHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__ColocationSessionEventHandler_Basis_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ColocationSessionEventHandler)
namespace GlobalNamespace {
struct ColocationSessionEventHandler_Basis;
}
namespace GlobalNamespace {
struct ColocationSessionEventHandler_SpaceSharingInfo;
}
namespace GlobalNamespace {
struct ColocationSessionEventHandler__LoadScene_d__14;
}
namespace GlobalNamespace {
struct ColocationSessionEventHandler__OnSessionCreatedWithSpaceSharing_d__15;
}
namespace GlobalNamespace {
struct ColocationSessionEventHandler__OnSessionCreatedWithSpatialAnchor_d__10;
}
namespace GlobalNamespace {
struct ColocationSessionEventHandler__OnSessionDiscoveredWithSpaceSharing_d__16;
}
namespace GlobalNamespace {
struct ColocationSessionEventHandler__OnSessionDiscoveredWithSpatialAnchor_d__11;
}
namespace GlobalNamespace {
struct ColocationSessionEventHandler__RequestScenePermissionIfNeeded_d__13;
}
namespace GlobalNamespace {
struct ColocationSessionEventHandler__SpaceSharingBeforeHostStart_d__12;
}
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class AlignCameraToAnchor;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class SharedAnchorManager;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class ColocationController;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class ColocationSessionEventHandler___c;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class ColocationSessionEventHandler___c__DisplayClass13_0;
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
struct Guid;
}
namespace UnityEngine::Events {
class UnityAction;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Shared {
class ColocationSessionEventHandler;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class ColocationSessionEventHandler___c;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class ColocationSessionEventHandler___c__DisplayClass13_0;
}
// Write type traits
MARK_REF_T(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*);
MARK_REF_T(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c*);
MARK_REF_T(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c__DisplayClass13_0*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*, "Meta.XR.MultiplayerBlocks.Shared", "ColocationSessionEventHandler");
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c*, "Meta.XR.MultiplayerBlocks.Shared", "ColocationSessionEventHandler/<>c");
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c__DisplayClass13_0*, "Meta.XR.MultiplayerBlocks.Shared", "ColocationSessionEventHandler/<>c__DisplayClass13_0");
// Dependencies Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler::Basis, UnityEngine.MonoBehaviour
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler
class CORDL_TYPE ColocationSessionEventHandler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Basis = ::GlobalNamespace::ColocationSessionEventHandler_Basis;

using SpaceSharingInfo = ::GlobalNamespace::ColocationSessionEventHandler_SpaceSharingInfo;

using _LoadScene_d__14 = ::GlobalNamespace::ColocationSessionEventHandler__LoadScene_d__14;

using _OnSessionCreatedWithSpaceSharing_d__15 = ::GlobalNamespace::ColocationSessionEventHandler__OnSessionCreatedWithSpaceSharing_d__15;

using _OnSessionCreatedWithSpatialAnchor_d__10 = ::GlobalNamespace::ColocationSessionEventHandler__OnSessionCreatedWithSpatialAnchor_d__10;

using _OnSessionDiscoveredWithSpaceSharing_d__16 = ::GlobalNamespace::ColocationSessionEventHandler__OnSessionDiscoveredWithSpaceSharing_d__16;

using _OnSessionDiscoveredWithSpatialAnchor_d__11 = ::GlobalNamespace::ColocationSessionEventHandler__OnSessionDiscoveredWithSpatialAnchor_d__11;

using _RequestScenePermissionIfNeeded_d__13 = ::GlobalNamespace::ColocationSessionEventHandler__RequestScenePermissionIfNeeded_d__13;

using _SpaceSharingBeforeHostStart_d__12 = ::GlobalNamespace::ColocationSessionEventHandler__SpaceSharingBeforeHostStart_d__12;

using __c = ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c;

using __c__DisplayClass13_0 = ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c__DisplayClass13_0;

/// @brief Field AnchorPrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_AnchorPrefab, put=__cordl_internal_set_AnchorPrefab)) ::UnityW<::UnityEngine::GameObject>  AnchorPrefab;

/// @brief Field _alignCameraToAnchor, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__alignCameraToAnchor, put=__cordl_internal_set__alignCameraToAnchor)) ::UnityW<::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor>  _alignCameraToAnchor;

/// @brief Field _cameraRig, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraRig, put=__cordl_internal_set__cameraRig)) ::UnityW<::GlobalNamespace::OVRCameraRig>  _cameraRig;

/// @brief Field _colocationController, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__colocationController, put=__cordl_internal_set__colocationController)) ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::ColocationController>  _colocationController;

/// @brief Field _sharedAnchorManager, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__sharedAnchorManager, put=__cordl_internal_set__sharedAnchorManager)) ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*  _sharedAnchorManager;

/// @brief Field basis, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_basis, put=__cordl_internal_set_basis)) ::GlobalNamespace::ColocationSessionEventHandler_Basis  basis;

/// @brief Method Awake, addr 0x9f66874, size 0x13c, virtual false, abstract: false, final false
inline void Awake() ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler::<LoadScene>d__14))]
/// @brief Method LoadScene, addr 0x9f671b0, size 0xec, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* LoadScene() ;

static inline ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9f67418, size 0x258, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler::<OnSessionCreatedWithSpaceSharing>d__15))]
/// @brief Method OnSessionCreatedWithSpaceSharing, addr 0x9f6729c, size 0xc0, virtual false, abstract: false, final false
inline void OnSessionCreatedWithSpaceSharing(::System::Guid  groupUuid) ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler::<OnSessionCreatedWithSpatialAnchor>d__10))]
/// @brief Method OnSessionCreatedWithSpatialAnchor, addr 0x9f66e44, size 0xbc, virtual false, abstract: false, final false
inline void OnSessionCreatedWithSpatialAnchor(::System::Guid  groupUuid) ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler::<OnSessionDiscoveredWithSpaceSharing>d__16))]
/// @brief Method OnSessionDiscoveredWithSpaceSharing, addr 0x9f6735c, size 0xbc, virtual false, abstract: false, final false
inline void OnSessionDiscoveredWithSpaceSharing(::System::Guid  groupUuid) ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler::<OnSessionDiscoveredWithSpatialAnchor>d__11))]
/// @brief Method OnSessionDiscoveredWithSpatialAnchor, addr 0x9f66f00, size 0xbc, virtual false, abstract: false, final false
inline void OnSessionDiscoveredWithSpatialAnchor(::System::Guid  groupUuid) ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler::<RequestScenePermissionIfNeeded>d__13))]
/// @brief Method RequestScenePermissionIfNeeded, addr 0x9f670c4, size 0xec, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* RequestScenePermissionIfNeeded() ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler::<SpaceSharingBeforeHostStart>d__12))]
/// @brief Method SpaceSharingBeforeHostStart, addr 0x9f66fbc, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* SpaceSharingBeforeHostStart() ;

/// @brief Method Start, addr 0x9f669b0, size 0x380, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_AnchorPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_AnchorPrefab() ;

constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor> const& __cordl_internal_get__alignCameraToAnchor() const;

constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor>& __cordl_internal_get__alignCameraToAnchor() ;

constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& __cordl_internal_get__cameraRig() const;

constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& __cordl_internal_get__cameraRig() ;

constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::ColocationController> const& __cordl_internal_get__colocationController() const;

constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::ColocationController>& __cordl_internal_get__colocationController() ;

constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* const& __cordl_internal_get__sharedAnchorManager() const;

constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*& __cordl_internal_get__sharedAnchorManager() ;

constexpr ::GlobalNamespace::ColocationSessionEventHandler_Basis const& __cordl_internal_get_basis() const;

constexpr ::GlobalNamespace::ColocationSessionEventHandler_Basis& __cordl_internal_get_basis() ;

constexpr void __cordl_internal_set_AnchorPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__alignCameraToAnchor(::UnityW<::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor>  value) ;

constexpr void __cordl_internal_set__cameraRig(::UnityW<::GlobalNamespace::OVRCameraRig>  value) ;

constexpr void __cordl_internal_set__colocationController(::UnityW<::Meta::XR::MultiplayerBlocks::Shared::ColocationController>  value) ;

constexpr void __cordl_internal_set__sharedAnchorManager(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*  value) ;

constexpr void __cordl_internal_set_basis(::GlobalNamespace::ColocationSessionEventHandler_Basis  value) ;

/// @brief Method .ctor, addr 0x9f67670, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColocationSessionEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColocationSessionEventHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ColocationSessionEventHandler(ColocationSessionEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColocationSessionEventHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColocationSessionEventHandler(ColocationSessionEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30618};

/// [Tooltip("The basis alignment/common reference approach for colocation")]
/// [SerializeField]
/// @brief Field basis, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::ColocationSessionEventHandler_Basis  ___basis;

/// [SerializeField]
/// @brief Field AnchorPrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___AnchorPrefab;

/// @brief Field _colocationController, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::ColocationController>  ____colocationController;

/// @brief Field _sharedAnchorManager, offset: 0x38, size: 0x8, def value: None
 ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*  ____sharedAnchorManager;

/// @brief Field _alignCameraToAnchor, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor>  ____alignCameraToAnchor;

/// @brief Field _cameraRig, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRCameraRig>  ____cameraRig;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler, ___basis) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler, ___AnchorPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler, ____colocationController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler, ____sharedAnchorManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler, ____alignCameraToAnchor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler, ____cameraRig) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler) == 0x50, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Shared
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler/<>c__DisplayClass13_0
class CORDL_TYPE ColocationSessionEventHandler___c__DisplayClass13_0 : public ::System::Object {
public:
// Declarations
/// @brief Field taskCompletion, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_taskCompletion, put=__cordl_internal_set_taskCompletion)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  taskCompletion;

static inline ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c__DisplayClass13_0* New_ctor() ;

/// @brief Method <RequestScenePermissionIfNeeded>b__0, addr 0x9f678d0, size 0x70, virtual false, abstract: false, final false
inline void _RequestScenePermissionIfNeeded_b__0(::StringW  _) ;

/// @brief Method <RequestScenePermissionIfNeeded>b__1, addr 0x9f67a34, size 0x54, virtual false, abstract: false, final false
inline void _RequestScenePermissionIfNeeded_b__1(::StringW  _) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get_taskCompletion() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get_taskCompletion() ;

constexpr void __cordl_internal_set_taskCompletion(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

/// @brief Method .ctor, addr 0x9f678c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColocationSessionEventHandler___c__DisplayClass13_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColocationSessionEventHandler___c__DisplayClass13_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ColocationSessionEventHandler___c__DisplayClass13_0(ColocationSessionEventHandler___c__DisplayClass13_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColocationSessionEventHandler___c__DisplayClass13_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColocationSessionEventHandler___c__DisplayClass13_0(ColocationSessionEventHandler___c__DisplayClass13_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30610};

/// @brief Field taskCompletion, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  ___taskCompletion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c__DisplayClass13_0, ___taskCompletion) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c__DisplayClass13_0) == 0x18, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Shared
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler/<>c
class CORDL_TYPE ColocationSessionEventHandler___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c*  __9;

/// @brief Field <>9__14_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_0, put=setStaticF___9__14_0)) ::UnityEngine::Events::UnityAction*  __9__14_0;

static inline ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c* New_ctor() ;

/// @brief Method <LoadScene>b__14_0, addr 0x9f676e8, size 0x1e0, virtual false, abstract: false, final false
inline void _LoadScene_b__14_0() ;

/// @brief Method .ctor, addr 0x9f676e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c* getStaticF___9() ;

static inline ::UnityEngine::Events::UnityAction* getStaticF___9__14_0() ;

static inline void setStaticF___9(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c*  value) ;

static inline void setStaticF___9__14_0(::UnityEngine::Events::UnityAction*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColocationSessionEventHandler___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColocationSessionEventHandler___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ColocationSessionEventHandler___c(ColocationSessionEventHandler___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColocationSessionEventHandler___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColocationSessionEventHandler___c(ColocationSessionEventHandler___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30609};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c) == 0x10, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Shared
