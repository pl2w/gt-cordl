#pragma once
// IWYU pragma private; include "System/DecimalDecCalc.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__DecimalDecCalc_def.hpp"
#include "System/zzzz__MutableDecimal_def.hpp"
//  Writing Method size for method: ::System::DecimalDecCalc.D32DivMod1E9
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, ::by_ref<uint32_t>)>(&::System::DecimalDecCalc::D32DivMod1E9)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa2ffe5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DecimalDecCalc*>(),
                        {"D32DivMod1E9", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DecimalDecCalc.DecDivMod1E9
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::by_ref<::System::MutableDecimal>)>(&::System::DecimalDecCalc::DecDivMod1E9)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa2ffe94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DecimalDecCalc*>(),
                        {"DecDivMod1E9", {}, {::i2c::type_of<::by_ref<::System::MutableDecimal>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DecimalDecCalc.DecAddInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::MutableDecimal>, uint32_t)>(&::System::DecimalDecCalc::DecAddInt32)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa2fff04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DecimalDecCalc*>(),
                        {"DecAddInt32", {}, {::i2c::type_of<::by_ref<::System::MutableDecimal>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DecimalDecCalc.D32AddCarry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<uint32_t>, uint32_t)>(&::System::DecimalDecCalc::D32AddCarry)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa2fff34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DecimalDecCalc*>(),
                        {"D32AddCarry", {}, {::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DecimalDecCalc.DecMul10
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::MutableDecimal>)>(&::System::DecimalDecCalc::DecMul10)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa2fff4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DecimalDecCalc*>(),
                        {"DecMul10", {}, {::i2c::type_of<::by_ref<::System::MutableDecimal>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DecimalDecCalc.DecShiftLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::MutableDecimal>)>(&::System::DecimalDecCalc::DecShiftLeft)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa2fffa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DecimalDecCalc*>(),
                        {"DecShiftLeft", {}, {::i2c::type_of<::by_ref<::System::MutableDecimal>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DecimalDecCalc.DecAdd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::MutableDecimal>, ::System::MutableDecimal)>(&::System::DecimalDecCalc::DecAdd)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa2fffc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DecimalDecCalc*>(),
                        {"DecAdd", {}, {::i2c::type_of<::by_ref<::System::MutableDecimal>>(), ::i2c::type_of<::System::MutableDecimal>()}}
                    )));
    return ___internal_method;
  }
};
inline uint32_t System::DecimalDecCalc::D32DivMod1E9(uint32_t  hi32, ::by_ref<uint32_t>  lo32)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DecimalDecCalc*>(),
                        {"D32DivMod1E9", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, hi32, lo32);
}
inline uint32_t System::DecimalDecCalc::DecDivMod1E9(::by_ref<::System::MutableDecimal>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DecimalDecCalc*>(),
                        {"DecDivMod1E9", {}, {::i2c::type_of<::by_ref<::System::MutableDecimal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline void System::DecimalDecCalc::DecAddInt32(::by_ref<::System::MutableDecimal>  value, uint32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DecimalDecCalc*>(),
                        {"DecAddInt32", {}, {::i2c::type_of<::by_ref<::System::MutableDecimal>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, i);
}
inline bool System::DecimalDecCalc::D32AddCarry(::by_ref<uint32_t>  value, uint32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DecimalDecCalc*>(),
                        {"D32AddCarry", {}, {::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, i);
}
inline void System::DecimalDecCalc::DecMul10(::by_ref<::System::MutableDecimal>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DecimalDecCalc*>(),
                        {"DecMul10", {}, {::i2c::type_of<::by_ref<::System::MutableDecimal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void System::DecimalDecCalc::DecShiftLeft(::by_ref<::System::MutableDecimal>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DecimalDecCalc*>(),
                        {"DecShiftLeft", {}, {::i2c::type_of<::by_ref<::System::MutableDecimal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void System::DecimalDecCalc::DecAdd(::by_ref<::System::MutableDecimal>  value, ::System::MutableDecimal  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DecimalDecCalc*>(),
                        {"DecAdd", {}, {::i2c::type_of<::by_ref<::System::MutableDecimal>>(), ::i2c::type_of<::System::MutableDecimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, d);
}
// Ctor Parameters []
constexpr ::System::DecimalDecCalc::DecimalDecCalc()   {
}
