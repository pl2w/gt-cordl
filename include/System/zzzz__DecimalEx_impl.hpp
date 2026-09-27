#pragma once
// IWYU pragma private; include "System/DecimalEx.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__DecimalEx_def.hpp"
#include "System/zzzz__DecimalEx_DecCalc_def.hpp"
#include "System/zzzz__DecimalEx_DecimalBits_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
//  Writing Method size for method: ::System::DecimalEx.AsMutable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::GlobalNamespace::DecimalEx_DecCalc> (*)(::by_ref<::System::Decimal>)>(&::System::DecimalEx::AsMutable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb993c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DecimalEx*>(),
                        {"AsMutable", {}, {::i2c::type_of<::by_ref<::System::Decimal>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DecimalEx.High
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::Decimal)>(&::System::DecimalEx::High)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb993c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DecimalEx*>(),
                        {"High", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DecimalEx.Low
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::Decimal)>(&::System::DecimalEx::Low)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb993c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DecimalEx*>(),
                        {"Low", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DecimalEx.Mid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::Decimal)>(&::System::DecimalEx::Mid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb993c94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DecimalEx*>(),
                        {"Mid", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DecimalEx.IsNegative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Decimal)>(&::System::DecimalEx::IsNegative)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb993c9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DecimalEx*>(),
                        {"IsNegative", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DecimalEx.Scale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Decimal)>(&::System::DecimalEx::Scale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb993ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DecimalEx*>(),
                        {"Scale", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DecimalEx.DecDivMod1E9
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::by_ref<::System::Decimal>)>(&::System::DecimalEx::DecDivMod1E9)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb993cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DecimalEx*>(),
                        {"DecDivMod1E9", {}, {::i2c::type_of<::by_ref<::System::Decimal>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::by_ref<::GlobalNamespace::DecimalEx_DecCalc> System::DecimalEx::AsMutable(::by_ref<::System::Decimal>  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DecimalEx*>(),
                        {"AsMutable", {}, {::i2c::type_of<::by_ref<::System::Decimal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::GlobalNamespace::DecimalEx_DecCalc>>(nullptr, ___internal_method, d);
}
inline uint32_t System::DecimalEx::High(::System::Decimal  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DecimalEx*>(),
                        {"High", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::DecimalEx::Low(::System::Decimal  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DecimalEx*>(),
                        {"Low", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::DecimalEx::Mid(::System::Decimal  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DecimalEx*>(),
                        {"Mid", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline bool System::DecimalEx::IsNegative(::System::Decimal  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DecimalEx*>(),
                        {"IsNegative", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline int32_t System::DecimalEx::Scale(::System::Decimal  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DecimalEx*>(),
                        {"Scale", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::DecimalEx::DecDivMod1E9(::by_ref<::System::Decimal>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DecimalEx*>(),
                        {"DecDivMod1E9", {}, {::i2c::type_of<::by_ref<::System::Decimal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::System::DecimalEx::DecimalEx()   {
}
