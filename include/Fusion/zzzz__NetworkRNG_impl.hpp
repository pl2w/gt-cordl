#pragma once
// IWYU pragma private; include "Fusion/NetworkRNG.hpp"
#include "Fusion/zzzz__NetworkRNG_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkRNG.get_Peek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkRNG (::Fusion::NetworkRNG::*)()>(&::Fusion::NetworkRNG::get_Peek)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fa0de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRNG>(),
                        {"get_Peek", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRNG.Next
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::NetworkRNG::*)()>(&::Fusion::NetworkRNG::Next)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5fa0df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRNG>(),
                        {"Next", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRNG.NextExclusive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::NetworkRNG::*)()>(&::Fusion::NetworkRNG::NextExclusive)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5fa0e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRNG>(),
                        {"NextExclusive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRNG.NextSingle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::NetworkRNG::*)()>(&::Fusion::NetworkRNG::NextSingle)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5fa0ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRNG>(),
                        {"NextSingle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRNG.NextSingleExclusive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::NetworkRNG::*)()>(&::Fusion::NetworkRNG::NextSingleExclusive)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5fa0f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRNG>(),
                        {"NextSingleExclusive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRNG.NextInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkRNG::*)()>(&::Fusion::NetworkRNG::NextInt32)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5fa0f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRNG>(),
                        {"NextInt32", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRNG.NextUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Fusion::NetworkRNG::*)()>(&::Fusion::NetworkRNG::NextUInt32)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5fa0fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRNG>(),
                        {"NextUInt32", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRNG.NextUnbiasedUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Fusion::NetworkRNG::*)(uint32_t)>(&::Fusion::NetworkRNG::NextUnbiasedUInt32)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5fa100c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRNG>(),
                        {"NextUnbiasedUInt32", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRNG._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRNG::*)(int32_t)>(&::Fusion::NetworkRNG::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5fa1070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRNG>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRNG.NextUInt32Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Fusion::NetworkRNG::*)()>(&::Fusion::NetworkRNG::NextUInt32Internal)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5fa0e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRNG>(),
                        {"NextUInt32Internal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRNG.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::NetworkRNG::*)()>(&::Fusion::NetworkRNG::ToString)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5fa1140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkRNG>(),
                    {::i2c::class_of<::Fusion::NetworkRNG>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRNG.NextSplitMix64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::by_ref<uint64_t>)>(&::Fusion::NetworkRNG::NextSplitMix64)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5fa10e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRNG>(),
                        {"NextSplitMix64", {}, {::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRNG.RangeInclusive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::NetworkRNG::*)(double_t, double_t)>(&::Fusion::NetworkRNG::RangeInclusive)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5fa1308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRNG>(),
                        {"RangeInclusive", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRNG.RangeInclusive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::NetworkRNG::*)(float_t, float_t)>(&::Fusion::NetworkRNG::RangeInclusive)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5fa1374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRNG>(),
                        {"RangeInclusive", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRNG.RangeExclusive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkRNG::*)(int32_t, int32_t)>(&::Fusion::NetworkRNG::RangeExclusive)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5fa13e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRNG>(),
                        {"RangeExclusive", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRNG.RangeInclusive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkRNG::*)(int32_t, int32_t)>(&::Fusion::NetworkRNG::RangeInclusive)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5fa1410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRNG>(),
                        {"RangeInclusive", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRNG.RangeExclusive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Fusion::NetworkRNG::*)(uint32_t, uint32_t)>(&::Fusion::NetworkRNG::RangeExclusive)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5fa1480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRNG>(),
                        {"RangeExclusive", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRNG.RangeInclusive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Fusion::NetworkRNG::*)(uint32_t, uint32_t)>(&::Fusion::NetworkRNG::RangeInclusive)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5fa14ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRNG>(),
                        {"RangeInclusive", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr uint64_t& Fusion::NetworkRNG::__cordl_internal_get__state()  {
return this->____state;
}
constexpr uint64_t const& Fusion::NetworkRNG::__cordl_internal_get__state() const {
return this->____state;
}
constexpr void Fusion::NetworkRNG::__cordl_internal_set__state(uint64_t  value)  {
this->____state = value;
}
constexpr uint64_t& Fusion::NetworkRNG::__cordl_internal_get__inc()  {
return this->____inc;
}
constexpr uint64_t const& Fusion::NetworkRNG::__cordl_internal_get__inc() const {
return this->____inc;
}
constexpr void Fusion::NetworkRNG::__cordl_internal_set__inc(uint64_t  value)  {
this->____inc = value;
}
inline ::Fusion::NetworkRNG Fusion::NetworkRNG::get_Peek()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRNG>(),
                        {"get_Peek", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkRNG>(*this, ___internal_method);
}
inline double_t Fusion::NetworkRNG::Next()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRNG>(),
                        {"Next", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline double_t Fusion::NetworkRNG::NextExclusive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRNG>(),
                        {"NextExclusive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline float_t Fusion::NetworkRNG::NextSingle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRNG>(),
                        {"NextSingle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t Fusion::NetworkRNG::NextSingleExclusive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRNG>(),
                        {"NextSingleExclusive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline int32_t Fusion::NetworkRNG::NextInt32()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRNG>(),
                        {"NextInt32", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline uint32_t Fusion::NetworkRNG::NextUInt32()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRNG>(),
                        {"NextUInt32", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline uint32_t Fusion::NetworkRNG::NextUnbiasedUInt32(uint32_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRNG>(),
                        {"NextUnbiasedUInt32", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method, max);
}
inline void Fusion::NetworkRNG::_ctor(int32_t  seed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRNG>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, seed);
}
inline uint32_t Fusion::NetworkRNG::NextUInt32Internal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRNG>(),
                        {"NextUInt32Internal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline ::StringW Fusion::NetworkRNG::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkRNG>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline uint64_t Fusion::NetworkRNG::NextSplitMix64(::by_ref<uint64_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRNG>(),
                        {"NextSplitMix64", {}, {::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, x);
}
inline double_t Fusion::NetworkRNG::RangeInclusive(double_t  minInclusive, double_t  maxInclusive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRNG>(),
                        {"RangeInclusive", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method, minInclusive, maxInclusive);
}
inline float_t Fusion::NetworkRNG::RangeInclusive(float_t  minInclusive, float_t  maxInclusive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRNG>(),
                        {"RangeInclusive", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, minInclusive, maxInclusive);
}
inline int32_t Fusion::NetworkRNG::RangeExclusive(int32_t  minInclusive, int32_t  maxExclusive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRNG>(),
                        {"RangeExclusive", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, minInclusive, maxExclusive);
}
inline int32_t Fusion::NetworkRNG::RangeInclusive(int32_t  minInclusive, int32_t  maxInclusive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRNG>(),
                        {"RangeInclusive", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, minInclusive, maxInclusive);
}
inline uint32_t Fusion::NetworkRNG::RangeExclusive(uint32_t  minInclusive, uint32_t  maxExclusive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRNG>(),
                        {"RangeExclusive", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method, minInclusive, maxExclusive);
}
inline uint32_t Fusion::NetworkRNG::RangeInclusive(uint32_t  minInclusive, uint32_t  maxInclusive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRNG>(),
                        {"RangeInclusive", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method, minInclusive, maxInclusive);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  Fusion::NetworkRNG::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* Fusion::NetworkRNG::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_state", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_inc", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkRNG::NetworkRNG(uint64_t  _state, uint64_t  _inc) noexcept  {
this->_state = _state;
this->_inc = _inc;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkRNG::NetworkRNG()   {
}
