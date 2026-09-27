#pragma once
// IWYU pragma private; include "Voxels/NativeCounter.hpp"
#include "Unity/Collections/zzzz__Allocator_impl.hpp"
#include "Voxels/zzzz__NativeCounter_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
//  Writing Method size for method: ::Voxels::NativeCounter.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Voxels::NativeCounter::*)()>(&::Voxels::NativeCounter::get_Count)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5dafd98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::NativeCounter>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::NativeCounter.set_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::NativeCounter::*)(int32_t)>(&::Voxels::NativeCounter::set_Count)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5dafda4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::NativeCounter>(),
                        {"set_Count", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::NativeCounter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::NativeCounter::*)(::Unity::Collections::Allocator)>(&::Voxels::NativeCounter::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5dafdb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::NativeCounter>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::NativeCounter.Increment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Voxels::NativeCounter::*)()>(&::Voxels::NativeCounter::Increment)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5dafb08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::NativeCounter>(),
                        {"Increment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::NativeCounter.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::NativeCounter::*)()>(&::Voxels::NativeCounter::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5dafde0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::NativeCounter>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Voxels::NativeCounter::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::NativeCounter>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Voxels::NativeCounter::set_Count(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::NativeCounter>(),
                        {"set_Count", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Voxels::NativeCounter::_ctor(::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::NativeCounter>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, allocator);
}
inline int32_t Voxels::NativeCounter::Increment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::NativeCounter>(),
                        {"Increment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Voxels::NativeCounter::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::NativeCounter>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Voxels::NativeCounter::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Voxels::NativeCounter::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_allocator", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_counter", ty: "int32_t*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Voxels::NativeCounter::NativeCounter(::Unity::Collections::Allocator  _allocator, int32_t*  _counter) noexcept  {
this->_allocator = _allocator;
this->_counter = _counter;
}
// Ctor Parameters []
constexpr ::Voxels::NativeCounter::NativeCounter()   {
}
