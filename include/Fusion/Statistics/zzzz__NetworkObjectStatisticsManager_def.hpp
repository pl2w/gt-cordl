#pragma once
// IWYU pragma private; include "Fusion/Statistics/NetworkObjectStatisticsManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkObjectStatisticsManager)
namespace Fusion::Statistics {
class NetworkObjectStatisticsSnapshot;
}
namespace Fusion {
struct NetworkId;
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
template<typename T>
class Stack_1;
}
// Forward declare root types
namespace Fusion::Statistics {
class NetworkObjectStatisticsManager;
}
// Write type traits
MARK_REF_T(::Fusion::Statistics::NetworkObjectStatisticsManager*);
DEFINE_IL2CPP_CLASS(::Fusion::Statistics::NetworkObjectStatisticsManager*, "Fusion.Statistics", "NetworkObjectStatisticsManager");
// Dependencies System.Object
namespace Fusion::Statistics {
// Is value type: false
// CS Name: Fusion.Statistics.NetworkObjectStatisticsManager
class CORDL_TYPE NetworkObjectStatisticsManager : public ::System::Object {
public:
// Declarations
/// @brief Field _completedSnapshots, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__completedSnapshots, put=__cordl_internal_set__completedSnapshots)) ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>*  _completedSnapshots;

/// @brief Field _free, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__free, put=__cordl_internal_set__free)) ::System::Collections::Generic::Stack_1<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>*  _free;

/// @brief Field _monitoredNetworkObjects, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__monitoredNetworkObjects, put=__cordl_internal_set__monitoredNetworkObjects)) ::System::Collections::Generic::HashSet_1<::Fusion::NetworkId>*  _monitoredNetworkObjects;

/// @brief Field _pendingSnapshots, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__pendingSnapshots, put=__cordl_internal_set__pendingSnapshots)) ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>*  _pendingSnapshots;

/// [Conditional("DEBUG")]
/// @brief Method AddToNetworkObjectInBandwidth, addr 0x6020064, size 0x50, virtual false, abstract: false, final false
inline void AddToNetworkObjectInBandwidth(::Fusion::NetworkId  id, float_t  value, bool  overrideValue) ;

/// [Conditional("DEBUG")]
/// @brief Method AddToNetworkObjectInPackets, addr 0x602012c, size 0x50, virtual false, abstract: false, final false
inline void AddToNetworkObjectInPackets(::Fusion::NetworkId  id, int32_t  value, bool  overrideValue) ;

/// [Conditional("DEBUG")]
/// @brief Method AddToNetworkObjectOutBandwidth, addr 0x60200c8, size 0x50, virtual false, abstract: false, final false
inline void AddToNetworkObjectOutBandwidth(::Fusion::NetworkId  id, float_t  value, bool  overrideValue) ;

/// [Conditional("DEBUG")]
/// @brief Method AddToNetworkObjectOutPackets, addr 0x6020190, size 0x50, virtual false, abstract: false, final false
inline void AddToNetworkObjectOutPackets(::Fusion::NetworkId  id, int32_t  value, bool  overrideValue) ;

/// @brief Method ClearMonitoredNetworkObjects, addr 0x601fec4, size 0x50, virtual false, abstract: false, final false
inline void ClearMonitoredNetworkObjects() ;

/// [Conditional("DEBUG")]
/// @brief Method CollectStatistics, addr 0x601f488, size 0x2f8, virtual false, abstract: false, final false
inline void CollectStatistics() ;

/// @brief Method GetNetworkObjectStatistics, addr 0x6020020, size 0x44, virtual false, abstract: false, final false
inline bool GetNetworkObjectStatistics(::Fusion::NetworkId  id, ::by_ref<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>  objectStatisticsSnapshot) ;

/// @brief Method GetNewStatisticsObject, addr 0x601fd84, size 0xa0, virtual false, abstract: false, final false
inline ::Fusion::Statistics::NetworkObjectStatisticsSnapshot* GetNewStatisticsObject() ;

/// @brief Method IsObjectMonitored, addr 0x601ff14, size 0x104, virtual false, abstract: false, final false
inline bool IsObjectMonitored(::Fusion::NetworkId  id, ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>*  source, ::by_ref<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>  snapshot) ;

/// @brief Method MonitorNetworkObjectStatistics, addr 0x601fe2c, size 0x98, virtual false, abstract: false, final false
inline void MonitorNetworkObjectStatistics(::Fusion::NetworkId  id, bool  monitor) ;

static inline ::Fusion::Statistics::NetworkObjectStatisticsManager* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>* const& __cordl_internal_get__completedSnapshots() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>*& __cordl_internal_get__completedSnapshots() ;

constexpr ::System::Collections::Generic::Stack_1<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>* const& __cordl_internal_get__free() const;

constexpr ::System::Collections::Generic::Stack_1<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>*& __cordl_internal_get__free() ;

constexpr ::System::Collections::Generic::HashSet_1<::Fusion::NetworkId>* const& __cordl_internal_get__monitoredNetworkObjects() const;

constexpr ::System::Collections::Generic::HashSet_1<::Fusion::NetworkId>*& __cordl_internal_get__monitoredNetworkObjects() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>* const& __cordl_internal_get__pendingSnapshots() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>*& __cordl_internal_get__pendingSnapshots() ;

constexpr void __cordl_internal_set__completedSnapshots(::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>*  value) ;

constexpr void __cordl_internal_set__free(::System::Collections::Generic::Stack_1<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>*  value) ;

constexpr void __cordl_internal_set__monitoredNetworkObjects(::System::Collections::Generic::HashSet_1<::Fusion::NetworkId>*  value) ;

constexpr void __cordl_internal_set__pendingSnapshots(::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>*  value) ;

/// @brief Method .ctor, addr 0x601f28c, size 0x154, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectStatisticsManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectStatisticsManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkObjectStatisticsManager(NetworkObjectStatisticsManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectStatisticsManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkObjectStatisticsManager(NetworkObjectStatisticsManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19437};

/// @brief Field _monitoredNetworkObjects, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::Fusion::NetworkId>*  ____monitoredNetworkObjects;

/// @brief Field _pendingSnapshots, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>*  ____pendingSnapshots;

/// @brief Field _completedSnapshots, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>*  ____completedSnapshots;

/// @brief Field _free, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>*  ____free;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Statistics::NetworkObjectStatisticsManager, ____monitoredNetworkObjects) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::NetworkObjectStatisticsManager, ____pendingSnapshots) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::NetworkObjectStatisticsManager, ____completedSnapshots) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::NetworkObjectStatisticsManager, ____free) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Fusion::Statistics::NetworkObjectStatisticsManager) == 0x30, "Size mismatch!");

} // namespace end def Fusion::Statistics
