#pragma once
// IWYU pragma private; include "Photon/Voice/ImageBufferNativeGCHandleSinglePlane.hpp"
#include "Photon/Voice/zzzz__ImageBufferNative_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "Photon/Voice/zzzz__ImageBufferNativeGCHandleSinglePlane_def.hpp"
#include "Photon/Voice/zzzz__ImageBufferInfo_def.hpp"
#include "Photon/Voice/zzzz__ImageBufferNativePool_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Photon::Voice::ImageBufferNativeGCHandleSinglePlane._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::ImageBufferNativeGCHandleSinglePlane::*)(::Photon::Voice::ImageBufferNativePool_1<::Photon::Voice::ImageBufferNativeGCHandleSinglePlane*>*, ::Photon::Voice::ImageBufferInfo)>(&::Photon::Voice::ImageBufferNativeGCHandleSinglePlane::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xa753cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ImageBufferNativeGCHandleSinglePlane*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::ImageBufferNativePool_1<::Photon::Voice::ImageBufferNativeGCHandleSinglePlane*>*>(), ::i2c::type_of<::Photon::Voice::ImageBufferInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::ImageBufferNativeGCHandleSinglePlane.PinPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::ImageBufferNativeGCHandleSinglePlane::*)(::ArrayW<uint8_t>)>(&::Photon::Voice::ImageBufferNativeGCHandleSinglePlane::PinPlane)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa753e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ImageBufferNativeGCHandleSinglePlane*>(),
                        {"PinPlane", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::ImageBufferNativeGCHandleSinglePlane.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::ImageBufferNativeGCHandleSinglePlane::*)()>(&::Photon::Voice::ImageBufferNativeGCHandleSinglePlane::Release)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa753e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::ImageBufferNativeGCHandleSinglePlane*>(),
                    {::i2c::class_of<::Photon::Voice::ImageBufferNativeGCHandleSinglePlane*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::ImageBufferNativeGCHandleSinglePlane.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::ImageBufferNativeGCHandleSinglePlane::*)()>(&::Photon::Voice::ImageBufferNativeGCHandleSinglePlane::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa753e98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::ImageBufferNativeGCHandleSinglePlane*>(),
                    {::i2c::class_of<::Photon::Voice::ImageBufferNativeGCHandleSinglePlane*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr ::Photon::Voice::ImageBufferNativePool_1<::Photon::Voice::ImageBufferNativeGCHandleSinglePlane*>*& Photon::Voice::ImageBufferNativeGCHandleSinglePlane::__cordl_internal_get_pool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pool;
}
constexpr ::Photon::Voice::ImageBufferNativePool_1<::Photon::Voice::ImageBufferNativeGCHandleSinglePlane*>* const& Photon::Voice::ImageBufferNativeGCHandleSinglePlane::__cordl_internal_get_pool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pool;
}
constexpr void Photon::Voice::ImageBufferNativeGCHandleSinglePlane::__cordl_internal_set_pool(::Photon::Voice::ImageBufferNativePool_1<::Photon::Voice::ImageBufferNativeGCHandleSinglePlane*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pool = value;
}
constexpr ::System::Runtime::InteropServices::GCHandle& Photon::Voice::ImageBufferNativeGCHandleSinglePlane::__cordl_internal_get_planeHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___planeHandle;
}
constexpr ::System::Runtime::InteropServices::GCHandle const& Photon::Voice::ImageBufferNativeGCHandleSinglePlane::__cordl_internal_get_planeHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___planeHandle;
}
constexpr void Photon::Voice::ImageBufferNativeGCHandleSinglePlane::__cordl_internal_set_planeHandle(::System::Runtime::InteropServices::GCHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___planeHandle = value;
}
inline void Photon::Voice::ImageBufferNativeGCHandleSinglePlane::_ctor(::Photon::Voice::ImageBufferNativePool_1<::Photon::Voice::ImageBufferNativeGCHandleSinglePlane*>*  pool, ::Photon::Voice::ImageBufferInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ImageBufferNativeGCHandleSinglePlane*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::ImageBufferNativePool_1<::Photon::Voice::ImageBufferNativeGCHandleSinglePlane*>*>(), ::i2c::type_of<::Photon::Voice::ImageBufferInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pool, info);
}
inline void Photon::Voice::ImageBufferNativeGCHandleSinglePlane::PinPlane(::ArrayW<uint8_t>  plane)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ImageBufferNativeGCHandleSinglePlane*>(),
                        {"PinPlane", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, plane);
}
inline void Photon::Voice::ImageBufferNativeGCHandleSinglePlane::Release()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::ImageBufferNativeGCHandleSinglePlane*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::ImageBufferNativeGCHandleSinglePlane::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::ImageBufferNativeGCHandleSinglePlane*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::ImageBufferNativeGCHandleSinglePlane* Photon::Voice::ImageBufferNativeGCHandleSinglePlane::New_ctor(::Photon::Voice::ImageBufferNativePool_1<::Photon::Voice::ImageBufferNativeGCHandleSinglePlane*>*  pool, ::Photon::Voice::ImageBufferInfo  info)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::ImageBufferNativeGCHandleSinglePlane*>(pool, info));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Photon::Voice::ImageBufferNativeGCHandleSinglePlane::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Photon::Voice::ImageBufferNativeGCHandleSinglePlane::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Voice::ImageBufferNativeGCHandleSinglePlane::ImageBufferNativeGCHandleSinglePlane()   {
}
