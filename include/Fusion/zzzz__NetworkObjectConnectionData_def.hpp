#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectConnectionData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkId_def.hpp"
#include "Fusion/zzzz__NetworkObjectConnectionDataStatus_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeader_PlayerUniqueDataChanges_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeader_PlayerUniqueData_def.hpp"
#include "Fusion/zzzz__Tick_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkObjectConnectionData)
namespace Fusion {
struct NetworkObjectHeaderPlayerDataFlags;
}
namespace Fusion {
class NetworkObjectMeta;
}
namespace Fusion {
class Simulation;
}
namespace GlobalNamespace {
struct NetworkObjectHeader_PlayerUniqueDataChanges;
}
namespace GlobalNamespace {
struct NetworkObjectHeader_PlayerUniqueData;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Fusion {
class NetworkObjectConnectionData;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkObjectConnectionData*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObjectConnectionData*, "Fusion", "NetworkObjectConnectionData");
// Dependencies Fusion.NetworkId, Fusion.NetworkObjectConnectionDataStatus, Fusion.NetworkObjectHeader::PlayerUniqueData, Fusion.NetworkObjectHeader::PlayerUniqueDataChanges, Fusion.Tick, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkObjectConnectionData
class CORDL_TYPE NetworkObjectConnectionData : public ::System::Object {
public:
// Declarations
/// @brief Field Filter, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_Filter, put=__cordl_internal_set_Filter)) uint64_t  Filter;

/// @brief Field Id, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Id, put=__cordl_internal_set_Id)) ::Fusion::NetworkId  Id;

/// @brief Field MainTRSP, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_MainTRSP, put=__cordl_internal_set_MainTRSP)) bool  MainTRSP;

/// @brief Field MetaCache, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_MetaCache, put=__cordl_internal_set_MetaCache)) ::Fusion::NetworkObjectMeta*  MetaCache;

/// @brief Field Next, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Next, put=__cordl_internal_set_Next)) ::Fusion::NetworkObjectConnectionData*  Next;

/// @brief Field Prev, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Prev, put=__cordl_internal_set_Prev)) ::Fusion::NetworkObjectConnectionData*  Prev;

/// @brief Field PriorityLevel, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_PriorityLevel, put=__cordl_internal_set_PriorityLevel)) int32_t  PriorityLevel;

/// @brief Field Status, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_Status, put=__cordl_internal_set_Status)) ::Fusion::NetworkObjectConnectionDataStatus  Status;

/// @brief Field TickAcknowledged, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_TickAcknowledged, put=__cordl_internal_set_TickAcknowledged)) ::Fusion::Tick  TickAcknowledged;

/// @brief Field TickMin, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_TickMin, put=__cordl_internal_set_TickMin)) ::Fusion::Tick  TickMin;

/// @brief Field TickSent, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_TickSent, put=__cordl_internal_set_TickSent)) ::Fusion::Tick  TickSent;

/// @brief Field UniqueData, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_UniqueData, put=__cordl_internal_set_UniqueData)) ::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData  UniqueData;

/// @brief Field UniqueDataChanges, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_UniqueDataChanges, put=__cordl_internal_set_UniqueDataChanges)) ::GlobalNamespace::NetworkObjectHeader_PlayerUniqueDataChanges  UniqueDataChanges;

/// @brief Method ClearPlayerDataFlag, addr 0x5faa620, size 0x28, virtual false, abstract: false, final false
inline void ClearPlayerDataFlag(::Fusion::NetworkObjectHeaderPlayerDataFlags  flags, ::Fusion::Simulation*  simulation) ;

/// @brief Method GetPlayerData, addr 0x5faa598, size 0x60, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData,::GlobalNamespace::NetworkObjectHeader_PlayerUniqueDataChanges> GetPlayerData() ;

/// @brief Method HasAnyPlayerDataFlag, addr 0x5faa658, size 0x10, virtual false, abstract: false, final false
inline bool HasAnyPlayerDataFlag(::Fusion::NetworkObjectHeaderPlayerDataFlags  flags) ;

/// @brief Method HasPlayerDataFlag, addr 0x5faa648, size 0x10, virtual false, abstract: false, final false
inline bool HasPlayerDataFlag(::Fusion::NetworkObjectHeaderPlayerDataFlags  flags) ;

static inline ::Fusion::NetworkObjectConnectionData* New_ctor() ;

/// @brief Method SetPlayerDataFlag, addr 0x5faa5f8, size 0x28, virtual false, abstract: false, final false
inline void SetPlayerDataFlag(::Fusion::NetworkObjectHeaderPlayerDataFlags  flags, ::Fusion::Simulation*  simulation) ;

constexpr uint64_t const& __cordl_internal_get_Filter() const;

constexpr uint64_t& __cordl_internal_get_Filter() ;

constexpr ::Fusion::NetworkId const& __cordl_internal_get_Id() const;

constexpr ::Fusion::NetworkId& __cordl_internal_get_Id() ;

constexpr bool const& __cordl_internal_get_MainTRSP() const;

constexpr bool& __cordl_internal_get_MainTRSP() ;

constexpr ::Fusion::NetworkObjectMeta* const& __cordl_internal_get_MetaCache() const;

constexpr ::Fusion::NetworkObjectMeta*& __cordl_internal_get_MetaCache() ;

constexpr ::Fusion::NetworkObjectConnectionData* const& __cordl_internal_get_Next() const;

constexpr ::Fusion::NetworkObjectConnectionData*& __cordl_internal_get_Next() ;

constexpr ::Fusion::NetworkObjectConnectionData* const& __cordl_internal_get_Prev() const;

constexpr ::Fusion::NetworkObjectConnectionData*& __cordl_internal_get_Prev() ;

constexpr int32_t const& __cordl_internal_get_PriorityLevel() const;

constexpr int32_t& __cordl_internal_get_PriorityLevel() ;

constexpr ::Fusion::NetworkObjectConnectionDataStatus const& __cordl_internal_get_Status() const;

constexpr ::Fusion::NetworkObjectConnectionDataStatus& __cordl_internal_get_Status() ;

constexpr ::Fusion::Tick const& __cordl_internal_get_TickAcknowledged() const;

constexpr ::Fusion::Tick& __cordl_internal_get_TickAcknowledged() ;

constexpr ::Fusion::Tick const& __cordl_internal_get_TickMin() const;

constexpr ::Fusion::Tick& __cordl_internal_get_TickMin() ;

constexpr ::Fusion::Tick const& __cordl_internal_get_TickSent() const;

constexpr ::Fusion::Tick& __cordl_internal_get_TickSent() ;

constexpr ::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData const& __cordl_internal_get_UniqueData() const;

constexpr ::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData& __cordl_internal_get_UniqueData() ;

constexpr ::GlobalNamespace::NetworkObjectHeader_PlayerUniqueDataChanges const& __cordl_internal_get_UniqueDataChanges() const;

constexpr ::GlobalNamespace::NetworkObjectHeader_PlayerUniqueDataChanges& __cordl_internal_get_UniqueDataChanges() ;

constexpr void __cordl_internal_set_Filter(uint64_t  value) ;

constexpr void __cordl_internal_set_Id(::Fusion::NetworkId  value) ;

constexpr void __cordl_internal_set_MainTRSP(bool  value) ;

constexpr void __cordl_internal_set_MetaCache(::Fusion::NetworkObjectMeta*  value) ;

constexpr void __cordl_internal_set_Next(::Fusion::NetworkObjectConnectionData*  value) ;

constexpr void __cordl_internal_set_Prev(::Fusion::NetworkObjectConnectionData*  value) ;

constexpr void __cordl_internal_set_PriorityLevel(int32_t  value) ;

constexpr void __cordl_internal_set_Status(::Fusion::NetworkObjectConnectionDataStatus  value) ;

constexpr void __cordl_internal_set_TickAcknowledged(::Fusion::Tick  value) ;

constexpr void __cordl_internal_set_TickMin(::Fusion::Tick  value) ;

constexpr void __cordl_internal_set_TickSent(::Fusion::Tick  value) ;

constexpr void __cordl_internal_set_UniqueData(::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData  value) ;

constexpr void __cordl_internal_set_UniqueDataChanges(::GlobalNamespace::NetworkObjectHeader_PlayerUniqueDataChanges  value) ;

/// @brief Method .ctor, addr 0x5faa668, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectConnectionData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectConnectionData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkObjectConnectionData(NetworkObjectConnectionData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectConnectionData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkObjectConnectionData(NetworkObjectConnectionData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19123};

/// @brief Field Prev, offset: 0x10, size: 0x8, def value: None
 ::Fusion::NetworkObjectConnectionData*  ___Prev;

/// @brief Field Next, offset: 0x18, size: 0x8, def value: None
 ::Fusion::NetworkObjectConnectionData*  ___Next;

/// @brief Field Id, offset: 0x20, size: 0x4, def value: None
 ::Fusion::NetworkId  ___Id;

/// @brief Field MetaCache, offset: 0x28, size: 0x8, def value: None
 ::Fusion::NetworkObjectMeta*  ___MetaCache;

/// @brief Field PriorityLevel, offset: 0x30, size: 0x4, def value: None
 int32_t  ___PriorityLevel;

/// @brief Field Status, offset: 0x34, size: 0x4, def value: None
 ::Fusion::NetworkObjectConnectionDataStatus  ___Status;

/// @brief Field MainTRSP, offset: 0x38, size: 0x1, def value: None
 bool  ___MainTRSP;

/// @brief Field TickSent, offset: 0x3c, size: 0x4, def value: None
 ::Fusion::Tick  ___TickSent;

/// @brief Field TickAcknowledged, offset: 0x40, size: 0x4, def value: None
 ::Fusion::Tick  ___TickAcknowledged;

/// @brief Field TickMin, offset: 0x44, size: 0x4, def value: None
 ::Fusion::Tick  ___TickMin;

/// @brief Field Filter, offset: 0x48, size: 0x8, def value: None
 uint64_t  ___Filter;

/// @brief Field UniqueData, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData  ___UniqueData;

/// @brief Field UniqueDataChanges, offset: 0x54, size: 0x4, def value: None
 ::GlobalNamespace::NetworkObjectHeader_PlayerUniqueDataChanges  ___UniqueDataChanges;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkObjectConnectionData, ___Prev) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectConnectionData, ___Next) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectConnectionData, ___Id) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectConnectionData, ___MetaCache) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectConnectionData, ___PriorityLevel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectConnectionData, ___Status) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectConnectionData, ___MainTRSP) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectConnectionData, ___TickSent) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectConnectionData, ___TickAcknowledged) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectConnectionData, ___TickMin) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectConnectionData, ___Filter) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectConnectionData, ___UniqueData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectConnectionData, ___UniqueDataChanges) == 0x54, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkObjectConnectionData) == 0x58, "Size mismatch!");

} // namespace end def Fusion
