#pragma once
// IWYU pragma private; include "GlobalNamespace/TexFormatInfo.hpp"
#include "UnityEngine/zzzz__FilterMode_impl.hpp"
#include "UnityEngine/zzzz__TextureFormat_impl.hpp"
#include "GlobalNamespace/zzzz__TexFormatInfo_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TexFormatInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TexFormatInfo::*)(::UnityEngine::Texture2D*)>(&::GlobalNamespace::TexFormatInfo::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x56a7890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TexFormatInfo>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TexFormatInfo.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::TexFormatInfo::*)()>(&::GlobalNamespace::TexFormatInfo::ToString)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x56a7928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TexFormatInfo>(),
                    {::i2c::class_of<::GlobalNamespace::TexFormatInfo>(), 3}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TexFormatInfo::_ctor(::UnityEngine::Texture2D*  tex2d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TexFormatInfo>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, tex2d);
}
inline ::StringW GlobalNamespace::TexFormatInfo::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TexFormatInfo>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "format", ty: "::UnityEngine::TextureFormat", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "filterMode", ty: "::UnityEngine::FilterMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mipmapCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isLinearColor", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TexFormatInfo::TexFormatInfo(bool  isValid, int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  format, ::UnityEngine::FilterMode  filterMode, int32_t  mipmapCount, bool  isLinearColor) noexcept  {
this->isValid = isValid;
this->width = width;
this->height = height;
this->format = format;
this->filterMode = filterMode;
this->mipmapCount = mipmapCount;
this->isLinearColor = isLinearColor;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TexFormatInfo::TexFormatInfo()   {
}
