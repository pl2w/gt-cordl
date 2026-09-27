#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_LayerDesc.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_EyeTextureFormat_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_FovfPair_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_LayerLayout_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_OverlayShape_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_RectfPair_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Sizei_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_LayerDesc_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRPlugin_LayerDesc.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::OVRPlugin_LayerDesc::*)()>(&::GlobalNamespace::OVRPlugin_LayerDesc::ToString)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0xa60f2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRPlugin_LayerDesc>(),
                    {::i2c::class_of<::GlobalNamespace::OVRPlugin_LayerDesc>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::OVRPlugin_LayerDesc::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRPlugin_LayerDesc>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Shape", ty: "::GlobalNamespace::OVRPlugin_OverlayShape", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Layout", ty: "::GlobalNamespace::OVRPlugin_LayerLayout", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TextureSize", ty: "::GlobalNamespace::OVRPlugin_Sizei", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MipLevels", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SampleCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Format", ty: "::GlobalNamespace::OVRPlugin_EyeTextureFormat", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LayerFlags", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Fov", ty: "::GlobalNamespace::OVRPlugin_FovfPair", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "VisibleRect", ty: "::GlobalNamespace::OVRPlugin_RectfPair", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MaxViewportSize", ty: "::GlobalNamespace::OVRPlugin_Sizei", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DepthFormat", ty: "::GlobalNamespace::OVRPlugin_EyeTextureFormat", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MotionVectorFormat", ty: "::GlobalNamespace::OVRPlugin_EyeTextureFormat", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MotionVectorDepthFormat", ty: "::GlobalNamespace::OVRPlugin_EyeTextureFormat", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MotionVectorTextureSize", ty: "::GlobalNamespace::OVRPlugin_Sizei", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_LayerDesc::OVRPlugin_LayerDesc(::GlobalNamespace::OVRPlugin_OverlayShape  Shape, ::GlobalNamespace::OVRPlugin_LayerLayout  Layout, ::GlobalNamespace::OVRPlugin_Sizei  TextureSize, int32_t  MipLevels, int32_t  SampleCount, ::GlobalNamespace::OVRPlugin_EyeTextureFormat  Format, int32_t  LayerFlags, ::GlobalNamespace::OVRPlugin_FovfPair  Fov, ::GlobalNamespace::OVRPlugin_RectfPair  VisibleRect, ::GlobalNamespace::OVRPlugin_Sizei  MaxViewportSize, ::GlobalNamespace::OVRPlugin_EyeTextureFormat  DepthFormat, ::GlobalNamespace::OVRPlugin_EyeTextureFormat  MotionVectorFormat, ::GlobalNamespace::OVRPlugin_EyeTextureFormat  MotionVectorDepthFormat, ::GlobalNamespace::OVRPlugin_Sizei  MotionVectorTextureSize) noexcept  {
this->Shape = Shape;
this->Layout = Layout;
this->TextureSize = TextureSize;
this->MipLevels = MipLevels;
this->SampleCount = SampleCount;
this->Format = Format;
this->LayerFlags = LayerFlags;
this->Fov = Fov;
this->VisibleRect = VisibleRect;
this->MaxViewportSize = MaxViewportSize;
this->DepthFormat = DepthFormat;
this->MotionVectorFormat = MotionVectorFormat;
this->MotionVectorDepthFormat = MotionVectorDepthFormat;
this->MotionVectorTextureSize = MotionVectorTextureSize;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_LayerDesc::OVRPlugin_LayerDesc()   {
}
