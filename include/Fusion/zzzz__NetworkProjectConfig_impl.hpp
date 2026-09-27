#pragma once
// IWYU pragma private; include "Fusion/NetworkProjectConfig.hpp"
#include "Fusion/zzzz__NetworkProjectConfig_PeerModes_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkProjectConfig_def.hpp"
#include "Fusion/zzzz__EncryptionConfig_def.hpp"
#include "Fusion/zzzz__HeapConfiguration_def.hpp"
#include "Fusion/zzzz__HostMigrationConfig_def.hpp"
#include "Fusion/zzzz__LagCompensationSettings_def.hpp"
#include "Fusion/zzzz__NetworkConfiguration_def.hpp"
#include "Fusion/zzzz__NetworkPrefabTable_def.hpp"
#include "Fusion/zzzz__NetworkProjectConfig_PeerModes_def.hpp"
#include "Fusion/zzzz__NetworkProjectConfig_ReplicationFeatures_def.hpp"
#include "Fusion/zzzz__NetworkRunner_BuildTypes_def.hpp"
#include "Fusion/zzzz__NetworkSimulationConfiguration_def.hpp"
#include "Fusion/zzzz__SimulationConfig_def.hpp"
#include "Fusion/zzzz__TimeSyncConfiguration_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Diagnostics/zzzz__FileVersionInfo_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkProjectConfig.get_Global
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkProjectConfig* (*)()>(&::Fusion::NetworkProjectConfig::get_Global)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fd86a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkProjectConfig*>(),
                        {"get_Global", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkProjectConfig.UnloadGlobal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Fusion::NetworkProjectConfig::UnloadGlobal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fd86fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkProjectConfig*>(),
                        {"UnloadGlobal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkProjectConfig.GetExecutionOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int32_t> (::Fusion::NetworkProjectConfig::*)(::System::Type*)>(&::Fusion::NetworkProjectConfig::GetExecutionOrder)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5fd8740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkProjectConfig*>(),
                        {"GetExecutionOrder", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkProjectConfig.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkProjectConfig* (::Fusion::NetworkProjectConfig::*)(int32_t, ::System::Nullable_1<int32_t>, ::System::Nullable_1<int32_t>)>(&::Fusion::NetworkProjectConfig::Init)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5fd8884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkProjectConfig*>(),
                        {"Init", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkProjectConfig.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkProjectConfig* (::Fusion::NetworkProjectConfig::*)()>(&::Fusion::NetworkProjectConfig::Copy)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5fd8938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkProjectConfig*>(),
                        {"Copy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkProjectConfig.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::NetworkProjectConfig::*)()>(&::Fusion::NetworkProjectConfig::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd89fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkProjectConfig*>(),
                    {::i2c::class_of<::Fusion::NetworkProjectConfig*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkProjectConfig.get_FusionVersionInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::GlobalNamespace::NetworkRunner_BuildTypes,::System::Diagnostics::FileVersionInfo*> (*)()>(&::Fusion::NetworkProjectConfig::get_FusionVersionInfo)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5fd8a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkProjectConfig*>(),
                        {"get_FusionVersionInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkProjectConfig.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Fusion::NetworkProjectConfig*)>(&::Fusion::NetworkProjectConfig::Serialize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd8a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkProjectConfig*>(),
                        {"Serialize", {}, {::i2c::type_of<::Fusion::NetworkProjectConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkProjectConfig.Deserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkProjectConfig* (*)(::StringW)>(&::Fusion::NetworkProjectConfig::Deserialize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5fd8b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkProjectConfig*>(),
                        {"Deserialize", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkProjectConfig.SerializeMinimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Fusion::NetworkProjectConfig*)>(&::Fusion::NetworkProjectConfig::SerializeMinimal)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5fd8bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkProjectConfig*>(),
                        {"SerializeMinimal", {}, {::i2c::type_of<::Fusion::NetworkProjectConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkProjectConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkProjectConfig::*)()>(&::Fusion::NetworkProjectConfig::_ctor)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x5fd8c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkProjectConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::NetworkProjectConfig::__cordl_internal_get_Version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Version;
}
constexpr int32_t const& Fusion::NetworkProjectConfig::__cordl_internal_get_Version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Version;
}
constexpr void Fusion::NetworkProjectConfig::__cordl_internal_set_Version(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Version = value;
}
constexpr ::StringW& Fusion::NetworkProjectConfig::__cordl_internal_get_TypeId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TypeId;
}
constexpr ::StringW const& Fusion::NetworkProjectConfig::__cordl_internal_get_TypeId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TypeId;
}
constexpr void Fusion::NetworkProjectConfig::__cordl_internal_set_TypeId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TypeId = value;
}
constexpr ::GlobalNamespace::NetworkProjectConfig_PeerModes& Fusion::NetworkProjectConfig::__cordl_internal_get_PeerMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PeerMode;
}
constexpr ::GlobalNamespace::NetworkProjectConfig_PeerModes const& Fusion::NetworkProjectConfig::__cordl_internal_get_PeerMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PeerMode;
}
constexpr void Fusion::NetworkProjectConfig::__cordl_internal_set_PeerMode(::GlobalNamespace::NetworkProjectConfig_PeerModes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PeerMode = value;
}
constexpr ::Fusion::LagCompensationSettings*& Fusion::NetworkProjectConfig::__cordl_internal_get_LagCompensation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LagCompensation;
}
constexpr ::Fusion::LagCompensationSettings* const& Fusion::NetworkProjectConfig::__cordl_internal_get_LagCompensation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LagCompensation;
}
constexpr void Fusion::NetworkProjectConfig::__cordl_internal_set_LagCompensation(::Fusion::LagCompensationSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LagCompensation = value;
}
constexpr bool& Fusion::NetworkProjectConfig::__cordl_internal_get_EnqueueIncompleteSynchronousSpawns()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnqueueIncompleteSynchronousSpawns;
}
constexpr bool const& Fusion::NetworkProjectConfig::__cordl_internal_get_EnqueueIncompleteSynchronousSpawns() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnqueueIncompleteSynchronousSpawns;
}
constexpr void Fusion::NetworkProjectConfig::__cordl_internal_set_EnqueueIncompleteSynchronousSpawns(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnqueueIncompleteSynchronousSpawns = value;
}
constexpr bool& Fusion::NetworkProjectConfig::__cordl_internal_get_InvokeRenderInBatchMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InvokeRenderInBatchMode;
}
constexpr bool const& Fusion::NetworkProjectConfig::__cordl_internal_get_InvokeRenderInBatchMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InvokeRenderInBatchMode;
}
constexpr void Fusion::NetworkProjectConfig::__cordl_internal_set_InvokeRenderInBatchMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InvokeRenderInBatchMode = value;
}
constexpr bool& Fusion::NetworkProjectConfig::__cordl_internal_get_NetworkIdIsObjectName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetworkIdIsObjectName;
}
constexpr bool const& Fusion::NetworkProjectConfig::__cordl_internal_get_NetworkIdIsObjectName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetworkIdIsObjectName;
}
constexpr void Fusion::NetworkProjectConfig::__cordl_internal_set_NetworkIdIsObjectName(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NetworkIdIsObjectName = value;
}
constexpr bool& Fusion::NetworkProjectConfig::__cordl_internal_get_HideNetworkObjectInactivityGuard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HideNetworkObjectInactivityGuard;
}
constexpr bool const& Fusion::NetworkProjectConfig::__cordl_internal_get_HideNetworkObjectInactivityGuard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HideNetworkObjectInactivityGuard;
}
constexpr void Fusion::NetworkProjectConfig::__cordl_internal_set_HideNetworkObjectInactivityGuard(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HideNetworkObjectInactivityGuard = value;
}
constexpr bool& Fusion::NetworkProjectConfig::__cordl_internal_get_AllowClientServerModesInWebGL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowClientServerModesInWebGL;
}
constexpr bool const& Fusion::NetworkProjectConfig::__cordl_internal_get_AllowClientServerModesInWebGL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowClientServerModesInWebGL;
}
constexpr void Fusion::NetworkProjectConfig::__cordl_internal_set_AllowClientServerModesInWebGL(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AllowClientServerModesInWebGL = value;
}
constexpr bool& Fusion::NetworkProjectConfig::__cordl_internal_get_ClientsRecordFrameAndPacketTimingTraces()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClientsRecordFrameAndPacketTimingTraces;
}
constexpr bool const& Fusion::NetworkProjectConfig::__cordl_internal_get_ClientsRecordFrameAndPacketTimingTraces() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClientsRecordFrameAndPacketTimingTraces;
}
constexpr void Fusion::NetworkProjectConfig::__cordl_internal_set_ClientsRecordFrameAndPacketTimingTraces(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ClientsRecordFrameAndPacketTimingTraces = value;
}
constexpr ::Fusion::NetworkPrefabTable*& Fusion::NetworkProjectConfig::__cordl_internal_get_PrefabTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrefabTable;
}
constexpr ::Fusion::NetworkPrefabTable* const& Fusion::NetworkProjectConfig::__cordl_internal_get_PrefabTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrefabTable;
}
constexpr void Fusion::NetworkProjectConfig::__cordl_internal_set_PrefabTable(::Fusion::NetworkPrefabTable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrefabTable = value;
}
constexpr ::Fusion::SimulationConfig*& Fusion::NetworkProjectConfig::__cordl_internal_get_Simulation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Simulation;
}
constexpr ::Fusion::SimulationConfig* const& Fusion::NetworkProjectConfig::__cordl_internal_get_Simulation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Simulation;
}
constexpr void Fusion::NetworkProjectConfig::__cordl_internal_set_Simulation(::Fusion::SimulationConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Simulation = value;
}
constexpr ::Fusion::TimeSyncConfiguration*& Fusion::NetworkProjectConfig::__cordl_internal_get_TimeSynchronizationOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TimeSynchronizationOverride;
}
constexpr ::Fusion::TimeSyncConfiguration* const& Fusion::NetworkProjectConfig::__cordl_internal_get_TimeSynchronizationOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TimeSynchronizationOverride;
}
constexpr void Fusion::NetworkProjectConfig::__cordl_internal_set_TimeSynchronizationOverride(::Fusion::TimeSyncConfiguration*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TimeSynchronizationOverride = value;
}
constexpr ::Fusion::NetworkConfiguration*& Fusion::NetworkProjectConfig::__cordl_internal_get_Network()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Network;
}
constexpr ::Fusion::NetworkConfiguration* const& Fusion::NetworkProjectConfig::__cordl_internal_get_Network() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Network;
}
constexpr void Fusion::NetworkProjectConfig::__cordl_internal_set_Network(::Fusion::NetworkConfiguration*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Network = value;
}
constexpr ::Fusion::HostMigrationConfig*& Fusion::NetworkProjectConfig::__cordl_internal_get_HostMigration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HostMigration;
}
constexpr ::Fusion::HostMigrationConfig* const& Fusion::NetworkProjectConfig::__cordl_internal_get_HostMigration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HostMigration;
}
constexpr void Fusion::NetworkProjectConfig::__cordl_internal_set_HostMigration(::Fusion::HostMigrationConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HostMigration = value;
}
constexpr ::Fusion::EncryptionConfig*& Fusion::NetworkProjectConfig::__cordl_internal_get_EncryptionConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EncryptionConfig;
}
constexpr ::Fusion::EncryptionConfig* const& Fusion::NetworkProjectConfig::__cordl_internal_get_EncryptionConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EncryptionConfig;
}
constexpr void Fusion::NetworkProjectConfig::__cordl_internal_set_EncryptionConfig(::Fusion::EncryptionConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EncryptionConfig = value;
}
constexpr ::Fusion::NetworkSimulationConfiguration*& Fusion::NetworkProjectConfig::__cordl_internal_get_NetworkConditions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetworkConditions;
}
constexpr ::Fusion::NetworkSimulationConfiguration* const& Fusion::NetworkProjectConfig::__cordl_internal_get_NetworkConditions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetworkConditions;
}
constexpr void Fusion::NetworkProjectConfig::__cordl_internal_set_NetworkConditions(::Fusion::NetworkSimulationConfiguration*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NetworkConditions = value;
}
constexpr ::Fusion::HeapConfiguration*& Fusion::NetworkProjectConfig::__cordl_internal_get_Heap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Heap;
}
constexpr ::Fusion::HeapConfiguration* const& Fusion::NetworkProjectConfig::__cordl_internal_get_Heap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Heap;
}
constexpr void Fusion::NetworkProjectConfig::__cordl_internal_set_Heap(::Fusion::HeapConfiguration*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Heap = value;
}
constexpr ::ArrayW<::StringW>& Fusion::NetworkProjectConfig::__cordl_internal_get_AssembliesToWeave()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AssembliesToWeave;
}
constexpr ::ArrayW<::StringW> const& Fusion::NetworkProjectConfig::__cordl_internal_get_AssembliesToWeave() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AssembliesToWeave;
}
constexpr void Fusion::NetworkProjectConfig::__cordl_internal_set_AssembliesToWeave(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AssembliesToWeave = value;
}
constexpr bool& Fusion::NetworkProjectConfig::__cordl_internal_get_UseSerializableDictionary()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseSerializableDictionary;
}
constexpr bool const& Fusion::NetworkProjectConfig::__cordl_internal_get_UseSerializableDictionary() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseSerializableDictionary;
}
constexpr void Fusion::NetworkProjectConfig::__cordl_internal_set_UseSerializableDictionary(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseSerializableDictionary = value;
}
constexpr bool& Fusion::NetworkProjectConfig::__cordl_internal_get_NullChecksForNetworkedProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NullChecksForNetworkedProperties;
}
constexpr bool const& Fusion::NetworkProjectConfig::__cordl_internal_get_NullChecksForNetworkedProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NullChecksForNetworkedProperties;
}
constexpr void Fusion::NetworkProjectConfig::__cordl_internal_set_NullChecksForNetworkedProperties(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NullChecksForNetworkedProperties = value;
}
constexpr bool& Fusion::NetworkProjectConfig::__cordl_internal_get_CheckRpcAttributeUsage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CheckRpcAttributeUsage;
}
constexpr bool const& Fusion::NetworkProjectConfig::__cordl_internal_get_CheckRpcAttributeUsage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CheckRpcAttributeUsage;
}
constexpr void Fusion::NetworkProjectConfig::__cordl_internal_set_CheckRpcAttributeUsage(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CheckRpcAttributeUsage = value;
}
constexpr bool& Fusion::NetworkProjectConfig::__cordl_internal_get_CheckNetworkedPropertiesBeingEmpty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CheckNetworkedPropertiesBeingEmpty;
}
constexpr bool const& Fusion::NetworkProjectConfig::__cordl_internal_get_CheckNetworkedPropertiesBeingEmpty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CheckNetworkedPropertiesBeingEmpty;
}
constexpr void Fusion::NetworkProjectConfig::__cordl_internal_set_CheckNetworkedPropertiesBeingEmpty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CheckNetworkedPropertiesBeingEmpty = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*& Fusion::NetworkProjectConfig::__cordl_internal_get_ExecutionOrderOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExecutionOrderOverrides;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>* const& Fusion::NetworkProjectConfig::__cordl_internal_get_ExecutionOrderOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExecutionOrderOverrides;
}
constexpr void Fusion::NetworkProjectConfig::__cordl_internal_set_ExecutionOrderOverrides(::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExecutionOrderOverrides = value;
}
inline ::Fusion::NetworkProjectConfig* Fusion::NetworkProjectConfig::get_Global()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkProjectConfig*>(),
                        {"get_Global", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkProjectConfig*>(nullptr, ___internal_method);
}
inline void Fusion::NetworkProjectConfig::UnloadGlobal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkProjectConfig*>(),
                        {"UnloadGlobal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Nullable_1<int32_t> Fusion::NetworkProjectConfig::GetExecutionOrder(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkProjectConfig*>(),
                        {"GetExecutionOrder", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(this, ___internal_method, type);
}
inline ::Fusion::NetworkProjectConfig* Fusion::NetworkProjectConfig::Init(int32_t  globalSize, ::System::Nullable_1<int32_t>  playerCountOverride, ::System::Nullable_1<int32_t>  inputWordCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkProjectConfig*>(),
                        {"Init", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkProjectConfig*>(this, ___internal_method, globalSize, playerCountOverride, inputWordCount);
}
inline ::Fusion::NetworkProjectConfig* Fusion::NetworkProjectConfig::Copy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkProjectConfig*>(),
                        {"Copy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkProjectConfig*>(this, ___internal_method);
}
inline ::StringW Fusion::NetworkProjectConfig::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkProjectConfig*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::ValueTuple_2<::GlobalNamespace::NetworkRunner_BuildTypes,::System::Diagnostics::FileVersionInfo*> Fusion::NetworkProjectConfig::get_FusionVersionInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkProjectConfig*>(),
                        {"get_FusionVersionInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::GlobalNamespace::NetworkRunner_BuildTypes,::System::Diagnostics::FileVersionInfo*>>(nullptr, ___internal_method);
}
inline ::StringW Fusion::NetworkProjectConfig::Serialize(::Fusion::NetworkProjectConfig*  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkProjectConfig*>(),
                        {"Serialize", {}, {::i2c::type_of<::Fusion::NetworkProjectConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, config);
}
inline ::Fusion::NetworkProjectConfig* Fusion::NetworkProjectConfig::Deserialize(::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkProjectConfig*>(),
                        {"Deserialize", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkProjectConfig*>(nullptr, ___internal_method, data);
}
inline ::StringW Fusion::NetworkProjectConfig::SerializeMinimal(::Fusion::NetworkProjectConfig*  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkProjectConfig*>(),
                        {"SerializeMinimal", {}, {::i2c::type_of<::Fusion::NetworkProjectConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, config);
}
inline void Fusion::NetworkProjectConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkProjectConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkProjectConfig* Fusion::NetworkProjectConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkProjectConfig*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkProjectConfig::NetworkProjectConfig()   {
}
