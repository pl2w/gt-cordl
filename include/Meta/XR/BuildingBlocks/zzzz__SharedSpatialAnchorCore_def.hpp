#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/SharedSpatialAnchorCore.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/BuildingBlocks/zzzz__SpatialAnchorCoreBuildingBlock_def.hpp"
CORDL_MODULE_EXPORT(SharedSpatialAnchorCore)
namespace GlobalNamespace {
struct OVRAnchor_ShareResult;
}
namespace GlobalNamespace {
template<typename TStatus>
struct OVRResult_1;
}
namespace GlobalNamespace {
template<typename TValue,typename TStatus>
struct OVRResult_2;
}
namespace GlobalNamespace {
struct OVRSpaceUser;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor_OperationResult;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor_UnboundAnchor;
}
namespace GlobalNamespace {
class OVRSpatialAnchor;
}
namespace GlobalNamespace {
struct SharedSpatialAnchorCore__InitSpatialAnchor_d__16;
}
namespace GlobalNamespace {
struct SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15;
}
namespace GlobalNamespace {
struct SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18;
}
namespace GlobalNamespace {
struct SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17;
}
namespace GlobalNamespace {
struct SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
struct Guid;
}
namespace UnityEngine::Events {
template<typename T0,typename T1>
class UnityEvent_2;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Meta::XR::BuildingBlocks {
class SharedSpatialAnchorCore;
}
// Write type traits
MARK_REF_T(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*);
DEFINE_IL2CPP_CLASS(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*, "Meta.XR.BuildingBlocks", "SharedSpatialAnchorCore");
// Dependencies Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock
namespace Meta::XR::BuildingBlocks {
// Is value type: false
// CS Name: Meta.XR.BuildingBlocks.SharedSpatialAnchorCore
class CORDL_TYPE SharedSpatialAnchorCore : public ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock {
public:
// Declarations
using _InitSpatialAnchor_d__16 = ::GlobalNamespace::SharedSpatialAnchorCore__InitSpatialAnchor_d__16;

using _InstantiateSpatialAnchor_d__15 = ::GlobalNamespace::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15;

using _LoadAndInstantiateAnchorsFromGroup_d__18 = ::GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18;

using _LoadAndInstantiateAnchors_d__17 = ::GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17;

using _LoadSharedSpatialAnchorsRoutine_d__19 = ::GlobalNamespace::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19;

 __declspec(property(get=get_OnSharedSpatialAnchorsLoadCompleted, put=set_OnSharedSpatialAnchorsLoadCompleted)) ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  OnSharedSpatialAnchorsLoadCompleted;

 __declspec(property(get=get_OnSpatialAnchorsShareCompleted, put=set_OnSpatialAnchorsShareCompleted)) ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  OnSpatialAnchorsShareCompleted;

 __declspec(property(get=get_OnSpatialAnchorsShareToGroupCompleted, put=set_OnSpatialAnchorsShareToGroupCompleted)) ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRAnchor_ShareResult>*  OnSpatialAnchorsShareToGroupCompleted;

/// @brief Field _onShareCompleted, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__onShareCompleted, put=__cordl_internal_set__onShareCompleted)) ::System::Action_2<::GlobalNamespace::OVRSpatialAnchor_OperationResult,::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*  _onShareCompleted;

/// @brief Field _onShareToGroupCompleted, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__onShareToGroupCompleted, put=__cordl_internal_set__onShareToGroupCompleted)) ::System::Action_2<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>,::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*  _onShareToGroupCompleted;

/// @brief Field _onSharedSpatialAnchorsLoadCompleted, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__onSharedSpatialAnchorsLoadCompleted, put=__cordl_internal_set__onSharedSpatialAnchorsLoadCompleted)) ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  _onSharedSpatialAnchorsLoadCompleted;

/// @brief Field _onSpatialAnchorsShareCompleted, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__onSpatialAnchorsShareCompleted, put=__cordl_internal_set__onSpatialAnchorsShareCompleted)) ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  _onSpatialAnchorsShareCompleted;

/// @brief Field _onSpatialAnchorsShareToGroupCompleted, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__onSpatialAnchorsShareToGroupCompleted, put=__cordl_internal_set__onSpatialAnchorsShareToGroupCompleted)) ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRAnchor_ShareResult>*  _onSpatialAnchorsShareToGroupCompleted;

/// [AsyncStateMachine(typeof(Meta.XR.BuildingBlocks.SharedSpatialAnchorCore::<InitSpatialAnchor>d__16))]
/// @brief Method InitSpatialAnchor, addr 0x9ec50ec, size 0xf8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* InitSpatialAnchor(::GlobalNamespace::OVRSpatialAnchor*  anchor) ;

/// [AsyncStateMachine(typeof(Meta.XR.BuildingBlocks.SharedSpatialAnchorCore::<InstantiateSpatialAnchor>d__15))]
/// @brief Method InstantiateSpatialAnchor, addr 0x9ec4fdc, size 0x110, virtual false, abstract: false, final false
inline void InstantiateSpatialAnchor(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// [AsyncStateMachine(typeof(Meta.XR.BuildingBlocks.SharedSpatialAnchorCore::<LoadAndInstantiateAnchors>d__17))]
/// @brief Method LoadAndInstantiateAnchors, addr 0x9ec51e4, size 0xdc, virtual true, abstract: false, final false
inline void LoadAndInstantiateAnchors(::UnityEngine::GameObject*  prefab, ::System::Collections::Generic::List_1<::System::Guid>*  uuids) ;

/// [AsyncStateMachine(typeof(Meta.XR.BuildingBlocks.SharedSpatialAnchorCore::<LoadAndInstantiateAnchorsFromGroup>d__18))]
/// @brief Method LoadAndInstantiateAnchorsFromGroup, addr 0x9ec52c0, size 0xd8, virtual false, abstract: false, final false
inline void LoadAndInstantiateAnchorsFromGroup(::UnityEngine::GameObject*  prefab, ::System::Guid  groupUuid) ;

/// [AsyncStateMachine(typeof(Meta.XR.BuildingBlocks.SharedSpatialAnchorCore::<LoadSharedSpatialAnchorsRoutine>d__19))]
/// @brief Method LoadSharedSpatialAnchorsRoutine, addr 0x9ec5398, size 0xe4, virtual false, abstract: false, final false
inline void LoadSharedSpatialAnchorsRoutine(::UnityEngine::GameObject*  prefab, ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>  result) ;

static inline ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9ec5b48, size 0x188, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnShareCompleted, addr 0x9ec574c, size 0x1d4, virtual false, abstract: false, final false
inline void OnShareCompleted(::GlobalNamespace::OVRSpatialAnchor_OperationResult  result, ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  anchors) ;

/// @brief Method OnShareToGroupCompleted, addr 0x9ec5920, size 0x228, virtual false, abstract: false, final false
inline void OnShareToGroupCompleted(::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>  result, ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  anchors) ;

/// @brief Method ShareSpatialAnchors, addr 0x9ec55e8, size 0x164, virtual false, abstract: false, final false
inline void ShareSpatialAnchors(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  anchors, ::System::Guid  groupUuid) ;

/// @brief Method ShareSpatialAnchors, addr 0x9ec547c, size 0x16c, virtual false, abstract: false, final false
inline void ShareSpatialAnchors(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  anchors, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*  users) ;

/// @brief Method Start, addr 0x9ec4e54, size 0x188, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::System::Action_2<::GlobalNamespace::OVRSpatialAnchor_OperationResult,::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* const& __cordl_internal_get__onShareCompleted() const;

constexpr ::System::Action_2<::GlobalNamespace::OVRSpatialAnchor_OperationResult,::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*& __cordl_internal_get__onShareCompleted() ;

constexpr ::System::Action_2<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>,::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* const& __cordl_internal_get__onShareToGroupCompleted() const;

constexpr ::System::Action_2<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>,::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*& __cordl_internal_get__onShareToGroupCompleted() ;

constexpr ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>* const& __cordl_internal_get__onSharedSpatialAnchorsLoadCompleted() const;

constexpr ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*& __cordl_internal_get__onSharedSpatialAnchorsLoadCompleted() ;

constexpr ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>* const& __cordl_internal_get__onSpatialAnchorsShareCompleted() const;

constexpr ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*& __cordl_internal_get__onSpatialAnchorsShareCompleted() ;

constexpr ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRAnchor_ShareResult>* const& __cordl_internal_get__onSpatialAnchorsShareToGroupCompleted() const;

constexpr ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRAnchor_ShareResult>*& __cordl_internal_get__onSpatialAnchorsShareToGroupCompleted() ;

constexpr void __cordl_internal_set__onShareCompleted(::System::Action_2<::GlobalNamespace::OVRSpatialAnchor_OperationResult,::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*  value) ;

constexpr void __cordl_internal_set__onShareToGroupCompleted(::System::Action_2<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>,::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*  value) ;

constexpr void __cordl_internal_set__onSharedSpatialAnchorsLoadCompleted(::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  value) ;

constexpr void __cordl_internal_set__onSpatialAnchorsShareCompleted(::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  value) ;

constexpr void __cordl_internal_set__onSpatialAnchorsShareToGroupCompleted(::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRAnchor_ShareResult>*  value) ;

/// @brief Method .ctor, addr 0x9ec5cd0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_OnSharedSpatialAnchorsLoadCompleted, addr 0x9ec4e44, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>* get_OnSharedSpatialAnchorsLoadCompleted() ;

/// @brief Method get_OnSpatialAnchorsShareCompleted, addr 0x9ec4e24, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>* get_OnSpatialAnchorsShareCompleted() ;

/// @brief Method get_OnSpatialAnchorsShareToGroupCompleted, addr 0x9ec4e34, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRAnchor_ShareResult>* get_OnSpatialAnchorsShareToGroupCompleted() ;

/// @brief Method set_OnSharedSpatialAnchorsLoadCompleted, addr 0x9ec4e4c, size 0x8, virtual false, abstract: false, final false
inline void set_OnSharedSpatialAnchorsLoadCompleted(::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  value) ;

/// @brief Method set_OnSpatialAnchorsShareCompleted, addr 0x9ec4e2c, size 0x8, virtual false, abstract: false, final false
inline void set_OnSpatialAnchorsShareCompleted(::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  value) ;

/// @brief Method set_OnSpatialAnchorsShareToGroupCompleted, addr 0x9ec4e3c, size 0x8, virtual false, abstract: false, final false
inline void set_OnSpatialAnchorsShareToGroupCompleted(::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRAnchor_ShareResult>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedSpatialAnchorCore() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedSpatialAnchorCore", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedSpatialAnchorCore(SharedSpatialAnchorCore && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedSpatialAnchorCore", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedSpatialAnchorCore(SharedSpatialAnchorCore const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31456};

/// [SerializeField]
/// @brief Field _onSpatialAnchorsShareCompleted, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  ____onSpatialAnchorsShareCompleted;

/// [SerializeField]
/// @brief Field _onSpatialAnchorsShareToGroupCompleted, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRAnchor_ShareResult>*  ____onSpatialAnchorsShareToGroupCompleted;

/// [SerializeField]
/// @brief Field _onSharedSpatialAnchorsLoadCompleted, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  ____onSharedSpatialAnchorsLoadCompleted;

/// @brief Field _onShareCompleted, offset: 0x60, size: 0x8, def value: None
 ::System::Action_2<::GlobalNamespace::OVRSpatialAnchor_OperationResult,::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*  ____onShareCompleted;

/// @brief Field _onShareToGroupCompleted, offset: 0x68, size: 0x8, def value: None
 ::System::Action_2<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>,::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*  ____onShareToGroupCompleted;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore, ____onSpatialAnchorsShareCompleted) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore, ____onSpatialAnchorsShareToGroupCompleted) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore, ____onSharedSpatialAnchorsLoadCompleted) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore, ____onShareCompleted) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore, ____onShareToGroupCompleted) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore) == 0x70, "Size mismatch!");

} // namespace end def Meta::XR::BuildingBlocks
