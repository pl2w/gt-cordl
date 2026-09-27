#pragma once
// IWYU pragma private; include "Photon/Voice/ImageBufferNativeAlloc.hpp"
#include "Photon/Voice/zzzz__ImageBufferNative_impl.hpp"
#include "Photon/Voice/zzzz__ImageBufferNativeAlloc_def.hpp"
#include "Photon/Voice/zzzz__ImageBufferInfo_def.hpp"
#include "Photon/Voice/zzzz__ImageBufferNativePool_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Photon::Voice::ImageBufferNativeAlloc._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::ImageBufferNativeAlloc::*)(::Photon::Voice::ImageBufferNativePool_1<::Photon::Voice::ImageBufferNativeAlloc*>*, ::Photon::Voice::ImageBufferInfo)>(&::Photon::Voice::ImageBufferNativeAlloc::_ctor)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xa7539fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ImageBufferNativeAlloc*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::ImageBufferNativePool_1<::Photon::Voice::ImageBufferNativeAlloc*>*>(), ::i2c::type_of<::Photon::Voice::ImageBufferInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::ImageBufferNativeAlloc.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::ImageBufferNativeAlloc::*)()>(&::Photon::Voice::ImageBufferNativeAlloc::Release)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa753bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::ImageBufferNativeAlloc*>(),
                    {::i2c::class_of<::Photon::Voice::ImageBufferNativeAlloc*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::ImageBufferNativeAlloc.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::ImageBufferNativeAlloc::*)()>(&::Photon::Voice::ImageBufferNativeAlloc::Dispose)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa753c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::ImageBufferNativeAlloc*>(),
                    {::i2c::class_of<::Photon::Voice::ImageBufferNativeAlloc*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr ::Photon::Voice::ImageBufferNativePool_1<::Photon::Voice::ImageBufferNativeAlloc*>*& Photon::Voice::ImageBufferNativeAlloc::__cordl_internal_get_pool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pool;
}
constexpr ::Photon::Voice::ImageBufferNativePool_1<::Photon::Voice::ImageBufferNativeAlloc*>* const& Photon::Voice::ImageBufferNativeAlloc::__cordl_internal_get_pool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pool;
}
constexpr void Photon::Voice::ImageBufferNativeAlloc::__cordl_internal_set_pool(::Photon::Voice::ImageBufferNativePool_1<::Photon::Voice::ImageBufferNativeAlloc*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pool = value;
}
inline void Photon::Voice::ImageBufferNativeAlloc::_ctor(::Photon::Voice::ImageBufferNativePool_1<::Photon::Voice::ImageBufferNativeAlloc*>*  pool, ::Photon::Voice::ImageBufferInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ImageBufferNativeAlloc*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::ImageBufferNativePool_1<::Photon::Voice::ImageBufferNativeAlloc*>*>(), ::i2c::type_of<::Photon::Voice::ImageBufferInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pool, info);
}
inline void Photon::Voice::ImageBufferNativeAlloc::Release()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::ImageBufferNativeAlloc*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::ImageBufferNativeAlloc::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::ImageBufferNativeAlloc*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::ImageBufferNativeAlloc* Photon::Voice::ImageBufferNativeAlloc::New_ctor(::Photon::Voice::ImageBufferNativePool_1<::Photon::Voice::ImageBufferNativeAlloc*>*  pool, ::Photon::Voice::ImageBufferInfo  info)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::ImageBufferNativeAlloc*>(pool, info));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Photon::Voice::ImageBufferNativeAlloc::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Photon::Voice::ImageBufferNativeAlloc::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Voice::ImageBufferNativeAlloc::ImageBufferNativeAlloc()   {
}
