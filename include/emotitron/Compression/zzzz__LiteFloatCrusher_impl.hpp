#pragma once
// IWYU pragma private; include "emotitron/Compression/LiteFloatCrusher.hpp"
#include "emotitron/Compression/zzzz__LiteCrusher_1_impl.hpp"
#include "emotitron/Compression/zzzz__LiteFloatCompressType_impl.hpp"
#include "emotitron/Compression/zzzz__LiteFloatCrusher_def.hpp"
#include "emotitron/Compression/zzzz__LiteFloatCompressType_def.hpp"
//  Writing Method size for method: ::emotitron::Compression::LiteFloatCrusher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::emotitron::Compression::LiteFloatCrusher::*)()>(&::emotitron::Compression::LiteFloatCrusher::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5dd7e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::LiteFloatCrusher*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::LiteFloatCrusher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::emotitron::Compression::LiteFloatCrusher::*)(::emotitron::Compression::LiteFloatCompressType, float_t, float_t, bool)>(&::emotitron::Compression::LiteFloatCrusher::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5dd7f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::LiteFloatCrusher*>(),
                        {".ctor", {}, {::i2c::type_of<::emotitron::Compression::LiteFloatCompressType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::LiteFloatCrusher.Recalculate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::emotitron::Compression::LiteFloatCompressType, float_t, float_t, bool, ::by_ref<int32_t>, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<uint64_t>)>(&::emotitron::Compression::LiteFloatCrusher::Recalculate)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5dd7ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::LiteFloatCrusher*>(),
                        {"Recalculate", {}, {::i2c::type_of<::emotitron::Compression::LiteFloatCompressType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::LiteFloatCrusher.Encode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::emotitron::Compression::LiteFloatCrusher::*)(float_t)>(&::emotitron::Compression::LiteFloatCrusher::Encode)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5dd8040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::emotitron::Compression::LiteFloatCrusher*>(),
                    {::i2c::class_of<::emotitron::Compression::LiteFloatCrusher*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::LiteFloatCrusher.Decode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::emotitron::Compression::LiteFloatCrusher::*)(uint32_t)>(&::emotitron::Compression::LiteFloatCrusher::Decode)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5dd8100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::emotitron::Compression::LiteFloatCrusher*>(),
                    {::i2c::class_of<::emotitron::Compression::LiteFloatCrusher*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::LiteFloatCrusher.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::emotitron::Compression::LiteFloatCrusher::*)(float_t, ::ArrayW<uint8_t>, ::by_ref<int32_t>)>(&::emotitron::Compression::LiteFloatCrusher::WriteValue)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5dd81bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::emotitron::Compression::LiteFloatCrusher*>(),
                    {::i2c::class_of<::emotitron::Compression::LiteFloatCrusher*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::LiteFloatCrusher.WriteCValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::emotitron::Compression::LiteFloatCrusher::*)(uint32_t, ::ArrayW<uint8_t>, ::by_ref<int32_t>)>(&::emotitron::Compression::LiteFloatCrusher::WriteCValue)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5dd82a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::emotitron::Compression::LiteFloatCrusher*>(),
                    {::i2c::class_of<::emotitron::Compression::LiteFloatCrusher*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::LiteFloatCrusher.ReadValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::emotitron::Compression::LiteFloatCrusher::*)(::ArrayW<uint8_t>, ::by_ref<int32_t>)>(&::emotitron::Compression::LiteFloatCrusher::ReadValue)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5dd82b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::emotitron::Compression::LiteFloatCrusher*>(),
                    {::i2c::class_of<::emotitron::Compression::LiteFloatCrusher*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::LiteFloatCrusher.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::emotitron::Compression::LiteFloatCrusher::*)()>(&::emotitron::Compression::LiteFloatCrusher::ToString)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x5dd8390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::emotitron::Compression::LiteFloatCrusher*>(),
                    {::i2c::class_of<::emotitron::Compression::LiteFloatCrusher*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr float_t& emotitron::Compression::LiteFloatCrusher::__cordl_internal_get_min()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___min;
}
constexpr float_t const& emotitron::Compression::LiteFloatCrusher::__cordl_internal_get_min() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___min;
}
constexpr void emotitron::Compression::LiteFloatCrusher::__cordl_internal_set_min(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___min = value;
}
constexpr float_t& emotitron::Compression::LiteFloatCrusher::__cordl_internal_get_max()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___max;
}
constexpr float_t const& emotitron::Compression::LiteFloatCrusher::__cordl_internal_get_max() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___max;
}
constexpr void emotitron::Compression::LiteFloatCrusher::__cordl_internal_set_max(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___max = value;
}
constexpr ::emotitron::Compression::LiteFloatCompressType& emotitron::Compression::LiteFloatCrusher::__cordl_internal_get_compressType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compressType;
}
constexpr ::emotitron::Compression::LiteFloatCompressType const& emotitron::Compression::LiteFloatCrusher::__cordl_internal_get_compressType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compressType;
}
constexpr void emotitron::Compression::LiteFloatCrusher::__cordl_internal_set_compressType(::emotitron::Compression::LiteFloatCompressType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___compressType = value;
}
constexpr bool& emotitron::Compression::LiteFloatCrusher::__cordl_internal_get_accurateCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accurateCenter;
}
constexpr bool const& emotitron::Compression::LiteFloatCrusher::__cordl_internal_get_accurateCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accurateCenter;
}
constexpr void emotitron::Compression::LiteFloatCrusher::__cordl_internal_set_accurateCenter(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___accurateCenter = value;
}
constexpr float_t& emotitron::Compression::LiteFloatCrusher::__cordl_internal_get_encoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encoder;
}
constexpr float_t const& emotitron::Compression::LiteFloatCrusher::__cordl_internal_get_encoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encoder;
}
constexpr void emotitron::Compression::LiteFloatCrusher::__cordl_internal_set_encoder(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___encoder = value;
}
constexpr float_t& emotitron::Compression::LiteFloatCrusher::__cordl_internal_get_decoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___decoder;
}
constexpr float_t const& emotitron::Compression::LiteFloatCrusher::__cordl_internal_get_decoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___decoder;
}
constexpr void emotitron::Compression::LiteFloatCrusher::__cordl_internal_set_decoder(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___decoder = value;
}
constexpr uint64_t& emotitron::Compression::LiteFloatCrusher::__cordl_internal_get_maxCVal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxCVal;
}
constexpr uint64_t const& emotitron::Compression::LiteFloatCrusher::__cordl_internal_get_maxCVal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxCVal;
}
constexpr void emotitron::Compression::LiteFloatCrusher::__cordl_internal_set_maxCVal(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxCVal = value;
}
inline void emotitron::Compression::LiteFloatCrusher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::LiteFloatCrusher*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void emotitron::Compression::LiteFloatCrusher::_ctor(::emotitron::Compression::LiteFloatCompressType  compressType, float_t  min, float_t  max, bool  accurateCenter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::LiteFloatCrusher*>(),
                        {".ctor", {}, {::i2c::type_of<::emotitron::Compression::LiteFloatCompressType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, compressType, min, max, accurateCenter);
}
inline void emotitron::Compression::LiteFloatCrusher::Recalculate(::emotitron::Compression::LiteFloatCompressType  compressType, float_t  min, float_t  max, bool  accurateCenter, ::by_ref<int32_t>  bits, ::by_ref<float_t>  encoder, ::by_ref<float_t>  decoder, ::by_ref<uint64_t>  maxCVal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::LiteFloatCrusher*>(),
                        {"Recalculate", {}, {::i2c::type_of<::emotitron::Compression::LiteFloatCompressType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, compressType, min, max, accurateCenter, bits, encoder, decoder, maxCVal);
}
inline uint64_t emotitron::Compression::LiteFloatCrusher::Encode(float_t  val)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::emotitron::Compression::LiteFloatCrusher*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, val);
}
inline float_t emotitron::Compression::LiteFloatCrusher::Decode(uint32_t  cval)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::emotitron::Compression::LiteFloatCrusher*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, cval);
}
inline uint64_t emotitron::Compression::LiteFloatCrusher::WriteValue(float_t  val, ::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  bitposition)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::emotitron::Compression::LiteFloatCrusher*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, val, buffer, bitposition);
}
inline void emotitron::Compression::LiteFloatCrusher::WriteCValue(uint32_t  cval, ::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  bitposition)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::emotitron::Compression::LiteFloatCrusher*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cval, buffer, bitposition);
}
inline float_t emotitron::Compression::LiteFloatCrusher::ReadValue(::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  bitposition)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::emotitron::Compression::LiteFloatCrusher*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, buffer, bitposition);
}
inline ::StringW emotitron::Compression::LiteFloatCrusher::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::emotitron::Compression::LiteFloatCrusher*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::emotitron::Compression::LiteFloatCrusher* emotitron::Compression::LiteFloatCrusher::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::emotitron::Compression::LiteFloatCrusher*>());
}
inline ::emotitron::Compression::LiteFloatCrusher* emotitron::Compression::LiteFloatCrusher::New_ctor(::emotitron::Compression::LiteFloatCompressType  compressType, float_t  min, float_t  max, bool  accurateCenter)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::emotitron::Compression::LiteFloatCrusher*>(compressType, min, max, accurateCenter));
}
// Ctor Parameters []
constexpr ::emotitron::Compression::LiteFloatCrusher::LiteFloatCrusher()   {
}
