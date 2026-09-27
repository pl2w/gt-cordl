#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/MeshGenerator_BorderParams.hpp"
#include "UnityEngine/UIElements/zzzz__ColorPage_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshGenerator_BorderParams_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshBuilderNative_NativeBorderParams_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MeshGenerator_BorderParams.ToNativeParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MeshGenerator_BorderParams::*)(::by_ref<::GlobalNamespace::MeshBuilderNative_NativeBorderParams>)>(&::GlobalNamespace::MeshGenerator_BorderParams::ToNativeParams)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb7dd124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGenerator_BorderParams>(),
                        {"ToNativeParams", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::MeshBuilderNative_NativeBorderParams>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MeshGenerator_BorderParams::ToNativeParams(::by_ref<::GlobalNamespace::MeshBuilderNative_NativeBorderParams>  nativeBorderParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGenerator_BorderParams>(),
                        {"ToNativeParams", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::MeshBuilderNative_NativeBorderParams>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, nativeBorderParams);
}
// Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "playmodeTintColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "leftColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "topColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rightColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bottomColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "leftWidth", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "topWidth", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rightWidth", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bottomWidth", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "topLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "topRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bottomRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bottomLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "leftColorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "topColorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rightColorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bottomColorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MeshGenerator_BorderParams::MeshGenerator_BorderParams(::UnityEngine::Rect  rect, ::UnityEngine::Color  playmodeTintColor, ::UnityEngine::Color  leftColor, ::UnityEngine::Color  topColor, ::UnityEngine::Color  rightColor, ::UnityEngine::Color  bottomColor, float_t  leftWidth, float_t  topWidth, float_t  rightWidth, float_t  bottomWidth, ::UnityEngine::Vector2  topLeftRadius, ::UnityEngine::Vector2  topRightRadius, ::UnityEngine::Vector2  bottomRightRadius, ::UnityEngine::Vector2  bottomLeftRadius, ::UnityEngine::UIElements::ColorPage  leftColorPage, ::UnityEngine::UIElements::ColorPage  topColorPage, ::UnityEngine::UIElements::ColorPage  rightColorPage, ::UnityEngine::UIElements::ColorPage  bottomColorPage) noexcept  {
this->rect = rect;
this->playmodeTintColor = playmodeTintColor;
this->leftColor = leftColor;
this->topColor = topColor;
this->rightColor = rightColor;
this->bottomColor = bottomColor;
this->leftWidth = leftWidth;
this->topWidth = topWidth;
this->rightWidth = rightWidth;
this->bottomWidth = bottomWidth;
this->topLeftRadius = topLeftRadius;
this->topRightRadius = topRightRadius;
this->bottomRightRadius = bottomRightRadius;
this->bottomLeftRadius = bottomLeftRadius;
this->leftColorPage = leftColorPage;
this->topColorPage = topColorPage;
this->rightColorPage = rightColorPage;
this->bottomColorPage = bottomColorPage;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MeshGenerator_BorderParams::MeshGenerator_BorderParams()   {
}
