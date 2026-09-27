#pragma once
// IWYU pragma private; include "Liv/NGFX/NativeRenderBuffer_RenderBufferCreateInfo.hpp"
#include "Liv/NGFX/zzzz__EventType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_impl.hpp"
#include "Liv/NGFX/zzzz__NativeRenderBuffer_RenderBufferCreateInfo_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NativeRenderBuffer_RenderBufferCreateInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NativeRenderBuffer_RenderBufferCreateInfo::*)(::System::IntPtr, uint32_t, ::System::IntPtr, int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat)>(&::GlobalNamespace::NativeRenderBuffer_RenderBufferCreateInfo::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9cdbe7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeRenderBuffer_RenderBufferCreateInfo>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NativeRenderBuffer_RenderBufferCreateInfo.id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::NativeRenderBuffer_RenderBufferCreateInfo::*)()>(&::GlobalNamespace::NativeRenderBuffer_RenderBufferCreateInfo::id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cdc200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeRenderBuffer_RenderBufferCreateInfo>(),
                        {"id", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NativeRenderBuffer_RenderBufferCreateInfo::setStaticF_eventType(::Liv::NGFX::EventType  value)  {
::cordl_internals::setStaticField<::Liv::NGFX::EventType, "eventType", ::GlobalNamespace::NativeRenderBuffer_RenderBufferCreateInfo>(std::forward<::Liv::NGFX::EventType>(value));
}
inline ::Liv::NGFX::EventType GlobalNamespace::NativeRenderBuffer_RenderBufferCreateInfo::getStaticF_eventType()  {
return ::cordl_internals::getStaticField<::Liv::NGFX::EventType, "eventType", ::GlobalNamespace::NativeRenderBuffer_RenderBufferCreateInfo>();
}
inline void GlobalNamespace::NativeRenderBuffer_RenderBufferCreateInfo::_ctor(::System::IntPtr  ctx, uint32_t  id, ::System::IntPtr  handle, int32_t  width, int32_t  height, int32_t  mips, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeRenderBuffer_RenderBufferCreateInfo>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ctx, id, handle, width, height, mips, format);
}
inline uint32_t GlobalNamespace::NativeRenderBuffer_RenderBufferCreateInfo::id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeRenderBuffer_RenderBufferCreateInfo>(),
                        {"id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_context", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_handle", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_width", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_height", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_mips", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_format", ty: "::UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_out_id", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NativeRenderBuffer_RenderBufferCreateInfo::NativeRenderBuffer_RenderBufferCreateInfo(::System::IntPtr  m_context, ::System::IntPtr  m_handle, int32_t  m_width, int32_t  m_height, int32_t  m_mips, ::UnityEngine::Experimental::Rendering::GraphicsFormat  m_format, uint32_t  m_out_id) noexcept  {
this->m_context = m_context;
this->m_handle = m_handle;
this->m_width = m_width;
this->m_height = m_height;
this->m_mips = m_mips;
this->m_format = m_format;
this->m_out_id = m_out_id;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NativeRenderBuffer_RenderBufferCreateInfo::NativeRenderBuffer_RenderBufferCreateInfo()   {
}
