#pragma once
// IWYU pragma private; include "Fusion/NetworkPrefabTable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__BitSet64_def.hpp"
#include "Fusion/zzzz__NetworkPrefabId_def.hpp"
#include "Fusion/zzzz__NetworkPrefabTableOptions_def.hpp"
#include "Fusion/zzzz__NetworkPrefabTable_PrefabAcquireData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkPrefabTable)
namespace Fusion {
class INetworkPrefabSource;
}
namespace Fusion {
struct NetworkObjectGuid;
}
namespace Fusion {
class NetworkObject;
}
namespace Fusion {
struct NetworkPrefabId;
}
namespace Fusion {
class NetworkPrefabTable__GetEntries_d__12;
}
namespace GlobalNamespace {
struct NetworkPrefabTable_PrefabAcquireData;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Fusion {
class NetworkPrefabTable;
}
namespace Fusion {
class NetworkPrefabTable__GetEntries_d__12;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkPrefabTable*);
MARK_REF_T(::Fusion::NetworkPrefabTable__GetEntries_d__12*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkPrefabTable*, "Fusion", "NetworkPrefabTable");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkPrefabTable__GetEntries_d__12*, "Fusion", "NetworkPrefabTable/<GetEntries>d__12");
// Dependencies Fusion.BitSet64, Fusion.NetworkPrefabTable::PrefabAcquireData, Fusion.NetworkPrefabTableOptions, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkPrefabTable
class CORDL_TYPE NetworkPrefabTable : public ::System::Object {
public:
// Declarations
using _GetEntries_d__12 = ::Fusion::NetworkPrefabTable__GetEntries_d__12;

using PrefabAcquireData = ::GlobalNamespace::NetworkPrefabTable_PrefabAcquireData;

/// @brief Field Options, offset 0x10, size 0x2 
 __declspec(property(get=__cordl_internal_get_Options, put=__cordl_internal_set_Options)) ::Fusion::NetworkPrefabTableOptions  Options;

 __declspec(property(get=get_Prefabs)) ::System::Collections::Generic::IReadOnlyList_1<::Fusion::INetworkPrefabSource*>*  Prefabs;

 __declspec(property(get=get_Version)) int32_t  Version;

/// @brief Field _acquireData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__acquireData, put=__cordl_internal_set__acquireData)) ::ArrayW<::GlobalNamespace::NetworkPrefabTable_PrefabAcquireData>  _acquireData;

/// @brief Field _acquireMask, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__acquireMask, put=__cordl_internal_set__acquireMask)) ::ArrayW<::Fusion::BitSet64>  _acquireMask;

/// @brief Field _guidToIndex, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__guidToIndex, put=__cordl_internal_set__guidToIndex)) ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkObjectGuid,int32_t>*  _guidToIndex;

/// @brief Field _sources, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__sources, put=__cordl_internal_set__sources)) ::System::Collections::Generic::List_1<::Fusion::INetworkPrefabSource*>*  _sources;

/// @brief Field _version, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__version, put=__cordl_internal_set__version)) int32_t  _version;

/// @brief Method AddInstance, addr 0x5fcf134, size 0x1b4, virtual false, abstract: false, final false
inline int32_t AddInstance(::Fusion::NetworkPrefabId  prefabId) ;

/// @brief Method AddSource, addr 0x5fce74c, size 0x134, virtual false, abstract: false, final false
inline ::Fusion::NetworkPrefabId AddSource(::Fusion::INetworkPrefabSource*  source) ;

/// @brief Method Clear, addr 0x5fd02a4, size 0x13c, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Contains, addr 0x5fcf6e0, size 0x20, virtual false, abstract: false, final false
inline bool Contains(::Fusion::NetworkPrefabId  prefabId) ;

/// @brief Method DecodePrefabId, addr 0x5fcfd54, size 0x144, virtual false, abstract: false, final false
inline int32_t DecodePrefabId(::Fusion::NetworkPrefabId  prefabId) ;

/// @brief Method GetBitSetCapacity, addr 0x5fcecf0, size 0x68, virtual false, abstract: false, final false
inline int32_t GetBitSetCapacity(int32_t  length) ;

/// [IteratorStateMachine(typeof(Fusion.NetworkPrefabTable::<GetEntries>d__12))]
/// @brief Method GetEntries, addr 0x5fce698, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>>* GetEntries() ;

/// @brief Method GetGuid, addr 0x5fcef90, size 0xfc, virtual false, abstract: false, final false
inline ::Fusion::NetworkObjectGuid GetGuid(::Fusion::NetworkPrefabId  prefabId) ;

/// @brief Method GetId, addr 0x5fcef08, size 0x88, virtual false, abstract: false, final false
inline ::Fusion::NetworkPrefabId GetId(::Fusion::NetworkObjectGuid  guid) ;

/// @brief Method GetInstancesCount, addr 0x5fcf08c, size 0x9c, virtual false, abstract: false, final false
inline int32_t GetInstancesCount(::Fusion::NetworkPrefabId  prefabId) ;

/// @brief Method GetSource, addr 0x5fced58, size 0xa8, virtual false, abstract: false, final false
inline ::Fusion::INetworkPrefabSource* GetSource(::Fusion::NetworkObjectGuid  guid) ;

/// @brief Method GetSource, addr 0x5fcee00, size 0x8c, virtual false, abstract: false, final false
inline ::Fusion::INetworkPrefabSource* GetSource(::Fusion::NetworkPrefabId  prefabId) ;

/// @brief Method IsAcquired, addr 0x5fcf774, size 0x48, virtual false, abstract: false, final false
inline bool IsAcquired(int32_t  index) ;

/// @brief Method IsAcquired, addr 0x5fcf700, size 0x74, virtual false, abstract: false, final false
inline bool IsAcquired(::Fusion::NetworkPrefabId  prefabId) ;

/// @brief Method Load, addr 0x5fcf84c, size 0x508, virtual false, abstract: false, final false
inline ::UnityW<::Fusion::NetworkObject> Load(::Fusion::NetworkPrefabId  prefabId, bool  isSynchronous) ;

static inline ::Fusion::NetworkPrefabTable* New_ctor() ;

/// @brief Method RemoveInstance, addr 0x5fcf2f8, size 0x250, virtual false, abstract: false, final false
inline int32_t RemoveInstance(::Fusion::NetworkPrefabId  prefabId) ;

/// @brief Method SetAcquired, addr 0x5fcf7bc, size 0x90, virtual false, abstract: false, final false
inline void SetAcquired(int32_t  index, bool  value) ;

/// @brief Method TryAddSource, addr 0x5fce880, size 0x470, virtual false, abstract: false, final false
inline bool TryAddSource(::Fusion::INetworkPrefabSource*  source, ::by_ref<::Fusion::NetworkPrefabId>  id) ;

/// @brief Method TryDecodePrefabId, addr 0x5fcee8c, size 0x7c, virtual false, abstract: false, final false
inline bool TryDecodePrefabId(::Fusion::NetworkPrefabId  prefabId, ::by_ref<int32_t>  index) ;

/// @brief Method Unload, addr 0x5fcfec0, size 0x88, virtual false, abstract: false, final false
inline bool Unload(::Fusion::NetworkPrefabId  prefabId) ;

/// @brief Method UnloadAll, addr 0x5fd0230, size 0x74, virtual false, abstract: false, final false
inline void UnloadAll() ;

/// @brief Method UnloadInternal, addr 0x5fcf548, size 0x198, virtual false, abstract: false, final false
inline void UnloadInternal(int32_t  index) ;

/// @brief Method UnloadUnreferenced, addr 0x5fcff48, size 0x2e8, virtual false, abstract: false, final false
inline int32_t UnloadUnreferenced(bool  includeIncompleteLoads) ;

constexpr ::Fusion::NetworkPrefabTableOptions const& __cordl_internal_get_Options() const;

constexpr ::Fusion::NetworkPrefabTableOptions& __cordl_internal_get_Options() ;

constexpr ::ArrayW<::GlobalNamespace::NetworkPrefabTable_PrefabAcquireData> const& __cordl_internal_get__acquireData() const;

constexpr ::ArrayW<::GlobalNamespace::NetworkPrefabTable_PrefabAcquireData>& __cordl_internal_get__acquireData() ;

constexpr ::ArrayW<::Fusion::BitSet64> const& __cordl_internal_get__acquireMask() const;

constexpr ::ArrayW<::Fusion::BitSet64>& __cordl_internal_get__acquireMask() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkObjectGuid,int32_t>* const& __cordl_internal_get__guidToIndex() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkObjectGuid,int32_t>*& __cordl_internal_get__guidToIndex() ;

constexpr ::System::Collections::Generic::List_1<::Fusion::INetworkPrefabSource*>* const& __cordl_internal_get__sources() const;

constexpr ::System::Collections::Generic::List_1<::Fusion::INetworkPrefabSource*>*& __cordl_internal_get__sources() ;

constexpr int32_t const& __cordl_internal_get__version() const;

constexpr int32_t& __cordl_internal_get__version() ;

constexpr void __cordl_internal_set_Options(::Fusion::NetworkPrefabTableOptions  value) ;

constexpr void __cordl_internal_set__acquireData(::ArrayW<::GlobalNamespace::NetworkPrefabTable_PrefabAcquireData>  value) ;

constexpr void __cordl_internal_set__acquireMask(::ArrayW<::Fusion::BitSet64>  value) ;

constexpr void __cordl_internal_set__guidToIndex(::System::Collections::Generic::Dictionary_2<::Fusion::NetworkObjectGuid,int32_t>*  value) ;

constexpr void __cordl_internal_set__sources(::System::Collections::Generic::List_1<::Fusion::INetworkPrefabSource*>*  value) ;

constexpr void __cordl_internal_set__version(int32_t  value) ;

/// @brief Method .ctor, addr 0x5fd03e0, size 0x1f8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Prefabs, addr 0x5fce688, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::Fusion::INetworkPrefabSource*>* get_Prefabs() ;

/// @brief Method get_Version, addr 0x5fce690, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Version() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkPrefabTable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkPrefabTable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkPrefabTable(NetworkPrefabTable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkPrefabTable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkPrefabTable(NetworkPrefabTable const& ) = delete;

/// @brief Field BitsPerMask offset 0xffffffff size 0x4
static constexpr int32_t  BitsPerMask{static_cast<int32_t>(0x40)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19179};

/// @brief Field Options, offset: 0x10, size: 0x2, def value: None
 ::Fusion::NetworkPrefabTableOptions  ___Options;

/// @brief Field _sources, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Fusion::INetworkPrefabSource*>*  ____sources;

/// @brief Field _acquireMask, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::Fusion::BitSet64>  ____acquireMask;

/// @brief Field _acquireData, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::NetworkPrefabTable_PrefabAcquireData>  ____acquireData;

/// @brief Field _guidToIndex, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkObjectGuid,int32_t>*  ____guidToIndex;

/// @brief Field _version, offset: 0x38, size: 0x4, def value: None
 int32_t  ____version;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkPrefabTable, ___Options) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkPrefabTable, ____sources) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkPrefabTable, ____acquireMask) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkPrefabTable, ____acquireData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkPrefabTable, ____guidToIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkPrefabTable, ____version) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkPrefabTable) == 0x40, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies Fusion.NetworkPrefabId, System.Object, System.ValueTuple`2<T1, T2>
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkPrefabTable/<GetEntries>d__12
class CORDL_TYPE NetworkPrefabTable__GetEntries_d__12 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_ValueTuple_Fusion_NetworkPrefabId_Fusion_INetworkPrefabSource___get_Current)) ::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>  System_Collections_Generic_IEnumerator_System_ValueTuple_Fusion_NetworkPrefabId_Fusion_INetworkPrefabSource___Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>  __2__current;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Fusion::NetworkPrefabTable*  __4__this;

/// @brief Field <>l__initialThreadId, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <i>5__1, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__1, put=__cordl_internal_set__i_5__1)) int32_t  _i_5__1;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5fd05e4, size 0x120, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Fusion::NetworkPrefabTable__GetEntries_d__12* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<System.ValueTuple<Fusion.NetworkPrefabId,Fusion.INetworkPrefabSource>>.GetEnumerator, addr 0x5fd07a4, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>>* System_Collections_Generic_IEnumerable_System_ValueTuple_Fusion_NetworkPrefabId_Fusion_INetworkPrefabSource___GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.ValueTuple<Fusion.NetworkPrefabId,Fusion.INetworkPrefabSource>>.get_Current, addr 0x5fd0704, size 0xc, virtual true, abstract: false, final true
inline ::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*> System_Collections_Generic_IEnumerator_System_ValueTuple_Fusion_NetworkPrefabId_Fusion_INetworkPrefabSource___get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5fd0848, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5fd0710, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5fd0748, size 0x5c, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5fd05d8, size 0xc, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*> const& __cordl_internal_get___2__current() const;

constexpr ::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>& __cordl_internal_get___2__current() ;

constexpr ::Fusion::NetworkPrefabTable* const& __cordl_internal_get___4__this() const;

constexpr ::Fusion::NetworkPrefabTable*& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr int32_t const& __cordl_internal_get__i_5__1() const;

constexpr int32_t& __cordl_internal_get__i_5__1() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>  value) ;

constexpr void __cordl_internal_set___4__this(::Fusion::NetworkPrefabTable*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set__i_5__1(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5fce718, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>>* i___System__Collections__Generic__IEnumerable_1___System__ValueTuple_2___Fusion__NetworkPrefabId___Fusion__INetworkPrefabSource___() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>>* i___System__Collections__Generic__IEnumerator_1___System__ValueTuple_2___Fusion__NetworkPrefabId___Fusion__INetworkPrefabSource___() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkPrefabTable__GetEntries_d__12() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkPrefabTable__GetEntries_d__12", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkPrefabTable__GetEntries_d__12(NetworkPrefabTable__GetEntries_d__12 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkPrefabTable__GetEntries_d__12", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkPrefabTable__GetEntries_d__12(NetworkPrefabTable__GetEntries_d__12 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19178};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
 ::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x28, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::Fusion::NetworkPrefabTable*  _____4__this;

/// @brief Field <i>5__1, offset: 0x38, size: 0x4, def value: None
 int32_t  ____i_5__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkPrefabTable__GetEntries_d__12, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkPrefabTable__GetEntries_d__12, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkPrefabTable__GetEntries_d__12, _____l__initialThreadId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkPrefabTable__GetEntries_d__12, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkPrefabTable__GetEntries_d__12, ____i_5__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkPrefabTable__GetEntries_d__12) == 0x40, "Size mismatch!");

} // namespace end def Fusion
