#pragma once
// IWYU pragma private; include "Fusion/NetworkProjectConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkProjectConfig_PeerModes_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkProjectConfig)
namespace Fusion {
class EncryptionConfig;
}
namespace Fusion {
class HeapConfiguration;
}
namespace Fusion {
class HostMigrationConfig;
}
namespace Fusion {
class LagCompensationSettings;
}
namespace Fusion {
class NetworkConfiguration;
}
namespace Fusion {
class NetworkPrefabTable;
}
namespace Fusion {
class NetworkSimulationConfiguration;
}
namespace Fusion {
class SimulationConfig;
}
namespace Fusion {
class TimeSyncConfiguration;
}
namespace GlobalNamespace {
struct NetworkProjectConfig_PeerModes;
}
namespace GlobalNamespace {
struct NetworkProjectConfig_ReplicationFeatures;
}
namespace GlobalNamespace {
struct NetworkRunner_BuildTypes;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Diagnostics {
class FileVersionInfo;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Type;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Fusion {
class NetworkProjectConfig;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkProjectConfig*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkProjectConfig*, "Fusion", "NetworkProjectConfig");
// Dependencies Fusion.NetworkProjectConfig::PeerModes, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkProjectConfig
class CORDL_TYPE NetworkProjectConfig : public ::System::Object {
public:
// Declarations
using PeerModes = ::GlobalNamespace::NetworkProjectConfig_PeerModes;

using ReplicationFeatures = ::GlobalNamespace::NetworkProjectConfig_ReplicationFeatures;

/// @brief Field AllowClientServerModesInWebGL, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_AllowClientServerModesInWebGL, put=__cordl_internal_set_AllowClientServerModesInWebGL)) bool  AllowClientServerModesInWebGL;

/// @brief Field AssembliesToWeave, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_AssembliesToWeave, put=__cordl_internal_set_AssembliesToWeave)) ::ArrayW<::StringW>  AssembliesToWeave;

/// @brief Field CheckNetworkedPropertiesBeingEmpty, offset 0x83, size 0x1 
 __declspec(property(get=__cordl_internal_get_CheckNetworkedPropertiesBeingEmpty, put=__cordl_internal_set_CheckNetworkedPropertiesBeingEmpty)) bool  CheckNetworkedPropertiesBeingEmpty;

/// @brief Field CheckRpcAttributeUsage, offset 0x82, size 0x1 
 __declspec(property(get=__cordl_internal_get_CheckRpcAttributeUsage, put=__cordl_internal_set_CheckRpcAttributeUsage)) bool  CheckRpcAttributeUsage;

/// @brief Field ClientsRecordFrameAndPacketTimingTraces, offset 0x35, size 0x1 
 __declspec(property(get=__cordl_internal_get_ClientsRecordFrameAndPacketTimingTraces, put=__cordl_internal_set_ClientsRecordFrameAndPacketTimingTraces)) bool  ClientsRecordFrameAndPacketTimingTraces;

/// @brief Field EncryptionConfig, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_EncryptionConfig, put=__cordl_internal_set_EncryptionConfig)) ::Fusion::EncryptionConfig*  EncryptionConfig;

/// @brief Field EnqueueIncompleteSynchronousSpawns, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_EnqueueIncompleteSynchronousSpawns, put=__cordl_internal_set_EnqueueIncompleteSynchronousSpawns)) bool  EnqueueIncompleteSynchronousSpawns;

/// @brief Field ExecutionOrderOverrides, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_ExecutionOrderOverrides, put=__cordl_internal_set_ExecutionOrderOverrides)) ::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*  ExecutionOrderOverrides;

/// @brief Field Heap, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_Heap, put=__cordl_internal_set_Heap)) ::Fusion::HeapConfiguration*  Heap;

/// @brief Field HideNetworkObjectInactivityGuard, offset 0x33, size 0x1 
 __declspec(property(get=__cordl_internal_get_HideNetworkObjectInactivityGuard, put=__cordl_internal_set_HideNetworkObjectInactivityGuard)) bool  HideNetworkObjectInactivityGuard;

/// @brief Field HostMigration, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_HostMigration, put=__cordl_internal_set_HostMigration)) ::Fusion::HostMigrationConfig*  HostMigration;

/// @brief Field InvokeRenderInBatchMode, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_InvokeRenderInBatchMode, put=__cordl_internal_set_InvokeRenderInBatchMode)) bool  InvokeRenderInBatchMode;

/// @brief Field LagCompensation, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_LagCompensation, put=__cordl_internal_set_LagCompensation)) ::Fusion::LagCompensationSettings*  LagCompensation;

/// @brief Field Network, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_Network, put=__cordl_internal_set_Network)) ::Fusion::NetworkConfiguration*  Network;

/// @brief Field NetworkConditions, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_NetworkConditions, put=__cordl_internal_set_NetworkConditions)) ::Fusion::NetworkSimulationConfiguration*  NetworkConditions;

/// @brief Field NetworkIdIsObjectName, offset 0x32, size 0x1 
 __declspec(property(get=__cordl_internal_get_NetworkIdIsObjectName, put=__cordl_internal_set_NetworkIdIsObjectName)) bool  NetworkIdIsObjectName;

/// @brief Field NullChecksForNetworkedProperties, offset 0x81, size 0x1 
 __declspec(property(get=__cordl_internal_get_NullChecksForNetworkedProperties, put=__cordl_internal_set_NullChecksForNetworkedProperties)) bool  NullChecksForNetworkedProperties;

/// @brief Field PeerMode, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_PeerMode, put=__cordl_internal_set_PeerMode)) ::GlobalNamespace::NetworkProjectConfig_PeerModes  PeerMode;

/// @brief Field PrefabTable, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_PrefabTable, put=__cordl_internal_set_PrefabTable)) ::Fusion::NetworkPrefabTable*  PrefabTable;

/// @brief Field Simulation, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_Simulation, put=__cordl_internal_set_Simulation)) ::Fusion::SimulationConfig*  Simulation;

/// @brief Field TimeSynchronizationOverride, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_TimeSynchronizationOverride, put=__cordl_internal_set_TimeSynchronizationOverride)) ::Fusion::TimeSyncConfiguration*  TimeSynchronizationOverride;

/// @brief Field TypeId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_TypeId, put=__cordl_internal_set_TypeId)) ::StringW  TypeId;

/// @brief Field UseSerializableDictionary, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseSerializableDictionary, put=__cordl_internal_set_UseSerializableDictionary)) bool  UseSerializableDictionary;

/// @brief Field Version, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Version, put=__cordl_internal_set_Version)) int32_t  Version;

/// @brief Method Copy, addr 0x5fd8938, size 0xc4, virtual false, abstract: false, final false
inline ::Fusion::NetworkProjectConfig* Copy() ;

/// @brief Method Deserialize, addr 0x5fd8b6c, size 0x48, virtual false, abstract: false, final false
static inline ::Fusion::NetworkProjectConfig* Deserialize(::StringW  data) ;

/// @brief Method GetExecutionOrder, addr 0x5fd8740, size 0x144, virtual false, abstract: false, final false
inline ::System::Nullable_1<int32_t> GetExecutionOrder(::System::Type*  type) ;

/// @brief Method Init, addr 0x5fd8884, size 0xb4, virtual false, abstract: false, final false
inline ::Fusion::NetworkProjectConfig* Init(int32_t  globalSize, ::System::Nullable_1<int32_t>  playerCountOverride, ::System::Nullable_1<int32_t>  inputWordCount) ;

static inline ::Fusion::NetworkProjectConfig* New_ctor() ;

/// @brief Method Serialize, addr 0x5fd8a04, size 0x8, virtual false, abstract: false, final false
static inline ::StringW Serialize(::Fusion::NetworkProjectConfig*  config) ;

/// @brief Method SerializeMinimal, addr 0x5fd8bb4, size 0x6c, virtual false, abstract: false, final false
static inline ::StringW SerializeMinimal(::Fusion::NetworkProjectConfig*  config) ;

/// @brief Method ToString, addr 0x5fd89fc, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method UnloadGlobal, addr 0x5fd86fc, size 0x4, virtual false, abstract: false, final false
static inline void UnloadGlobal() ;

constexpr bool const& __cordl_internal_get_AllowClientServerModesInWebGL() const;

constexpr bool& __cordl_internal_get_AllowClientServerModesInWebGL() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_AssembliesToWeave() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_AssembliesToWeave() ;

constexpr bool const& __cordl_internal_get_CheckNetworkedPropertiesBeingEmpty() const;

constexpr bool& __cordl_internal_get_CheckNetworkedPropertiesBeingEmpty() ;

constexpr bool const& __cordl_internal_get_CheckRpcAttributeUsage() const;

constexpr bool& __cordl_internal_get_CheckRpcAttributeUsage() ;

constexpr bool const& __cordl_internal_get_ClientsRecordFrameAndPacketTimingTraces() const;

constexpr bool& __cordl_internal_get_ClientsRecordFrameAndPacketTimingTraces() ;

constexpr ::Fusion::EncryptionConfig* const& __cordl_internal_get_EncryptionConfig() const;

constexpr ::Fusion::EncryptionConfig*& __cordl_internal_get_EncryptionConfig() ;

constexpr bool const& __cordl_internal_get_EnqueueIncompleteSynchronousSpawns() const;

constexpr bool& __cordl_internal_get_EnqueueIncompleteSynchronousSpawns() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>* const& __cordl_internal_get_ExecutionOrderOverrides() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*& __cordl_internal_get_ExecutionOrderOverrides() ;

constexpr ::Fusion::HeapConfiguration* const& __cordl_internal_get_Heap() const;

constexpr ::Fusion::HeapConfiguration*& __cordl_internal_get_Heap() ;

constexpr bool const& __cordl_internal_get_HideNetworkObjectInactivityGuard() const;

constexpr bool& __cordl_internal_get_HideNetworkObjectInactivityGuard() ;

constexpr ::Fusion::HostMigrationConfig* const& __cordl_internal_get_HostMigration() const;

constexpr ::Fusion::HostMigrationConfig*& __cordl_internal_get_HostMigration() ;

constexpr bool const& __cordl_internal_get_InvokeRenderInBatchMode() const;

constexpr bool& __cordl_internal_get_InvokeRenderInBatchMode() ;

constexpr ::Fusion::LagCompensationSettings* const& __cordl_internal_get_LagCompensation() const;

constexpr ::Fusion::LagCompensationSettings*& __cordl_internal_get_LagCompensation() ;

constexpr ::Fusion::NetworkConfiguration* const& __cordl_internal_get_Network() const;

constexpr ::Fusion::NetworkConfiguration*& __cordl_internal_get_Network() ;

constexpr ::Fusion::NetworkSimulationConfiguration* const& __cordl_internal_get_NetworkConditions() const;

constexpr ::Fusion::NetworkSimulationConfiguration*& __cordl_internal_get_NetworkConditions() ;

constexpr bool const& __cordl_internal_get_NetworkIdIsObjectName() const;

constexpr bool& __cordl_internal_get_NetworkIdIsObjectName() ;

constexpr bool const& __cordl_internal_get_NullChecksForNetworkedProperties() const;

constexpr bool& __cordl_internal_get_NullChecksForNetworkedProperties() ;

constexpr ::GlobalNamespace::NetworkProjectConfig_PeerModes const& __cordl_internal_get_PeerMode() const;

constexpr ::GlobalNamespace::NetworkProjectConfig_PeerModes& __cordl_internal_get_PeerMode() ;

constexpr ::Fusion::NetworkPrefabTable* const& __cordl_internal_get_PrefabTable() const;

constexpr ::Fusion::NetworkPrefabTable*& __cordl_internal_get_PrefabTable() ;

constexpr ::Fusion::SimulationConfig* const& __cordl_internal_get_Simulation() const;

constexpr ::Fusion::SimulationConfig*& __cordl_internal_get_Simulation() ;

constexpr ::Fusion::TimeSyncConfiguration* const& __cordl_internal_get_TimeSynchronizationOverride() const;

constexpr ::Fusion::TimeSyncConfiguration*& __cordl_internal_get_TimeSynchronizationOverride() ;

constexpr ::StringW const& __cordl_internal_get_TypeId() const;

constexpr ::StringW& __cordl_internal_get_TypeId() ;

constexpr bool const& __cordl_internal_get_UseSerializableDictionary() const;

constexpr bool& __cordl_internal_get_UseSerializableDictionary() ;

constexpr int32_t const& __cordl_internal_get_Version() const;

constexpr int32_t& __cordl_internal_get_Version() ;

constexpr void __cordl_internal_set_AllowClientServerModesInWebGL(bool  value) ;

constexpr void __cordl_internal_set_AssembliesToWeave(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_CheckNetworkedPropertiesBeingEmpty(bool  value) ;

constexpr void __cordl_internal_set_CheckRpcAttributeUsage(bool  value) ;

constexpr void __cordl_internal_set_ClientsRecordFrameAndPacketTimingTraces(bool  value) ;

constexpr void __cordl_internal_set_EncryptionConfig(::Fusion::EncryptionConfig*  value) ;

constexpr void __cordl_internal_set_EnqueueIncompleteSynchronousSpawns(bool  value) ;

constexpr void __cordl_internal_set_ExecutionOrderOverrides(::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*  value) ;

constexpr void __cordl_internal_set_Heap(::Fusion::HeapConfiguration*  value) ;

constexpr void __cordl_internal_set_HideNetworkObjectInactivityGuard(bool  value) ;

constexpr void __cordl_internal_set_HostMigration(::Fusion::HostMigrationConfig*  value) ;

constexpr void __cordl_internal_set_InvokeRenderInBatchMode(bool  value) ;

constexpr void __cordl_internal_set_LagCompensation(::Fusion::LagCompensationSettings*  value) ;

constexpr void __cordl_internal_set_Network(::Fusion::NetworkConfiguration*  value) ;

constexpr void __cordl_internal_set_NetworkConditions(::Fusion::NetworkSimulationConfiguration*  value) ;

constexpr void __cordl_internal_set_NetworkIdIsObjectName(bool  value) ;

constexpr void __cordl_internal_set_NullChecksForNetworkedProperties(bool  value) ;

constexpr void __cordl_internal_set_PeerMode(::GlobalNamespace::NetworkProjectConfig_PeerModes  value) ;

constexpr void __cordl_internal_set_PrefabTable(::Fusion::NetworkPrefabTable*  value) ;

constexpr void __cordl_internal_set_Simulation(::Fusion::SimulationConfig*  value) ;

constexpr void __cordl_internal_set_TimeSynchronizationOverride(::Fusion::TimeSyncConfiguration*  value) ;

constexpr void __cordl_internal_set_TypeId(::StringW  value) ;

constexpr void __cordl_internal_set_UseSerializableDictionary(bool  value) ;

constexpr void __cordl_internal_set_Version(int32_t  value) ;

/// @brief Method .ctor, addr 0x5fd8c20, size 0x3e4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_FusionVersionInfo, addr 0x5fd8a0c, size 0x160, virtual false, abstract: false, final false
static inline ::System::ValueTuple_2<::GlobalNamespace::NetworkRunner_BuildTypes,::System::Diagnostics::FileVersionInfo*> get_FusionVersionInfo() ;

/// @brief Method get_Global, addr 0x5fd86a0, size 0x1c, virtual false, abstract: false, final false
static inline ::Fusion::NetworkProjectConfig* get_Global() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkProjectConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkProjectConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkProjectConfig(NetworkProjectConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkProjectConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkProjectConfig(NetworkProjectConfig const& ) = delete;

/// @brief Field CurrentTypeId offset 0xffffffff size 0x8
static constexpr ::ConstString  CurrentTypeId{u"NetworkProjectConfig"};

/// @brief Field CurrentVersion offset 0xffffffff size 0x4
static constexpr int32_t  CurrentVersion{static_cast<int32_t>(0x1)};

/// @brief Field DefaultResourceName offset 0xffffffff size 0x8
static constexpr ::ConstString  DefaultResourceName{u"NetworkProjectConfig"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19249};

/// [HideInInspector]
/// @brief Field Version, offset: 0x10, size: 0x4, def value: None
 int32_t  ___Version;

/// [HideInInspector]
/// @brief Field TypeId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___TypeId;

/// [Header("Scene Settings")]
/// [FormerlySerializedAs("InstanceMode")]
/// [InlineHelp]
/// @brief Field PeerMode, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::NetworkProjectConfig_PeerModes  ___PeerMode;

/// [InlineHelp]
/// [DrawInline]
/// [Header("Lag Compensation")]
/// @brief Field LagCompensation, offset: 0x28, size: 0x8, def value: None
 ::Fusion::LagCompensationSettings*  ___LagCompensation;

/// [Header("Miscellaneous")]
/// [InlineHelp]
/// [ToggleLeft]
/// @brief Field EnqueueIncompleteSynchronousSpawns, offset: 0x30, size: 0x1, def value: None
 bool  ___EnqueueIncompleteSynchronousSpawns;

/// [InlineHelp]
/// [ToggleLeft]
/// @brief Field InvokeRenderInBatchMode, offset: 0x31, size: 0x1, def value: None
 bool  ___InvokeRenderInBatchMode;

/// [InlineHelp]
/// [ToggleLeft]
/// @brief Field NetworkIdIsObjectName, offset: 0x32, size: 0x1, def value: None
 bool  ___NetworkIdIsObjectName;

/// [InlineHelp]
/// [ToggleLeft]
/// @brief Field HideNetworkObjectInactivityGuard, offset: 0x33, size: 0x1, def value: None
 bool  ___HideNetworkObjectInactivityGuard;

/// [InlineHelp]
/// [ToggleLeft]
/// @brief Field AllowClientServerModesInWebGL, offset: 0x34, size: 0x1, def value: None
 bool  ___AllowClientServerModesInWebGL;

/// [InlineHelp]
/// [ToggleLeft]
/// @brief Field ClientsRecordFrameAndPacketTimingTraces, offset: 0x35, size: 0x1, def value: None
 bool  ___ClientsRecordFrameAndPacketTimingTraces;

/// @brief Field PrefabTable, offset: 0x38, size: 0x8, def value: None
 ::Fusion::NetworkPrefabTable*  ___PrefabTable;

/// [InlineHelp]
/// [DrawInline]
/// [Header("Simulation")]
/// @brief Field Simulation, offset: 0x40, size: 0x8, def value: None
 ::Fusion::SimulationConfig*  ___Simulation;

/// @brief Field TimeSynchronizationOverride, offset: 0x48, size: 0x8, def value: None
 ::Fusion::TimeSyncConfiguration*  ___TimeSynchronizationOverride;

/// [InlineHelp]
/// [DrawInline]
/// [Header("Network")]
/// @brief Field Network, offset: 0x50, size: 0x8, def value: None
 ::Fusion::NetworkConfiguration*  ___Network;

/// [InlineHelp]
/// [DrawInline]
/// [Header("Host Migration")]
/// @brief Field HostMigration, offset: 0x58, size: 0x8, def value: None
 ::Fusion::HostMigrationConfig*  ___HostMigration;

/// [InlineHelp]
/// [DrawInline]
/// [Header("Encryption")]
/// @brief Field EncryptionConfig, offset: 0x60, size: 0x8, def value: None
 ::Fusion::EncryptionConfig*  ___EncryptionConfig;

/// [InlineHelp]
/// [DrawInline]
/// [Header("NetworkConditions")]
/// @brief Field NetworkConditions, offset: 0x68, size: 0x8, def value: None
 ::Fusion::NetworkSimulationConfiguration*  ___NetworkConditions;

/// [InlineHelp]
/// [DrawInline]
/// [Header("Heap")]
/// @brief Field Heap, offset: 0x70, size: 0x8, def value: None
 ::Fusion::HeapConfiguration*  ___Heap;

/// [Header("Weaver Settings")]
/// [AssemblyName(RequiresUnsafeCode = true)]
/// [InlineHelp]
/// @brief Field AssembliesToWeave, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___AssembliesToWeave;

/// [InlineHelp]
/// [ToggleLeft]
/// @brief Field UseSerializableDictionary, offset: 0x80, size: 0x1, def value: None
 bool  ___UseSerializableDictionary;

/// [InlineHelp]
/// [ToggleLeft]
/// @brief Field NullChecksForNetworkedProperties, offset: 0x81, size: 0x1, def value: None
 bool  ___NullChecksForNetworkedProperties;

/// [InlineHelp]
/// [ToggleLeft]
/// @brief Field CheckRpcAttributeUsage, offset: 0x82, size: 0x1, def value: None
 bool  ___CheckRpcAttributeUsage;

/// [InlineHelp]
/// [ToggleLeft]
/// @brief Field CheckNetworkedPropertiesBeingEmpty, offset: 0x83, size: 0x1, def value: None
 bool  ___CheckNetworkedPropertiesBeingEmpty;

/// @brief Field ExecutionOrderOverrides, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*  ___ExecutionOrderOverrides;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkProjectConfig, ___Version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkProjectConfig, ___TypeId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkProjectConfig, ___PeerMode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkProjectConfig, ___LagCompensation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkProjectConfig, ___EnqueueIncompleteSynchronousSpawns) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkProjectConfig, ___InvokeRenderInBatchMode) == 0x31, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkProjectConfig, ___NetworkIdIsObjectName) == 0x32, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkProjectConfig, ___HideNetworkObjectInactivityGuard) == 0x33, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkProjectConfig, ___AllowClientServerModesInWebGL) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkProjectConfig, ___ClientsRecordFrameAndPacketTimingTraces) == 0x35, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkProjectConfig, ___PrefabTable) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkProjectConfig, ___Simulation) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkProjectConfig, ___TimeSynchronizationOverride) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkProjectConfig, ___Network) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkProjectConfig, ___HostMigration) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkProjectConfig, ___EncryptionConfig) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkProjectConfig, ___NetworkConditions) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkProjectConfig, ___Heap) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkProjectConfig, ___AssembliesToWeave) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkProjectConfig, ___UseSerializableDictionary) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkProjectConfig, ___NullChecksForNetworkedProperties) == 0x81, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkProjectConfig, ___CheckRpcAttributeUsage) == 0x82, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkProjectConfig, ___CheckNetworkedPropertiesBeingEmpty) == 0x83, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkProjectConfig, ___ExecutionOrderOverrides) == 0x88, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkProjectConfig) == 0x90, "Size mismatch!");

} // namespace end def Fusion
