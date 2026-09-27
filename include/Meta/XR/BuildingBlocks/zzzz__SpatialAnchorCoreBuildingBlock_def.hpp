#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/SpatialAnchorCoreBuildingBlock.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_OperationResult_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SpatialAnchorCoreBuildingBlock)
namespace GlobalNamespace {
struct OVRSpatialAnchor_OperationResult;
}
namespace GlobalNamespace {
class OVRSpatialAnchor;
}
namespace GlobalNamespace {
struct SpatialAnchorCoreBuildingBlock__EraseAnchorByUuidAsync_d__29;
}
namespace GlobalNamespace {
struct SpatialAnchorCoreBuildingBlock__EraseAnchorByUuid_d__26;
}
namespace GlobalNamespace {
struct SpatialAnchorCoreBuildingBlock__EraseAnchorsAsync_d__28;
}
namespace GlobalNamespace {
struct SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21;
}
namespace GlobalNamespace {
struct SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27;
}
namespace GlobalNamespace {
struct SpatialAnchorCoreBuildingBlock__SaveAsync_d__23;
}
namespace GlobalNamespace {
struct SpatialAnchorCoreBuildingBlock__WaitForInit_d__22;
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
struct Guid;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
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
class SpatialAnchorCoreBuildingBlock;
}
// Write type traits
MARK_REF_T(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*);
DEFINE_IL2CPP_CLASS(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*, "Meta.XR.BuildingBlocks", "SpatialAnchorCoreBuildingBlock");
// Dependencies OVRSpatialAnchor::OperationResult, UnityEngine.MonoBehaviour
namespace Meta::XR::BuildingBlocks {
// Is value type: false
// CS Name: Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock
class CORDL_TYPE SpatialAnchorCoreBuildingBlock : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _EraseAnchorByUuidAsync_d__29 = ::GlobalNamespace::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuidAsync_d__29;

using _EraseAnchorByUuid_d__26 = ::GlobalNamespace::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuid_d__26;

using _EraseAnchorsAsync_d__28 = ::GlobalNamespace::SpatialAnchorCoreBuildingBlock__EraseAnchorsAsync_d__28;

using _InitSpatialAnchorAsync_d__21 = ::GlobalNamespace::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21;

using _LoadAnchorsAsync_d__27 = ::GlobalNamespace::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27;

using _SaveAsync_d__23 = ::GlobalNamespace::SpatialAnchorCoreBuildingBlock__SaveAsync_d__23;

using _WaitForInit_d__22 = ::GlobalNamespace::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22;

 __declspec(property(get=get_OnAnchorCreateCompleted, put=set_OnAnchorCreateCompleted)) ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  OnAnchorCreateCompleted;

 __declspec(property(get=get_OnAnchorEraseCompleted, put=set_OnAnchorEraseCompleted)) ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  OnAnchorEraseCompleted;

 __declspec(property(get=get_OnAnchorsEraseAllCompleted, put=set_OnAnchorsEraseAllCompleted)) ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  OnAnchorsEraseAllCompleted;

 __declspec(property(get=get_OnAnchorsLoadCompleted, put=set_OnAnchorsLoadCompleted)) ::UnityEngine::Events::UnityEvent_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*  OnAnchorsLoadCompleted;

 __declspec(property(get=get_Result, put=set_Result)) ::GlobalNamespace::OVRSpatialAnchor_OperationResult  Result;

/// @brief Field <Result>k__BackingField, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__Result_k__BackingField, put=__cordl_internal_set__Result_k__BackingField)) ::GlobalNamespace::OVRSpatialAnchor_OperationResult  _Result_k__BackingField;

/// @brief Field _onAnchorCreateCompleted, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__onAnchorCreateCompleted, put=__cordl_internal_set__onAnchorCreateCompleted)) ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  _onAnchorCreateCompleted;

/// @brief Field _onAnchorEraseCompleted, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__onAnchorEraseCompleted, put=__cordl_internal_set__onAnchorEraseCompleted)) ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  _onAnchorEraseCompleted;

/// @brief Field _onAnchorsEraseAllCompleted, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__onAnchorsEraseAllCompleted, put=__cordl_internal_set__onAnchorsEraseAllCompleted)) ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  _onAnchorsEraseAllCompleted;

/// @brief Field _onAnchorsLoadCompleted, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__onAnchorsLoadCompleted, put=__cordl_internal_set__onAnchorsLoadCompleted)) ::UnityEngine::Events::UnityEvent_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*  _onAnchorsLoadCompleted;

/// @brief Method EraseAllAnchors, addr 0x9ec7a98, size 0x94, virtual false, abstract: false, final false
inline void EraseAllAnchors() ;

/// [AsyncStateMachine(typeof(Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock::<EraseAnchorByUuid>d__26))]
/// @brief Method EraseAnchorByUuid, addr 0x9ec7bd4, size 0xbc, virtual false, abstract: false, final false
inline void EraseAnchorByUuid(::System::Guid  uuid) ;

/// [AsyncStateMachine(typeof(Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock::<EraseAnchorByUuidAsync>d__29))]
/// @brief Method EraseAnchorByUuidAsync, addr 0x9ec7c90, size 0xf8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* EraseAnchorByUuidAsync(::GlobalNamespace::OVRSpatialAnchor*  anchor) ;

/// [AsyncStateMachine(typeof(Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock::<EraseAnchorsAsync>d__28))]
/// @brief Method EraseAnchorsAsync, addr 0x9ec7b2c, size 0xa8, virtual false, abstract: false, final false
inline void EraseAnchorsAsync() ;

/// @brief Method GetFirstInstance, addr 0x9ec3f30, size 0x15c, virtual false, abstract: false, final false
static inline ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> GetFirstInstance() ;

/// [AsyncStateMachine(typeof(Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock::<InitSpatialAnchorAsync>d__21))]
/// @brief Method InitSpatialAnchorAsync, addr 0x9ec7814, size 0xc0, virtual false, abstract: false, final false
inline void InitSpatialAnchorAsync(::GlobalNamespace::OVRSpatialAnchor*  anchor) ;

/// @brief Method InstantiateSpatialAnchor, addr 0x9ec4be8, size 0x164, virtual false, abstract: false, final false
inline void InstantiateSpatialAnchor(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// [AsyncStateMachine(typeof(Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock::<LoadAnchorsAsync>d__27))]
/// @brief Method LoadAnchorsAsync, addr 0x9ec79b8, size 0xe0, virtual false, abstract: false, final false
inline void LoadAnchorsAsync(::UnityEngine::GameObject*  prefab, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  uuids) ;

/// @brief Method LoadAndInstantiateAnchors, addr 0x9ec78d4, size 0xe4, virtual true, abstract: false, final false
inline void LoadAndInstantiateAnchors(::UnityEngine::GameObject*  prefab, ::System::Collections::Generic::List_1<::System::Guid>*  uuids) ;

static inline ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock* New_ctor() ;

/// [AsyncStateMachine(typeof(Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock::<SaveAsync>d__23))]
/// @brief Method SaveAsync, addr 0x9ec614c, size 0xf8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SaveAsync(::GlobalNamespace::OVRSpatialAnchor*  anchor) ;

/// [AsyncStateMachine(typeof(Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock::<WaitForInit>d__22))]
/// @brief Method WaitForInit, addr 0x9ec6058, size 0xf4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WaitForInit(::GlobalNamespace::OVRSpatialAnchor*  anchor) ;

constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult const& __cordl_internal_get__Result_k__BackingField() const;

constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult& __cordl_internal_get__Result_k__BackingField() ;

constexpr ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>* const& __cordl_internal_get__onAnchorCreateCompleted() const;

constexpr ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*& __cordl_internal_get__onAnchorCreateCompleted() ;

constexpr ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>* const& __cordl_internal_get__onAnchorEraseCompleted() const;

constexpr ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*& __cordl_internal_get__onAnchorEraseCompleted() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* const& __cordl_internal_get__onAnchorsEraseAllCompleted() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*& __cordl_internal_get__onAnchorsEraseAllCompleted() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* const& __cordl_internal_get__onAnchorsLoadCompleted() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*& __cordl_internal_get__onAnchorsLoadCompleted() ;

constexpr void __cordl_internal_set__Result_k__BackingField(::GlobalNamespace::OVRSpatialAnchor_OperationResult  value) ;

constexpr void __cordl_internal_set__onAnchorCreateCompleted(::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  value) ;

constexpr void __cordl_internal_set__onAnchorEraseCompleted(::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  value) ;

constexpr void __cordl_internal_set__onAnchorsEraseAllCompleted(::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  value) ;

constexpr void __cordl_internal_set__onAnchorsLoadCompleted(::UnityEngine::Events::UnityEvent_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*  value) ;

/// @brief Method .ctor, addr 0x9ec5cd8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_OnAnchorCreateCompleted, addr 0x9ec77c4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>* get_OnAnchorCreateCompleted() ;

/// @brief Method get_OnAnchorEraseCompleted, addr 0x9ec77f4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>* get_OnAnchorEraseCompleted() ;

/// @brief Method get_OnAnchorsEraseAllCompleted, addr 0x9ec77e4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* get_OnAnchorsEraseAllCompleted() ;

/// @brief Method get_OnAnchorsLoadCompleted, addr 0x9ec77d4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* get_OnAnchorsLoadCompleted() ;

/// [CompilerGenerated]
/// @brief Method get_Result, addr 0x9ec7804, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRSpatialAnchor_OperationResult get_Result() ;

/// @brief Method set_OnAnchorCreateCompleted, addr 0x9ec77cc, size 0x8, virtual false, abstract: false, final false
inline void set_OnAnchorCreateCompleted(::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  value) ;

/// @brief Method set_OnAnchorEraseCompleted, addr 0x9ec77fc, size 0x8, virtual false, abstract: false, final false
inline void set_OnAnchorEraseCompleted(::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  value) ;

/// @brief Method set_OnAnchorsEraseAllCompleted, addr 0x9ec77ec, size 0x8, virtual false, abstract: false, final false
inline void set_OnAnchorsEraseAllCompleted(::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  value) ;

/// @brief Method set_OnAnchorsLoadCompleted, addr 0x9ec77dc, size 0x8, virtual false, abstract: false, final false
inline void set_OnAnchorsLoadCompleted(::UnityEngine::Events::UnityEvent_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Result, addr 0x9ec780c, size 0x8, virtual false, abstract: false, final false
inline void set_Result(::GlobalNamespace::OVRSpatialAnchor_OperationResult  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpatialAnchorCoreBuildingBlock() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpatialAnchorCoreBuildingBlock", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SpatialAnchorCoreBuildingBlock(SpatialAnchorCoreBuildingBlock && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpatialAnchorCoreBuildingBlock", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpatialAnchorCoreBuildingBlock(SpatialAnchorCoreBuildingBlock const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31464};

/// [Header("# Events")]
/// [SerializeField]
/// @brief Field _onAnchorCreateCompleted, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  ____onAnchorCreateCompleted;

/// [SerializeField]
/// @brief Field _onAnchorsLoadCompleted, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*  ____onAnchorsLoadCompleted;

/// [SerializeField]
/// @brief Field _onAnchorsEraseAllCompleted, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  ____onAnchorsEraseAllCompleted;

/// [SerializeField]
/// @brief Field _onAnchorEraseCompleted, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  ____onAnchorEraseCompleted;

/// [CompilerGenerated]
/// @brief Field <Result>k__BackingField, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::OVRSpatialAnchor_OperationResult  ____Result_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock, ____onAnchorCreateCompleted) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock, ____onAnchorsLoadCompleted) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock, ____onAnchorsEraseAllCompleted) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock, ____onAnchorEraseCompleted) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock, ____Result_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock) == 0x48, "Size mismatch!");

} // namespace end def Meta::XR::BuildingBlocks
