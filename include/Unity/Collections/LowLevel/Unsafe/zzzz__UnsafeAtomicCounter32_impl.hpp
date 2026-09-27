#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeAtomicCounter32.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeAtomicCounter32_def.hpp"
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32::*)(void*)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf079f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32>(),
                        {".ctor", {}, {::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32::*)(int32_t)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32::Add)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xaf079f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32>(),
                        {"Add", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32::_ctor(void*  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32>(),
                        {".ctor", {}, {::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32::Add(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32>(),
                        {"Add", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "Counter", ty: "int32_t*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32::UnsafeAtomicCounter32(int32_t*  Counter) noexcept  {
this->Counter = Counter;
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32::UnsafeAtomicCounter32()   {
}
