#pragma once
// IWYU pragma private; include "Fusion/Statistics/NetworkObjectStatisticsSnapshot.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Statistics/zzzz__NetworkObjectStatisticsSnapshot_def.hpp"
//  Writing Method size for method: ::Fusion::Statistics::NetworkObjectStatisticsSnapshot.get_InPackets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Statistics::NetworkObjectStatisticsSnapshot::*)()>(&::Fusion::Statistics::NetworkObjectStatisticsSnapshot::get_InPackets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60201f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>(),
                        {"get_InPackets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::NetworkObjectStatisticsSnapshot.set_InPackets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::NetworkObjectStatisticsSnapshot::*)(int32_t)>(&::Fusion::Statistics::NetworkObjectStatisticsSnapshot::set_InPackets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60201fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>(),
                        {"set_InPackets", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::NetworkObjectStatisticsSnapshot.get_OutPackets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Statistics::NetworkObjectStatisticsSnapshot::*)()>(&::Fusion::Statistics::NetworkObjectStatisticsSnapshot::get_OutPackets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6020204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>(),
                        {"get_OutPackets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::NetworkObjectStatisticsSnapshot.set_OutPackets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::NetworkObjectStatisticsSnapshot::*)(int32_t)>(&::Fusion::Statistics::NetworkObjectStatisticsSnapshot::set_OutPackets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602020c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>(),
                        {"set_OutPackets", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::NetworkObjectStatisticsSnapshot.get_InBandwidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::Statistics::NetworkObjectStatisticsSnapshot::*)()>(&::Fusion::Statistics::NetworkObjectStatisticsSnapshot::get_InBandwidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6020214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>(),
                        {"get_InBandwidth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::NetworkObjectStatisticsSnapshot.set_InBandwidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::NetworkObjectStatisticsSnapshot::*)(float_t)>(&::Fusion::Statistics::NetworkObjectStatisticsSnapshot::set_InBandwidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602021c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>(),
                        {"set_InBandwidth", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::NetworkObjectStatisticsSnapshot.get_OutBandwidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::Statistics::NetworkObjectStatisticsSnapshot::*)()>(&::Fusion::Statistics::NetworkObjectStatisticsSnapshot::get_OutBandwidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6020224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>(),
                        {"get_OutBandwidth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::NetworkObjectStatisticsSnapshot.set_OutBandwidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::NetworkObjectStatisticsSnapshot::*)(float_t)>(&::Fusion::Statistics::NetworkObjectStatisticsSnapshot::set_OutBandwidth)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x602022c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>(),
                        {"set_OutBandwidth", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::NetworkObjectStatisticsSnapshot.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::NetworkObjectStatisticsSnapshot::*)()>(&::Fusion::Statistics::NetworkObjectStatisticsSnapshot::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6020018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::NetworkObjectStatisticsSnapshot.AddToInPacketsStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::NetworkObjectStatisticsSnapshot::*)(int32_t, bool)>(&::Fusion::Statistics::NetworkObjectStatisticsSnapshot::AddToInPacketsStat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x602017c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>(),
                        {"AddToInPacketsStat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::NetworkObjectStatisticsSnapshot.AddToOutPacketsStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::NetworkObjectStatisticsSnapshot::*)(int32_t, bool)>(&::Fusion::Statistics::NetworkObjectStatisticsSnapshot::AddToOutPacketsStat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x60201e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>(),
                        {"AddToOutPacketsStat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::NetworkObjectStatisticsSnapshot.AddToInBandwidthStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::NetworkObjectStatisticsSnapshot::*)(float_t, bool)>(&::Fusion::Statistics::NetworkObjectStatisticsSnapshot::AddToInBandwidthStat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x60200b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>(),
                        {"AddToInBandwidthStat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::NetworkObjectStatisticsSnapshot.AddToOutBandwidthStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::NetworkObjectStatisticsSnapshot::*)(float_t, bool)>(&::Fusion::Statistics::NetworkObjectStatisticsSnapshot::AddToOutBandwidthStat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6020118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>(),
                        {"AddToOutBandwidthStat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::NetworkObjectStatisticsSnapshot._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::NetworkObjectStatisticsSnapshot::*)()>(&::Fusion::Statistics::NetworkObjectStatisticsSnapshot::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601fe24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::Statistics::NetworkObjectStatisticsSnapshot::__cordl_internal_get__InPackets_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InPackets_k__BackingField;
}
constexpr int32_t const& Fusion::Statistics::NetworkObjectStatisticsSnapshot::__cordl_internal_get__InPackets_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InPackets_k__BackingField;
}
constexpr void Fusion::Statistics::NetworkObjectStatisticsSnapshot::__cordl_internal_set__InPackets_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InPackets_k__BackingField = value;
}
constexpr int32_t& Fusion::Statistics::NetworkObjectStatisticsSnapshot::__cordl_internal_get__OutPackets_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OutPackets_k__BackingField;
}
constexpr int32_t const& Fusion::Statistics::NetworkObjectStatisticsSnapshot::__cordl_internal_get__OutPackets_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OutPackets_k__BackingField;
}
constexpr void Fusion::Statistics::NetworkObjectStatisticsSnapshot::__cordl_internal_set__OutPackets_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OutPackets_k__BackingField = value;
}
constexpr float_t& Fusion::Statistics::NetworkObjectStatisticsSnapshot::__cordl_internal_get__InBandwidth_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InBandwidth_k__BackingField;
}
constexpr float_t const& Fusion::Statistics::NetworkObjectStatisticsSnapshot::__cordl_internal_get__InBandwidth_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InBandwidth_k__BackingField;
}
constexpr void Fusion::Statistics::NetworkObjectStatisticsSnapshot::__cordl_internal_set__InBandwidth_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InBandwidth_k__BackingField = value;
}
constexpr float_t& Fusion::Statistics::NetworkObjectStatisticsSnapshot::__cordl_internal_get__OutBandwidth_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OutBandwidth_k__BackingField;
}
constexpr float_t const& Fusion::Statistics::NetworkObjectStatisticsSnapshot::__cordl_internal_get__OutBandwidth_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OutBandwidth_k__BackingField;
}
constexpr void Fusion::Statistics::NetworkObjectStatisticsSnapshot::__cordl_internal_set__OutBandwidth_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OutBandwidth_k__BackingField = value;
}
inline int32_t Fusion::Statistics::NetworkObjectStatisticsSnapshot::get_InPackets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>(),
                        {"get_InPackets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Statistics::NetworkObjectStatisticsSnapshot::set_InPackets(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>(),
                        {"set_InPackets", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Fusion::Statistics::NetworkObjectStatisticsSnapshot::get_OutPackets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>(),
                        {"get_OutPackets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Statistics::NetworkObjectStatisticsSnapshot::set_OutPackets(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>(),
                        {"set_OutPackets", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Fusion::Statistics::NetworkObjectStatisticsSnapshot::get_InBandwidth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>(),
                        {"get_InBandwidth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Fusion::Statistics::NetworkObjectStatisticsSnapshot::set_InBandwidth(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>(),
                        {"set_InBandwidth", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Fusion::Statistics::NetworkObjectStatisticsSnapshot::get_OutBandwidth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>(),
                        {"get_OutBandwidth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Fusion::Statistics::NetworkObjectStatisticsSnapshot::set_OutBandwidth(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>(),
                        {"set_OutBandwidth", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Statistics::NetworkObjectStatisticsSnapshot::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Statistics::NetworkObjectStatisticsSnapshot::AddToInPacketsStat(int32_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>(),
                        {"AddToInPacketsStat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideValue);
}
inline void Fusion::Statistics::NetworkObjectStatisticsSnapshot::AddToOutPacketsStat(int32_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>(),
                        {"AddToOutPacketsStat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideValue);
}
inline void Fusion::Statistics::NetworkObjectStatisticsSnapshot::AddToInBandwidthStat(float_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>(),
                        {"AddToInBandwidthStat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideValue);
}
inline void Fusion::Statistics::NetworkObjectStatisticsSnapshot::AddToOutBandwidthStat(float_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>(),
                        {"AddToOutBandwidthStat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideValue);
}
inline void Fusion::Statistics::NetworkObjectStatisticsSnapshot::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Statistics::NetworkObjectStatisticsSnapshot* Fusion::Statistics::NetworkObjectStatisticsSnapshot::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Statistics::NetworkObjectStatisticsSnapshot*>());
}
// Ctor Parameters []
constexpr ::Fusion::Statistics::NetworkObjectStatisticsSnapshot::NetworkObjectStatisticsSnapshot()   {
}
