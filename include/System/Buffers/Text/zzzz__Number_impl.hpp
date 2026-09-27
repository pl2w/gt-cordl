#pragma once
// IWYU pragma private; include "System/Buffers/Text/Number.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Buffers/Text/zzzz__Number_def.hpp"
#include "System/Buffers/Text/zzzz__NumberBuffer_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::System::Buffers::Text::Number.NumberBufferToDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::Buffers::Text::NumberBuffer>, ::by_ref<double_t>)>(&::System::Buffers::Text::Number::NumberBufferToDouble)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa27b174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Number*>(),
                        {"NumberBufferToDouble", {}, {::i2c::type_of<::by_ref<::System::Buffers::Text::NumberBuffer>>(), ::i2c::type_of<::by_ref<double_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Number.NumberBufferToDecimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::Buffers::Text::NumberBuffer>, ::by_ref<::System::Decimal>)>(&::System::Buffers::Text::Number::NumberBufferToDecimal)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xa27abb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Number*>(),
                        {"NumberBufferToDecimal", {}, {::i2c::type_of<::by_ref<::System::Buffers::Text::NumberBuffer>>(), ::i2c::type_of<::by_ref<::System::Decimal>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Number.DecimalToNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Decimal, ::by_ref<::System::Buffers::Text::NumberBuffer>)>(&::System::Buffers::Text::Number::DecimalToNumber)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xa274fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Number*>(),
                        {"DecimalToNumber", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::by_ref<::System::Buffers::Text::NumberBuffer>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Number.DigitsToInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::ReadOnlySpan_1<uint8_t>, int32_t)>(&::System::Buffers::Text::Number::DigitsToInt)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa27eec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Number*>(),
                        {"DigitsToInt", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Number.Mul32x32To64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint32_t, uint32_t)>(&::System::Buffers::Text::Number::Mul32x32To64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa27ef84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Number*>(),
                        {"Mul32x32To64", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Number.Mul64Lossy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t, uint64_t, ::by_ref<int32_t>)>(&::System::Buffers::Text::Number::Mul64Lossy)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa27ef8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Number*>(),
                        {"Mul64Lossy", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Number.abs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::System::Buffers::Text::Number::abs)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa27f024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Number*>(),
                        {"abs", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Number.NumberToDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::by_ref<::System::Buffers::Text::NumberBuffer>)>(&::System::Buffers::Text::Number::NumberToDouble)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0xa27e970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Number*>(),
                        {"NumberToDouble", {}, {::i2c::type_of<::by_ref<::System::Buffers::Text::NumberBuffer>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Number.RoundNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Buffers::Text::NumberBuffer>, int32_t)>(&::System::Buffers::Text::Number::RoundNumber)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa2751c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Number*>(),
                        {"RoundNumber", {}, {::i2c::type_of<::by_ref<::System::Buffers::Text::NumberBuffer>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Buffers::Text::Number::setStaticF_s_rgval64Power10(::ArrayW<uint64_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint64_t>, "s_rgval64Power10", ::System::Buffers::Text::Number*>(std::forward<::ArrayW<uint64_t>>(value));
}
inline ::ArrayW<uint64_t> System::Buffers::Text::Number::getStaticF_s_rgval64Power10()  {
return ::cordl_internals::getStaticField<::ArrayW<uint64_t>, "s_rgval64Power10", ::System::Buffers::Text::Number*>();
}
inline void System::Buffers::Text::Number::setStaticF_s_rgexp64Power10(::ArrayW<int8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int8_t>, "s_rgexp64Power10", ::System::Buffers::Text::Number*>(std::forward<::ArrayW<int8_t>>(value));
}
inline ::ArrayW<int8_t> System::Buffers::Text::Number::getStaticF_s_rgexp64Power10()  {
return ::cordl_internals::getStaticField<::ArrayW<int8_t>, "s_rgexp64Power10", ::System::Buffers::Text::Number*>();
}
inline void System::Buffers::Text::Number::setStaticF_s_rgval64Power10By16(::ArrayW<uint64_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint64_t>, "s_rgval64Power10By16", ::System::Buffers::Text::Number*>(std::forward<::ArrayW<uint64_t>>(value));
}
inline ::ArrayW<uint64_t> System::Buffers::Text::Number::getStaticF_s_rgval64Power10By16()  {
return ::cordl_internals::getStaticField<::ArrayW<uint64_t>, "s_rgval64Power10By16", ::System::Buffers::Text::Number*>();
}
inline void System::Buffers::Text::Number::setStaticF_s_rgexp64Power10By16(::ArrayW<int16_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int16_t>, "s_rgexp64Power10By16", ::System::Buffers::Text::Number*>(std::forward<::ArrayW<int16_t>>(value));
}
inline ::ArrayW<int16_t> System::Buffers::Text::Number::getStaticF_s_rgexp64Power10By16()  {
return ::cordl_internals::getStaticField<::ArrayW<int16_t>, "s_rgexp64Power10By16", ::System::Buffers::Text::Number*>();
}
inline bool System::Buffers::Text::Number::NumberBufferToDouble(::by_ref<::System::Buffers::Text::NumberBuffer>  number, ::by_ref<double_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Number*>(),
                        {"NumberBufferToDouble", {}, {::i2c::type_of<::by_ref<::System::Buffers::Text::NumberBuffer>>(), ::i2c::type_of<::by_ref<double_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, number, value);
}
inline bool System::Buffers::Text::Number::NumberBufferToDecimal(::by_ref<::System::Buffers::Text::NumberBuffer>  number, ::by_ref<::System::Decimal>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Number*>(),
                        {"NumberBufferToDecimal", {}, {::i2c::type_of<::by_ref<::System::Buffers::Text::NumberBuffer>>(), ::i2c::type_of<::by_ref<::System::Decimal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, number, value);
}
inline void System::Buffers::Text::Number::DecimalToNumber(::System::Decimal  value, ::by_ref<::System::Buffers::Text::NumberBuffer>  number)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Number*>(),
                        {"DecimalToNumber", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::by_ref<::System::Buffers::Text::NumberBuffer>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, number);
}
inline uint32_t System::Buffers::Text::Number::DigitsToInt(::System::ReadOnlySpan_1<uint8_t>  digits, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Number*>(),
                        {"DigitsToInt", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, digits, count);
}
inline uint64_t System::Buffers::Text::Number::Mul32x32To64(uint32_t  a, uint32_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Number*>(),
                        {"Mul32x32To64", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, a, b);
}
inline uint64_t System::Buffers::Text::Number::Mul64Lossy(uint64_t  a, uint64_t  b, ::by_ref<int32_t>  pexp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Number*>(),
                        {"Mul64Lossy", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, a, b, pexp);
}
inline int32_t System::Buffers::Text::Number::abs(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Number*>(),
                        {"abs", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline double_t System::Buffers::Text::Number::NumberToDouble(::by_ref<::System::Buffers::Text::NumberBuffer>  number)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Number*>(),
                        {"NumberToDouble", {}, {::i2c::type_of<::by_ref<::System::Buffers::Text::NumberBuffer>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, number);
}
inline void System::Buffers::Text::Number::RoundNumber(::by_ref<::System::Buffers::Text::NumberBuffer>  number, int32_t  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Number*>(),
                        {"RoundNumber", {}, {::i2c::type_of<::by_ref<::System::Buffers::Text::NumberBuffer>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, number, pos);
}
// Ctor Parameters []
constexpr ::System::Buffers::Text::Number::Number()   {
}
