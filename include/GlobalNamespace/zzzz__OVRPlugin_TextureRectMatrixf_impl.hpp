#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_TextureRectMatrixf.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_TextureRectMatrixf_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRPlugin_TextureRectMatrixf.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::OVRPlugin_TextureRectMatrixf::*)()>(&::GlobalNamespace::OVRPlugin_TextureRectMatrixf::ToString)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0xa60e540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRPlugin_TextureRectMatrixf>(),
                    {::i2c::class_of<::GlobalNamespace::OVRPlugin_TextureRectMatrixf>(), 3}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRPlugin_TextureRectMatrixf::setStaticF_zero(::GlobalNamespace::OVRPlugin_TextureRectMatrixf  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRPlugin_TextureRectMatrixf, "zero", ::GlobalNamespace::OVRPlugin_TextureRectMatrixf>(std::forward<::GlobalNamespace::OVRPlugin_TextureRectMatrixf>(value));
}
inline ::GlobalNamespace::OVRPlugin_TextureRectMatrixf GlobalNamespace::OVRPlugin_TextureRectMatrixf::getStaticF_zero()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRPlugin_TextureRectMatrixf, "zero", ::GlobalNamespace::OVRPlugin_TextureRectMatrixf>();
}
inline ::StringW GlobalNamespace::OVRPlugin_TextureRectMatrixf::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRPlugin_TextureRectMatrixf>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "leftRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rightRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "leftScaleBias", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rightScaleBias", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_TextureRectMatrixf::OVRPlugin_TextureRectMatrixf(::UnityEngine::Rect  leftRect, ::UnityEngine::Rect  rightRect, ::UnityEngine::Vector4  leftScaleBias, ::UnityEngine::Vector4  rightScaleBias) noexcept  {
this->leftRect = leftRect;
this->rightRect = rightRect;
this->leftScaleBias = leftScaleBias;
this->rightScaleBias = rightScaleBias;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_TextureRectMatrixf::OVRPlugin_TextureRectMatrixf()   {
}
