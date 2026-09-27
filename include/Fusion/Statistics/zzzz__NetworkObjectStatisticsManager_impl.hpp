#pragma once
// IWYU pragma private; include "Fusion/Statistics/NetworkObjectStatisticsManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Statistics/zzzz__NetworkObjectStatisticsManager_def.hpp"
#include "Fusion/Statistics/zzzz__NetworkObjectStatisticsSnapshot_def.hpp"
#include "Fusion/zzzz__NetworkId_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
//  Writing Method size for method: ::Fusion::Statistics::NetworkObjectStatisticsManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::NetworkObjectStatisticsManager::*)()>(&::Fusion::Statistics::NetworkObjectStatisticsManager::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x601f28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::NetworkObjectStatisticsManager.GetNewStatisticsObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Statistics::NetworkObjectStatisticsSnapshot* (::Fusion::Statistics::NetworkObjectStatisticsManager::*)()>(&::Fusion::Statistics::NetworkObjectStatisticsManager::GetNewStatisticsObject)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x601fd84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsManager*>(),
                        {"GetNewStatisticsObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::NetworkObjectStatisticsManager.MonitorNetworkObjectStatistics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::NetworkObjectStatisticsManager::*)(::Fusion::NetworkId, bool)>(&::Fusion::Statistics::NetworkObjectStatisticsManager::MonitorNetworkObjectStatistics)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x601fe2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsManager*>(),
                        {"MonitorNetworkObjectStatistics", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::NetworkObjectStatisticsManager.ClearMonitoredNetworkObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::NetworkObjectStatisticsManager::*)()>(&::Fusion::Statistics::NetworkObjectStatisticsManager::ClearMonitoredNetworkObjects)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x601fec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsManager*>(),
                        {"ClearMonitoredNetworkObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::NetworkObjectStatisticsManager.IsObjectMonitored
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Statistics::NetworkObjectStatisticsManager::*)(::Fusion::NetworkId, ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>*, ::by_ref<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>)>(&::Fusion::Statistics::NetworkObjectStatisticsManager::IsObjectMonitored)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x601ff14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsManager*>(),
                        {"IsObjectMonitored", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>*>(), ::i2c::type_of<::by_ref<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::NetworkObjectStatisticsManager.GetNetworkObjectStatistics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Statistics::NetworkObjectStatisticsManager::*)(::Fusion::NetworkId, ::by_ref<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>)>(&::Fusion::Statistics::NetworkObjectStatisticsManager::GetNetworkObjectStatistics)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6020020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsManager*>(),
                        {"GetNetworkObjectStatistics", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::by_ref<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::NetworkObjectStatisticsManager.AddToNetworkObjectInBandwidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::NetworkObjectStatisticsManager::*)(::Fusion::NetworkId, float_t, bool)>(&::Fusion::Statistics::NetworkObjectStatisticsManager::AddToNetworkObjectInBandwidth)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6020064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsManager*>(),
                        {"AddToNetworkObjectInBandwidth", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::NetworkObjectStatisticsManager.AddToNetworkObjectOutBandwidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::NetworkObjectStatisticsManager::*)(::Fusion::NetworkId, float_t, bool)>(&::Fusion::Statistics::NetworkObjectStatisticsManager::AddToNetworkObjectOutBandwidth)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x60200c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsManager*>(),
                        {"AddToNetworkObjectOutBandwidth", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::NetworkObjectStatisticsManager.AddToNetworkObjectInPackets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::NetworkObjectStatisticsManager::*)(::Fusion::NetworkId, int32_t, bool)>(&::Fusion::Statistics::NetworkObjectStatisticsManager::AddToNetworkObjectInPackets)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x602012c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsManager*>(),
                        {"AddToNetworkObjectInPackets", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::NetworkObjectStatisticsManager.AddToNetworkObjectOutPackets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::NetworkObjectStatisticsManager::*)(::Fusion::NetworkId, int32_t, bool)>(&::Fusion::Statistics::NetworkObjectStatisticsManager::AddToNetworkObjectOutPackets)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6020190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsManager*>(),
                        {"AddToNetworkObjectOutPackets", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::NetworkObjectStatisticsManager.CollectStatistics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::NetworkObjectStatisticsManager::*)()>(&::Fusion::Statistics::NetworkObjectStatisticsManager::CollectStatistics)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x601f488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsManager*>(),
                        {"CollectStatistics", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::Fusion::NetworkId>*& Fusion::Statistics::NetworkObjectStatisticsManager::__cordl_internal_get__monitoredNetworkObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____monitoredNetworkObjects;
}
constexpr ::System::Collections::Generic::HashSet_1<::Fusion::NetworkId>* const& Fusion::Statistics::NetworkObjectStatisticsManager::__cordl_internal_get__monitoredNetworkObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____monitoredNetworkObjects;
}
constexpr void Fusion::Statistics::NetworkObjectStatisticsManager::__cordl_internal_set__monitoredNetworkObjects(::System::Collections::Generic::HashSet_1<::Fusion::NetworkId>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____monitoredNetworkObjects = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>*& Fusion::Statistics::NetworkObjectStatisticsManager::__cordl_internal_get__pendingSnapshots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingSnapshots;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>* const& Fusion::Statistics::NetworkObjectStatisticsManager::__cordl_internal_get__pendingSnapshots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingSnapshots;
}
constexpr void Fusion::Statistics::NetworkObjectStatisticsManager::__cordl_internal_set__pendingSnapshots(::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pendingSnapshots = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>*& Fusion::Statistics::NetworkObjectStatisticsManager::__cordl_internal_get__completedSnapshots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____completedSnapshots;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>* const& Fusion::Statistics::NetworkObjectStatisticsManager::__cordl_internal_get__completedSnapshots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____completedSnapshots;
}
constexpr void Fusion::Statistics::NetworkObjectStatisticsManager::__cordl_internal_set__completedSnapshots(::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____completedSnapshots = value;
}
constexpr ::System::Collections::Generic::Stack_1<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>*& Fusion::Statistics::NetworkObjectStatisticsManager::__cordl_internal_get__free()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____free;
}
constexpr ::System::Collections::Generic::Stack_1<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>* const& Fusion::Statistics::NetworkObjectStatisticsManager::__cordl_internal_get__free() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____free;
}
constexpr void Fusion::Statistics::NetworkObjectStatisticsManager::__cordl_internal_set__free(::System::Collections::Generic::Stack_1<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____free = value;
}
inline void Fusion::Statistics::NetworkObjectStatisticsManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Statistics::NetworkObjectStatisticsSnapshot* Fusion::Statistics::NetworkObjectStatisticsManager::GetNewStatisticsObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsManager*>(),
                        {"GetNewStatisticsObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>(this, ___internal_method);
}
inline void Fusion::Statistics::NetworkObjectStatisticsManager::MonitorNetworkObjectStatistics(::Fusion::NetworkId  id, bool  monitor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsManager*>(),
                        {"MonitorNetworkObjectStatistics", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, monitor);
}
inline void Fusion::Statistics::NetworkObjectStatisticsManager::ClearMonitoredNetworkObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsManager*>(),
                        {"ClearMonitoredNetworkObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::Statistics::NetworkObjectStatisticsManager::IsObjectMonitored(::Fusion::NetworkId  id, ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>*  source, ::by_ref<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>  snapshot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsManager*>(),
                        {"IsObjectMonitored", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>*>(), ::i2c::type_of<::by_ref<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, source, snapshot);
}
inline bool Fusion::Statistics::NetworkObjectStatisticsManager::GetNetworkObjectStatistics(::Fusion::NetworkId  id, ::by_ref<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>  objectStatisticsSnapshot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsManager*>(),
                        {"GetNetworkObjectStatistics", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::by_ref<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, objectStatisticsSnapshot);
}
inline void Fusion::Statistics::NetworkObjectStatisticsManager::AddToNetworkObjectInBandwidth(::Fusion::NetworkId  id, float_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsManager*>(),
                        {"AddToNetworkObjectInBandwidth", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, value, overrideValue);
}
inline void Fusion::Statistics::NetworkObjectStatisticsManager::AddToNetworkObjectOutBandwidth(::Fusion::NetworkId  id, float_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsManager*>(),
                        {"AddToNetworkObjectOutBandwidth", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, value, overrideValue);
}
inline void Fusion::Statistics::NetworkObjectStatisticsManager::AddToNetworkObjectInPackets(::Fusion::NetworkId  id, int32_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsManager*>(),
                        {"AddToNetworkObjectInPackets", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, value, overrideValue);
}
inline void Fusion::Statistics::NetworkObjectStatisticsManager::AddToNetworkObjectOutPackets(::Fusion::NetworkId  id, int32_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsManager*>(),
                        {"AddToNetworkObjectOutPackets", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, value, overrideValue);
}
inline void Fusion::Statistics::NetworkObjectStatisticsManager::CollectStatistics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsManager*>(),
                        {"CollectStatistics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Statistics::NetworkObjectStatisticsManager* Fusion::Statistics::NetworkObjectStatisticsManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Statistics::NetworkObjectStatisticsManager*>());
}
// Ctor Parameters []
constexpr ::Fusion::Statistics::NetworkObjectStatisticsManager::NetworkObjectStatisticsManager()   {
}
