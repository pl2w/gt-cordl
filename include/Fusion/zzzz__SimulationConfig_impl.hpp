#pragma once
// IWYU pragma private; include "Fusion/SimulationConfig.hpp"
#include "Fusion/zzzz__NetworkProjectConfig_ReplicationFeatures_impl.hpp"
#include "Fusion/zzzz__SimulationConfig_DataConsistency_impl.hpp"
#include "Fusion/zzzz__SimulationConfig_InputTransferModes_impl.hpp"
#include "Fusion/zzzz__SimulationConfig_SimulationTimeMode_impl.hpp"
#include "Fusion/zzzz__TickRate_Selection_impl.hpp"
#include "Fusion/zzzz__Topologies_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__SimulationConfig_def.hpp"
#include "Fusion/zzzz__SimulationConfig_DataConsistency_def.hpp"
#include "Fusion/zzzz__SimulationConfig_InputTransferModes_def.hpp"
#include "Fusion/zzzz__SimulationConfig_SimulationTimeMode_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Fusion::SimulationConfig.get_SchedulingEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SimulationConfig::*)()>(&::Fusion::SimulationConfig::get_SchedulingEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ffbf4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConfig*>(),
                        {"get_SchedulingEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationConfig.get_AreaOfInterestEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SimulationConfig::*)()>(&::Fusion::SimulationConfig::get_AreaOfInterestEnabled)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ffeee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConfig*>(),
                        {"get_AreaOfInterestEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationConfig.get_SchedulingWithoutAOI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SimulationConfig::*)()>(&::Fusion::SimulationConfig::get_SchedulingWithoutAOI)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6001a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConfig*>(),
                        {"get_SchedulingWithoutAOI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationConfig.get_InputTotalWordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::SimulationConfig::*)()>(&::Fusion::SimulationConfig::get_InputTotalWordCount)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ff5090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConfig*>(),
                        {"get_InputTotalWordCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationConfig.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationConfig* (::Fusion::SimulationConfig::*)(::System::Nullable_1<int32_t>, ::System::Nullable_1<int32_t>)>(&::Fusion::SimulationConfig::Init)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6001a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConfig*>(),
                        {"Init", {}, {::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationConfig.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationConfig* (::Fusion::SimulationConfig::*)()>(&::Fusion::SimulationConfig::Copy)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6001b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConfig*>(),
                        {"Copy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationConfig::*)()>(&::Fusion::SimulationConfig::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6001bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::SimulationConfig::__cordl_internal_get_InputDataWordCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InputDataWordCount;
}
constexpr int32_t const& Fusion::SimulationConfig::__cordl_internal_get_InputDataWordCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InputDataWordCount;
}
constexpr void Fusion::SimulationConfig::__cordl_internal_set_InputDataWordCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InputDataWordCount = value;
}
constexpr ::GlobalNamespace::NetworkProjectConfig_ReplicationFeatures& Fusion::SimulationConfig::__cordl_internal_get_ReplicationFeatures()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReplicationFeatures;
}
constexpr ::GlobalNamespace::NetworkProjectConfig_ReplicationFeatures const& Fusion::SimulationConfig::__cordl_internal_get_ReplicationFeatures() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReplicationFeatures;
}
constexpr void Fusion::SimulationConfig::__cordl_internal_set_ReplicationFeatures(::GlobalNamespace::NetworkProjectConfig_ReplicationFeatures  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReplicationFeatures = value;
}
constexpr ::GlobalNamespace::SimulationConfig_InputTransferModes& Fusion::SimulationConfig::__cordl_internal_get_InputTransferMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InputTransferMode;
}
constexpr ::GlobalNamespace::SimulationConfig_InputTransferModes const& Fusion::SimulationConfig::__cordl_internal_get_InputTransferMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InputTransferMode;
}
constexpr void Fusion::SimulationConfig::__cordl_internal_set_InputTransferMode(::GlobalNamespace::SimulationConfig_InputTransferModes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InputTransferMode = value;
}
constexpr ::GlobalNamespace::SimulationConfig_DataConsistency& Fusion::SimulationConfig::__cordl_internal_get_ObjectDataConsistency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ObjectDataConsistency;
}
constexpr ::GlobalNamespace::SimulationConfig_DataConsistency const& Fusion::SimulationConfig::__cordl_internal_get_ObjectDataConsistency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ObjectDataConsistency;
}
constexpr void Fusion::SimulationConfig::__cordl_internal_set_ObjectDataConsistency(::GlobalNamespace::SimulationConfig_DataConsistency  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ObjectDataConsistency = value;
}
constexpr ::GlobalNamespace::SimulationConfig_SimulationTimeMode& Fusion::SimulationConfig::__cordl_internal_get_SimulationUpdateTimeMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SimulationUpdateTimeMode;
}
constexpr ::GlobalNamespace::SimulationConfig_SimulationTimeMode const& Fusion::SimulationConfig::__cordl_internal_get_SimulationUpdateTimeMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SimulationUpdateTimeMode;
}
constexpr void Fusion::SimulationConfig::__cordl_internal_set_SimulationUpdateTimeMode(::GlobalNamespace::SimulationConfig_SimulationTimeMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SimulationUpdateTimeMode = value;
}
constexpr int32_t& Fusion::SimulationConfig::__cordl_internal_get_PlayerCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerCount;
}
constexpr int32_t const& Fusion::SimulationConfig::__cordl_internal_get_PlayerCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerCount;
}
constexpr void Fusion::SimulationConfig::__cordl_internal_set_PlayerCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerCount = value;
}
constexpr ::GlobalNamespace::TickRate_Selection& Fusion::SimulationConfig::__cordl_internal_get_TickRateSelection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TickRateSelection;
}
constexpr ::GlobalNamespace::TickRate_Selection const& Fusion::SimulationConfig::__cordl_internal_get_TickRateSelection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TickRateSelection;
}
constexpr void Fusion::SimulationConfig::__cordl_internal_set_TickRateSelection(::GlobalNamespace::TickRate_Selection  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TickRateSelection = value;
}
constexpr ::Fusion::Topologies& Fusion::SimulationConfig::__cordl_internal_get_Topology()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Topology;
}
constexpr ::Fusion::Topologies const& Fusion::SimulationConfig::__cordl_internal_get_Topology() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Topology;
}
constexpr void Fusion::SimulationConfig::__cordl_internal_set_Topology(::Fusion::Topologies  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Topology = value;
}
constexpr bool& Fusion::SimulationConfig::__cordl_internal_get_HostMigration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HostMigration;
}
constexpr bool const& Fusion::SimulationConfig::__cordl_internal_get_HostMigration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HostMigration;
}
constexpr void Fusion::SimulationConfig::__cordl_internal_set_HostMigration(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HostMigration = value;
}
constexpr uint8_t& Fusion::SimulationConfig::__cordl_internal_get_MaxObjectDestroysSentPerPacket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxObjectDestroysSentPerPacket;
}
constexpr uint8_t const& Fusion::SimulationConfig::__cordl_internal_get_MaxObjectDestroysSentPerPacket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxObjectDestroysSentPerPacket;
}
constexpr void Fusion::SimulationConfig::__cordl_internal_set_MaxObjectDestroysSentPerPacket(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxObjectDestroysSentPerPacket = value;
}
constexpr bool& Fusion::SimulationConfig::__cordl_internal_get_EnableSerializers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableSerializers;
}
constexpr bool const& Fusion::SimulationConfig::__cordl_internal_get_EnableSerializers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableSerializers;
}
constexpr void Fusion::SimulationConfig::__cordl_internal_set_EnableSerializers(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnableSerializers = value;
}
inline bool Fusion::SimulationConfig::get_SchedulingEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConfig*>(),
                        {"get_SchedulingEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::SimulationConfig::get_AreaOfInterestEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConfig*>(),
                        {"get_AreaOfInterestEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::SimulationConfig::get_SchedulingWithoutAOI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConfig*>(),
                        {"get_SchedulingWithoutAOI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Fusion::SimulationConfig::get_InputTotalWordCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConfig*>(),
                        {"get_InputTotalWordCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Fusion::SimulationConfig* Fusion::SimulationConfig::Init(::System::Nullable_1<int32_t>  playerCountOverride, ::System::Nullable_1<int32_t>  inputWordCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConfig*>(),
                        {"Init", {}, {::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationConfig*>(this, ___internal_method, playerCountOverride, inputWordCount);
}
inline ::Fusion::SimulationConfig* Fusion::SimulationConfig::Copy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConfig*>(),
                        {"Copy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationConfig*>(this, ___internal_method);
}
inline void Fusion::SimulationConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::SimulationConfig* Fusion::SimulationConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::SimulationConfig*>());
}
// Ctor Parameters []
constexpr ::Fusion::SimulationConfig::SimulationConfig()   {
}
