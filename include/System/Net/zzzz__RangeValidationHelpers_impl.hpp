#pragma once
// IWYU pragma private; include "System/Net/RangeValidationHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__RangeValidationHelpers_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::System::Net::RangeValidationHelpers.ValidateRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t, int32_t)>(&::System::Net::RangeValidationHelpers::ValidateRange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xadace20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::RangeValidationHelpers*>(),
                        {"ValidateRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::RangeValidationHelpers.ValidateSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ArraySegment_1<uint8_t>)>(&::System::Net::RangeValidationHelpers::ValidateSegment)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xadace30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::RangeValidationHelpers*>(),
                        {"ValidateSegment", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline bool System::Net::RangeValidationHelpers::ValidateRange(int32_t  actual, int32_t  fromAllowed, int32_t  toAllowed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::RangeValidationHelpers*>(),
                        {"ValidateRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, actual, fromAllowed, toAllowed);
}
inline void System::Net::RangeValidationHelpers::ValidateSegment(::System::ArraySegment_1<uint8_t>  segment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::RangeValidationHelpers*>(),
                        {"ValidateSegment", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, segment);
}
// Ctor Parameters []
constexpr ::System::Net::RangeValidationHelpers::RangeValidationHelpers()   {
}
