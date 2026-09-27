#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/TextureUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__TextureUtils_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::TextureUtils.RenderTextureToTexture2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RenderTexture*, ::UnityEngine::Texture2D*)>(&::Unity::XR::CoreUtils::TextureUtils::RenderTextureToTexture2D)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb3faac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TextureUtils*>(),
                        {"RenderTextureToTexture2D", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::XR::CoreUtils::TextureUtils::RenderTextureToTexture2D(::UnityEngine::RenderTexture*  renderTexture, ::UnityEngine::Texture2D*  texture)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TextureUtils*>(),
                        {"RenderTextureToTexture2D", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderTexture, texture);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::TextureUtils::TextureUtils()   {
}
