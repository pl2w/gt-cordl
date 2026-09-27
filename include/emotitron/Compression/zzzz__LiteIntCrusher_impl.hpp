#pragma once
// IWYU pragma private; include "emotitron/Compression/LiteIntCrusher.hpp"
#include "emotitron/Compression/zzzz__LiteCrusher_1_impl.hpp"
#include "emotitron/Compression/zzzz__LiteIntCompressType_impl.hpp"
#include "emotitron/Compression/zzzz__LiteIntCrusher_def.hpp"
#include "emotitron/Compression/zzzz__LiteIntCompressType_def.hpp"
//  Writing Method size for method: ::emotitron::Compression::LiteIntCrusher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::emotitron::Compression::LiteIntCrusher::*)()>(&::emotitron::Compression::LiteIntCrusher::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5dd8644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::LiteIntCrusher*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::LiteIntCrusher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::emotitron::Compression::LiteIntCrusher::*)(::emotitron::Compression::LiteIntCompressType, int32_t, int32_t)>(&::emotitron::Compression::LiteIntCrusher::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5dd86e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::LiteIntCrusher*>(),
                        {".ctor", {}, {::i2c::type_of<::emotitron::Compression::LiteIntCompressType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::LiteIntCrusher.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::emotitron::Compression::LiteIntCrusher::*)(int32_t, ::ArrayW<uint8_t>, ::by_ref<int32_t>)>(&::emotitron::Compression::LiteIntCrusher::WriteValue)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5dd8788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::emotitron::Compression::LiteIntCrusher*>(),
                    {::i2c::class_of<::emotitron::Compression::LiteIntCrusher*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::LiteIntCrusher.WriteCValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::emotitron::Compression::LiteIntCrusher::*)(uint32_t, ::ArrayW<uint8_t>, ::by_ref<int32_t>)>(&::emotitron::Compression::LiteIntCrusher::WriteCValue)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5dd8818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::emotitron::Compression::LiteIntCrusher*>(),
                    {::i2c::class_of<::emotitron::Compression::LiteIntCrusher*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::LiteIntCrusher.ReadValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::emotitron::Compression::LiteIntCrusher::*)(::ArrayW<uint8_t>, ::by_ref<int32_t>)>(&::emotitron::Compression::LiteIntCrusher::ReadValue)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5dd8860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::emotitron::Compression::LiteIntCrusher*>(),
                    {::i2c::class_of<::emotitron::Compression::LiteIntCrusher*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::LiteIntCrusher.Encode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::emotitron::Compression::LiteIntCrusher::*)(int32_t)>(&::emotitron::Compression::LiteIntCrusher::Encode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5dd88ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::emotitron::Compression::LiteIntCrusher*>(),
                    {::i2c::class_of<::emotitron::Compression::LiteIntCrusher*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::LiteIntCrusher.Decode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::emotitron::Compression::LiteIntCrusher::*)(uint32_t)>(&::emotitron::Compression::LiteIntCrusher::Decode)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5dd890c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::emotitron::Compression::LiteIntCrusher*>(),
                    {::i2c::class_of<::emotitron::Compression::LiteIntCrusher*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::LiteIntCrusher.Recalculate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::emotitron::Compression::LiteIntCrusher::Recalculate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5dd86a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::LiteIntCrusher*>(),
                        {"Recalculate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::LiteIntCrusher.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::emotitron::Compression::LiteIntCrusher::*)()>(&::emotitron::Compression::LiteIntCrusher::ToString)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x5dd8918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::emotitron::Compression::LiteIntCrusher*>(),
                    {::i2c::class_of<::emotitron::Compression::LiteIntCrusher*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::emotitron::Compression::LiteIntCompressType& emotitron::Compression::LiteIntCrusher::__cordl_internal_get_compressType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compressType;
}
constexpr ::emotitron::Compression::LiteIntCompressType const& emotitron::Compression::LiteIntCrusher::__cordl_internal_get_compressType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compressType;
}
constexpr void emotitron::Compression::LiteIntCrusher::__cordl_internal_set_compressType(::emotitron::Compression::LiteIntCompressType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___compressType = value;
}
constexpr int32_t& emotitron::Compression::LiteIntCrusher::__cordl_internal_get_min()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___min;
}
constexpr int32_t const& emotitron::Compression::LiteIntCrusher::__cordl_internal_get_min() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___min;
}
constexpr void emotitron::Compression::LiteIntCrusher::__cordl_internal_set_min(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___min = value;
}
constexpr int32_t& emotitron::Compression::LiteIntCrusher::__cordl_internal_get_max()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___max;
}
constexpr int32_t const& emotitron::Compression::LiteIntCrusher::__cordl_internal_get_max() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___max;
}
constexpr void emotitron::Compression::LiteIntCrusher::__cordl_internal_set_max(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___max = value;
}
constexpr int32_t& emotitron::Compression::LiteIntCrusher::__cordl_internal_get_smallest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smallest;
}
constexpr int32_t const& emotitron::Compression::LiteIntCrusher::__cordl_internal_get_smallest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smallest;
}
constexpr void emotitron::Compression::LiteIntCrusher::__cordl_internal_set_smallest(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smallest = value;
}
constexpr int32_t& emotitron::Compression::LiteIntCrusher::__cordl_internal_get_biggest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___biggest;
}
constexpr int32_t const& emotitron::Compression::LiteIntCrusher::__cordl_internal_get_biggest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___biggest;
}
constexpr void emotitron::Compression::LiteIntCrusher::__cordl_internal_set_biggest(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___biggest = value;
}
inline void emotitron::Compression::LiteIntCrusher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::LiteIntCrusher*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void emotitron::Compression::LiteIntCrusher::_ctor(::emotitron::Compression::LiteIntCompressType  comType, int32_t  min, int32_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::LiteIntCrusher*>(),
                        {".ctor", {}, {::i2c::type_of<::emotitron::Compression::LiteIntCompressType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, comType, min, max);
}
inline uint64_t emotitron::Compression::LiteIntCrusher::WriteValue(int32_t  val, ::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  bitposition)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::emotitron::Compression::LiteIntCrusher*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, val, buffer, bitposition);
}
inline void emotitron::Compression::LiteIntCrusher::WriteCValue(uint32_t  cval, ::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  bitposition)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::emotitron::Compression::LiteIntCrusher*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cval, buffer, bitposition);
}
inline int32_t emotitron::Compression::LiteIntCrusher::ReadValue(::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  bitposition)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::emotitron::Compression::LiteIntCrusher*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, bitposition);
}
inline uint64_t emotitron::Compression::LiteIntCrusher::Encode(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::emotitron::Compression::LiteIntCrusher*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, value);
}
inline int32_t emotitron::Compression::LiteIntCrusher::Decode(uint32_t  cvalue)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::emotitron::Compression::LiteIntCrusher*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, cvalue);
}
inline void emotitron::Compression::LiteIntCrusher::Recalculate(int32_t  min, int32_t  max, ::by_ref<int32_t>  smallest, ::by_ref<int32_t>  biggest, ::by_ref<int32_t>  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::LiteIntCrusher*>(),
                        {"Recalculate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, min, max, smallest, biggest, bits);
}
inline ::StringW emotitron::Compression::LiteIntCrusher::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::emotitron::Compression::LiteIntCrusher*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::emotitron::Compression::LiteIntCrusher* emotitron::Compression::LiteIntCrusher::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::emotitron::Compression::LiteIntCrusher*>());
}
inline ::emotitron::Compression::LiteIntCrusher* emotitron::Compression::LiteIntCrusher::New_ctor(::emotitron::Compression::LiteIntCompressType  comType, int32_t  min, int32_t  max)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::emotitron::Compression::LiteIntCrusher*>(comType, min, max));
}
// Ctor Parameters []
constexpr ::emotitron::Compression::LiteIntCrusher::LiteIntCrusher()   {
}
