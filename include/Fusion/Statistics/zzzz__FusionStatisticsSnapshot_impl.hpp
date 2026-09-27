#pragma once
// IWYU pragma private; include "Fusion/Statistics/FusionStatisticsSnapshot.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Statistics/zzzz__FusionStatisticsSnapshot_def.hpp"
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.ClearSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)()>(&::Fusion::Statistics::FusionStatisticsSnapshot::ClearSnapshot)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x601f474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"ClearSnapshot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(::Fusion::Statistics::FusionStatisticsSnapshot*)>(&::Fusion::Statistics::FusionStatisticsSnapshot::CopyFrom)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x601f424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Fusion::Statistics::FusionStatisticsSnapshot*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.get_Resimulations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Statistics::FusionStatisticsSnapshot::*)()>(&::Fusion::Statistics::FusionStatisticsSnapshot::get_Resimulations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_Resimulations", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.set_Resimulations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(int32_t)>(&::Fusion::Statistics::FusionStatisticsSnapshot::set_Resimulations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_Resimulations", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.get_ForwardTicks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Statistics::FusionStatisticsSnapshot::*)()>(&::Fusion::Statistics::FusionStatisticsSnapshot::get_ForwardTicks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_ForwardTicks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.set_ForwardTicks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(int32_t)>(&::Fusion::Statistics::FusionStatisticsSnapshot::set_ForwardTicks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_ForwardTicks", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.get_InPackets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Statistics::FusionStatisticsSnapshot::*)()>(&::Fusion::Statistics::FusionStatisticsSnapshot::get_InPackets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_InPackets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.set_InPackets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(int32_t)>(&::Fusion::Statistics::FusionStatisticsSnapshot::set_InPackets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f7a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_InPackets", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.get_OutPackets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Statistics::FusionStatisticsSnapshot::*)()>(&::Fusion::Statistics::FusionStatisticsSnapshot::get_OutPackets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_OutPackets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.set_OutPackets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(int32_t)>(&::Fusion::Statistics::FusionStatisticsSnapshot::set_OutPackets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f7b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_OutPackets", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.get_InBandwidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::Statistics::FusionStatisticsSnapshot::*)()>(&::Fusion::Statistics::FusionStatisticsSnapshot::get_InBandwidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_InBandwidth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.set_InBandwidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(float_t)>(&::Fusion::Statistics::FusionStatisticsSnapshot::set_InBandwidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f7c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_InBandwidth", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.get_OutBandwidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::Statistics::FusionStatisticsSnapshot::*)()>(&::Fusion::Statistics::FusionStatisticsSnapshot::get_OutBandwidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_OutBandwidth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.set_OutBandwidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(float_t)>(&::Fusion::Statistics::FusionStatisticsSnapshot::set_OutBandwidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f7d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_OutBandwidth", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.get_RoundTripTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::Statistics::FusionStatisticsSnapshot::*)()>(&::Fusion::Statistics::FusionStatisticsSnapshot::get_RoundTripTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_RoundTripTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.set_RoundTripTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(float_t)>(&::Fusion::Statistics::FusionStatisticsSnapshot::set_RoundTripTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f7e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_RoundTripTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.get_InputInBandwidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::Statistics::FusionStatisticsSnapshot::*)()>(&::Fusion::Statistics::FusionStatisticsSnapshot::get_InputInBandwidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_InputInBandwidth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.set_InputInBandwidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(float_t)>(&::Fusion::Statistics::FusionStatisticsSnapshot::set_InputInBandwidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_InputInBandwidth", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.get_InputOutBandwidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::Statistics::FusionStatisticsSnapshot::*)()>(&::Fusion::Statistics::FusionStatisticsSnapshot::get_InputOutBandwidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_InputOutBandwidth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.set_InputOutBandwidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(float_t)>(&::Fusion::Statistics::FusionStatisticsSnapshot::set_InputOutBandwidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_InputOutBandwidth", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.get_InObjectUpdates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Statistics::FusionStatisticsSnapshot::*)()>(&::Fusion::Statistics::FusionStatisticsSnapshot::get_InObjectUpdates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_InObjectUpdates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.set_InObjectUpdates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(int32_t)>(&::Fusion::Statistics::FusionStatisticsSnapshot::set_InObjectUpdates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_InObjectUpdates", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.get_OutObjectUpdates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Statistics::FusionStatisticsSnapshot::*)()>(&::Fusion::Statistics::FusionStatisticsSnapshot::get_OutObjectUpdates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_OutObjectUpdates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.set_OutObjectUpdates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(int32_t)>(&::Fusion::Statistics::FusionStatisticsSnapshot::set_OutObjectUpdates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_OutObjectUpdates", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.get_ObjectsAllocMemoryUsedInBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Statistics::FusionStatisticsSnapshot::*)()>(&::Fusion::Statistics::FusionStatisticsSnapshot::get_ObjectsAllocMemoryUsedInBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_ObjectsAllocMemoryUsedInBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.set_ObjectsAllocMemoryUsedInBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(int32_t)>(&::Fusion::Statistics::FusionStatisticsSnapshot::set_ObjectsAllocMemoryUsedInBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_ObjectsAllocMemoryUsedInBytes", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.get_GeneralAllocMemoryUsedInBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Statistics::FusionStatisticsSnapshot::*)()>(&::Fusion::Statistics::FusionStatisticsSnapshot::get_GeneralAllocMemoryUsedInBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_GeneralAllocMemoryUsedInBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.set_GeneralAllocMemoryUsedInBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(int32_t)>(&::Fusion::Statistics::FusionStatisticsSnapshot::set_GeneralAllocMemoryUsedInBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_GeneralAllocMemoryUsedInBytes", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.get_ObjectsAllocMemoryFreeInBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Statistics::FusionStatisticsSnapshot::*)()>(&::Fusion::Statistics::FusionStatisticsSnapshot::get_ObjectsAllocMemoryFreeInBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_ObjectsAllocMemoryFreeInBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.set_ObjectsAllocMemoryFreeInBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(int32_t)>(&::Fusion::Statistics::FusionStatisticsSnapshot::set_ObjectsAllocMemoryFreeInBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_ObjectsAllocMemoryFreeInBytes", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.get_GeneralAllocMemoryFreeInBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Statistics::FusionStatisticsSnapshot::*)()>(&::Fusion::Statistics::FusionStatisticsSnapshot::get_GeneralAllocMemoryFreeInBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_GeneralAllocMemoryFreeInBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.set_GeneralAllocMemoryFreeInBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(int32_t)>(&::Fusion::Statistics::FusionStatisticsSnapshot::set_GeneralAllocMemoryFreeInBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_GeneralAllocMemoryFreeInBytes", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.get_WordsWrittenCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Statistics::FusionStatisticsSnapshot::*)()>(&::Fusion::Statistics::FusionStatisticsSnapshot::get_WordsWrittenCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_WordsWrittenCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.set_WordsWrittenCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(int32_t)>(&::Fusion::Statistics::FusionStatisticsSnapshot::set_WordsWrittenCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_WordsWrittenCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.get_WordsReadCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Statistics::FusionStatisticsSnapshot::*)()>(&::Fusion::Statistics::FusionStatisticsSnapshot::get_WordsReadCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_WordsReadCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.set_WordsReadCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(int32_t)>(&::Fusion::Statistics::FusionStatisticsSnapshot::set_WordsReadCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_WordsReadCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.get_WordsWrittenSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Statistics::FusionStatisticsSnapshot::*)()>(&::Fusion::Statistics::FusionStatisticsSnapshot::get_WordsWrittenSize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x601f890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_WordsWrittenSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.get_WordsReadSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Statistics::FusionStatisticsSnapshot::*)()>(&::Fusion::Statistics::FusionStatisticsSnapshot::get_WordsReadSize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x601f89c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_WordsReadSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.AddToResimulationStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(int32_t, bool)>(&::Fusion::Statistics::FusionStatisticsSnapshot::AddToResimulationStat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x601f8a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToResimulationStat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.AddToForwardTicksStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(int32_t, bool)>(&::Fusion::Statistics::FusionStatisticsSnapshot::AddToForwardTicksStat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x601f8bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToForwardTicksStat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.AddToInPacketsStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(int32_t, bool)>(&::Fusion::Statistics::FusionStatisticsSnapshot::AddToInPacketsStat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x601f8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToInPacketsStat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.AddToOutPacketsStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(int32_t, bool)>(&::Fusion::Statistics::FusionStatisticsSnapshot::AddToOutPacketsStat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x601f8e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToOutPacketsStat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.AddToInBandwidthStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(float_t, bool)>(&::Fusion::Statistics::FusionStatisticsSnapshot::AddToInBandwidthStat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x601f8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToInBandwidthStat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.AddToOutBandwidthStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(float_t, bool)>(&::Fusion::Statistics::FusionStatisticsSnapshot::AddToOutBandwidthStat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x601f90c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToOutBandwidthStat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.AddToRoundTripTimeStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(float_t, bool)>(&::Fusion::Statistics::FusionStatisticsSnapshot::AddToRoundTripTimeStat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x601f920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToRoundTripTimeStat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.AddToInputInBandwidthStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(float_t, bool)>(&::Fusion::Statistics::FusionStatisticsSnapshot::AddToInputInBandwidthStat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x601f934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToInputInBandwidthStat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.AddToInputOutBandwidthStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(float_t, bool)>(&::Fusion::Statistics::FusionStatisticsSnapshot::AddToInputOutBandwidthStat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x601f948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToInputOutBandwidthStat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.AddToInObjectUpdatesStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(int32_t, bool)>(&::Fusion::Statistics::FusionStatisticsSnapshot::AddToInObjectUpdatesStat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x601f95c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToInObjectUpdatesStat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.AddToOutObjectUpdatesStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(int32_t, bool)>(&::Fusion::Statistics::FusionStatisticsSnapshot::AddToOutObjectUpdatesStat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x601f970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToOutObjectUpdatesStat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.AddToObjectsAllocMemoryUsedInBytesStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(int32_t, bool)>(&::Fusion::Statistics::FusionStatisticsSnapshot::AddToObjectsAllocMemoryUsedInBytesStat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x601f984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToObjectsAllocMemoryUsedInBytesStat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.AddToGeneralAllocMemoryUsedInBytesStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(int32_t, bool)>(&::Fusion::Statistics::FusionStatisticsSnapshot::AddToGeneralAllocMemoryUsedInBytesStat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x601f998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToGeneralAllocMemoryUsedInBytesStat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.AddToObjectsAllocMemoryFreeInBytesStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(int32_t, bool)>(&::Fusion::Statistics::FusionStatisticsSnapshot::AddToObjectsAllocMemoryFreeInBytesStat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x601f9ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToObjectsAllocMemoryFreeInBytesStat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.AddToGeneralAllocMemoryFreeInBytesStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(int32_t, bool)>(&::Fusion::Statistics::FusionStatisticsSnapshot::AddToGeneralAllocMemoryFreeInBytesStat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x601f9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToGeneralAllocMemoryFreeInBytesStat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.AddToWordsWrittenCountStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(int32_t, bool)>(&::Fusion::Statistics::FusionStatisticsSnapshot::AddToWordsWrittenCountStat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x601f9d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToWordsWrittenCountStat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.AddToWordsReadCountStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(int32_t, bool)>(&::Fusion::Statistics::FusionStatisticsSnapshot::AddToWordsReadCountStat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x601f9e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToWordsReadCountStat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.get_InputReceiveDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::Statistics::FusionStatisticsSnapshot::*)()>(&::Fusion::Statistics::FusionStatisticsSnapshot::get_InputReceiveDelta)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f9fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_InputReceiveDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.set_InputReceiveDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(float_t)>(&::Fusion::Statistics::FusionStatisticsSnapshot::set_InputReceiveDelta)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601fa04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_InputReceiveDelta", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.get_TimeResets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Statistics::FusionStatisticsSnapshot::*)()>(&::Fusion::Statistics::FusionStatisticsSnapshot::get_TimeResets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601fa0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_TimeResets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.set_TimeResets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(int32_t)>(&::Fusion::Statistics::FusionStatisticsSnapshot::set_TimeResets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601fa14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_TimeResets", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.get_StateReceiveDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::Statistics::FusionStatisticsSnapshot::*)()>(&::Fusion::Statistics::FusionStatisticsSnapshot::get_StateReceiveDelta)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601fa1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_StateReceiveDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.set_StateReceiveDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(float_t)>(&::Fusion::Statistics::FusionStatisticsSnapshot::set_StateReceiveDelta)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601fa24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_StateReceiveDelta", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.get_SimulationTimeOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::Statistics::FusionStatisticsSnapshot::*)()>(&::Fusion::Statistics::FusionStatisticsSnapshot::get_SimulationTimeOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601fa2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_SimulationTimeOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.set_SimulationTimeOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(float_t)>(&::Fusion::Statistics::FusionStatisticsSnapshot::set_SimulationTimeOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601fa34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_SimulationTimeOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.get_SimulationSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::Statistics::FusionStatisticsSnapshot::*)()>(&::Fusion::Statistics::FusionStatisticsSnapshot::get_SimulationSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601fa3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_SimulationSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.set_SimulationSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(float_t)>(&::Fusion::Statistics::FusionStatisticsSnapshot::set_SimulationSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601fa44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_SimulationSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.get_InterpolationOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::Statistics::FusionStatisticsSnapshot::*)()>(&::Fusion::Statistics::FusionStatisticsSnapshot::get_InterpolationOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601fa4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_InterpolationOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.set_InterpolationOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(float_t)>(&::Fusion::Statistics::FusionStatisticsSnapshot::set_InterpolationOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601fa54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_InterpolationOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.get_InterpolationSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::Statistics::FusionStatisticsSnapshot::*)()>(&::Fusion::Statistics::FusionStatisticsSnapshot::get_InterpolationSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601fa5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_InterpolationSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.set_InterpolationSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(float_t)>(&::Fusion::Statistics::FusionStatisticsSnapshot::set_InterpolationSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601fa64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_InterpolationSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.AddToInputReceiveDeltaStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(float_t, bool)>(&::Fusion::Statistics::FusionStatisticsSnapshot::AddToInputReceiveDeltaStat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x601fa6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToInputReceiveDeltaStat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.AddToTimeResetsStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(int32_t, bool)>(&::Fusion::Statistics::FusionStatisticsSnapshot::AddToTimeResetsStat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x601fa80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToTimeResetsStat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.AddToStateReceiveDeltaStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(float_t, bool)>(&::Fusion::Statistics::FusionStatisticsSnapshot::AddToStateReceiveDeltaStat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x601fa94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToStateReceiveDeltaStat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.AddToSimulationTimeOffsetStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(float_t, bool)>(&::Fusion::Statistics::FusionStatisticsSnapshot::AddToSimulationTimeOffsetStat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x601faa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToSimulationTimeOffsetStat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.AddToSimulationSpeedStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(float_t, bool)>(&::Fusion::Statistics::FusionStatisticsSnapshot::AddToSimulationSpeedStat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x601fabc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToSimulationSpeedStat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.AddToInterpolationOffsetStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(float_t, bool)>(&::Fusion::Statistics::FusionStatisticsSnapshot::AddToInterpolationOffsetStat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x601fad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToInterpolationOffsetStat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot.AddToInterpolationSpeedStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)(float_t, bool)>(&::Fusion::Statistics::FusionStatisticsSnapshot::AddToInterpolationSpeedStat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x601fae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToInterpolationSpeedStat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsSnapshot._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsSnapshot::*)()>(&::Fusion::Statistics::FusionStatisticsSnapshot::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__Resimulations_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Resimulations_k__BackingField;
}
constexpr int32_t const& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__Resimulations_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Resimulations_k__BackingField;
}
constexpr void Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_set__Resimulations_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Resimulations_k__BackingField = value;
}
constexpr int32_t& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__ForwardTicks_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ForwardTicks_k__BackingField;
}
constexpr int32_t const& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__ForwardTicks_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ForwardTicks_k__BackingField;
}
constexpr void Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_set__ForwardTicks_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ForwardTicks_k__BackingField = value;
}
constexpr int32_t& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__InPackets_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InPackets_k__BackingField;
}
constexpr int32_t const& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__InPackets_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InPackets_k__BackingField;
}
constexpr void Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_set__InPackets_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InPackets_k__BackingField = value;
}
constexpr int32_t& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__OutPackets_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OutPackets_k__BackingField;
}
constexpr int32_t const& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__OutPackets_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OutPackets_k__BackingField;
}
constexpr void Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_set__OutPackets_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OutPackets_k__BackingField = value;
}
constexpr float_t& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__InBandwidth_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InBandwidth_k__BackingField;
}
constexpr float_t const& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__InBandwidth_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InBandwidth_k__BackingField;
}
constexpr void Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_set__InBandwidth_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InBandwidth_k__BackingField = value;
}
constexpr float_t& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__OutBandwidth_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OutBandwidth_k__BackingField;
}
constexpr float_t const& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__OutBandwidth_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OutBandwidth_k__BackingField;
}
constexpr void Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_set__OutBandwidth_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OutBandwidth_k__BackingField = value;
}
constexpr float_t& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__RoundTripTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RoundTripTime_k__BackingField;
}
constexpr float_t const& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__RoundTripTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RoundTripTime_k__BackingField;
}
constexpr void Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_set__RoundTripTime_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RoundTripTime_k__BackingField = value;
}
constexpr float_t& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__InputInBandwidth_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InputInBandwidth_k__BackingField;
}
constexpr float_t const& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__InputInBandwidth_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InputInBandwidth_k__BackingField;
}
constexpr void Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_set__InputInBandwidth_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InputInBandwidth_k__BackingField = value;
}
constexpr float_t& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__InputOutBandwidth_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InputOutBandwidth_k__BackingField;
}
constexpr float_t const& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__InputOutBandwidth_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InputOutBandwidth_k__BackingField;
}
constexpr void Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_set__InputOutBandwidth_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InputOutBandwidth_k__BackingField = value;
}
constexpr int32_t& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__InObjectUpdates_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InObjectUpdates_k__BackingField;
}
constexpr int32_t const& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__InObjectUpdates_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InObjectUpdates_k__BackingField;
}
constexpr void Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_set__InObjectUpdates_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InObjectUpdates_k__BackingField = value;
}
constexpr int32_t& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__OutObjectUpdates_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OutObjectUpdates_k__BackingField;
}
constexpr int32_t const& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__OutObjectUpdates_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OutObjectUpdates_k__BackingField;
}
constexpr void Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_set__OutObjectUpdates_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OutObjectUpdates_k__BackingField = value;
}
constexpr int32_t& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__ObjectsAllocMemoryUsedInBytes_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ObjectsAllocMemoryUsedInBytes_k__BackingField;
}
constexpr int32_t const& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__ObjectsAllocMemoryUsedInBytes_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ObjectsAllocMemoryUsedInBytes_k__BackingField;
}
constexpr void Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_set__ObjectsAllocMemoryUsedInBytes_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ObjectsAllocMemoryUsedInBytes_k__BackingField = value;
}
constexpr int32_t& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__GeneralAllocMemoryUsedInBytes_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GeneralAllocMemoryUsedInBytes_k__BackingField;
}
constexpr int32_t const& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__GeneralAllocMemoryUsedInBytes_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GeneralAllocMemoryUsedInBytes_k__BackingField;
}
constexpr void Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_set__GeneralAllocMemoryUsedInBytes_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GeneralAllocMemoryUsedInBytes_k__BackingField = value;
}
constexpr int32_t& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__ObjectsAllocMemoryFreeInBytes_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ObjectsAllocMemoryFreeInBytes_k__BackingField;
}
constexpr int32_t const& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__ObjectsAllocMemoryFreeInBytes_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ObjectsAllocMemoryFreeInBytes_k__BackingField;
}
constexpr void Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_set__ObjectsAllocMemoryFreeInBytes_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ObjectsAllocMemoryFreeInBytes_k__BackingField = value;
}
constexpr int32_t& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__GeneralAllocMemoryFreeInBytes_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GeneralAllocMemoryFreeInBytes_k__BackingField;
}
constexpr int32_t const& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__GeneralAllocMemoryFreeInBytes_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GeneralAllocMemoryFreeInBytes_k__BackingField;
}
constexpr void Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_set__GeneralAllocMemoryFreeInBytes_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GeneralAllocMemoryFreeInBytes_k__BackingField = value;
}
constexpr int32_t& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__WordsWrittenCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WordsWrittenCount_k__BackingField;
}
constexpr int32_t const& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__WordsWrittenCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WordsWrittenCount_k__BackingField;
}
constexpr void Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_set__WordsWrittenCount_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WordsWrittenCount_k__BackingField = value;
}
constexpr int32_t& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__WordsReadCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WordsReadCount_k__BackingField;
}
constexpr int32_t const& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__WordsReadCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WordsReadCount_k__BackingField;
}
constexpr void Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_set__WordsReadCount_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WordsReadCount_k__BackingField = value;
}
constexpr float_t& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__InputReceiveDelta_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InputReceiveDelta_k__BackingField;
}
constexpr float_t const& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__InputReceiveDelta_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InputReceiveDelta_k__BackingField;
}
constexpr void Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_set__InputReceiveDelta_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InputReceiveDelta_k__BackingField = value;
}
constexpr int32_t& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__TimeResets_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeResets_k__BackingField;
}
constexpr int32_t const& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__TimeResets_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeResets_k__BackingField;
}
constexpr void Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_set__TimeResets_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TimeResets_k__BackingField = value;
}
constexpr float_t& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__StateReceiveDelta_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StateReceiveDelta_k__BackingField;
}
constexpr float_t const& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__StateReceiveDelta_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StateReceiveDelta_k__BackingField;
}
constexpr void Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_set__StateReceiveDelta_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____StateReceiveDelta_k__BackingField = value;
}
constexpr float_t& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__SimulationTimeOffset_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SimulationTimeOffset_k__BackingField;
}
constexpr float_t const& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__SimulationTimeOffset_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SimulationTimeOffset_k__BackingField;
}
constexpr void Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_set__SimulationTimeOffset_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SimulationTimeOffset_k__BackingField = value;
}
constexpr float_t& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__SimulationSpeed_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SimulationSpeed_k__BackingField;
}
constexpr float_t const& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__SimulationSpeed_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SimulationSpeed_k__BackingField;
}
constexpr void Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_set__SimulationSpeed_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SimulationSpeed_k__BackingField = value;
}
constexpr float_t& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__InterpolationOffset_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InterpolationOffset_k__BackingField;
}
constexpr float_t const& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__InterpolationOffset_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InterpolationOffset_k__BackingField;
}
constexpr void Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_set__InterpolationOffset_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InterpolationOffset_k__BackingField = value;
}
constexpr float_t& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__InterpolationSpeed_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InterpolationSpeed_k__BackingField;
}
constexpr float_t const& Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_get__InterpolationSpeed_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InterpolationSpeed_k__BackingField;
}
constexpr void Fusion::Statistics::FusionStatisticsSnapshot::__cordl_internal_set__InterpolationSpeed_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InterpolationSpeed_k__BackingField = value;
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::ClearSnapshot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"ClearSnapshot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::CopyFrom(::Fusion::Statistics::FusionStatisticsSnapshot*  snapshot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Fusion::Statistics::FusionStatisticsSnapshot*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, snapshot);
}
inline int32_t Fusion::Statistics::FusionStatisticsSnapshot::get_Resimulations()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_Resimulations", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::set_Resimulations(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_Resimulations", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Fusion::Statistics::FusionStatisticsSnapshot::get_ForwardTicks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_ForwardTicks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::set_ForwardTicks(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_ForwardTicks", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Fusion::Statistics::FusionStatisticsSnapshot::get_InPackets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_InPackets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::set_InPackets(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_InPackets", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Fusion::Statistics::FusionStatisticsSnapshot::get_OutPackets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_OutPackets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::set_OutPackets(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_OutPackets", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Fusion::Statistics::FusionStatisticsSnapshot::get_InBandwidth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_InBandwidth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::set_InBandwidth(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_InBandwidth", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Fusion::Statistics::FusionStatisticsSnapshot::get_OutBandwidth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_OutBandwidth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::set_OutBandwidth(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_OutBandwidth", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Fusion::Statistics::FusionStatisticsSnapshot::get_RoundTripTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_RoundTripTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::set_RoundTripTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_RoundTripTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Fusion::Statistics::FusionStatisticsSnapshot::get_InputInBandwidth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_InputInBandwidth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::set_InputInBandwidth(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_InputInBandwidth", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Fusion::Statistics::FusionStatisticsSnapshot::get_InputOutBandwidth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_InputOutBandwidth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::set_InputOutBandwidth(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_InputOutBandwidth", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Fusion::Statistics::FusionStatisticsSnapshot::get_InObjectUpdates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_InObjectUpdates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::set_InObjectUpdates(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_InObjectUpdates", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Fusion::Statistics::FusionStatisticsSnapshot::get_OutObjectUpdates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_OutObjectUpdates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::set_OutObjectUpdates(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_OutObjectUpdates", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Fusion::Statistics::FusionStatisticsSnapshot::get_ObjectsAllocMemoryUsedInBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_ObjectsAllocMemoryUsedInBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::set_ObjectsAllocMemoryUsedInBytes(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_ObjectsAllocMemoryUsedInBytes", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Fusion::Statistics::FusionStatisticsSnapshot::get_GeneralAllocMemoryUsedInBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_GeneralAllocMemoryUsedInBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::set_GeneralAllocMemoryUsedInBytes(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_GeneralAllocMemoryUsedInBytes", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Fusion::Statistics::FusionStatisticsSnapshot::get_ObjectsAllocMemoryFreeInBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_ObjectsAllocMemoryFreeInBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::set_ObjectsAllocMemoryFreeInBytes(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_ObjectsAllocMemoryFreeInBytes", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Fusion::Statistics::FusionStatisticsSnapshot::get_GeneralAllocMemoryFreeInBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_GeneralAllocMemoryFreeInBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::set_GeneralAllocMemoryFreeInBytes(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_GeneralAllocMemoryFreeInBytes", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Fusion::Statistics::FusionStatisticsSnapshot::get_WordsWrittenCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_WordsWrittenCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::set_WordsWrittenCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_WordsWrittenCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Fusion::Statistics::FusionStatisticsSnapshot::get_WordsReadCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_WordsReadCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::set_WordsReadCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_WordsReadCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Fusion::Statistics::FusionStatisticsSnapshot::get_WordsWrittenSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_WordsWrittenSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Fusion::Statistics::FusionStatisticsSnapshot::get_WordsReadSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_WordsReadSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::AddToResimulationStat(int32_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToResimulationStat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideValue);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::AddToForwardTicksStat(int32_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToForwardTicksStat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideValue);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::AddToInPacketsStat(int32_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToInPacketsStat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideValue);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::AddToOutPacketsStat(int32_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToOutPacketsStat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideValue);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::AddToInBandwidthStat(float_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToInBandwidthStat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideValue);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::AddToOutBandwidthStat(float_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToOutBandwidthStat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideValue);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::AddToRoundTripTimeStat(float_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToRoundTripTimeStat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideValue);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::AddToInputInBandwidthStat(float_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToInputInBandwidthStat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideValue);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::AddToInputOutBandwidthStat(float_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToInputOutBandwidthStat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideValue);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::AddToInObjectUpdatesStat(int32_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToInObjectUpdatesStat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideValue);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::AddToOutObjectUpdatesStat(int32_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToOutObjectUpdatesStat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideValue);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::AddToObjectsAllocMemoryUsedInBytesStat(int32_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToObjectsAllocMemoryUsedInBytesStat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideValue);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::AddToGeneralAllocMemoryUsedInBytesStat(int32_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToGeneralAllocMemoryUsedInBytesStat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideValue);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::AddToObjectsAllocMemoryFreeInBytesStat(int32_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToObjectsAllocMemoryFreeInBytesStat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideValue);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::AddToGeneralAllocMemoryFreeInBytesStat(int32_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToGeneralAllocMemoryFreeInBytesStat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideValue);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::AddToWordsWrittenCountStat(int32_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToWordsWrittenCountStat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideValue);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::AddToWordsReadCountStat(int32_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToWordsReadCountStat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideValue);
}
inline float_t Fusion::Statistics::FusionStatisticsSnapshot::get_InputReceiveDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_InputReceiveDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::set_InputReceiveDelta(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_InputReceiveDelta", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Fusion::Statistics::FusionStatisticsSnapshot::get_TimeResets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_TimeResets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::set_TimeResets(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_TimeResets", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Fusion::Statistics::FusionStatisticsSnapshot::get_StateReceiveDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_StateReceiveDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::set_StateReceiveDelta(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_StateReceiveDelta", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Fusion::Statistics::FusionStatisticsSnapshot::get_SimulationTimeOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_SimulationTimeOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::set_SimulationTimeOffset(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_SimulationTimeOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Fusion::Statistics::FusionStatisticsSnapshot::get_SimulationSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_SimulationSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::set_SimulationSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_SimulationSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Fusion::Statistics::FusionStatisticsSnapshot::get_InterpolationOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_InterpolationOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::set_InterpolationOffset(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_InterpolationOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Fusion::Statistics::FusionStatisticsSnapshot::get_InterpolationSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"get_InterpolationSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::set_InterpolationSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"set_InterpolationSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::AddToInputReceiveDeltaStat(float_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToInputReceiveDeltaStat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideValue);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::AddToTimeResetsStat(int32_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToTimeResetsStat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideValue);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::AddToStateReceiveDeltaStat(float_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToStateReceiveDeltaStat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideValue);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::AddToSimulationTimeOffsetStat(float_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToSimulationTimeOffsetStat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideValue);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::AddToSimulationSpeedStat(float_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToSimulationSpeedStat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideValue);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::AddToInterpolationOffsetStat(float_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToInterpolationOffsetStat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideValue);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::AddToInterpolationSpeedStat(float_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {"AddToInterpolationSpeedStat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideValue);
}
inline void Fusion::Statistics::FusionStatisticsSnapshot::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsSnapshot*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Statistics::FusionStatisticsSnapshot* Fusion::Statistics::FusionStatisticsSnapshot::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Statistics::FusionStatisticsSnapshot*>());
}
// Ctor Parameters []
constexpr ::Fusion::Statistics::FusionStatisticsSnapshot::FusionStatisticsSnapshot()   {
}
