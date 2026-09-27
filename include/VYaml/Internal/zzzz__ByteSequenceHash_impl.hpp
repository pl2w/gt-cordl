#pragma once
// IWYU pragma private; include "VYaml/Internal/ByteSequenceHash.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Internal/zzzz__ByteSequenceHash_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::VYaml::Internal::ByteSequenceHash.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::ReadOnlySpan_1<uint8_t>)>(&::VYaml::Internal::ByteSequenceHash::GetHashCode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb966578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::ByteSequenceHash*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t VYaml::Internal::ByteSequenceHash::GetHashCode(::System::ReadOnlySpan_1<uint8_t>  span)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::ByteSequenceHash*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, span);
}
// Ctor Parameters []
constexpr ::VYaml::Internal::ByteSequenceHash::ByteSequenceHash()   {
}
