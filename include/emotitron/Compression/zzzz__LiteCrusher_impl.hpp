#pragma once
// IWYU pragma private; include "emotitron/Compression/LiteCrusher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "emotitron/Compression/zzzz__LiteCrusher_def.hpp"
//  Writing Method size for method: ::emotitron::Compression::LiteCrusher.GetBitsForMaxValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint32_t)>(&::emotitron::Compression::LiteCrusher::GetBitsForMaxValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5dd7e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::LiteCrusher*>(),
                        {"GetBitsForMaxValue", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::LiteCrusher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::emotitron::Compression::LiteCrusher::*)()>(&::emotitron::Compression::LiteCrusher::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd7e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::LiteCrusher*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& emotitron::Compression::LiteCrusher::__cordl_internal_get_bits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bits;
}
constexpr int32_t const& emotitron::Compression::LiteCrusher::__cordl_internal_get_bits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bits;
}
constexpr void emotitron::Compression::LiteCrusher::__cordl_internal_set_bits(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bits = value;
}
inline int32_t emotitron::Compression::LiteCrusher::GetBitsForMaxValue(uint32_t  maxvalue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::LiteCrusher*>(),
                        {"GetBitsForMaxValue", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, maxvalue);
}
inline void emotitron::Compression::LiteCrusher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::LiteCrusher*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::emotitron::Compression::LiteCrusher* emotitron::Compression::LiteCrusher::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::emotitron::Compression::LiteCrusher*>());
}
// Ctor Parameters []
constexpr ::emotitron::Compression::LiteCrusher::LiteCrusher()   {
}
