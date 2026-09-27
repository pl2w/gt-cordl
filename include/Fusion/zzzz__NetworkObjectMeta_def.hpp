#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectMeta.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkBufferSerializerInfo_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeaderFlags_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeaderSnapshotList_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeaderSnapshot_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeader_PlayerUniqueData_def.hpp"
#include "Fusion/zzzz__NetworkObjectMetaFlags_def.hpp"
#include "Fusion/zzzz__Tick_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkObjectMeta)
namespace Fusion {
class Allocator;
}
namespace Fusion {
class NetworkBehaviour;
}
namespace Fusion {
struct NetworkBufferSerializerInfo;
}
namespace Fusion {
struct NetworkId;
}
namespace Fusion {
struct NetworkObjectHeaderFlags;
}
namespace Fusion {
struct NetworkObjectHeaderSnapshotRef;
}
namespace Fusion {
class NetworkObjectHeaderSnapshot;
}
namespace Fusion {
struct NetworkObjectHeader;
}
namespace Fusion {
struct NetworkObjectNestingKey;
}
namespace Fusion {
struct NetworkObjectTypeId;
}
namespace Fusion {
class NetworkObject;
}
namespace Fusion {
struct NetworkTRSPData;
}
namespace Fusion {
struct PlayerRef;
}
namespace Fusion {
class Simulation;
}
namespace Fusion {
struct Tick;
}
namespace Fusion {
class Timeline;
}
namespace GlobalNamespace {
struct NetworkObjectMeta_ListMigration;
}
namespace GlobalNamespace {
struct NetworkObjectMeta_List;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace Fusion {
class NetworkObjectMeta;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkObjectMeta*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObjectMeta*, "Fusion", "NetworkObjectMeta");
// Dependencies Fusion.NetworkBufferSerializerInfo, Fusion.NetworkObjectHeader::PlayerUniqueData, Fusion.NetworkObjectHeaderFlags, Fusion.NetworkObjectHeaderSnapshot, Fusion.NetworkObjectHeaderSnapshotList, Fusion.NetworkObjectMetaFlags, Fusion.Tick, System.Nullable`1<T>, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkObjectMeta
class CORDL_TYPE NetworkObjectMeta : public ::System::Object {
public:
// Declarations
using List = ::GlobalNamespace::NetworkObjectMeta_List;

using ListMigration = ::GlobalNamespace::NetworkObjectMeta_ListMigration;

/// @brief Field AreaOfInterestCell, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_AreaOfInterestCell, put=__cordl_internal_set_AreaOfInterestCell)) int32_t  AreaOfInterestCell;

 __declspec(property(get=get_BehaviourChangedTickArray)) ::System::Span_1<int32_t>  BehaviourChangedTickArray;

/// @brief Field BehaviourCount, offset 0xca, size 0x2 
 __declspec(property(get=__cordl_internal_get_BehaviourCount, put=__cordl_internal_set_BehaviourCount)) int16_t  BehaviourCount;

/// @brief Field ChangedTick, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_ChangedTick, put=__cordl_internal_set_ChangedTick)) ::Fusion::Tick  ChangedTick;

 __declspec(property(get=get_Changes)) int32_t*  Changes;

 __declspec(property(get=get_ChangesSpan)) ::System::Span_1<int32_t>  ChangesSpan;

 __declspec(property(get=get_Data)) ::System::Span_1<int32_t>  Data;

 __declspec(property(get=get_Flags)) ::Fusion::NetworkObjectHeaderFlags  Flags;

 __declspec(property(get=get_HasMainTRSP)) bool  HasMainTRSP;

 __declspec(property(get=get_HasSnapshots)) bool  HasSnapshots;

 __declspec(property(get=get_Header)) ::Fusion::NetworkObjectHeader  Header;

 __declspec(property(get=get_Id)) ::Fusion::NetworkId  Id;

 __declspec(property(get=get_InputAuthority)) ::Fusion::PlayerRef  InputAuthority;

/// @brief Field Instance, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_Instance, put=__cordl_internal_set_Instance)) ::UnityW<::Fusion::NetworkObject>  Instance;

 __declspec(property(get=get_IsObject)) bool  IsObject;

 __declspec(property(get=get_IsStruct)) bool  IsStruct;

/// @brief Field LocalFlags, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_LocalFlags, put=__cordl_internal_set_LocalFlags)) ::Fusion::NetworkObjectMetaFlags  LocalFlags;

 __declspec(property(get=get_MainTRSPData)) ::Fusion::NetworkTRSPData  MainTRSPData;

 __declspec(property(get=get_Migration)) ::Fusion::NetworkObjectHeaderSnapshotRef  Migration;

 __declspec(property(get=get_NestingKey)) ::Fusion::NetworkObjectNestingKey  NestingKey;

 __declspec(property(get=get_NestingRoot)) ::Fusion::NetworkId  NestingRoot;

/// @brief Field PlayerData, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_PlayerData, put=__cordl_internal_set_PlayerData)) ::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData  PlayerData;

 __declspec(property(get=get_Previous)) ::Fusion::NetworkObjectHeaderSnapshotRef  Previous;

 __declspec(property(get=get_Raw)) ::System::Span_1<int32_t>  Raw;

 __declspec(property(get=get_Render)) ::Fusion::NetworkObjectHeaderSnapshotRef  Render;

/// @brief Field ScannedTick, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_ScannedTick, put=__cordl_internal_set_ScannedTick)) ::Fusion::Tick  ScannedTick;

 __declspec(property(get=get_Serializers)) ::ArrayW<::Fusion::NetworkBufferSerializerInfo>  Serializers;

 __declspec(property(get=get_Shadow)) ::Fusion::NetworkObjectHeaderSnapshotRef  Shadow;

 __declspec(property(get=get_SnapshotLatest)) ::Fusion::NetworkObjectHeaderSnapshotRef  SnapshotLatest;

 __declspec(property(get=get_StateAuthority)) ::Fusion::PlayerRef  StateAuthority;

 __declspec(property(get=get_Timeline)) ::Fusion::Timeline*  Timeline;

 __declspec(property(get=get_Type)) ::Fusion::NetworkObjectTypeId  Type;

/// @brief Field WordCount, offset 0xc8, size 0x2 
 __declspec(property(get=__cordl_internal_get_WordCount, put=__cordl_internal_set_WordCount)) int16_t  WordCount;

/// @brief Field _allocator, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__allocator, put=__cordl_internal_set__allocator)) ::Fusion::Allocator*  _allocator;

/// @brief Field _changes, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__changes, put=__cordl_internal_set__changes)) int32_t*  _changes;

/// @brief Field _flags, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get__flags, put=__cordl_internal_set__flags)) ::Fusion::NetworkObjectHeaderFlags  _flags;

/// @brief Field _migration, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__migration, put=__cordl_internal_set__migration)) ::Fusion::NetworkObjectHeaderSnapshot*  _migration;

/// @brief Field _next, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__next, put=__cordl_internal_set__next)) ::Fusion::NetworkObjectMeta*  _next;

/// @brief Field _nextMigration, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__nextMigration, put=__cordl_internal_set__nextMigration)) ::Fusion::NetworkObjectMeta*  _nextMigration;

/// @brief Field _prev, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__prev, put=__cordl_internal_set__prev)) ::Fusion::NetworkObjectMeta*  _prev;

/// @brief Field _prevMigration, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__prevMigration, put=__cordl_internal_set__prevMigration)) ::Fusion::NetworkObjectMeta*  _prevMigration;

/// @brief Field _previous, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__previous, put=__cordl_internal_set__previous)) ::Fusion::NetworkObjectHeaderSnapshot*  _previous;

/// @brief Field _ptr, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__ptr, put=__cordl_internal_set__ptr)) int32_t*  _ptr;

/// @brief Field _render, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__render, put=__cordl_internal_set__render)) ::Fusion::NetworkObjectHeaderSnapshot*  _render;

/// @brief Field _serializersNone, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__serializersNone, put=setStaticF__serializersNone)) ::ArrayW<::Fusion::NetworkBufferSerializerInfo>  _serializersNone;

/// @brief Field _serializersStatic, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__serializersStatic, put=setStaticF__serializersStatic)) ::ArrayW<::Fusion::NetworkBufferSerializerInfo>  _serializersStatic;

/// @brief Field _shadow, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__shadow, put=__cordl_internal_set__shadow)) ::Fusion::NetworkObjectHeaderSnapshot*  _shadow;

/// @brief Field _simulation, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__simulation, put=__cordl_internal_set__simulation)) ::Fusion::Simulation*  _simulation;

/// @brief Field _snapshots, offset 0x48, size 0x18 
 __declspec(property(get=__cordl_internal_get__snapshots, put=__cordl_internal_set__snapshots)) ::Fusion::NetworkObjectHeaderSnapshotList  _snapshots;

/// @brief Field _snapshotsByIndex, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__snapshotsByIndex, put=__cordl_internal_set__snapshotsByIndex)) ::ArrayW<::Fusion::NetworkObjectHeaderSnapshot*>  _snapshotsByIndex;

/// @brief Field _snapshotsByIndexLatest, offset 0x68, size 0x10 
 __declspec(property(get=__cordl_internal_get__snapshotsByIndexLatest, put=__cordl_internal_set__snapshotsByIndexLatest)) ::System::Nullable_1<::Fusion::Tick>  _snapshotsByIndexLatest;

/// @brief Field _timeline, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeline, put=__cordl_internal_set__timeline)) ::Fusion::Timeline*  _timeline;

/// @brief Method AddLatestSnapshotToTimeline, addr 0x5fca858, size 0xcc, virtual false, abstract: false, final false
inline void AddLatestSnapshotToTimeline() ;

/// @brief Method DecodePriorityLevel, addr 0x5fcab4c, size 0x8, virtual false, abstract: false, final false
static inline int32_t DecodePriorityLevel(int32_t  level) ;

/// @brief Method EncodePriorityLevel, addr 0x5fcaae4, size 0x68, virtual false, abstract: false, final false
static inline int32_t EncodePriorityLevel(int32_t  level) ;

/// @brief Method FindSnapshot, addr 0x5fca924, size 0xc0, virtual false, abstract: false, final false
inline ::Fusion::NetworkObjectHeaderSnapshot* FindSnapshot(::Fusion::Tick  tick) ;

/// @brief Method GetBehaviourChangedTickArray, addr 0x5fc9d48, size 0xd0, virtual false, abstract: false, final false
inline ::System::Span_1<int32_t> GetBehaviourChangedTickArray(::Fusion::NetworkObjectHeaderSnapshotRef  snapshot) ;

/// @brief Method GetBehaviourPtr, addr 0x5fcaac8, size 0x1c, virtual false, abstract: false, final false
inline int32_t* GetBehaviourPtr(::Fusion::NetworkBehaviour*  behaviour) ;

/// @brief Method GetDataAs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* GetDataAs() ;

/// @brief Method GetFirstShadowSnapshot, addr 0x5fca0dc, size 0x80, virtual false, abstract: false, final false
inline ::Fusion::NetworkObjectHeaderSnapshot* GetFirstShadowSnapshot() ;

/// @brief Method GetMaxBehaviourChangedTick, addr 0x5fc9e18, size 0x150, virtual false, abstract: false, final false
inline ::Fusion::Tick GetMaxBehaviourChangedTick() ;

/// @brief Method GetMaxBehaviourChangedTick, addr 0x5fc9f68, size 0xb4, virtual false, abstract: false, final false
inline ::Fusion::Tick GetMaxBehaviourChangedTick(::Fusion::NetworkObjectHeaderSnapshotRef  snapshot) ;

/// @brief Method GetPriority, addr 0x5fcab70, size 0x280, virtual false, abstract: false, final false
inline int32_t GetPriority(::Fusion::PlayerRef  player) ;

/// @brief Method GetSerializers, addr 0x5fc99ac, size 0x78, virtual false, abstract: false, final false
static inline ::ArrayW<::Fusion::NetworkBufferSerializerInfo> GetSerializers(bool  main) ;

/// @brief Method GetSnapshot, addr 0x5fca1a4, size 0x4c, virtual false, abstract: false, final false
inline ::Fusion::NetworkObjectHeaderSnapshot* GetSnapshot(bool  copyState) ;

/// @brief Method Init, addr 0x5fcaa20, size 0xa8, virtual false, abstract: false, final false
inline void Init(int32_t*  words, int16_t  wordCount, int16_t  behaviourCount, ::Fusion::NetworkObjectHeaderFlags  flags) ;

/// @brief Method IsActive, addr 0x5fcab60, size 0x10, virtual false, abstract: false, final false
static inline bool IsActive(int32_t  level) ;

/// @brief Method IsIdle, addr 0x5fcab54, size 0xc, virtual false, abstract: false, final false
static inline bool IsIdle(int32_t  level) ;

/// @brief Method LinkInstance, addr 0x5fcadf0, size 0x98, virtual false, abstract: false, final false
inline void LinkInstance(::Fusion::NetworkObject*  instance) ;

static inline ::Fusion::NetworkObjectMeta* New_ctor(::Fusion::Simulation*  simulation, ::Fusion::Allocator*  allocator) ;

/// @brief Method NextSnapshot, addr 0x5fca594, size 0x2c4, virtual false, abstract: false, final false
inline ::Fusion::NetworkObjectHeaderSnapshotRef NextSnapshot(::Fusion::Tick  tick) ;

/// @brief Method Release, addr 0x5fca3b8, size 0x1dc, virtual false, abstract: false, final false
inline void Release(::Fusion::Allocator*  objectAllocator) ;

/// @brief Method TryFindSnapshot, addr 0x5fca9e4, size 0x3c, virtual false, abstract: false, final false
inline bool TryFindSnapshot(::Fusion::Tick  tick, ::by_ref<::Fusion::NetworkObjectHeaderSnapshot*>  snapshot) ;

/// @brief Method UnlinkInstance, addr 0x5fcae88, size 0x6c, virtual false, abstract: false, final false
inline void UnlinkInstance(::Fusion::NetworkObject*  instance) ;

constexpr int32_t const& __cordl_internal_get_AreaOfInterestCell() const;

constexpr int32_t& __cordl_internal_get_AreaOfInterestCell() ;

constexpr int16_t const& __cordl_internal_get_BehaviourCount() const;

constexpr int16_t& __cordl_internal_get_BehaviourCount() ;

constexpr ::Fusion::Tick const& __cordl_internal_get_ChangedTick() const;

constexpr ::Fusion::Tick& __cordl_internal_get_ChangedTick() ;

constexpr ::UnityW<::Fusion::NetworkObject> const& __cordl_internal_get_Instance() const;

constexpr ::UnityW<::Fusion::NetworkObject>& __cordl_internal_get_Instance() ;

constexpr ::Fusion::NetworkObjectMetaFlags const& __cordl_internal_get_LocalFlags() const;

constexpr ::Fusion::NetworkObjectMetaFlags& __cordl_internal_get_LocalFlags() ;

constexpr ::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData const& __cordl_internal_get_PlayerData() const;

constexpr ::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData& __cordl_internal_get_PlayerData() ;

constexpr ::Fusion::Tick const& __cordl_internal_get_ScannedTick() const;

constexpr ::Fusion::Tick& __cordl_internal_get_ScannedTick() ;

constexpr int16_t const& __cordl_internal_get_WordCount() const;

constexpr int16_t& __cordl_internal_get_WordCount() ;

constexpr ::Fusion::Allocator* const& __cordl_internal_get__allocator() const;

constexpr ::Fusion::Allocator*& __cordl_internal_get__allocator() ;

constexpr int32_t* const& __cordl_internal_get__changes() const;

constexpr int32_t*& __cordl_internal_get__changes() ;

constexpr ::Fusion::NetworkObjectHeaderFlags const& __cordl_internal_get__flags() const;

constexpr ::Fusion::NetworkObjectHeaderFlags& __cordl_internal_get__flags() ;

constexpr ::Fusion::NetworkObjectHeaderSnapshot* const& __cordl_internal_get__migration() const;

constexpr ::Fusion::NetworkObjectHeaderSnapshot*& __cordl_internal_get__migration() ;

constexpr ::Fusion::NetworkObjectMeta* const& __cordl_internal_get__next() const;

constexpr ::Fusion::NetworkObjectMeta*& __cordl_internal_get__next() ;

constexpr ::Fusion::NetworkObjectMeta* const& __cordl_internal_get__nextMigration() const;

constexpr ::Fusion::NetworkObjectMeta*& __cordl_internal_get__nextMigration() ;

constexpr ::Fusion::NetworkObjectMeta* const& __cordl_internal_get__prev() const;

constexpr ::Fusion::NetworkObjectMeta*& __cordl_internal_get__prev() ;

constexpr ::Fusion::NetworkObjectMeta* const& __cordl_internal_get__prevMigration() const;

constexpr ::Fusion::NetworkObjectMeta*& __cordl_internal_get__prevMigration() ;

constexpr ::Fusion::NetworkObjectHeaderSnapshot* const& __cordl_internal_get__previous() const;

constexpr ::Fusion::NetworkObjectHeaderSnapshot*& __cordl_internal_get__previous() ;

constexpr int32_t* const& __cordl_internal_get__ptr() const;

constexpr int32_t*& __cordl_internal_get__ptr() ;

constexpr ::Fusion::NetworkObjectHeaderSnapshot* const& __cordl_internal_get__render() const;

constexpr ::Fusion::NetworkObjectHeaderSnapshot*& __cordl_internal_get__render() ;

constexpr ::Fusion::NetworkObjectHeaderSnapshot* const& __cordl_internal_get__shadow() const;

constexpr ::Fusion::NetworkObjectHeaderSnapshot*& __cordl_internal_get__shadow() ;

constexpr ::Fusion::Simulation* const& __cordl_internal_get__simulation() const;

constexpr ::Fusion::Simulation*& __cordl_internal_get__simulation() ;

constexpr ::Fusion::NetworkObjectHeaderSnapshotList const& __cordl_internal_get__snapshots() const;

constexpr ::Fusion::NetworkObjectHeaderSnapshotList& __cordl_internal_get__snapshots() ;

constexpr ::ArrayW<::Fusion::NetworkObjectHeaderSnapshot*> const& __cordl_internal_get__snapshotsByIndex() const;

constexpr ::ArrayW<::Fusion::NetworkObjectHeaderSnapshot*>& __cordl_internal_get__snapshotsByIndex() ;

constexpr ::System::Nullable_1<::Fusion::Tick> const& __cordl_internal_get__snapshotsByIndexLatest() const;

constexpr ::System::Nullable_1<::Fusion::Tick>& __cordl_internal_get__snapshotsByIndexLatest() ;

constexpr ::Fusion::Timeline* const& __cordl_internal_get__timeline() const;

constexpr ::Fusion::Timeline*& __cordl_internal_get__timeline() ;

constexpr void __cordl_internal_set_AreaOfInterestCell(int32_t  value) ;

constexpr void __cordl_internal_set_BehaviourCount(int16_t  value) ;

constexpr void __cordl_internal_set_ChangedTick(::Fusion::Tick  value) ;

constexpr void __cordl_internal_set_Instance(::UnityW<::Fusion::NetworkObject>  value) ;

constexpr void __cordl_internal_set_LocalFlags(::Fusion::NetworkObjectMetaFlags  value) ;

constexpr void __cordl_internal_set_PlayerData(::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData  value) ;

constexpr void __cordl_internal_set_ScannedTick(::Fusion::Tick  value) ;

constexpr void __cordl_internal_set_WordCount(int16_t  value) ;

constexpr void __cordl_internal_set__allocator(::Fusion::Allocator*  value) ;

constexpr void __cordl_internal_set__changes(int32_t*  value) ;

constexpr void __cordl_internal_set__flags(::Fusion::NetworkObjectHeaderFlags  value) ;

constexpr void __cordl_internal_set__migration(::Fusion::NetworkObjectHeaderSnapshot*  value) ;

constexpr void __cordl_internal_set__next(::Fusion::NetworkObjectMeta*  value) ;

constexpr void __cordl_internal_set__nextMigration(::Fusion::NetworkObjectMeta*  value) ;

constexpr void __cordl_internal_set__prev(::Fusion::NetworkObjectMeta*  value) ;

constexpr void __cordl_internal_set__prevMigration(::Fusion::NetworkObjectMeta*  value) ;

constexpr void __cordl_internal_set__previous(::Fusion::NetworkObjectHeaderSnapshot*  value) ;

constexpr void __cordl_internal_set__ptr(int32_t*  value) ;

constexpr void __cordl_internal_set__render(::Fusion::NetworkObjectHeaderSnapshot*  value) ;

constexpr void __cordl_internal_set__shadow(::Fusion::NetworkObjectHeaderSnapshot*  value) ;

constexpr void __cordl_internal_set__simulation(::Fusion::Simulation*  value) ;

constexpr void __cordl_internal_set__snapshots(::Fusion::NetworkObjectHeaderSnapshotList  value) ;

constexpr void __cordl_internal_set__snapshotsByIndex(::ArrayW<::Fusion::NetworkObjectHeaderSnapshot*>  value) ;

constexpr void __cordl_internal_set__snapshotsByIndexLatest(::System::Nullable_1<::Fusion::Tick>  value) ;

constexpr void __cordl_internal_set__timeline(::Fusion::Timeline*  value) ;

/// @brief Method .ctor, addr 0x5fca374, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::Fusion::Simulation*  simulation, ::Fusion::Allocator*  allocator) ;

static inline ::ArrayW<::Fusion::NetworkBufferSerializerInfo> getStaticF__serializersNone() ;

static inline ::ArrayW<::Fusion::NetworkBufferSerializerInfo> getStaticF__serializersStatic() ;

/// @brief Method get_BehaviourChangedTickArray, addr 0x5fc9c7c, size 0xcc, virtual false, abstract: false, final false
inline ::System::Span_1<int32_t> get_BehaviourChangedTickArray() ;

/// @brief Method get_Changes, addr 0x5fca318, size 0x5c, virtual false, abstract: false, final false
inline int32_t* get_Changes() ;

/// @brief Method get_ChangesSpan, addr 0x5fca280, size 0x98, virtual false, abstract: false, final false
inline ::System::Span_1<int32_t> get_ChangesSpan() ;

/// @brief Method get_Data, addr 0x5fc9bc4, size 0xb8, virtual false, abstract: false, final false
inline ::System::Span_1<int32_t> get_Data() ;

/// @brief Method get_Flags, addr 0x5fc9b34, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::NetworkObjectHeaderFlags get_Flags() ;

/// @brief Method get_HasMainTRSP, addr 0x5fc9b3c, size 0xc, virtual false, abstract: false, final false
inline bool get_HasMainTRSP() ;

/// @brief Method get_HasSnapshots, addr 0x5fca01c, size 0x10, virtual false, abstract: false, final false
inline bool get_HasSnapshots() ;

/// @brief Method get_Header, addr 0x5fc9b2c, size 0x8, virtual false, abstract: false, final false
inline ::by_ref<::Fusion::NetworkObjectHeader> get_Header() ;

/// @brief Method get_Id, addr 0x5fca05c, size 0xc, virtual false, abstract: false, final false
inline ::Fusion::NetworkId get_Id() ;

/// @brief Method get_InputAuthority, addr 0x5fca08c, size 0xc, virtual false, abstract: false, final false
inline ::by_ref<::Fusion::PlayerRef> get_InputAuthority() ;

/// @brief Method get_IsObject, addr 0x5fca040, size 0x10, virtual false, abstract: false, final false
inline bool get_IsObject() ;

/// @brief Method get_IsStruct, addr 0x5fca034, size 0xc, virtual false, abstract: false, final false
inline bool get_IsStruct() ;

/// @brief Method get_MainTRSPData, addr 0x5fc9b48, size 0x28, virtual false, abstract: false, final false
inline ::by_ref<::Fusion::NetworkTRSPData> get_MainTRSPData() ;

/// @brief Method get_Migration, addr 0x5fca238, size 0x48, virtual false, abstract: false, final false
inline ::Fusion::NetworkObjectHeaderSnapshotRef get_Migration() ;

/// @brief Method get_NestingKey, addr 0x5fca074, size 0xc, virtual false, abstract: false, final false
inline ::Fusion::NetworkObjectNestingKey get_NestingKey() ;

/// @brief Method get_NestingRoot, addr 0x5fca068, size 0xc, virtual false, abstract: false, final false
inline ::Fusion::NetworkId get_NestingRoot() ;

/// @brief Method get_Previous, addr 0x5fca1f0, size 0x48, virtual false, abstract: false, final false
inline ::Fusion::NetworkObjectHeaderSnapshotRef get_Previous() ;

/// @brief Method get_Raw, addr 0x5fc9b70, size 0x54, virtual false, abstract: false, final false
inline ::System::Span_1<int32_t> get_Raw() ;

/// @brief Method get_Render, addr 0x5fca15c, size 0x48, virtual false, abstract: false, final false
inline ::Fusion::NetworkObjectHeaderSnapshotRef get_Render() ;

/// @brief Method get_Serializers, addr 0x5fc9a24, size 0x58, virtual false, abstract: false, final false
inline ::ArrayW<::Fusion::NetworkBufferSerializerInfo> get_Serializers() ;

/// @brief Method get_Shadow, addr 0x5fca098, size 0x44, virtual false, abstract: false, final false
inline ::Fusion::NetworkObjectHeaderSnapshotRef get_Shadow() ;

/// @brief Method get_SnapshotLatest, addr 0x5fca02c, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::NetworkObjectHeaderSnapshotRef get_SnapshotLatest() ;

/// @brief Method get_StateAuthority, addr 0x5fca080, size 0xc, virtual false, abstract: false, final false
inline ::by_ref<::Fusion::PlayerRef> get_StateAuthority() ;

/// @brief Method get_Timeline, addr 0x5fc9a7c, size 0xb0, virtual false, abstract: false, final false
inline ::Fusion::Timeline* get_Timeline() ;

/// @brief Method get_Type, addr 0x5fca050, size 0xc, virtual false, abstract: false, final false
inline ::Fusion::NetworkObjectTypeId get_Type() ;

static inline void setStaticF__serializersNone(::ArrayW<::Fusion::NetworkBufferSerializerInfo>  value) ;

static inline void setStaticF__serializersStatic(::ArrayW<::Fusion::NetworkBufferSerializerInfo>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectMeta() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectMeta", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkObjectMeta(NetworkObjectMeta && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectMeta", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkObjectMeta(NetworkObjectMeta const& ) = delete;

/// @brief Field PRIORITY_IDLE offset 0xffffffff size 0x4
static constexpr int32_t  PRIORITY_IDLE{static_cast<int32_t>(0xffff8000)};

/// @brief Field PRIORITY_LEVEL_COUNT offset 0xffffffff size 0x4
static constexpr int32_t  PRIORITY_LEVEL_COUNT{static_cast<int32_t>(0x5)};

/// @brief Field PRIORITY_LEVEL_HIGH offset 0xffffffff size 0x4
static constexpr int32_t  PRIORITY_LEVEL_HIGH{static_cast<int32_t>(0x1)};

/// @brief Field PRIORITY_LEVEL_LOW offset 0xffffffff size 0x4
static constexpr int32_t  PRIORITY_LEVEL_LOW{static_cast<int32_t>(0x3)};

/// @brief Field PRIORITY_LEVEL_LOWEST offset 0xffffffff size 0x4
static constexpr int32_t  PRIORITY_LEVEL_LOWEST{static_cast<int32_t>(0x4)};

/// @brief Field PRIORITY_LEVEL_MED offset 0xffffffff size 0x4
static constexpr int32_t  PRIORITY_LEVEL_MED{static_cast<int32_t>(0x2)};

/// @brief Field PRIORITY_LEVEL_PLAYER offset 0xffffffff size 0x4
static constexpr int32_t  PRIORITY_LEVEL_PLAYER{static_cast<int32_t>(0x0)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19153};

/// @brief Field _allocator, offset: 0x10, size: 0x8, def value: None
 ::Fusion::Allocator*  ____allocator;

/// @brief Field _changes, offset: 0x18, size: 0x8, def value: None
 int32_t*  ____changes;

/// @brief Field _simulation, offset: 0x20, size: 0x8, def value: None
 ::Fusion::Simulation*  ____simulation;

/// @brief Field _shadow, offset: 0x28, size: 0x8, def value: None
 ::Fusion::NetworkObjectHeaderSnapshot*  ____shadow;

/// @brief Field _render, offset: 0x30, size: 0x8, def value: None
 ::Fusion::NetworkObjectHeaderSnapshot*  ____render;

/// @brief Field _previous, offset: 0x38, size: 0x8, def value: None
 ::Fusion::NetworkObjectHeaderSnapshot*  ____previous;

/// @brief Field _migration, offset: 0x40, size: 0x8, def value: None
 ::Fusion::NetworkObjectHeaderSnapshot*  ____migration;

/// @brief Field _snapshots, offset: 0x48, size: 0x18, def value: None
 ::Fusion::NetworkObjectHeaderSnapshotList  ____snapshots;

/// @brief Field _snapshotsByIndex, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::Fusion::NetworkObjectHeaderSnapshot*>  ____snapshotsByIndex;

/// @brief Field _snapshotsByIndexLatest, offset: 0x68, size: 0x10, def value: None
 ::System::Nullable_1<::Fusion::Tick>  ____snapshotsByIndexLatest;

/// @brief Field _timeline, offset: 0x78, size: 0x8, def value: None
 ::Fusion::Timeline*  ____timeline;

/// @brief Field _prev, offset: 0x80, size: 0x8, def value: None
 ::Fusion::NetworkObjectMeta*  ____prev;

/// @brief Field _next, offset: 0x88, size: 0x8, def value: None
 ::Fusion::NetworkObjectMeta*  ____next;

/// @brief Field _prevMigration, offset: 0x90, size: 0x8, def value: None
 ::Fusion::NetworkObjectMeta*  ____prevMigration;

/// @brief Field _nextMigration, offset: 0x98, size: 0x8, def value: None
 ::Fusion::NetworkObjectMeta*  ____nextMigration;

/// @brief Field ScannedTick, offset: 0xa0, size: 0x4, def value: None
 ::Fusion::Tick  ___ScannedTick;

/// @brief Field ChangedTick, offset: 0xa4, size: 0x4, def value: None
 ::Fusion::Tick  ___ChangedTick;

/// @brief Field AreaOfInterestCell, offset: 0xa8, size: 0x4, def value: None
 int32_t  ___AreaOfInterestCell;

/// @brief Field LocalFlags, offset: 0xac, size: 0x4, def value: None
 ::Fusion::NetworkObjectMetaFlags  ___LocalFlags;

/// @brief Field PlayerData, offset: 0xb0, size: 0x4, def value: None
 ::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData  ___PlayerData;

/// @brief Field _ptr, offset: 0xb8, size: 0x8, def value: None
 int32_t*  ____ptr;

/// @brief Field Instance, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkObject>  ___Instance;

/// @brief Field WordCount, offset: 0xc8, size: 0x2, def value: None
 int16_t  ___WordCount;

/// @brief Size padding 0xc8 - 0xd0 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

/// @brief Field BehaviourCount, offset: 0xca, size: 0x2, def value: None
 int16_t  ___BehaviourCount;

/// @brief Field _flags, offset: 0xcc, size: 0x4, def value: None
 ::Fusion::NetworkObjectHeaderFlags  ____flags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkObjectMeta, ____allocator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectMeta, ____changes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectMeta, ____simulation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectMeta, ____shadow) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectMeta, ____render) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectMeta, ____previous) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectMeta, ____migration) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectMeta, ____snapshots) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectMeta, ____snapshotsByIndex) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectMeta, ____snapshotsByIndexLatest) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectMeta, ____timeline) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectMeta, ____prev) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectMeta, ____next) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectMeta, ____prevMigration) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectMeta, ____nextMigration) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectMeta, ___ScannedTick) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectMeta, ___ChangedTick) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectMeta, ___AreaOfInterestCell) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectMeta, ___LocalFlags) == 0xac, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectMeta, ___PlayerData) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectMeta, ____ptr) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectMeta, ___Instance) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectMeta, ___WordCount) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectMeta, ___BehaviourCount) == 0xca, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectMeta, ____flags) == 0xcc, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkObjectMeta) == 0xc8, "Size mismatch!");

} // namespace end def Fusion
