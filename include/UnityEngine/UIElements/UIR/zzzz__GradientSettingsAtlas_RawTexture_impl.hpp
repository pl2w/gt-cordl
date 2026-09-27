#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/GradientSettingsAtlas_RawTexture.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__GradientSettingsAtlas_RawTexture_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GradientSettingsAtlas_RawTexture.WriteRawInt2Packed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GradientSettingsAtlas_RawTexture::*)(int32_t, int32_t, int32_t, int32_t)>(&::GlobalNamespace::GradientSettingsAtlas_RawTexture::WriteRawInt2Packed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb7d7cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GradientSettingsAtlas_RawTexture>(),
                        {"WriteRawInt2Packed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GradientSettingsAtlas_RawTexture.WriteRawFloat4Packed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GradientSettingsAtlas_RawTexture::*)(float_t, float_t, float_t, float_t, int32_t, int32_t)>(&::GlobalNamespace::GradientSettingsAtlas_RawTexture::WriteRawFloat4Packed)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb7d7c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GradientSettingsAtlas_RawTexture>(),
                        {"WriteRawFloat4Packed", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GradientSettingsAtlas_RawTexture::WriteRawInt2Packed(int32_t  v0, int32_t  v1, int32_t  destX, int32_t  destY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GradientSettingsAtlas_RawTexture>(),
                        {"WriteRawInt2Packed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v0, v1, destX, destY);
}
inline void GlobalNamespace::GradientSettingsAtlas_RawTexture::WriteRawFloat4Packed(float_t  f0, float_t  f1, float_t  f2, float_t  f3, int32_t  destX, int32_t  destY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GradientSettingsAtlas_RawTexture>(),
                        {"WriteRawFloat4Packed", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, f0, f1, f2, f3, destX, destY);
}
// Ctor Parameters [CppParam { name: "rgba", ty: "::ArrayW<::UnityEngine::Color32>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GradientSettingsAtlas_RawTexture::GradientSettingsAtlas_RawTexture(::ArrayW<::UnityEngine::Color32>  rgba, int32_t  width, int32_t  height) noexcept  {
this->rgba = rgba;
this->width = width;
this->height = height;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GradientSettingsAtlas_RawTexture::GradientSettingsAtlas_RawTexture()   {
}
