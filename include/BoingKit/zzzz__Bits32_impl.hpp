#pragma once
// IWYU pragma private; include "BoingKit/Bits32.hpp"
#include "BoingKit/zzzz__Bits32_def.hpp"
//  Writing Method size for method: ::BoingKit::Bits32.get_IntValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BoingKit::Bits32::*)()>(&::BoingKit::Bits32::get_IntValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2ad64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Bits32>(),
                        {"get_IntValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Bits32._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::Bits32::*)(int32_t)>(&::BoingKit::Bits32::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2ad6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Bits32>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Bits32.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::Bits32::*)()>(&::BoingKit::Bits32::Clear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e21910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Bits32>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Bits32.SetBit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::Bits32::*)(int32_t, bool)>(&::BoingKit::Bits32::SetBit)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e2ad74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Bits32>(),
                        {"SetBit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Bits32.IsBitSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BoingKit::Bits32::*)(int32_t)>(&::BoingKit::Bits32::IsBitSet)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e25cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Bits32>(),
                        {"IsBitSet", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t BoingKit::Bits32::get_IntValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Bits32>(),
                        {"get_IntValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void BoingKit::Bits32::_ctor(int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Bits32>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bits);
}
inline void BoingKit::Bits32::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Bits32>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BoingKit::Bits32::SetBit(int32_t  index, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Bits32>(),
                        {"SetBit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline bool BoingKit::Bits32::IsBitSet(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Bits32>(),
                        {"IsBitSet", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index);
}
// Ctor Parameters [CppParam { name: "m_bits", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::BoingKit::Bits32::Bits32(int32_t  m_bits) noexcept  {
this->m_bits = m_bits;
}
// Ctor Parameters []
constexpr ::BoingKit::Bits32::Bits32()   {
}
