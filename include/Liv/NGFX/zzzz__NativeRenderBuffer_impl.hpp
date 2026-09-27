#pragma once
// IWYU pragma private; include "Liv/NGFX/NativeRenderBuffer.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__RenderBuffer_impl.hpp"
#include "Liv/NGFX/zzzz__NativeRenderBuffer_def.hpp"
#include "Liv/NGFX/zzzz__NativeRenderBuffer_Format_def.hpp"
#include "Liv/NGFX/zzzz__NativeRenderBuffer_RenderBufferCreateInfo_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/zzzz__RenderBuffer_def.hpp"
//  Writing Method size for method: ::Liv::NGFX::NativeRenderBuffer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NGFX::NativeRenderBuffer::*)(::System::IntPtr, ::UnityEngine::RenderBuffer, int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat)>(&::Liv::NGFX::NativeRenderBuffer::_ctor)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x9cdbc9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NativeRenderBuffer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::RenderBuffer>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NGFX::NativeRenderBuffer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NGFX::NativeRenderBuffer::*)(::System::IntPtr, ::UnityEngine::RenderBuffer, ::System::IntPtr, int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat)>(&::Liv::NGFX::NativeRenderBuffer::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x9cdbe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NativeRenderBuffer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::RenderBuffer>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NGFX::NativeRenderBuffer.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NGFX::NativeRenderBuffer::*)()>(&::Liv::NGFX::NativeRenderBuffer::Finalize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cdc060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::NGFX::NativeRenderBuffer*>(),
                    {::i2c::class_of<::Liv::NGFX::NativeRenderBuffer*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NGFX::NativeRenderBuffer.op_Implicit___UnityEngine__RenderBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderBuffer (*)(::Liv::NGFX::NativeRenderBuffer*)>(&::Liv::NGFX::NativeRenderBuffer::op_Implicit___UnityEngine__RenderBuffer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9cdc068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NativeRenderBuffer*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Liv::NGFX::NativeRenderBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NGFX::NativeRenderBuffer.get_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Liv::NGFX::NativeRenderBuffer::*)()>(&::Liv::NGFX::NativeRenderBuffer::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cdc080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NativeRenderBuffer*>(),
                        {"get_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NGFX::NativeRenderBuffer.get_buffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderBuffer (::Liv::NGFX::NativeRenderBuffer::*)()>(&::Liv::NGFX::NativeRenderBuffer::get_buffer)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cdc088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NativeRenderBuffer*>(),
                        {"get_buffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NGFX::NativeRenderBuffer.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NGFX::NativeRenderBuffer::*)()>(&::Liv::NGFX::NativeRenderBuffer::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x9cdc094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NativeRenderBuffer*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::RenderBuffer& Liv::NGFX::NativeRenderBuffer::__cordl_internal_get_m_buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_buffer;
}
constexpr ::UnityEngine::RenderBuffer const& Liv::NGFX::NativeRenderBuffer::__cordl_internal_get_m_buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_buffer;
}
constexpr void Liv::NGFX::NativeRenderBuffer::__cordl_internal_set_m_buffer(::UnityEngine::RenderBuffer  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_buffer = value;
}
constexpr uint32_t& Liv::NGFX::NativeRenderBuffer::__cordl_internal_get_m_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_id;
}
constexpr uint32_t const& Liv::NGFX::NativeRenderBuffer::__cordl_internal_get_m_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_id;
}
constexpr void Liv::NGFX::NativeRenderBuffer::__cordl_internal_set_m_id(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_id = value;
}
constexpr int32_t& Liv::NGFX::NativeRenderBuffer::__cordl_internal_get_m_mips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_mips;
}
constexpr int32_t const& Liv::NGFX::NativeRenderBuffer::__cordl_internal_get_m_mips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_mips;
}
constexpr void Liv::NGFX::NativeRenderBuffer::__cordl_internal_set_m_mips(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_mips = value;
}
constexpr bool& Liv::NGFX::NativeRenderBuffer::__cordl_internal_get_m_valid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_valid;
}
constexpr bool const& Liv::NGFX::NativeRenderBuffer::__cordl_internal_get_m_valid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_valid;
}
constexpr void Liv::NGFX::NativeRenderBuffer::__cordl_internal_set_m_valid(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_valid = value;
}
constexpr ::System::IntPtr& Liv::NGFX::NativeRenderBuffer::__cordl_internal_get_m_context()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_context;
}
constexpr ::System::IntPtr const& Liv::NGFX::NativeRenderBuffer::__cordl_internal_get_m_context() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_context;
}
constexpr void Liv::NGFX::NativeRenderBuffer::__cordl_internal_set_m_context(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_context = value;
}
inline void Liv::NGFX::NativeRenderBuffer::_ctor(::System::IntPtr  ctx, ::UnityEngine::RenderBuffer  rb, int32_t  width, int32_t  height, int32_t  mips, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NativeRenderBuffer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::RenderBuffer>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx, rb, width, height, mips, format);
}
inline void Liv::NGFX::NativeRenderBuffer::_ctor(::System::IntPtr  ctx, ::UnityEngine::RenderBuffer  rb, ::System::IntPtr  texturePtr, int32_t  width, int32_t  height, int32_t  mips, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NativeRenderBuffer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::RenderBuffer>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx, rb, texturePtr, width, height, mips, format);
}
inline void Liv::NGFX::NativeRenderBuffer::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::NGFX::NativeRenderBuffer*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::RenderBuffer Liv::NGFX::NativeRenderBuffer::op_Implicit___UnityEngine__RenderBuffer(::Liv::NGFX::NativeRenderBuffer*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NativeRenderBuffer*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Liv::NGFX::NativeRenderBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderBuffer>(nullptr, ___internal_method, o);
}
inline uint32_t Liv::NGFX::NativeRenderBuffer::get_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NativeRenderBuffer*>(),
                        {"get_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline ::UnityEngine::RenderBuffer Liv::NGFX::NativeRenderBuffer::get_buffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NativeRenderBuffer*>(),
                        {"get_buffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderBuffer>(this, ___internal_method);
}
inline void Liv::NGFX::NativeRenderBuffer::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NativeRenderBuffer*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::NGFX::NativeRenderBuffer* Liv::NGFX::NativeRenderBuffer::New_ctor(::System::IntPtr  ctx, ::UnityEngine::RenderBuffer  rb, int32_t  width, int32_t  height, int32_t  mips, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::NGFX::NativeRenderBuffer*>(ctx, rb, width, height, mips, format));
}
inline ::Liv::NGFX::NativeRenderBuffer* Liv::NGFX::NativeRenderBuffer::New_ctor(::System::IntPtr  ctx, ::UnityEngine::RenderBuffer  rb, ::System::IntPtr  texturePtr, int32_t  width, int32_t  height, int32_t  mips, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::NGFX::NativeRenderBuffer*>(ctx, rb, texturePtr, width, height, mips, format));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::NGFX::NativeRenderBuffer::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::NGFX::NativeRenderBuffer::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::NGFX::NativeRenderBuffer::NativeRenderBuffer()   {
}
