#pragma once
// IWYU pragma private; include "emotitron/Compression/HalfFloat/HalfUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "emotitron/Compression/HalfFloat/zzzz__HalfUtilities_def.hpp"
#include "emotitron/Compression/HalfFloat/zzzz__HalfUtilities_FloatToUint_def.hpp"
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::HalfUtilities.Unpack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(uint16_t)>(&::emotitron::Compression::HalfFloat::HalfUtilities::Unpack)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5dd7bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::HalfUtilities*>(),
                        {"Unpack", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::HalfUtilities.Pack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(float_t)>(&::emotitron::Compression::HalfFloat::HalfUtilities::Pack)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5dd79fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::HalfUtilities*>(),
                        {"Pack", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void emotitron::Compression::HalfFloat::HalfUtilities::setStaticF_HalfToFloatMantissaTable(::ArrayW<uint32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t>, "HalfToFloatMantissaTable", ::emotitron::Compression::HalfFloat::HalfUtilities*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> emotitron::Compression::HalfFloat::HalfUtilities::getStaticF_HalfToFloatMantissaTable()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "HalfToFloatMantissaTable", ::emotitron::Compression::HalfFloat::HalfUtilities*>();
}
inline void emotitron::Compression::HalfFloat::HalfUtilities::setStaticF_HalfToFloatExponentTable(::ArrayW<uint32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t>, "HalfToFloatExponentTable", ::emotitron::Compression::HalfFloat::HalfUtilities*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> emotitron::Compression::HalfFloat::HalfUtilities::getStaticF_HalfToFloatExponentTable()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "HalfToFloatExponentTable", ::emotitron::Compression::HalfFloat::HalfUtilities*>();
}
inline void emotitron::Compression::HalfFloat::HalfUtilities::setStaticF_HalfToFloatOffsetTable(::ArrayW<uint32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t>, "HalfToFloatOffsetTable", ::emotitron::Compression::HalfFloat::HalfUtilities*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> emotitron::Compression::HalfFloat::HalfUtilities::getStaticF_HalfToFloatOffsetTable()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "HalfToFloatOffsetTable", ::emotitron::Compression::HalfFloat::HalfUtilities*>();
}
inline void emotitron::Compression::HalfFloat::HalfUtilities::setStaticF_FloatToHalfBaseTable(::ArrayW<uint16_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint16_t>, "FloatToHalfBaseTable", ::emotitron::Compression::HalfFloat::HalfUtilities*>(std::forward<::ArrayW<uint16_t>>(value));
}
inline ::ArrayW<uint16_t> emotitron::Compression::HalfFloat::HalfUtilities::getStaticF_FloatToHalfBaseTable()  {
return ::cordl_internals::getStaticField<::ArrayW<uint16_t>, "FloatToHalfBaseTable", ::emotitron::Compression::HalfFloat::HalfUtilities*>();
}
inline void emotitron::Compression::HalfFloat::HalfUtilities::setStaticF_FloatToHalfShiftTable(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "FloatToHalfShiftTable", ::emotitron::Compression::HalfFloat::HalfUtilities*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> emotitron::Compression::HalfFloat::HalfUtilities::getStaticF_FloatToHalfShiftTable()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "FloatToHalfShiftTable", ::emotitron::Compression::HalfFloat::HalfUtilities*>();
}
inline float_t emotitron::Compression::HalfFloat::HalfUtilities::Unpack(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::HalfUtilities*>(),
                        {"Unpack", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline uint16_t emotitron::Compression::HalfFloat::HalfUtilities::Pack(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::HalfUtilities*>(),
                        {"Pack", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::emotitron::Compression::HalfFloat::HalfUtilities::HalfUtilities()   {
}
