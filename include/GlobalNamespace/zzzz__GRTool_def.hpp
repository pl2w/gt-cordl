#pragma once
// IWYU pragma private; include "GlobalNamespace/GRTool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRToolProgressionManager_ToolParts_def.hpp"
#include "GlobalNamespace/zzzz__GRTool_GRToolType_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRTool)
namespace GlobalNamespace {
class GRAttributes;
}
namespace GlobalNamespace {
class GRBonusEntry;
}
namespace GlobalNamespace {
class GRMeterEnergy;
}
namespace GlobalNamespace {
struct GRToolProgressionManager_ToolParts;
}
namespace GlobalNamespace {
class GRTool_EnergyChangeEvent;
}
namespace GlobalNamespace {
struct GRTool_GRToolType;
}
namespace GlobalNamespace {
class GRTool_ToolUpgradedEvent;
}
namespace GlobalNamespace {
class GRTool_UpgradeSlot;
}
namespace GlobalNamespace {
class GRTool_Upgrade;
}
namespace GlobalNamespace {
struct GameEntityId;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class IGameEntityComponent;
}
namespace GlobalNamespace {
class IGameEntityDebugComponent;
}
namespace GlobalNamespace {
class IGameEntitySerialize;
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
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GRTool;
}
namespace GlobalNamespace {
class GRTool_EnergyChangeEvent;
}
namespace GlobalNamespace {
class GRTool_ToolUpgradedEvent;
}
namespace GlobalNamespace {
class GRTool_Upgrade;
}
namespace GlobalNamespace {
class GRTool_UpgradeSlot;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRTool*);
MARK_REF_T(::GlobalNamespace::GRTool_EnergyChangeEvent*);
MARK_REF_T(::GlobalNamespace::GRTool_ToolUpgradedEvent*);
MARK_REF_T(::GlobalNamespace::GRTool_Upgrade*);
MARK_REF_T(::GlobalNamespace::GRTool_UpgradeSlot*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRTool*, "", "GRTool");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRTool_EnergyChangeEvent*, "", "GRTool/EnergyChangeEvent");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRTool_ToolUpgradedEvent*, "", "GRTool/ToolUpgradedEvent");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRTool_Upgrade*, "", "GRTool/Upgrade");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRTool_UpgradeSlot*, "", "GRTool/UpgradeSlot");
// Dependencies GRTool::GRToolType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRTool
class CORDL_TYPE GRTool : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using EnergyChangeEvent = ::GlobalNamespace::GRTool_EnergyChangeEvent;

using GRToolType = ::GlobalNamespace::GRTool_GRToolType;

using ToolUpgradedEvent = ::GlobalNamespace::GRTool_ToolUpgradedEvent;

using Upgrade = ::GlobalNamespace::GRTool_Upgrade;

using UpgradeSlot = ::GlobalNamespace::GRTool_UpgradeSlot;

/// @brief Field OnEnergyChange, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnEnergyChange, put=__cordl_internal_set_OnEnergyChange)) ::GlobalNamespace::GRTool_EnergyChangeEvent*  OnEnergyChange;

/// @brief Field UpgradeFXNode, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_UpgradeFXNode, put=__cordl_internal_set_UpgradeFXNode)) ::UnityW<::UnityEngine::GameObject>  UpgradeFXNode;

/// @brief Field attributes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_attributes, put=__cordl_internal_set_attributes)) ::UnityW<::GlobalNamespace::GRAttributes>  attributes;

/// @brief Field energy, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_energy, put=__cordl_internal_set_energy)) int32_t  energy;

/// @brief Field energyMeters, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_energyMeters, put=__cordl_internal_set_energyMeters)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRMeterEnergy>>*  energyMeters;

/// @brief Field gameEntity, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntity, put=__cordl_internal_set_gameEntity)) ::UnityW<::GlobalNamespace::GameEntity>  gameEntity;

/// @brief Field onToolUpgraded, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_onToolUpgraded, put=__cordl_internal_set_onToolUpgraded)) ::GlobalNamespace::GRTool_ToolUpgradedEvent*  onToolUpgraded;

/// @brief Field reservedMeshFilterSearchList, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_reservedMeshFilterSearchList, put=__cordl_internal_set_reservedMeshFilterSearchList)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*  reservedMeshFilterSearchList;

/// @brief Field reservedMeshFilterSearchListSkinned, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_reservedMeshFilterSearchListSkinned, put=__cordl_internal_set_reservedMeshFilterSearchListSkinned)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::SkinnedMeshRenderer>>*  reservedMeshFilterSearchListSkinned;

/// @brief Field toolType, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_toolType, put=__cordl_internal_set_toolType)) ::GlobalNamespace::GRTool_GRToolType  toolType;

/// @brief Field upgradeListsAreValidFor, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgradeListsAreValidFor, put=__cordl_internal_set_upgradeListsAreValidFor)) ::GlobalNamespace::GRTool_Upgrade*  upgradeListsAreValidFor;

/// @brief Field upgradeSlots, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgradeSlots, put=__cordl_internal_set_upgradeSlots)) ::System::Collections::Generic::List_1<::GlobalNamespace::GRTool_UpgradeSlot*>*  upgradeSlots;

/// @brief Field upgrades, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgrades, put=__cordl_internal_set_upgrades)) ::System::Collections::Generic::List_1<::GlobalNamespace::GRTool_Upgrade*>*  upgrades;

/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr operator  ::GlobalNamespace::IGameEntityComponent*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IGameEntityDebugComponent"
constexpr operator  ::GlobalNamespace::IGameEntityDebugComponent*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IGameEntitySerialize"
constexpr operator  ::GlobalNamespace::IGameEntitySerialize*() noexcept;

/// @brief Method Awake, addr 0x58b860c, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearUpgradeSlot, addr 0x58b9b38, size 0x2d4, virtual false, abstract: false, final false
inline void ClearUpgradeSlot(int32_t  slot) ;

/// @brief Method FindMatchingUpgrade, addr 0x58b8d84, size 0xc0, virtual false, abstract: false, final false
inline ::GlobalNamespace::GRTool_Upgrade* FindMatchingUpgrade(::GlobalNamespace::GRToolProgressionManager_ToolParts  upgradeID) ;

/// @brief Method GetDebugTextLines, addr 0x58ba1c8, size 0x148, virtual true, abstract: false, final true
inline void GetDebugTextLines(::by_ref<::System::Collections::Generic::List_1<::StringW>*>  strings) ;

/// @brief Method GetEnergyMax, addr 0x58b88c0, size 0x1c, virtual false, abstract: false, final false
inline int32_t GetEnergyMax() ;

/// @brief Method GetEnergyStart, addr 0x58b8870, size 0x48, virtual false, abstract: false, final false
inline int32_t GetEnergyStart() ;

/// @brief Method GetEnergyUseCost, addr 0x58b88dc, size 0x1c, virtual false, abstract: false, final false
inline int32_t GetEnergyUseCost() ;

/// @brief Method GetPointDistanceToUpgrade, addr 0x58b8e44, size 0x678, virtual false, abstract: false, final false
inline float_t GetPointDistanceToUpgrade(::UnityEngine::Vector3  point, ::GlobalNamespace::GRTool_Upgrade*  upgrade) ;

/// @brief Method GetUpgradeAttachTransform, addr 0x58b94bc, size 0x8c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetUpgradeAttachTransform(::GlobalNamespace::GRTool_Upgrade*  upgrade) ;

/// @brief Method GrabbedByPlayer, addr 0x58ba094, size 0x134, virtual false, abstract: false, final false
inline void GrabbedByPlayer() ;

/// @brief Method HasEnoughEnergy, addr 0x58b8c10, size 0x1c, virtual false, abstract: false, final false
inline bool HasEnoughEnergy() ;

/// @brief Method HasUpgradeInstalled, addr 0x58b8cb8, size 0xcc, virtual false, abstract: false, final false
inline bool HasUpgradeInstalled(::GlobalNamespace::GRToolProgressionManager_ToolParts  upgradeID) ;

/// @brief Method IsEnergyFull, addr 0x58b8c9c, size 0x1c, virtual false, abstract: false, final false
inline bool IsEnergyFull() ;

static inline ::GlobalNamespace::GRTool* New_ctor() ;

/// @brief Method OnDisable, addr 0x58b89cc, size 0xd4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x58b88f8, size 0xd4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEntityDestroy, addr 0x58b88b8, size 0x4, virtual true, abstract: false, final true
inline void OnEntityDestroy() ;

/// @brief Method OnEntityInit, addr 0x58b873c, size 0x134, virtual true, abstract: false, final true
inline void OnEntityInit() ;

/// @brief Method OnEntityStateChange, addr 0x58b88bc, size 0x4, virtual true, abstract: false, final true
inline void OnEntityStateChange(int64_t  prevState, int64_t  nextState) ;

/// @brief Method OnGameEntityDeserialize, addr 0x58b9f94, size 0x100, virtual true, abstract: false, final true
inline void OnGameEntityDeserialize(::System::IO::BinaryReader*  reader) ;

/// @brief Method OnGameEntitySerialize, addr 0x58b9e0c, size 0x188, virtual true, abstract: false, final true
inline void OnGameEntitySerialize(::System::IO::BinaryWriter*  writer) ;

/// @brief Method RefillEnergy, addr 0x58b8b1c, size 0x74, virtual false, abstract: false, final false
inline void RefillEnergy() ;

/// @brief Method RefillEnergy, addr 0x58b8aa0, size 0x10, virtual false, abstract: false, final false
inline void RefillEnergy(int32_t  count, ::GlobalNamespace::GameEntityId  chargingEntityId) ;

/// @brief Method RefreshMeters, addr 0x58b86b0, size 0x8c, virtual false, abstract: false, final false
inline void RefreshMeters() ;

/// @brief Method SetEnergy, addr 0x58b8c2c, size 0x70, virtual false, abstract: false, final false
inline void SetEnergy(int32_t  newEnergy) ;

/// @brief Method SetEnergyInternal, addr 0x58b8ab0, size 0x6c, virtual false, abstract: false, final false
inline void SetEnergyInternal(int32_t  value, ::GlobalNamespace::GameEntityId  chargingEntityId) ;

/// @brief Method Start, addr 0x58b8610, size 0xa0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpgradeTool, addr 0x58b9548, size 0x5f0, virtual false, abstract: false, final false
inline void UpgradeTool(::GlobalNamespace::GRToolProgressionManager_ToolParts  upgradeID) ;

/// @brief Method UseEnergy, addr 0x58b8b90, size 0x80, virtual false, abstract: false, final false
inline void UseEnergy() ;

constexpr ::GlobalNamespace::GRTool_EnergyChangeEvent* const& __cordl_internal_get_OnEnergyChange() const;

constexpr ::GlobalNamespace::GRTool_EnergyChangeEvent*& __cordl_internal_get_OnEnergyChange() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_UpgradeFXNode() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_UpgradeFXNode() ;

constexpr ::UnityW<::GlobalNamespace::GRAttributes> const& __cordl_internal_get_attributes() const;

constexpr ::UnityW<::GlobalNamespace::GRAttributes>& __cordl_internal_get_attributes() ;

constexpr int32_t const& __cordl_internal_get_energy() const;

constexpr int32_t& __cordl_internal_get_energy() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRMeterEnergy>>* const& __cordl_internal_get_energyMeters() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRMeterEnergy>>*& __cordl_internal_get_energyMeters() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_gameEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_gameEntity() ;

constexpr ::GlobalNamespace::GRTool_ToolUpgradedEvent* const& __cordl_internal_get_onToolUpgraded() const;

constexpr ::GlobalNamespace::GRTool_ToolUpgradedEvent*& __cordl_internal_get_onToolUpgraded() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>* const& __cordl_internal_get_reservedMeshFilterSearchList() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*& __cordl_internal_get_reservedMeshFilterSearchList() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::SkinnedMeshRenderer>>* const& __cordl_internal_get_reservedMeshFilterSearchListSkinned() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::SkinnedMeshRenderer>>*& __cordl_internal_get_reservedMeshFilterSearchListSkinned() ;

constexpr ::GlobalNamespace::GRTool_GRToolType const& __cordl_internal_get_toolType() const;

constexpr ::GlobalNamespace::GRTool_GRToolType& __cordl_internal_get_toolType() ;

constexpr ::GlobalNamespace::GRTool_Upgrade* const& __cordl_internal_get_upgradeListsAreValidFor() const;

constexpr ::GlobalNamespace::GRTool_Upgrade*& __cordl_internal_get_upgradeListsAreValidFor() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRTool_UpgradeSlot*>* const& __cordl_internal_get_upgradeSlots() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRTool_UpgradeSlot*>*& __cordl_internal_get_upgradeSlots() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRTool_Upgrade*>* const& __cordl_internal_get_upgrades() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRTool_Upgrade*>*& __cordl_internal_get_upgrades() ;

constexpr void __cordl_internal_set_OnEnergyChange(::GlobalNamespace::GRTool_EnergyChangeEvent*  value) ;

constexpr void __cordl_internal_set_UpgradeFXNode(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_attributes(::UnityW<::GlobalNamespace::GRAttributes>  value) ;

constexpr void __cordl_internal_set_energy(int32_t  value) ;

constexpr void __cordl_internal_set_energyMeters(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRMeterEnergy>>*  value) ;

constexpr void __cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_onToolUpgraded(::GlobalNamespace::GRTool_ToolUpgradedEvent*  value) ;

constexpr void __cordl_internal_set_reservedMeshFilterSearchList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*  value) ;

constexpr void __cordl_internal_set_reservedMeshFilterSearchListSkinned(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::SkinnedMeshRenderer>>*  value) ;

constexpr void __cordl_internal_set_toolType(::GlobalNamespace::GRTool_GRToolType  value) ;

constexpr void __cordl_internal_set_upgradeListsAreValidFor(::GlobalNamespace::GRTool_Upgrade*  value) ;

constexpr void __cordl_internal_set_upgradeSlots(::System::Collections::Generic::List_1<::GlobalNamespace::GRTool_UpgradeSlot*>*  value) ;

constexpr void __cordl_internal_set_upgrades(::System::Collections::Generic::List_1<::GlobalNamespace::GRTool_Upgrade*>*  value) ;

/// @brief Method .ctor, addr 0x58ba310, size 0x138, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnEnergyChange, addr 0x58b839c, size 0x9c, virtual false, abstract: false, final false
inline void add_OnEnergyChange(::GlobalNamespace::GRTool_EnergyChangeEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_onToolUpgraded, addr 0x58b84d4, size 0x9c, virtual false, abstract: false, final false
inline void add_onToolUpgraded(::GlobalNamespace::GRTool_ToolUpgradedEvent*  value) ;

/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* i___GlobalNamespace__IGameEntityComponent() noexcept;

/// @brief Convert to "::GlobalNamespace::IGameEntityDebugComponent"
constexpr ::GlobalNamespace::IGameEntityDebugComponent* i___GlobalNamespace__IGameEntityDebugComponent() noexcept;

/// @brief Convert to "::GlobalNamespace::IGameEntitySerialize"
constexpr ::GlobalNamespace::IGameEntitySerialize* i___GlobalNamespace__IGameEntitySerialize() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnEnergyChange, addr 0x58b8438, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnEnergyChange(::GlobalNamespace::GRTool_EnergyChangeEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_onToolUpgraded, addr 0x58b8570, size 0x9c, virtual false, abstract: false, final false
inline void remove_onToolUpgraded(::GlobalNamespace::GRTool_ToolUpgradedEvent*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRTool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRTool", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRTool(GRTool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRTool", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRTool(GRTool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2058};

/// @brief Field attributes, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRAttributes>  ___attributes;

/// @brief Field upgrades, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GRTool_Upgrade*>*  ___upgrades;

/// @brief Field upgradeSlots, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GRTool_UpgradeSlot*>*  ___upgradeSlots;

/// @brief Field energyMeters, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRMeterEnergy>>*  ___energyMeters;

/// @brief Field gameEntity, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___gameEntity;

/// @brief Field toolType, offset: 0x48, size: 0x4, def value: None
 ::GlobalNamespace::GRTool_GRToolType  ___toolType;

/// [ReadOnly]
/// @brief Field energy, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___energy;

/// [CompilerGenerated]
/// @brief Field OnEnergyChange, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::GRTool_EnergyChangeEvent*  ___OnEnergyChange;

/// @brief Field UpgradeFXNode, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___UpgradeFXNode;

/// [CompilerGenerated]
/// @brief Field onToolUpgraded, offset: 0x60, size: 0x8, def value: None
 ::GlobalNamespace::GRTool_ToolUpgradedEvent*  ___onToolUpgraded;

/// @brief Field reservedMeshFilterSearchList, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*  ___reservedMeshFilterSearchList;

/// @brief Field reservedMeshFilterSearchListSkinned, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::SkinnedMeshRenderer>>*  ___reservedMeshFilterSearchListSkinned;

/// @brief Field upgradeListsAreValidFor, offset: 0x78, size: 0x8, def value: None
 ::GlobalNamespace::GRTool_Upgrade*  ___upgradeListsAreValidFor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRTool, ___attributes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRTool, ___upgrades) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRTool, ___upgradeSlots) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRTool, ___energyMeters) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRTool, ___gameEntity) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRTool, ___toolType) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRTool, ___energy) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRTool, ___OnEnergyChange) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRTool, ___UpgradeFXNode) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRTool, ___onToolUpgraded) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRTool, ___reservedMeshFilterSearchList) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRTool, ___reservedMeshFilterSearchListSkinned) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRTool, ___upgradeListsAreValidFor) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRTool) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRTool/ToolUpgradedEvent
class CORDL_TYPE GRTool_ToolUpgradedEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x58ba75c, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::GRTool*  tool, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x58ba77c, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x58ba748, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::GRTool*  tool) ;

static inline ::GlobalNamespace::GRTool_ToolUpgradedEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x58ba640, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRTool_ToolUpgradedEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRTool_ToolUpgradedEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRTool_ToolUpgradedEvent(GRTool_ToolUpgradedEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRTool_ToolUpgradedEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRTool_ToolUpgradedEvent(GRTool_ToolUpgradedEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2057};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GRTool_ToolUpgradedEvent) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRTool/EnergyChangeEvent
class CORDL_TYPE GRTool_EnergyChangeEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x58ba57c, size 0xb8, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::GRTool*  tool, int32_t  energyChange, ::GlobalNamespace::GameEntityId  chargingEntityId, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x58ba634, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x58ba564, size 0x18, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::GRTool*  tool, int32_t  energyChange, ::GlobalNamespace::GameEntityId  chargingEntityId) ;

static inline ::GlobalNamespace::GRTool_EnergyChangeEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x58ba458, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRTool_EnergyChangeEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRTool_EnergyChangeEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRTool_EnergyChangeEvent(GRTool_EnergyChangeEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRTool_EnergyChangeEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRTool_EnergyChangeEvent(GRTool_EnergyChangeEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2056};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GRTool_EnergyChangeEvent) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRTool/UpgradeSlot
class CORDL_TYPE GRTool_UpgradeSlot : public ::System::Object {
public:
// Declarations
/// @brief Field DefaultVisibleItems, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_DefaultVisibleItems, put=__cordl_internal_set_DefaultVisibleItems)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  DefaultVisibleItems;

/// @brief Field installedItem, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_installedItem, put=__cordl_internal_set_installedItem)) ::GlobalNamespace::GRTool_Upgrade*  installedItem;

static inline ::GlobalNamespace::GRTool_UpgradeSlot* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_DefaultVisibleItems() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_DefaultVisibleItems() ;

constexpr ::GlobalNamespace::GRTool_Upgrade* const& __cordl_internal_get_installedItem() const;

constexpr ::GlobalNamespace::GRTool_Upgrade*& __cordl_internal_get_installedItem() ;

constexpr void __cordl_internal_set_DefaultVisibleItems(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_installedItem(::GlobalNamespace::GRTool_Upgrade*  value) ;

/// @brief Method .ctor, addr 0x58ba450, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRTool_UpgradeSlot() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRTool_UpgradeSlot", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRTool_UpgradeSlot(GRTool_UpgradeSlot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRTool_UpgradeSlot", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRTool_UpgradeSlot(GRTool_UpgradeSlot const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2055};

/// @brief Field DefaultVisibleItems, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___DefaultVisibleItems;

/// @brief Field installedItem, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::GRTool_Upgrade*  ___installedItem;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRTool_UpgradeSlot, ___DefaultVisibleItems) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRTool_UpgradeSlot, ___installedItem) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRTool_UpgradeSlot) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies GRToolProgressionManager::ToolParts, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRTool/Upgrade
class CORDL_TYPE GRTool_Upgrade : public ::System::Object {
public:
// Declarations
/// @brief Field Slot, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_Slot, put=__cordl_internal_set_Slot)) int32_t  Slot;

/// @brief Field UpgradeType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_UpgradeType, put=__cordl_internal_set_UpgradeType)) ::GlobalNamespace::GRToolProgressionManager_ToolParts  UpgradeType;

/// @brief Field VisibleItem, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_VisibleItem, put=__cordl_internal_set_VisibleItem)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  VisibleItem;

/// @brief Field bonusEffects, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_bonusEffects, put=__cordl_internal_set_bonusEffects)) ::System::Collections::Generic::List_1<::GlobalNamespace::GRBonusEntry*>*  bonusEffects;

static inline ::GlobalNamespace::GRTool_Upgrade* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_Slot() const;

constexpr int32_t& __cordl_internal_get_Slot() ;

constexpr ::GlobalNamespace::GRToolProgressionManager_ToolParts const& __cordl_internal_get_UpgradeType() const;

constexpr ::GlobalNamespace::GRToolProgressionManager_ToolParts& __cordl_internal_get_UpgradeType() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_VisibleItem() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_VisibleItem() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRBonusEntry*>* const& __cordl_internal_get_bonusEffects() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRBonusEntry*>*& __cordl_internal_get_bonusEffects() ;

constexpr void __cordl_internal_set_Slot(int32_t  value) ;

constexpr void __cordl_internal_set_UpgradeType(::GlobalNamespace::GRToolProgressionManager_ToolParts  value) ;

constexpr void __cordl_internal_set_VisibleItem(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_bonusEffects(::System::Collections::Generic::List_1<::GlobalNamespace::GRBonusEntry*>*  value) ;

/// @brief Method .ctor, addr 0x58ba448, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRTool_Upgrade() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRTool_Upgrade", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRTool_Upgrade(GRTool_Upgrade && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRTool_Upgrade", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRTool_Upgrade(GRTool_Upgrade const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2054};

/// @brief Field UpgradeType, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::GRToolProgressionManager_ToolParts  ___UpgradeType;

/// @brief Field Slot, offset: 0x14, size: 0x4, def value: None
 int32_t  ___Slot;

/// @brief Field VisibleItem, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___VisibleItem;

/// @brief Field bonusEffects, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GRBonusEntry*>*  ___bonusEffects;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRTool_Upgrade, ___UpgradeType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRTool_Upgrade, ___Slot) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRTool_Upgrade, ___VisibleItem) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRTool_Upgrade, ___bonusEffects) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRTool_Upgrade) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
