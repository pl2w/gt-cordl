#pragma once
// IWYU pragma private; include "System/NumberFormatInfoEx.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__NumberFormatInfoEx_def.hpp"
#include "System/Globalization/zzzz__NumberFormatInfo_def.hpp"
//  Writing Method size for method: ::System::NumberFormatInfoEx.HasInvariantNumberSigns
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Globalization::NumberFormatInfo*)>(&::System::NumberFormatInfoEx::HasInvariantNumberSigns)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb9a7c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::NumberFormatInfoEx*>(),
                        {"HasInvariantNumberSigns", {}, {::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool System::NumberFormatInfoEx::HasInvariantNumberSigns(::System::Globalization::NumberFormatInfo*  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::NumberFormatInfoEx*>(),
                        {"HasInvariantNumberSigns", {}, {::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, info);
}
// Ctor Parameters []
constexpr ::System::NumberFormatInfoEx::NumberFormatInfoEx()   {
}
