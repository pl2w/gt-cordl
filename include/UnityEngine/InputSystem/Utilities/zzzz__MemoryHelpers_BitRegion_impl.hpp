#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/MemoryHelpers_BitRegion.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__MemoryHelpers_BitRegion_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MemoryHelpers_BitRegion.get_isEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MemoryHelpers_BitRegion::*)()>(&::GlobalNamespace::MemoryHelpers_BitRegion::get_isEmpty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaf3fe24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MemoryHelpers_BitRegion>(),
                        {"get_isEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MemoryHelpers_BitRegion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MemoryHelpers_BitRegion::*)(uint32_t, uint32_t)>(&::GlobalNamespace::MemoryHelpers_BitRegion::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf3fe34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MemoryHelpers_BitRegion>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MemoryHelpers_BitRegion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MemoryHelpers_BitRegion::*)(uint32_t, uint32_t, uint32_t)>(&::GlobalNamespace::MemoryHelpers_BitRegion::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaf3fe3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MemoryHelpers_BitRegion>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MemoryHelpers_BitRegion.Overlap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MemoryHelpers_BitRegion (::GlobalNamespace::MemoryHelpers_BitRegion::*)(::GlobalNamespace::MemoryHelpers_BitRegion)>(&::GlobalNamespace::MemoryHelpers_BitRegion::Overlap)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xaf3fe48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MemoryHelpers_BitRegion>(),
                        {"Overlap", {}, {::i2c::type_of<::GlobalNamespace::MemoryHelpers_BitRegion>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::MemoryHelpers_BitRegion::get_isEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MemoryHelpers_BitRegion>(),
                        {"get_isEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::MemoryHelpers_BitRegion::_ctor(uint32_t  bitOffset, uint32_t  sizeInBits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MemoryHelpers_BitRegion>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bitOffset, sizeInBits);
}
inline void GlobalNamespace::MemoryHelpers_BitRegion::_ctor(uint32_t  byteOffset, uint32_t  bitOffset, uint32_t  sizeInBits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MemoryHelpers_BitRegion>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, byteOffset, bitOffset, sizeInBits);
}
inline ::GlobalNamespace::MemoryHelpers_BitRegion GlobalNamespace::MemoryHelpers_BitRegion::Overlap(::GlobalNamespace::MemoryHelpers_BitRegion  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MemoryHelpers_BitRegion>(),
                        {"Overlap", {}, {::i2c::type_of<::GlobalNamespace::MemoryHelpers_BitRegion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MemoryHelpers_BitRegion>(*this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "bitOffset", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sizeInBits", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MemoryHelpers_BitRegion::MemoryHelpers_BitRegion(uint32_t  bitOffset, uint32_t  sizeInBits) noexcept  {
this->bitOffset = bitOffset;
this->sizeInBits = sizeInBits;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MemoryHelpers_BitRegion::MemoryHelpers_BitRegion()   {
}
