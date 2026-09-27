#pragma once
// IWYU pragma private; include "GlobalNamespace/XXHash32.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__XXHash32_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XXHash32.Compute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, uint32_t)>(&::GlobalNamespace::XXHash32::Compute)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5b1d968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XXHash32*>(),
                        {"Compute", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XXHash32.Compute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::ReadOnlySpan_1<uint8_t>, uint32_t)>(&::GlobalNamespace::XXHash32::Compute)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x5b1d9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XXHash32*>(),
                        {"Compute", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::XXHash32::Compute(::StringW  s, uint32_t  seed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XXHash32*>(),
                        {"Compute", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s, seed);
}
inline uint32_t GlobalNamespace::XXHash32::Compute(::System::ReadOnlySpan_1<uint8_t>  input, uint32_t  seed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XXHash32*>(),
                        {"Compute", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, input, seed);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XXHash32::XXHash32()   {
}
