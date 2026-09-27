#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/MathUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__MathUtils_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::MathUtils.IntLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint64_t)>(&::Newtonsoft::Json::Utilities::MathUtils::IntLength)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xa3a16bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::MathUtils*>(),
                        {"IntLength", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::MathUtils.IntToHex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(int32_t)>(&::Newtonsoft::Json::Utilities::MathUtils::IntToHex)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa3a1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::MathUtils*>(),
                        {"IntToHex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::MathUtils.ApproxEquals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(double_t, double_t)>(&::Newtonsoft::Json::Utilities::MathUtils::ApproxEquals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa3a1898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::MathUtils*>(),
                        {"ApproxEquals", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Newtonsoft::Json::Utilities::MathUtils::IntLength(uint64_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::MathUtils*>(),
                        {"IntLength", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, i);
}
inline char16_t Newtonsoft::Json::Utilities::MathUtils::IntToHex(int32_t  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::MathUtils*>(),
                        {"IntToHex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, n);
}
inline bool Newtonsoft::Json::Utilities::MathUtils::ApproxEquals(double_t  d1, double_t  d2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::MathUtils*>(),
                        {"ApproxEquals", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, d1, d2);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::MathUtils::MathUtils()   {
}
