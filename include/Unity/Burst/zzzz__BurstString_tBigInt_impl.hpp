#pragma once
// IWYU pragma private; include "Unity/Burst/BurstString_tBigInt.hpp"
#include "Unity/Burst/zzzz__BurstString_tBigInt__m_blocks_e__FixedBuffer_impl.hpp"
#include "Unity/Burst/zzzz__BurstString_tBigInt_def.hpp"
#include "Unity/Burst/zzzz__BurstString_tBigInt__m_blocks_e__FixedBuffer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BurstString_tBigInt.GetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BurstString_tBigInt::*)()>(&::GlobalNamespace::BurstString_tBigInt::GetLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae852e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstString_tBigInt>(),
                        {"GetLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstString_tBigInt.GetBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::BurstString_tBigInt::*)(int32_t)>(&::GlobalNamespace::BurstString_tBigInt::GetBlock)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xae84ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstString_tBigInt>(),
                        {"GetBlock", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstString_tBigInt.IsZero
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BurstString_tBigInt::*)()>(&::GlobalNamespace::BurstString_tBigInt::IsZero)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xae84bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstString_tBigInt>(),
                        {"IsZero", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstString_tBigInt.SetU64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstString_tBigInt::*)(uint64_t)>(&::GlobalNamespace::BurstString_tBigInt::SetU64)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xae84b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstString_tBigInt>(),
                        {"SetU64", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstString_tBigInt.SetU32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstString_tBigInt::*)(uint32_t)>(&::GlobalNamespace::BurstString_tBigInt::SetU32)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xae83b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstString_tBigInt>(),
                        {"SetU32", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::BurstString_tBigInt::GetLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstString_tBigInt>(),
                        {"GetLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline uint32_t GlobalNamespace::BurstString_tBigInt::GetBlock(int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstString_tBigInt>(),
                        {"GetBlock", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method, idx);
}
inline bool GlobalNamespace::BurstString_tBigInt::IsZero()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstString_tBigInt>(),
                        {"IsZero", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::BurstString_tBigInt::SetU64(uint64_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstString_tBigInt>(),
                        {"SetU64", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, val);
}
inline void GlobalNamespace::BurstString_tBigInt::SetU32(uint32_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstString_tBigInt>(),
                        {"SetU32", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, val);
}
// Ctor Parameters [CppParam { name: "m_length", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_blocks", ty: "::GlobalNamespace::tBigInt_BurstString__m_blocks_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BurstString_tBigInt::BurstString_tBigInt(int32_t  m_length, ::GlobalNamespace::tBigInt_BurstString__m_blocks_e__FixedBuffer  m_blocks) noexcept  {
this->m_length = m_length;
this->m_blocks = m_blocks;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BurstString_tBigInt::BurstString_tBigInt()   {
}
