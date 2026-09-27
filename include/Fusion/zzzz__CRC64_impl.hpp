#pragma once
// IWYU pragma private; include "Fusion/CRC64.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__CRC64_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::Fusion::CRC64.Compute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint8_t*, int32_t)>(&::Fusion::CRC64::Compute)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f3c9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CRC64*>(),
                        {"Compute", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CRC64.Compute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::ReadOnlySpan_1<int32_t>)>(&::Fusion::CRC64::Compute)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5f3cad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CRC64*>(),
                        {"Compute", {}, {::i2c::type_of<::System::ReadOnlySpan_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CRC64.Compute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t, uint8_t*, int32_t, int32_t)>(&::Fusion::CRC64::Compute)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5f3ca0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CRC64*>(),
                        {"Compute", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::CRC64::setStaticF__tab(::ArrayW<uint64_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint64_t>, "_tab", ::Fusion::CRC64*>(std::forward<::ArrayW<uint64_t>>(value));
}
inline ::ArrayW<uint64_t> Fusion::CRC64::getStaticF__tab()  {
return ::cordl_internals::getStaticField<::ArrayW<uint64_t>, "_tab", ::Fusion::CRC64*>();
}
inline uint64_t Fusion::CRC64::Compute(uint8_t*  data, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CRC64*>(),
                        {"Compute", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, data, length);
}
inline uint64_t Fusion::CRC64::Compute(::System::ReadOnlySpan_1<int32_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CRC64*>(),
                        {"Compute", {}, {::i2c::type_of<::System::ReadOnlySpan_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, data);
}
inline uint64_t Fusion::CRC64::Compute(uint64_t  crc, uint8_t*  data, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CRC64*>(),
                        {"Compute", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, crc, data, offset, length);
}
// Ctor Parameters []
constexpr ::Fusion::CRC64::CRC64()   {
}
