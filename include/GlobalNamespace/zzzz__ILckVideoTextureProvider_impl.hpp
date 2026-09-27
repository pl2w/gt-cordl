#pragma once
// IWYU pragma private; include "GlobalNamespace/ILckVideoTextureProvider.hpp"
#include "GlobalNamespace/zzzz__ILckVideoTextureProvider_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ILckVideoTextureProvider.get_CameraTrackTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::GlobalNamespace::ILckVideoTextureProvider::*)()>(&::GlobalNamespace::ILckVideoTextureProvider::get_CameraTrackTexture)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ILckVideoTextureProvider*>(),
                    {::i2c::class_of<::GlobalNamespace::ILckVideoTextureProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::RenderTexture> GlobalNamespace::ILckVideoTextureProvider::get_CameraTrackTexture()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ILckVideoTextureProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method);
}
