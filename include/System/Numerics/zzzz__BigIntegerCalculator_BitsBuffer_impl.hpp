#pragma once
// IWYU pragma private; include "System/Numerics/BigIntegerCalculator_BitsBuffer.hpp"
#include "System/Numerics/zzzz__BigIntegerCalculator_BitsBuffer_def.hpp"
#include "System/Numerics/zzzz__BigIntegerCalculator_FastReducer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BigIntegerCalculator_BitsBuffer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BigIntegerCalculator_BitsBuffer::*)(int32_t, uint32_t)>(&::GlobalNamespace::BigIntegerCalculator_BitsBuffer::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa9fac84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BigIntegerCalculator_BitsBuffer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BigIntegerCalculator_BitsBuffer::*)(int32_t, ::ArrayW<uint32_t>)>(&::GlobalNamespace::BigIntegerCalculator_BitsBuffer::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa9fae40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BigIntegerCalculator_BitsBuffer.MultiplySelf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BigIntegerCalculator_BitsBuffer::*)(::by_ref<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>, ::by_ref<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>)>(&::GlobalNamespace::BigIntegerCalculator_BitsBuffer::MultiplySelf)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa9fb4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>(),
                        {"MultiplySelf", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BigIntegerCalculator_BitsBuffer.SquareSelf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BigIntegerCalculator_BitsBuffer::*)(::by_ref<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>)>(&::GlobalNamespace::BigIntegerCalculator_BitsBuffer::SquareSelf)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa9fb700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>(),
                        {"SquareSelf", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BigIntegerCalculator_BitsBuffer.Reduce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BigIntegerCalculator_BitsBuffer::*)(::by_ref<::GlobalNamespace::BigIntegerCalculator_FastReducer>)>(&::GlobalNamespace::BigIntegerCalculator_BitsBuffer::Reduce)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa9fb7c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>(),
                        {"Reduce", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BigIntegerCalculator_FastReducer>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BigIntegerCalculator_BitsBuffer.Reduce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BigIntegerCalculator_BitsBuffer::*)(::ArrayW<uint32_t>)>(&::GlobalNamespace::BigIntegerCalculator_BitsBuffer::Reduce)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa9fb624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>(),
                        {"Reduce", {}, {::i2c::type_of<::ArrayW<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BigIntegerCalculator_BitsBuffer.GetBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint32_t> (::GlobalNamespace::BigIntegerCalculator_BitsBuffer::*)()>(&::GlobalNamespace::BigIntegerCalculator_BitsBuffer::GetBits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa9fc390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>(),
                        {"GetBits", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BigIntegerCalculator_BitsBuffer.GetSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BigIntegerCalculator_BitsBuffer::*)()>(&::GlobalNamespace::BigIntegerCalculator_BitsBuffer::GetSize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa9fb024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>(),
                        {"GetSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BigIntegerCalculator_BitsBuffer.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BigIntegerCalculator_BitsBuffer::*)(::by_ref<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>, int32_t)>(&::GlobalNamespace::BigIntegerCalculator_BitsBuffer::Apply)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa9fc248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>(),
                        {"Apply", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BigIntegerCalculator_BitsBuffer::_ctor(int32_t  size, uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, size, value);
}
inline void GlobalNamespace::BigIntegerCalculator_BitsBuffer::_ctor(int32_t  size, ::ArrayW<uint32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, size, value);
}
inline void GlobalNamespace::BigIntegerCalculator_BitsBuffer::MultiplySelf(::by_ref<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>  value, ::by_ref<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>  temp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>(),
                        {"MultiplySelf", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, temp);
}
inline void GlobalNamespace::BigIntegerCalculator_BitsBuffer::SquareSelf(::by_ref<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>  temp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>(),
                        {"SquareSelf", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, temp);
}
inline void GlobalNamespace::BigIntegerCalculator_BitsBuffer::Reduce(::by_ref<::GlobalNamespace::BigIntegerCalculator_FastReducer>  reducer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>(),
                        {"Reduce", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BigIntegerCalculator_FastReducer>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reducer);
}
inline void GlobalNamespace::BigIntegerCalculator_BitsBuffer::Reduce(::ArrayW<uint32_t>  modulus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>(),
                        {"Reduce", {}, {::i2c::type_of<::ArrayW<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, modulus);
}
inline ::ArrayW<uint32_t> GlobalNamespace::BigIntegerCalculator_BitsBuffer::GetBits()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>(),
                        {"GetBits", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint32_t>>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::BigIntegerCalculator_BitsBuffer::GetSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>(),
                        {"GetSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::BigIntegerCalculator_BitsBuffer::Apply(::by_ref<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>  temp, int32_t  maxLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>(),
                        {"Apply", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, temp, maxLength);
}
// Ctor Parameters [CppParam { name: "_bits", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BigIntegerCalculator_BitsBuffer::BigIntegerCalculator_BitsBuffer(::ArrayW<uint32_t>  _bits, int32_t  _length) noexcept  {
this->_bits = _bits;
this->_length = _length;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BigIntegerCalculator_BitsBuffer::BigIntegerCalculator_BitsBuffer()   {
}
