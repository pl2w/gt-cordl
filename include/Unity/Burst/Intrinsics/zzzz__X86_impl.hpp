#pragma once
// IWYU pragma private; include "Unity/Burst/Intrinsics/X86.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/Intrinsics/zzzz__X86_def.hpp"
#include "Unity/Burst/Intrinsics/zzzz__X86_def.hpp"
#include "Unity/Burst/Intrinsics/zzzz__v128_def.hpp"
//  Writing Method size for method: ::Unity::Burst::Intrinsics::X86.Saturate_To_UnsignedInt8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(int32_t)>(&::Unity::Burst::Intrinsics::X86::Saturate_To_UnsignedInt8)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xae85360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::Intrinsics::X86*>(),
                        {"Saturate_To_UnsignedInt8", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::Intrinsics::X86.Saturate_To_Int16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(int32_t)>(&::Unity::Burst::Intrinsics::X86::Saturate_To_Int16)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xae85370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::Intrinsics::X86*>(),
                        {"Saturate_To_Int16", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline uint8_t Unity::Burst::Intrinsics::X86::Saturate_To_UnsignedInt8(int32_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::Intrinsics::X86*>(),
                        {"Saturate_To_UnsignedInt8", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, val);
}
inline int16_t Unity::Burst::Intrinsics::X86::Saturate_To_Int16(int32_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::Intrinsics::X86*>(),
                        {"Saturate_To_Int16", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, val);
}
// Ctor Parameters []
constexpr ::Unity::Burst::Intrinsics::X86::X86()   {
}
//  Writing Method size for method: ::Unity::Burst::Intrinsics::X86_Sse2.get_IsSse2Supported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Unity::Burst::Intrinsics::X86_Sse2::get_IsSse2Supported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae85390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::Intrinsics::X86_Sse2*>(),
                        {"get_IsSse2Supported", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::Intrinsics::X86_Sse2.packs_epi32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Burst::Intrinsics::v128 (*)(::Unity::Burst::Intrinsics::v128, ::Unity::Burst::Intrinsics::v128)>(&::Unity::Burst::Intrinsics::X86_Sse2::packs_epi32)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xae85398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::Intrinsics::X86_Sse2*>(),
                        {"packs_epi32", {}, {::i2c::type_of<::Unity::Burst::Intrinsics::v128>(), ::i2c::type_of<::Unity::Burst::Intrinsics::v128>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::Intrinsics::X86_Sse2.packus_epi16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Burst::Intrinsics::v128 (*)(::Unity::Burst::Intrinsics::v128, ::Unity::Burst::Intrinsics::v128)>(&::Unity::Burst::Intrinsics::X86_Sse2::packus_epi16)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xae85458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::Intrinsics::X86_Sse2*>(),
                        {"packus_epi16", {}, {::i2c::type_of<::Unity::Burst::Intrinsics::v128>(), ::i2c::type_of<::Unity::Burst::Intrinsics::v128>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Unity::Burst::Intrinsics::X86_Sse2::get_IsSse2Supported()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::Intrinsics::X86_Sse2*>(),
                        {"get_IsSse2Supported", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::Unity::Burst::Intrinsics::v128 Unity::Burst::Intrinsics::X86_Sse2::packs_epi32(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::Intrinsics::X86_Sse2*>(),
                        {"packs_epi32", {}, {::i2c::type_of<::Unity::Burst::Intrinsics::v128>(), ::i2c::type_of<::Unity::Burst::Intrinsics::v128>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Burst::Intrinsics::v128>(nullptr, ___internal_method, a, b);
}
inline ::Unity::Burst::Intrinsics::v128 Unity::Burst::Intrinsics::X86_Sse2::packus_epi16(::Unity::Burst::Intrinsics::v128  a, ::Unity::Burst::Intrinsics::v128  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::Intrinsics::X86_Sse2*>(),
                        {"packus_epi16", {}, {::i2c::type_of<::Unity::Burst::Intrinsics::v128>(), ::i2c::type_of<::Unity::Burst::Intrinsics::v128>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Burst::Intrinsics::v128>(nullptr, ___internal_method, a, b);
}
// Ctor Parameters []
constexpr ::Unity::Burst::Intrinsics::X86_Sse2::X86_Sse2()   {
}
