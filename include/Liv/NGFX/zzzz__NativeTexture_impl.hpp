#pragma once
// IWYU pragma private; include "Liv/NGFX/NativeTexture.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/NGFX/zzzz__NativeTexture_def.hpp"
#include "Liv/NGFX/zzzz__NativeTexture_Format_def.hpp"
#include "Liv/NGFX/zzzz__NativeTexture_TextureCreateInfo_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
//  Writing Method size for method: ::Liv::NGFX::NativeTexture._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NGFX::NativeTexture::*)(::System::IntPtr, int32_t, int32_t, ::GlobalNamespace::NativeTexture_Format)>(&::Liv::NGFX::NativeTexture::_ctor)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x9cdb800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NativeTexture*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NativeTexture_Format>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NGFX::NativeTexture.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NGFX::NativeTexture::*)()>(&::Liv::NGFX::NativeTexture::Finalize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cdba90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::NGFX::NativeTexture*>(),
                    {::i2c::class_of<::Liv::NGFX::NativeTexture*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NGFX::NativeTexture.FormatToUnity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextureFormat (::Liv::NGFX::NativeTexture::*)(::GlobalNamespace::NativeTexture_Format)>(&::Liv::NGFX::NativeTexture::FormatToUnity)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9cdba2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NativeTexture*>(),
                        {"FormatToUnity", {}, {::i2c::type_of<::GlobalNamespace::NativeTexture_Format>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NGFX::NativeTexture.op_Implicit___UnityW___UnityEngine__Texture2D_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)(::Liv::NGFX::NativeTexture*)>(&::Liv::NGFX::NativeTexture::op_Implicit___UnityW___UnityEngine__Texture2D_)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9cdba98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NativeTexture*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Liv::NGFX::NativeTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NGFX::NativeTexture.get_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Liv::NGFX::NativeTexture::*)()>(&::Liv::NGFX::NativeTexture::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cdbaac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NativeTexture*>(),
                        {"get_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NGFX::NativeTexture.get_texture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::Liv::NGFX::NativeTexture::*)()>(&::Liv::NGFX::NativeTexture::get_texture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cdbab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NativeTexture*>(),
                        {"get_texture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NGFX::NativeTexture.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NGFX::NativeTexture::*)()>(&::Liv::NGFX::NativeTexture::Dispose)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x9cdbabc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NativeTexture*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Texture2D>& Liv::NGFX::NativeTexture::__cordl_internal_get_m_texture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_texture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& Liv::NGFX::NativeTexture::__cordl_internal_get_m_texture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_texture;
}
constexpr void Liv::NGFX::NativeTexture::__cordl_internal_set_m_texture(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_texture = value;
}
constexpr uint32_t& Liv::NGFX::NativeTexture::__cordl_internal_get_m_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_id;
}
constexpr uint32_t const& Liv::NGFX::NativeTexture::__cordl_internal_get_m_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_id;
}
constexpr void Liv::NGFX::NativeTexture::__cordl_internal_set_m_id(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_id = value;
}
constexpr bool& Liv::NGFX::NativeTexture::__cordl_internal_get_m_valid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_valid;
}
constexpr bool const& Liv::NGFX::NativeTexture::__cordl_internal_get_m_valid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_valid;
}
constexpr void Liv::NGFX::NativeTexture::__cordl_internal_set_m_valid(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_valid = value;
}
constexpr ::System::IntPtr& Liv::NGFX::NativeTexture::__cordl_internal_get_m_context()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_context;
}
constexpr ::System::IntPtr const& Liv::NGFX::NativeTexture::__cordl_internal_get_m_context() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_context;
}
constexpr void Liv::NGFX::NativeTexture::__cordl_internal_set_m_context(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_context = value;
}
inline void Liv::NGFX::NativeTexture::_ctor(::System::IntPtr  ctx, int32_t  width, int32_t  height, ::GlobalNamespace::NativeTexture_Format  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NativeTexture*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NativeTexture_Format>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx, width, height, format);
}
inline void Liv::NGFX::NativeTexture::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::NGFX::NativeTexture*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::TextureFormat Liv::NGFX::NativeTexture::FormatToUnity(::GlobalNamespace::NativeTexture_Format  fmt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NativeTexture*>(),
                        {"FormatToUnity", {}, {::i2c::type_of<::GlobalNamespace::NativeTexture_Format>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextureFormat>(this, ___internal_method, fmt);
}
inline ::UnityW<::UnityEngine::Texture2D> Liv::NGFX::NativeTexture::op_Implicit___UnityW___UnityEngine__Texture2D_(::Liv::NGFX::NativeTexture*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NativeTexture*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Liv::NGFX::NativeTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(nullptr, ___internal_method, o);
}
inline uint32_t Liv::NGFX::NativeTexture::get_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NativeTexture*>(),
                        {"get_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> Liv::NGFX::NativeTexture::get_texture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NativeTexture*>(),
                        {"get_texture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method);
}
inline void Liv::NGFX::NativeTexture::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NativeTexture*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::NGFX::NativeTexture* Liv::NGFX::NativeTexture::New_ctor(::System::IntPtr  ctx, int32_t  width, int32_t  height, ::GlobalNamespace::NativeTexture_Format  format)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::NGFX::NativeTexture*>(ctx, width, height, format));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::NGFX::NativeTexture::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::NGFX::NativeTexture::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::NGFX::NativeTexture::NativeTexture()   {
}
