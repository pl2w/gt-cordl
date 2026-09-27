#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeAppendBuffer_Reader.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeAppendBuffer_Reader_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeAppendBuffer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UnsafeAppendBuffer_Reader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnsafeAppendBuffer_Reader::*)(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer>)>(&::GlobalNamespace::UnsafeAppendBuffer_Reader::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaf07994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnsafeAppendBuffer_Reader>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnsafeAppendBuffer_Reader.ReadNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::GlobalNamespace::UnsafeAppendBuffer_Reader::*)(int32_t)>(&::GlobalNamespace::UnsafeAppendBuffer_Reader::ReadNext)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaf079a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnsafeAppendBuffer_Reader>(),
                        {"ReadNext", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UnsafeAppendBuffer_Reader::_ctor(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnsafeAppendBuffer_Reader>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, buffer);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T GlobalNamespace::UnsafeAppendBuffer_Reader::ReadNext()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UnsafeAppendBuffer_Reader>(),
                    {"ReadNext", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
inline void* GlobalNamespace::UnsafeAppendBuffer_Reader::ReadNext(int32_t  structSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnsafeAppendBuffer_Reader>(),
                        {"ReadNext", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(*this, ___internal_method, structSize);
}
// Ctor Parameters [CppParam { name: "Ptr", ty: "uint8_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Size", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Offset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UnsafeAppendBuffer_Reader::UnsafeAppendBuffer_Reader(uint8_t*  Ptr, int32_t  Size, int32_t  Offset) noexcept  {
this->Ptr = Ptr;
this->Size = Size;
this->Offset = Offset;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnsafeAppendBuffer_Reader::UnsafeAppendBuffer_Reader()   {
}
