#pragma once
// IWYU pragma private; include "Liv/NGFX/NativeTexture_TextureCreateInfo.hpp"
#include "Liv/NGFX/zzzz__EventType_impl.hpp"
#include "Liv/NGFX/zzzz__NativeTexture_Format_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Liv/NGFX/zzzz__NativeTexture_TextureCreateInfo_def.hpp"
#include "Liv/NGFX/zzzz__NativeTexture_Format_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NativeTexture_TextureCreateInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NativeTexture_TextureCreateInfo::*)(::System::IntPtr, uint32_t, ::System::IntPtr, int32_t, int32_t, ::GlobalNamespace::NativeTexture_Format)>(&::GlobalNamespace::NativeTexture_TextureCreateInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9cdba80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeTexture_TextureCreateInfo>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NativeTexture_Format>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NativeTexture_TextureCreateInfo.id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::NativeTexture_TextureCreateInfo::*)()>(&::GlobalNamespace::NativeTexture_TextureCreateInfo::id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cdbc48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeTexture_TextureCreateInfo>(),
                        {"id", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NativeTexture_TextureCreateInfo::setStaticF_eventType(::Liv::NGFX::EventType  value)  {
::cordl_internals::setStaticField<::Liv::NGFX::EventType, "eventType", ::GlobalNamespace::NativeTexture_TextureCreateInfo>(std::forward<::Liv::NGFX::EventType>(value));
}
inline ::Liv::NGFX::EventType GlobalNamespace::NativeTexture_TextureCreateInfo::getStaticF_eventType()  {
return ::cordl_internals::getStaticField<::Liv::NGFX::EventType, "eventType", ::GlobalNamespace::NativeTexture_TextureCreateInfo>();
}
inline void GlobalNamespace::NativeTexture_TextureCreateInfo::_ctor(::System::IntPtr  ctx, uint32_t  id, ::System::IntPtr  handle, int32_t  width, int32_t  height, ::GlobalNamespace::NativeTexture_Format  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeTexture_TextureCreateInfo>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NativeTexture_Format>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ctx, id, handle, width, height, format);
}
inline uint32_t GlobalNamespace::NativeTexture_TextureCreateInfo::id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeTexture_TextureCreateInfo>(),
                        {"id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_context", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_handle", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_width", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_height", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_format", ty: "::GlobalNamespace::NativeTexture_Format", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_out_id", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NativeTexture_TextureCreateInfo::NativeTexture_TextureCreateInfo(::System::IntPtr  m_context, ::System::IntPtr  m_handle, int32_t  m_width, int32_t  m_height, ::GlobalNamespace::NativeTexture_Format  m_format, uint32_t  m_out_id) noexcept  {
this->m_context = m_context;
this->m_handle = m_handle;
this->m_width = m_width;
this->m_height = m_height;
this->m_format = m_format;
this->m_out_id = m_out_id;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NativeTexture_TextureCreateInfo::NativeTexture_TextureCreateInfo()   {
}
