#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/ArrayHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__ArrayHelper_def.hpp"
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::ArrayHelper.AdjustSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::ArrayW<uint8_t>>, int32_t)>(&::SouthPointe::Serialization::MessagePack::ArrayHelper::AdjustSize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9d074dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::ArrayHelper*>(),
                        {"AdjustSize", {}, {::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void SouthPointe::Serialization::MessagePack::ArrayHelper::AdjustSize(::by_ref<::ArrayW<uint8_t>>  bytes, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::ArrayHelper*>(),
                        {"AdjustSize", {}, {::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bytes, length);
}
// Ctor Parameters []
constexpr ::SouthPointe::Serialization::MessagePack::ArrayHelper::ArrayHelper()   {
}
