#pragma once
// IWYU pragma private; include "Fusion/SimulationBehaviourUpdater.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__SimulationModes_def.hpp"
#include "Fusion/zzzz__SimulationStages_def.hpp"
#include "Fusion/zzzz__Topologies_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SimulationBehaviourUpdater)
namespace Fusion::Statistics {
class BehaviourStatisticsManager;
}
namespace Fusion::Statistics {
class BehaviourStatisticsSnapshot;
}
namespace Fusion {
class ILogDumpable;
}
namespace Fusion {
class NetworkObject;
}
namespace Fusion {
class NetworkProjectConfig;
}
namespace Fusion {
class NetworkRunner;
}
namespace Fusion {
struct SimulationBehaviourListScope;
}
namespace Fusion {
class SimulationBehaviourUpdater_BehaviourList;
}
namespace Fusion {
class SimulationBehaviourUpdater___c;
}
namespace Fusion {
class SimulationBehaviour;
}
namespace Fusion {
struct SimulationModes;
}
namespace Fusion {
struct SimulationStages;
}
namespace Fusion {
struct Topologies;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Type;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
// Forward declare root types
namespace Fusion {
class SimulationBehaviourUpdater;
}
namespace Fusion {
class SimulationBehaviourUpdater_BehaviourList;
}
namespace Fusion {
class SimulationBehaviourUpdater___c;
}
// Write type traits
MARK_REF_T(::Fusion::SimulationBehaviourUpdater*);
MARK_REF_T(::Fusion::SimulationBehaviourUpdater_BehaviourList*);
MARK_REF_T(::Fusion::SimulationBehaviourUpdater___c*);
DEFINE_IL2CPP_CLASS(::Fusion::SimulationBehaviourUpdater*, "Fusion", "SimulationBehaviourUpdater");
DEFINE_IL2CPP_CLASS(::Fusion::SimulationBehaviourUpdater_BehaviourList*, "Fusion", "SimulationBehaviourUpdater/BehaviourList");
DEFINE_IL2CPP_CLASS(::Fusion::SimulationBehaviourUpdater___c*, "Fusion", "SimulationBehaviourUpdater/<>c");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.SimulationBehaviourUpdater
class CORDL_TYPE SimulationBehaviourUpdater : public ::System::Object {
public:
// Declarations
using BehaviourList = ::Fusion::SimulationBehaviourUpdater_BehaviourList;

using __c = ::Fusion::SimulationBehaviourUpdater___c;

/// @brief Field _behavioursChecked, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__behavioursChecked, put=__cordl_internal_set__behavioursChecked)) ::System::Collections::Generic::HashSet_1<::System::Type*>*  _behavioursChecked;

/// @brief Field _byTypeHierarchy, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__byTypeHierarchy, put=__cordl_internal_set__byTypeHierarchy)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::ValueTuple_2<::ArrayW<::UnityW<::Fusion::SimulationBehaviour>>,::ArrayW<::System::Type*>>>*  _byTypeHierarchy;

/// @brief Field _byTypeLookup, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__byTypeLookup, put=__cordl_internal_set__byTypeLookup)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::Fusion::SimulationBehaviourUpdater_BehaviourList*>*  _byTypeLookup;

/// @brief Field _config, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__config, put=__cordl_internal_set__config)) ::Fusion::NetworkProjectConfig*  _config;

/// @brief Field _inOrderByInterfaceList, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__inOrderByInterfaceList, put=__cordl_internal_set__inOrderByInterfaceList)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::Fusion::SimulationBehaviourUpdater_BehaviourList*>*>*  _inOrderByInterfaceList;

/// @brief Field _inOrderList, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__inOrderList, put=__cordl_internal_set__inOrderList)) ::System::Collections::Generic::List_1<::Fusion::SimulationBehaviourUpdater_BehaviourList*>*  _inOrderList;

/// @brief Method AddBehaviour, addr 0x5f89454, size 0x3f8, virtual false, abstract: false, final false
inline void AddBehaviour(::Fusion::SimulationBehaviour*  behaviour, bool  skipFirstCall) ;

/// @brief Method AddObject, addr 0x5f891ac, size 0x2a8, virtual false, abstract: false, final false
inline void AddObject(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, bool  skipFirstCall, bool  isInSimulation) ;

/// @brief Method AddType, addr 0x5f88648, size 0x268, virtual false, abstract: false, final false
inline void AddType(::System::Type*  type, ::System::ValueTuple_3<::Fusion::SimulationModes,::Fusion::SimulationStages,::Fusion::Topologies>  attr) ;

/// @brief Method BuildTypeOrder, addr 0x5f87e8c, size 0x7bc, virtual false, abstract: false, final false
inline void BuildTypeOrder(::ArrayW<::System::Type*>  customCallbackInterfaces) ;

/// @brief Method CheckSimulationBehaviourForNetworkedAttribute, addr 0x5f8984c, size 0x4e4, virtual false, abstract: false, final false
inline void CheckSimulationBehaviourForNetworkedAttribute(::System::Type*  type) ;

/// @brief Method FindList, addr 0x5f89d30, size 0x2f0, virtual false, abstract: false, final false
inline ::Fusion::SimulationBehaviourUpdater_BehaviourList* FindList(::System::Type*  type) ;

/// [Conditional("DEBUG")]
/// @brief Method FinishBehaviourStatisticsPendingSnapshot, addr 0x5f8abf0, size 0x140, virtual false, abstract: false, final false
inline void FinishBehaviourStatisticsPendingSnapshot() ;

/// @brief Method GetAllSimulationBehaviours, addr 0x5f88cf0, size 0x180, virtual false, abstract: false, final false
inline void GetAllSimulationBehaviours(::System::Collections::Generic::List_1<::UnityW<::Fusion::SimulationBehaviour>>*  allSb) ;

/// @brief Method GetCallbackCount, addr 0x5f88bbc, size 0x70, virtual false, abstract: false, final false
inline int32_t GetCallbackCount(::System::Type*  type) ;

/// @brief Method GetCallbackHead, addr 0x5f88c2c, size 0xc4, virtual false, abstract: false, final false
inline ::Fusion::SimulationBehaviourListScope GetCallbackHead(::System::Type*  type, int32_t  index, ::by_ref<::Fusion::SimulationBehaviour*>  head) ;

/// @brief Method GetExecutionOrder, addr 0x5f87d9c, size 0xf0, virtual false, abstract: false, final false
inline int32_t GetExecutionOrder(::System::Type*  type) ;

/// @brief Method GetSimulationFlags, addr 0x5f87bb4, size 0x1e8, virtual false, abstract: false, final false
static inline ::System::ValueTuple_3<::Fusion::SimulationModes,::Fusion::SimulationStages,::Fusion::Topologies> GetSimulationFlags(::System::Type*  type) ;

/// @brief Method GetTypeHeads, addr 0x5f8a868, size 0x31c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::Fusion::SimulationBehaviour>> GetTypeHeads(::System::Type*  type) ;

/// @brief Method InvokeFixedUpdateNetwork, addr 0x5f88e70, size 0x33c, virtual false, abstract: false, final false
inline void InvokeFixedUpdateNetwork(::Fusion::SimulationStages  stage, ::Fusion::SimulationModes  mode, ::Fusion::Topologies  topology) ;

/// @brief Method InvokeRender, addr 0x5f888b0, size 0x30c, virtual false, abstract: false, final false
inline void InvokeRender() ;

static inline ::Fusion::SimulationBehaviourUpdater* New_ctor(::Fusion::NetworkProjectConfig*  config) ;

/// @brief Method RemoveBehaviour, addr 0x5f8a334, size 0x24c, virtual false, abstract: false, final false
inline void RemoveBehaviour(::Fusion::SimulationBehaviour*  behaviour) ;

/// @brief Method Scanlibrary, addr 0x5f87818, size 0x39c, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Type*>* Scanlibrary() ;

/// @brief Method TryGetBehaviourStatisticsSnapshot, addr 0x5f8ad30, size 0xa4, virtual false, abstract: false, final false
inline bool TryGetBehaviourStatisticsSnapshot(::System::Type*  behaviourType, ::by_ref<::Fusion::Statistics::BehaviourStatisticsSnapshot*>  behaviourStatisticsSnapshot) ;

constexpr ::System::Collections::Generic::HashSet_1<::System::Type*>* const& __cordl_internal_get__behavioursChecked() const;

constexpr ::System::Collections::Generic::HashSet_1<::System::Type*>*& __cordl_internal_get__behavioursChecked() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::ValueTuple_2<::ArrayW<::UnityW<::Fusion::SimulationBehaviour>>,::ArrayW<::System::Type*>>>* const& __cordl_internal_get__byTypeHierarchy() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::ValueTuple_2<::ArrayW<::UnityW<::Fusion::SimulationBehaviour>>,::ArrayW<::System::Type*>>>*& __cordl_internal_get__byTypeHierarchy() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::Fusion::SimulationBehaviourUpdater_BehaviourList*>* const& __cordl_internal_get__byTypeLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::Fusion::SimulationBehaviourUpdater_BehaviourList*>*& __cordl_internal_get__byTypeLookup() ;

constexpr ::Fusion::NetworkProjectConfig* const& __cordl_internal_get__config() const;

constexpr ::Fusion::NetworkProjectConfig*& __cordl_internal_get__config() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::Fusion::SimulationBehaviourUpdater_BehaviourList*>*>* const& __cordl_internal_get__inOrderByInterfaceList() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::Fusion::SimulationBehaviourUpdater_BehaviourList*>*>*& __cordl_internal_get__inOrderByInterfaceList() ;

constexpr ::System::Collections::Generic::List_1<::Fusion::SimulationBehaviourUpdater_BehaviourList*>* const& __cordl_internal_get__inOrderList() const;

constexpr ::System::Collections::Generic::List_1<::Fusion::SimulationBehaviourUpdater_BehaviourList*>*& __cordl_internal_get__inOrderList() ;

constexpr void __cordl_internal_set__behavioursChecked(::System::Collections::Generic::HashSet_1<::System::Type*>*  value) ;

constexpr void __cordl_internal_set__byTypeHierarchy(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::ValueTuple_2<::ArrayW<::UnityW<::Fusion::SimulationBehaviour>>,::ArrayW<::System::Type*>>>*  value) ;

constexpr void __cordl_internal_set__byTypeLookup(::System::Collections::Generic::Dictionary_2<::System::Type*,::Fusion::SimulationBehaviourUpdater_BehaviourList*>*  value) ;

constexpr void __cordl_internal_set__config(::Fusion::NetworkProjectConfig*  value) ;

constexpr void __cordl_internal_set__inOrderByInterfaceList(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::Fusion::SimulationBehaviourUpdater_BehaviourList*>*>*  value) ;

constexpr void __cordl_internal_set__inOrderList(::System::Collections::Generic::List_1<::Fusion::SimulationBehaviourUpdater_BehaviourList*>*  value) ;

/// @brief Method .ctor, addr 0x5f87634, size 0x1e4, virtual false, abstract: false, final false
inline void _ctor(::Fusion::NetworkProjectConfig*  config) ;

/// @brief Method get_CallbackInterfacesDefualts, addr 0x5f86f28, size 0x70c, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Type*> get_CallbackInterfacesDefualts() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimulationBehaviourUpdater() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimulationBehaviourUpdater", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimulationBehaviourUpdater(SimulationBehaviourUpdater && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimulationBehaviourUpdater", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimulationBehaviourUpdater(SimulationBehaviourUpdater const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18932};

/// @brief Field _byTypeLookup, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Type*,::Fusion::SimulationBehaviourUpdater_BehaviourList*>*  ____byTypeLookup;

/// @brief Field _byTypeHierarchy, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::ValueTuple_2<::ArrayW<::UnityW<::Fusion::SimulationBehaviour>>,::ArrayW<::System::Type*>>>*  ____byTypeHierarchy;

/// @brief Field _inOrderList, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Fusion::SimulationBehaviourUpdater_BehaviourList*>*  ____inOrderList;

/// @brief Field _inOrderByInterfaceList, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::Fusion::SimulationBehaviourUpdater_BehaviourList*>*>*  ____inOrderByInterfaceList;

/// @brief Field _behavioursChecked, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::System::Type*>*  ____behavioursChecked;

/// @brief Field _config, offset: 0x38, size: 0x8, def value: None
 ::Fusion::NetworkProjectConfig*  ____config;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::SimulationBehaviourUpdater, ____byTypeLookup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationBehaviourUpdater, ____byTypeHierarchy) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationBehaviourUpdater, ____inOrderList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationBehaviourUpdater, ____inOrderByInterfaceList) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationBehaviourUpdater, ____behavioursChecked) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationBehaviourUpdater, ____config) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Fusion::SimulationBehaviourUpdater) == 0x40, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.SimulationBehaviourUpdater/<>c
class CORDL_TYPE SimulationBehaviourUpdater___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Fusion::SimulationBehaviourUpdater___c*  __9;

/// @brief Field <>9__12_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_0, put=setStaticF___9__12_0)) ::System::Func_2<::System::Type*,bool>*  __9__12_0;

/// @brief Field <>9__12_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_1, put=setStaticF___9__12_1)) ::System::Comparison_1<::Fusion::SimulationBehaviourUpdater_BehaviourList*>*  __9__12_1;

/// @brief Field <>9__24_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_0, put=setStaticF___9__24_0)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::SimulationBehaviourUpdater_BehaviourList*>,::StringW>*  __9__24_0;

static inline ::Fusion::SimulationBehaviourUpdater___c* New_ctor() ;

/// @brief Method <BuildTypeOrder>b__12_0, addr 0x5f8afb8, size 0x18, virtual false, abstract: false, final false
inline bool _BuildTypeOrder_b__12_0(::System::Type*  x) ;

/// @brief Method <BuildTypeOrder>b__12_1, addr 0x5f8afd0, size 0x28, virtual false, abstract: false, final false
inline int32_t _BuildTypeOrder_b__12_1(::Fusion::SimulationBehaviourUpdater_BehaviourList*  a, ::Fusion::SimulationBehaviourUpdater_BehaviourList*  b) ;

/// @brief Method <FindList>b__24_0, addr 0x5f8aff8, size 0x4c, virtual false, abstract: false, final false
inline ::StringW _FindList_b__24_0(::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::SimulationBehaviourUpdater_BehaviourList*>  x) ;

/// @brief Method .ctor, addr 0x5f8afb0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Fusion::SimulationBehaviourUpdater___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Type*,bool>* getStaticF___9__12_0() ;

static inline ::System::Comparison_1<::Fusion::SimulationBehaviourUpdater_BehaviourList*>* getStaticF___9__12_1() ;

static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::SimulationBehaviourUpdater_BehaviourList*>,::StringW>* getStaticF___9__24_0() ;

static inline void setStaticF___9(::Fusion::SimulationBehaviourUpdater___c*  value) ;

static inline void setStaticF___9__12_0(::System::Func_2<::System::Type*,bool>*  value) ;

static inline void setStaticF___9__12_1(::System::Comparison_1<::Fusion::SimulationBehaviourUpdater_BehaviourList*>*  value) ;

static inline void setStaticF___9__24_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::SimulationBehaviourUpdater_BehaviourList*>,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimulationBehaviourUpdater___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimulationBehaviourUpdater___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimulationBehaviourUpdater___c(SimulationBehaviourUpdater___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimulationBehaviourUpdater___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimulationBehaviourUpdater___c(SimulationBehaviourUpdater___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18931};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::SimulationBehaviourUpdater___c) == 0x10, "Size mismatch!");

} // namespace end def Fusion
// Dependencies Fusion.SimulationModes, Fusion.SimulationStages, Fusion.Topologies, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.SimulationBehaviourUpdater/BehaviourList
class CORDL_TYPE SimulationBehaviourUpdater_BehaviourList : public ::System::Object {
public:
// Declarations
/// @brief Field BehaviourStats, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_BehaviourStats, put=__cordl_internal_set_BehaviourStats)) ::Fusion::Statistics::BehaviourStatisticsManager*  BehaviourStats;

/// @brief Field ExecutionOrder, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_ExecutionOrder, put=__cordl_internal_set_ExecutionOrder)) int32_t  ExecutionOrder;

/// @brief Field Head, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Head, put=__cordl_internal_set_Head)) ::UnityW<::Fusion::SimulationBehaviour>  Head;

/// @brief Field LockCount, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_LockCount, put=__cordl_internal_set_LockCount)) int32_t  LockCount;

/// @brief Field Modes, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Modes, put=__cordl_internal_set_Modes)) ::Fusion::SimulationModes  Modes;

/// @brief Field PendingRemovals, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_PendingRemovals, put=__cordl_internal_set_PendingRemovals)) ::System::Collections::Generic::List_1<::UnityW<::Fusion::SimulationBehaviour>>*  PendingRemovals;

/// @brief Field Stages, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Stages, put=__cordl_internal_set_Stages)) ::Fusion::SimulationStages  Stages;

/// @brief Field Tail, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Tail, put=__cordl_internal_set_Tail)) ::UnityW<::Fusion::SimulationBehaviour>  Tail;

/// @brief Field Topologies, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_Topologies, put=__cordl_internal_set_Topologies)) ::Fusion::Topologies  Topologies;

/// @brief Field Type, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Type, put=__cordl_internal_set_Type)) ::System::Type*  Type;

/// @brief Convert operator to "::Fusion::ILogDumpable"
constexpr operator  ::Fusion::ILogDumpable*() noexcept;

/// @brief Method AddAfter, addr 0x5f8a044, size 0x15c, virtual false, abstract: false, final false
inline void AddAfter(::Fusion::SimulationBehaviour*  item, ::Fusion::SimulationBehaviour*  after) ;

/// @brief Method AddFirst, addr 0x5f8a28c, size 0xa8, virtual false, abstract: false, final false
inline void AddFirst(::Fusion::SimulationBehaviour*  item) ;

/// @brief Method AddLast, addr 0x5f8a1a0, size 0xec, virtual false, abstract: false, final false
inline void AddLast(::Fusion::SimulationBehaviour*  item) ;

/// @brief Method Fusion.ILogDumpable.Dump, addr 0x5f8add4, size 0x174, virtual true, abstract: false, final true
inline void Fusion_ILogDumpable_Dump(::System::Text::StringBuilder*  builder) ;

/// @brief Method IsInList, addr 0x5f8a020, size 0x24, virtual false, abstract: false, final false
inline bool IsInList(::Fusion::SimulationBehaviour*  item) ;

static inline ::Fusion::SimulationBehaviourUpdater_BehaviourList* New_ctor() ;

/// @brief Method PendingRemove, addr 0x5f8a580, size 0x148, virtual false, abstract: false, final false
inline void PendingRemove(::Fusion::SimulationBehaviour*  item) ;

/// @brief Method Remove, addr 0x5f8a6c8, size 0x1a0, virtual false, abstract: false, final false
inline void Remove(::Fusion::SimulationBehaviour*  item) ;

/// @brief Method RemoveAllPending, addr 0x5f86d9c, size 0x18c, virtual false, abstract: false, final false
inline void RemoveAllPending() ;

constexpr ::Fusion::Statistics::BehaviourStatisticsManager* const& __cordl_internal_get_BehaviourStats() const;

constexpr ::Fusion::Statistics::BehaviourStatisticsManager*& __cordl_internal_get_BehaviourStats() ;

constexpr int32_t const& __cordl_internal_get_ExecutionOrder() const;

constexpr int32_t& __cordl_internal_get_ExecutionOrder() ;

constexpr ::UnityW<::Fusion::SimulationBehaviour> const& __cordl_internal_get_Head() const;

constexpr ::UnityW<::Fusion::SimulationBehaviour>& __cordl_internal_get_Head() ;

constexpr int32_t const& __cordl_internal_get_LockCount() const;

constexpr int32_t& __cordl_internal_get_LockCount() ;

constexpr ::Fusion::SimulationModes const& __cordl_internal_get_Modes() const;

constexpr ::Fusion::SimulationModes& __cordl_internal_get_Modes() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::SimulationBehaviour>>* const& __cordl_internal_get_PendingRemovals() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::SimulationBehaviour>>*& __cordl_internal_get_PendingRemovals() ;

constexpr ::Fusion::SimulationStages const& __cordl_internal_get_Stages() const;

constexpr ::Fusion::SimulationStages& __cordl_internal_get_Stages() ;

constexpr ::UnityW<::Fusion::SimulationBehaviour> const& __cordl_internal_get_Tail() const;

constexpr ::UnityW<::Fusion::SimulationBehaviour>& __cordl_internal_get_Tail() ;

constexpr ::Fusion::Topologies const& __cordl_internal_get_Topologies() const;

constexpr ::Fusion::Topologies& __cordl_internal_get_Topologies() ;

constexpr ::System::Type* const& __cordl_internal_get_Type() const;

constexpr ::System::Type*& __cordl_internal_get_Type() ;

constexpr void __cordl_internal_set_BehaviourStats(::Fusion::Statistics::BehaviourStatisticsManager*  value) ;

constexpr void __cordl_internal_set_ExecutionOrder(int32_t  value) ;

constexpr void __cordl_internal_set_Head(::UnityW<::Fusion::SimulationBehaviour>  value) ;

constexpr void __cordl_internal_set_LockCount(int32_t  value) ;

constexpr void __cordl_internal_set_Modes(::Fusion::SimulationModes  value) ;

constexpr void __cordl_internal_set_PendingRemovals(::System::Collections::Generic::List_1<::UnityW<::Fusion::SimulationBehaviour>>*  value) ;

constexpr void __cordl_internal_set_Stages(::Fusion::SimulationStages  value) ;

constexpr void __cordl_internal_set_Tail(::UnityW<::Fusion::SimulationBehaviour>  value) ;

constexpr void __cordl_internal_set_Topologies(::Fusion::Topologies  value) ;

constexpr void __cordl_internal_set_Type(::System::Type*  value) ;

/// @brief Method .ctor, addr 0x5f8ab84, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Fusion::ILogDumpable"
constexpr ::Fusion::ILogDumpable* i___Fusion__ILogDumpable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimulationBehaviourUpdater_BehaviourList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimulationBehaviourUpdater_BehaviourList", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimulationBehaviourUpdater_BehaviourList(SimulationBehaviourUpdater_BehaviourList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimulationBehaviourUpdater_BehaviourList", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimulationBehaviourUpdater_BehaviourList(SimulationBehaviourUpdater_BehaviourList const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18930};

/// @brief Field Type, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  ___Type;

/// @brief Field ExecutionOrder, offset: 0x18, size: 0x4, def value: None
 int32_t  ___ExecutionOrder;

/// @brief Field Modes, offset: 0x1c, size: 0x4, def value: None
 ::Fusion::SimulationModes  ___Modes;

/// @brief Field Stages, offset: 0x20, size: 0x4, def value: None
 ::Fusion::SimulationStages  ___Stages;

/// @brief Field Topologies, offset: 0x24, size: 0x4, def value: None
 ::Fusion::Topologies  ___Topologies;

/// @brief Field Head, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Fusion::SimulationBehaviour>  ___Head;

/// @brief Field Tail, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Fusion::SimulationBehaviour>  ___Tail;

/// @brief Field LockCount, offset: 0x38, size: 0x4, def value: None
 int32_t  ___LockCount;

/// @brief Field PendingRemovals, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Fusion::SimulationBehaviour>>*  ___PendingRemovals;

/// @brief Field BehaviourStats, offset: 0x48, size: 0x8, def value: None
 ::Fusion::Statistics::BehaviourStatisticsManager*  ___BehaviourStats;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::SimulationBehaviourUpdater_BehaviourList, ___Type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationBehaviourUpdater_BehaviourList, ___ExecutionOrder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationBehaviourUpdater_BehaviourList, ___Modes) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationBehaviourUpdater_BehaviourList, ___Stages) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationBehaviourUpdater_BehaviourList, ___Topologies) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationBehaviourUpdater_BehaviourList, ___Head) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationBehaviourUpdater_BehaviourList, ___Tail) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationBehaviourUpdater_BehaviourList, ___LockCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationBehaviourUpdater_BehaviourList, ___PendingRemovals) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationBehaviourUpdater_BehaviourList, ___BehaviourStats) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Fusion::SimulationBehaviourUpdater_BehaviourList) == 0x50, "Size mismatch!");

} // namespace end def Fusion
