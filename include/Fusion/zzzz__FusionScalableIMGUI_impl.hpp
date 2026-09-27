#pragma once
// IWYU pragma private; include "Fusion/FusionScalableIMGUI.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__FusionScalableIMGUI_def.hpp"
#include "System/zzzz__ValueTuple_5_def.hpp"
#include "UnityEngine/zzzz__GUISkin_def.hpp"
//  Writing Method size for method: ::Fusion::FusionScalableIMGUI.InitializedGUIStyles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GUISkin*)>(&::Fusion::FusionScalableIMGUI::InitializedGUIStyles)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x60e5c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionScalableIMGUI*>(),
                        {"InitializedGUIStyles", {}, {::i2c::type_of<::UnityEngine::GUISkin*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionScalableIMGUI.GetScaledSkin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GUISkin> (*)(::UnityEngine::GUISkin*, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<float_t>)>(&::Fusion::FusionScalableIMGUI::GetScaledSkin)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x60e6058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionScalableIMGUI*>(),
                        {"GetScaledSkin", {}, {::i2c::type_of<::UnityEngine::GUISkin*>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionScalableIMGUI.ScaleGuiSkinToScreenHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_5<float_t,float_t,int32_t,int32_t,float_t> (*)()>(&::Fusion::FusionScalableIMGUI::ScaleGuiSkinToScreenHeight)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x60e614c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionScalableIMGUI*>(),
                        {"ScaleGuiSkinToScreenHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::FusionScalableIMGUI::setStaticF__scalableSkin(::UnityW<::UnityEngine::GUISkin>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::GUISkin>, "_scalableSkin", ::Fusion::FusionScalableIMGUI*>(std::forward<::UnityW<::UnityEngine::GUISkin>>(value));
}
inline ::UnityW<::UnityEngine::GUISkin> Fusion::FusionScalableIMGUI::getStaticF__scalableSkin()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::GUISkin>, "_scalableSkin", ::Fusion::FusionScalableIMGUI*>();
}
inline void Fusion::FusionScalableIMGUI::InitializedGUIStyles(::UnityEngine::GUISkin*  baseSkin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionScalableIMGUI*>(),
                        {"InitializedGUIStyles", {}, {::i2c::type_of<::UnityEngine::GUISkin*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, baseSkin);
}
inline ::UnityW<::UnityEngine::GUISkin> Fusion::FusionScalableIMGUI::GetScaledSkin(::UnityEngine::GUISkin*  baseSkin, ::by_ref<float_t>  height, ::by_ref<float_t>  width, ::by_ref<int32_t>  padding, ::by_ref<int32_t>  margin, ::by_ref<float_t>  boxLeft)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionScalableIMGUI*>(),
                        {"GetScaledSkin", {}, {::i2c::type_of<::UnityEngine::GUISkin*>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GUISkin>>(nullptr, ___internal_method, baseSkin, height, width, padding, margin, boxLeft);
}
inline ::System::ValueTuple_5<float_t,float_t,int32_t,int32_t,float_t> Fusion::FusionScalableIMGUI::ScaleGuiSkinToScreenHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionScalableIMGUI*>(),
                        {"ScaleGuiSkinToScreenHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_5<float_t,float_t,int32_t,int32_t,float_t>>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Fusion::FusionScalableIMGUI::FusionScalableIMGUI()   {
}
