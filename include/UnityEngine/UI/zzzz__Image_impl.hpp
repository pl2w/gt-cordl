#pragma once
// IWYU pragma private; include "UnityEngine/UI/Image.hpp"
#include "UnityEngine/UI/zzzz__Image_FillMethod_impl.hpp"
#include "UnityEngine/UI/zzzz__Image_Type_impl.hpp"
#include "UnityEngine/UI/zzzz__MaskableGraphic_impl.hpp"
#include "UnityEngine/zzzz__SecondarySpriteTexture_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/U2D/zzzz__SpriteAtlas_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutElement_def.hpp"
#include "UnityEngine/UI/zzzz__Image_FillMethod_def.hpp"
#include "UnityEngine/UI/zzzz__Image_Origin180_def.hpp"
#include "UnityEngine/UI/zzzz__Image_Origin360_def.hpp"
#include "UnityEngine/UI/zzzz__Image_Origin90_def.hpp"
#include "UnityEngine/UI/zzzz__Image_OriginHorizontal_def.hpp"
#include "UnityEngine/UI/zzzz__Image_OriginVertical_def.hpp"
#include "UnityEngine/UI/zzzz__Image_Type_def.hpp"
#include "UnityEngine/UI/zzzz__VertexHelper_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__CanvasRenderer_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__ICanvasRaycastFilter_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__SecondarySpriteTexture_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::Image.get_sprite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_sprite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb70de88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"get_sprite", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.set_sprite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Image::*)(::UnityEngine::Sprite*)>(&::UnityEngine::UI::Image::set_sprite)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0xb700f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"set_sprite", {}, {::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.DisableSpriteOptimizations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::DisableSpriteOptimizations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb70e098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"DisableSpriteOptimizations", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_overrideSprite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_overrideSprite)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb70e0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"get_overrideSprite", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.set_overrideSprite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Image::*)(::UnityEngine::Sprite*)>(&::UnityEngine::UI::Image::set_overrideSprite)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb70e11c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"set_overrideSprite", {}, {::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_activeSprite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_activeSprite)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb70e0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"get_activeSprite", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Image_Type (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb70e1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"get_type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.set_type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Image::*)(::GlobalNamespace::Image_Type)>(&::UnityEngine::UI::Image::set_type)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb701264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"set_type", {}, {::i2c::type_of<::GlobalNamespace::Image_Type>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_preserveAspect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_preserveAspect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb70e1ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"get_preserveAspect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.set_preserveAspect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Image::*)(bool)>(&::UnityEngine::UI::Image::set_preserveAspect)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb70e1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"set_preserveAspect", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_fillCenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_fillCenter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb70e234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"get_fillCenter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.set_fillCenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Image::*)(bool)>(&::UnityEngine::UI::Image::set_fillCenter)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb70e23c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"set_fillCenter", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_fillMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Image_FillMethod (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_fillMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb70e2bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"get_fillMethod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.set_fillMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Image::*)(::GlobalNamespace::Image_FillMethod)>(&::UnityEngine::UI::Image::set_fillMethod)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb70e2c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"set_fillMethod", {}, {::i2c::type_of<::GlobalNamespace::Image_FillMethod>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_fillAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_fillAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb70e33c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"get_fillAmount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.set_fillAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Image::*)(float_t)>(&::UnityEngine::UI::Image::set_fillAmount)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb70e344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"set_fillAmount", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_fillClockwise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_fillClockwise)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb70e3d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"get_fillClockwise", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.set_fillClockwise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Image::*)(bool)>(&::UnityEngine::UI::Image::set_fillClockwise)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb70e3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"set_fillClockwise", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_fillOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_fillOrigin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb70e460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"get_fillOrigin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.set_fillOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Image::*)(int32_t)>(&::UnityEngine::UI::Image::set_fillOrigin)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb70e468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"set_fillOrigin", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_eventAlphaThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_eventAlphaThreshold)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb70e4e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"get_eventAlphaThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.set_eventAlphaThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Image::*)(float_t)>(&::UnityEngine::UI::Image::set_eventAlphaThreshold)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb70e4f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"set_eventAlphaThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_alphaHitTestMinimumThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_alphaHitTestMinimumThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb70e644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"get_alphaHitTestMinimumThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.set_alphaHitTestMinimumThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Image::*)(float_t)>(&::UnityEngine::UI::Image::set_alphaHitTestMinimumThreshold)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xb70e504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"set_alphaHitTestMinimumThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_useSpriteMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_useSpriteMesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb70e64c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"get_useSpriteMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.set_useSpriteMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Image::*)(bool)>(&::UnityEngine::UI::Image::set_useSpriteMesh)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb70e654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"set_useSpriteMesh", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb70e6d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_defaultETC1GraphicMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)()>(&::UnityEngine::UI::Image::get_defaultETC1GraphicMaterial)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb70e714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"get_defaultETC1GraphicMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_mainTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_mainTexture)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xb70e800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UI::Image*>(),
                    {::i2c::class_of<::UnityEngine::UI::Image*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_hasBorder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_hasBorder)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb70e978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"get_hasBorder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_pixelsPerUnitMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_pixelsPerUnitMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb70ea30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"get_pixelsPerUnitMultiplier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.set_pixelsPerUnitMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Image::*)(float_t)>(&::UnityEngine::UI::Image::set_pixelsPerUnitMultiplier)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb70ea38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"set_pixelsPerUnitMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_pixelsPerUnit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_pixelsPerUnit)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb70ea5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"get_pixelsPerUnit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_multipliedPixelsPerUnit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_multipliedPixelsPerUnit)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb70eb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"get_multipliedPixelsPerUnit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_material
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_material)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xb70eb6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UI::Image*>(),
                    {::i2c::class_of<::UnityEngine::UI::Image*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.set_material
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Image::*)(::UnityEngine::Material*)>(&::UnityEngine::UI::Image::set_material)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb70ec98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UI::Image*>(),
                    {::i2c::class_of<::UnityEngine::UI::Image*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb70ec9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UI::Image*>(),
                    {::i2c::class_of<::UnityEngine::UI::Image*>(), 77}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb70eca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UI::Image*>(),
                    {::i2c::class_of<::UnityEngine::UI::Image*>(), 78}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.PreserveSpriteAspectRatio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Image::*)(::by_ref<::UnityEngine::Rect>, ::UnityEngine::Vector2)>(&::UnityEngine::UI::Image::PreserveSpriteAspectRatio)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb70ecf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"PreserveSpriteAspectRatio", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.GetDrawingDimensions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::UnityEngine::UI::Image::*)(bool)>(&::UnityEngine::UI::Image::GetDrawingDimensions)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0xb70ed90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"GetDrawingDimensions", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.SetNativeSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::SetNativeSize)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xb70f148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UI::Image*>(),
                    {::i2c::class_of<::UnityEngine::UI::Image*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.OnPopulateMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Image::*)(::UnityEngine::UI::VertexHelper*)>(&::UnityEngine::UI::Image::OnPopulateMesh)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xb70f288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UI::Image*>(),
                    {::i2c::class_of<::UnityEngine::UI::Image*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.TrackSprite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::TrackSprite)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb70dfac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"TrackSprite", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::OnEnable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb7116b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UI::Image*>(),
                    {::i2c::class_of<::UnityEngine::UI::Image*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::OnDisable)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb7116d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UI::Image*>(),
                    {::i2c::class_of<::UnityEngine::UI::Image*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_secondaryTextures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::SecondarySpriteTexture> (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_secondaryTextures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7117c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"get_secondaryTextures", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.ClearArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::ArrayW<::UnityEngine::SecondarySpriteTexture>>)>(&::UnityEngine::UI::Image::ClearArray)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb7117cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"ClearArray", {}, {::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::SecondarySpriteTexture>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.CheckSecondaryTexturesChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::Image::*)(::UnityEngine::Sprite*)>(&::UnityEngine::UI::Image::CheckSecondaryTexturesChanged)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb70de90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"CheckSecondaryTexturesChanged", {}, {::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.CheckSecondaryTexturesChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::Image::*)(::UnityEngine::Sprite*, ::by_ref<::ArrayW<::UnityEngine::SecondarySpriteTexture>>)>(&::UnityEngine::UI::Image::CheckSecondaryTexturesChanged)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xb71186c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"CheckSecondaryTexturesChanged", {}, {::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::SecondarySpriteTexture>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.SetSecondaryTextures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Image::*)(::UnityEngine::CanvasRenderer*)>(&::UnityEngine::UI::Image::SetSecondaryTextures)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xb711ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"SetSecondaryTextures", {}, {::i2c::type_of<::UnityEngine::CanvasRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.UpdateMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::UpdateMaterial)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xb711d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UI::Image*>(),
                    {::i2c::class_of<::UnityEngine::UI::Image*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.OnCanvasHierarchyChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::OnCanvasHierarchyChanged)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xb711e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UI::Image*>(),
                    {::i2c::class_of<::UnityEngine::UI::Image*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.GenerateSimpleSprite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Image::*)(::UnityEngine::UI::VertexHelper*, bool)>(&::UnityEngine::UI::Image::GenerateSimpleSprite)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0xb70f3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"GenerateSimpleSprite", {}, {::i2c::type_of<::UnityEngine::UI::VertexHelper*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.GenerateSprite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Image::*)(::UnityEngine::UI::VertexHelper*, bool)>(&::UnityEngine::UI::Image::GenerateSprite)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0xb70f67c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"GenerateSprite", {}, {::i2c::type_of<::UnityEngine::UI::VertexHelper*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.GenerateSlicedSprite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Image::*)(::UnityEngine::UI::VertexHelper*)>(&::UnityEngine::UI::Image::GenerateSlicedSprite)> {
  constexpr static std::size_t size = 0x5b4;
  constexpr static std::size_t addrs = 0xb70f964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"GenerateSlicedSprite", {}, {::i2c::type_of<::UnityEngine::UI::VertexHelper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.GenerateTiledSprite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Image::*)(::UnityEngine::UI::VertexHelper*)>(&::UnityEngine::UI::Image::GenerateTiledSprite)> {
  constexpr static std::size_t size = 0xd54;
  constexpr static std::size_t addrs = 0xb70ff18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"GenerateTiledSprite", {}, {::i2c::type_of<::UnityEngine::UI::VertexHelper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.AddQuad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UI::VertexHelper*, ::ArrayW<::UnityEngine::Vector3>, ::UnityEngine::Color32, ::ArrayW<::UnityEngine::Vector3>)>(&::UnityEngine::UI::Image::AddQuad)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb7121e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"AddQuad", {}, {::i2c::type_of<::UnityEngine::UI::VertexHelper*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.AddQuad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Color32, ::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::UnityEngine::UI::Image::AddQuad)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xb71209c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"AddQuad", {}, {::i2c::type_of<::UnityEngine::UI::VertexHelper*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.GetAdjustedBorders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::UnityEngine::UI::Image::*)(::UnityEngine::Vector4, ::UnityEngine::Rect)>(&::UnityEngine::UI::Image::GetAdjustedBorders)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xb711f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"GetAdjustedBorders", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.GenerateFilledSprite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Image::*)(::UnityEngine::UI::VertexHelper*, bool)>(&::UnityEngine::UI::Image::GenerateFilledSprite)> {
  constexpr static std::size_t size = 0x8e8;
  constexpr static std::size_t addrs = 0xb710c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"GenerateFilledSprite", {}, {::i2c::type_of<::UnityEngine::UI::VertexHelper*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.RadialCut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, float_t, bool, int32_t)>(&::UnityEngine::UI::Image::RadialCut)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb7122c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"RadialCut", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.RadialCut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Vector3>, float_t, float_t, bool, int32_t)>(&::UnityEngine::UI::Image::RadialCut)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0xb7123f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"RadialCut", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.CalculateLayoutInputHorizontal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::CalculateLayoutInputHorizontal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb7127e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UI::Image*>(),
                    {::i2c::class_of<::UnityEngine::UI::Image*>(), 79}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.CalculateLayoutInputVertical
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::CalculateLayoutInputVertical)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb7127e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UI::Image*>(),
                    {::i2c::class_of<::UnityEngine::UI::Image*>(), 80}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_minWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_minWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7127ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UI::Image*>(),
                    {::i2c::class_of<::UnityEngine::UI::Image*>(), 81}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_preferredWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_preferredWidth)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb7127f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UI::Image*>(),
                    {::i2c::class_of<::UnityEngine::UI::Image*>(), 82}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_flexibleWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_flexibleWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7128bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UI::Image*>(),
                    {::i2c::class_of<::UnityEngine::UI::Image*>(), 83}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_minHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_minHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7128c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UI::Image*>(),
                    {::i2c::class_of<::UnityEngine::UI::Image*>(), 84}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_preferredHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_preferredHeight)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb7128cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UI::Image*>(),
                    {::i2c::class_of<::UnityEngine::UI::Image*>(), 85}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_flexibleHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_flexibleHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb712994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UI::Image*>(),
                    {::i2c::class_of<::UnityEngine::UI::Image*>(), 86}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_layoutPriority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_layoutPriority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb71299c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UI::Image*>(),
                    {::i2c::class_of<::UnityEngine::UI::Image*>(), 87}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.IsRaycastLocationValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::Image::*)(::UnityEngine::Vector2, ::UnityEngine::Camera*)>(&::UnityEngine::UI::Image::IsRaycastLocationValid)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0xb7129a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UI::Image*>(),
                    {::i2c::class_of<::UnityEngine::UI::Image*>(), 88}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.MapCoordinate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UI::Image::*)(::UnityEngine::Vector2, ::UnityEngine::Rect)>(&::UnityEngine::UI::Image::MapCoordinate)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0xb712d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"MapCoordinate", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.RebuildImage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::U2D::SpriteAtlas*)>(&::UnityEngine::UI::Image::RebuildImage)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xb713014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"RebuildImage", {}, {::i2c::type_of<::UnityEngine::U2D::SpriteAtlas*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.TrackImage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UI::Image*)>(&::UnityEngine::UI::Image::TrackImage)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xb711554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"TrackImage", {}, {::i2c::type_of<::UnityEngine::UI::Image*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.UnTrackImage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UI::Image*)>(&::UnityEngine::UI::Image::UnTrackImage)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb711744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"UnTrackImage", {}, {::i2c::type_of<::UnityEngine::UI::Image*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.OnDidApplyAnimationProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::OnDidApplyAnimationProperties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb7131b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UI::Image*>(),
                    {::i2c::class_of<::UnityEngine::UI::Image*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image._set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::_set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb70df1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"<set_sprite>g__ResetAlphaHitThresholdIfNeeded|11_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image._set_sprite_g__SpriteSupportsAlphaHitTest_11_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::_set_sprite_g__SpriteSupportsAlphaHitTest_11_1)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xb713390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"<set_sprite>g__SpriteSupportsAlphaHitTest|11_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image._CheckSecondaryTexturesChanged_g__Compare_93_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::UnityEngine::SecondarySpriteTexture>, ::ArrayW<::UnityEngine::SecondarySpriteTexture>)>(&::UnityEngine::UI::Image::_CheckSecondaryTexturesChanged_g__Compare_93_0)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb711a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"<CheckSecondaryTexturesChanged>g__Compare|93_0", {}, {::i2c::type_of<::ArrayW<::UnityEngine::SecondarySpriteTexture>>(), ::i2c::type_of<::ArrayW<::UnityEngine::SecondarySpriteTexture>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Sprite>& UnityEngine::UI::Image::__cordl_internal_get_m_Sprite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Sprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& UnityEngine::UI::Image::__cordl_internal_get_m_Sprite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Sprite;
}
constexpr void UnityEngine::UI::Image::__cordl_internal_set_m_Sprite(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Sprite = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& UnityEngine::UI::Image::__cordl_internal_get_m_OverrideSprite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OverrideSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& UnityEngine::UI::Image::__cordl_internal_get_m_OverrideSprite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OverrideSprite;
}
constexpr void UnityEngine::UI::Image::__cordl_internal_set_m_OverrideSprite(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OverrideSprite = value;
}
constexpr ::GlobalNamespace::Image_Type& UnityEngine::UI::Image::__cordl_internal_get_m_Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Type;
}
constexpr ::GlobalNamespace::Image_Type const& UnityEngine::UI::Image::__cordl_internal_get_m_Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Type;
}
constexpr void UnityEngine::UI::Image::__cordl_internal_set_m_Type(::GlobalNamespace::Image_Type  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Type = value;
}
constexpr bool& UnityEngine::UI::Image::__cordl_internal_get_m_PreserveAspect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreserveAspect;
}
constexpr bool const& UnityEngine::UI::Image::__cordl_internal_get_m_PreserveAspect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreserveAspect;
}
constexpr void UnityEngine::UI::Image::__cordl_internal_set_m_PreserveAspect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreserveAspect = value;
}
constexpr bool& UnityEngine::UI::Image::__cordl_internal_get_m_FillCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FillCenter;
}
constexpr bool const& UnityEngine::UI::Image::__cordl_internal_get_m_FillCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FillCenter;
}
constexpr void UnityEngine::UI::Image::__cordl_internal_set_m_FillCenter(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FillCenter = value;
}
constexpr ::GlobalNamespace::Image_FillMethod& UnityEngine::UI::Image::__cordl_internal_get_m_FillMethod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FillMethod;
}
constexpr ::GlobalNamespace::Image_FillMethod const& UnityEngine::UI::Image::__cordl_internal_get_m_FillMethod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FillMethod;
}
constexpr void UnityEngine::UI::Image::__cordl_internal_set_m_FillMethod(::GlobalNamespace::Image_FillMethod  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FillMethod = value;
}
constexpr float_t& UnityEngine::UI::Image::__cordl_internal_get_m_FillAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FillAmount;
}
constexpr float_t const& UnityEngine::UI::Image::__cordl_internal_get_m_FillAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FillAmount;
}
constexpr void UnityEngine::UI::Image::__cordl_internal_set_m_FillAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FillAmount = value;
}
constexpr bool& UnityEngine::UI::Image::__cordl_internal_get_m_FillClockwise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FillClockwise;
}
constexpr bool const& UnityEngine::UI::Image::__cordl_internal_get_m_FillClockwise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FillClockwise;
}
constexpr void UnityEngine::UI::Image::__cordl_internal_set_m_FillClockwise(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FillClockwise = value;
}
constexpr int32_t& UnityEngine::UI::Image::__cordl_internal_get_m_FillOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FillOrigin;
}
constexpr int32_t const& UnityEngine::UI::Image::__cordl_internal_get_m_FillOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FillOrigin;
}
constexpr void UnityEngine::UI::Image::__cordl_internal_set_m_FillOrigin(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FillOrigin = value;
}
constexpr float_t& UnityEngine::UI::Image::__cordl_internal_get_m_AlphaHitTestMinimumThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AlphaHitTestMinimumThreshold;
}
constexpr float_t const& UnityEngine::UI::Image::__cordl_internal_get_m_AlphaHitTestMinimumThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AlphaHitTestMinimumThreshold;
}
constexpr void UnityEngine::UI::Image::__cordl_internal_set_m_AlphaHitTestMinimumThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AlphaHitTestMinimumThreshold = value;
}
constexpr bool& UnityEngine::UI::Image::__cordl_internal_get_m_Tracked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Tracked;
}
constexpr bool const& UnityEngine::UI::Image::__cordl_internal_get_m_Tracked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Tracked;
}
constexpr void UnityEngine::UI::Image::__cordl_internal_set_m_Tracked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Tracked = value;
}
constexpr bool& UnityEngine::UI::Image::__cordl_internal_get_m_UseSpriteMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseSpriteMesh;
}
constexpr bool const& UnityEngine::UI::Image::__cordl_internal_get_m_UseSpriteMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseSpriteMesh;
}
constexpr void UnityEngine::UI::Image::__cordl_internal_set_m_UseSpriteMesh(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UseSpriteMesh = value;
}
constexpr float_t& UnityEngine::UI::Image::__cordl_internal_get_m_PixelsPerUnitMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PixelsPerUnitMultiplier;
}
constexpr float_t const& UnityEngine::UI::Image::__cordl_internal_get_m_PixelsPerUnitMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PixelsPerUnitMultiplier;
}
constexpr void UnityEngine::UI::Image::__cordl_internal_set_m_PixelsPerUnitMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PixelsPerUnitMultiplier = value;
}
constexpr float_t& UnityEngine::UI::Image::__cordl_internal_get_m_CachedReferencePixelsPerUnit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedReferencePixelsPerUnit;
}
constexpr float_t const& UnityEngine::UI::Image::__cordl_internal_get_m_CachedReferencePixelsPerUnit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedReferencePixelsPerUnit;
}
constexpr void UnityEngine::UI::Image::__cordl_internal_set_m_CachedReferencePixelsPerUnit(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CachedReferencePixelsPerUnit = value;
}
constexpr ::ArrayW<::UnityEngine::SecondarySpriteTexture>& UnityEngine::UI::Image::__cordl_internal_get_m_SecondaryTextures()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SecondaryTextures;
}
constexpr ::ArrayW<::UnityEngine::SecondarySpriteTexture> const& UnityEngine::UI::Image::__cordl_internal_get_m_SecondaryTextures() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SecondaryTextures;
}
constexpr void UnityEngine::UI::Image::__cordl_internal_set_m_SecondaryTextures(::ArrayW<::UnityEngine::SecondarySpriteTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SecondaryTextures = value;
}
inline void UnityEngine::UI::Image::setStaticF_s_ETC1DefaultUI(::UnityW<::UnityEngine::Material>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "s_ETC1DefaultUI", ::UnityEngine::UI::Image*>(std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::UI::Image::getStaticF_s_ETC1DefaultUI()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "s_ETC1DefaultUI", ::UnityEngine::UI::Image*>();
}
inline void UnityEngine::UI::Image::setStaticF_s_TempNewSecondaryTextures(::ArrayW<::UnityEngine::SecondarySpriteTexture>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::SecondarySpriteTexture>, "s_TempNewSecondaryTextures", ::UnityEngine::UI::Image*>(std::forward<::ArrayW<::UnityEngine::SecondarySpriteTexture>>(value));
}
inline ::ArrayW<::UnityEngine::SecondarySpriteTexture> UnityEngine::UI::Image::getStaticF_s_TempNewSecondaryTextures()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::SecondarySpriteTexture>, "s_TempNewSecondaryTextures", ::UnityEngine::UI::Image*>();
}
inline void UnityEngine::UI::Image::setStaticF_s_VertScratch(::ArrayW<::UnityEngine::Vector2>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector2>, "s_VertScratch", ::UnityEngine::UI::Image*>(std::forward<::ArrayW<::UnityEngine::Vector2>>(value));
}
inline ::ArrayW<::UnityEngine::Vector2> UnityEngine::UI::Image::getStaticF_s_VertScratch()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector2>, "s_VertScratch", ::UnityEngine::UI::Image*>();
}
inline void UnityEngine::UI::Image::setStaticF_s_UVScratch(::ArrayW<::UnityEngine::Vector2>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector2>, "s_UVScratch", ::UnityEngine::UI::Image*>(std::forward<::ArrayW<::UnityEngine::Vector2>>(value));
}
inline ::ArrayW<::UnityEngine::Vector2> UnityEngine::UI::Image::getStaticF_s_UVScratch()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector2>, "s_UVScratch", ::UnityEngine::UI::Image*>();
}
inline void UnityEngine::UI::Image::setStaticF_s_Xy(::ArrayW<::UnityEngine::Vector3>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3>, "s_Xy", ::UnityEngine::UI::Image*>(std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3> UnityEngine::UI::Image::getStaticF_s_Xy()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3>, "s_Xy", ::UnityEngine::UI::Image*>();
}
inline void UnityEngine::UI::Image::setStaticF_s_Uv(::ArrayW<::UnityEngine::Vector3>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3>, "s_Uv", ::UnityEngine::UI::Image*>(std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3> UnityEngine::UI::Image::getStaticF_s_Uv()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3>, "s_Uv", ::UnityEngine::UI::Image*>();
}
inline void UnityEngine::UI::Image::setStaticF_m_TrackedTexturelessImages(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*, "m_TrackedTexturelessImages", ::UnityEngine::UI::Image*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* UnityEngine::UI::Image::getStaticF_m_TrackedTexturelessImages()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*, "m_TrackedTexturelessImages", ::UnityEngine::UI::Image*>();
}
inline void UnityEngine::UI::Image::setStaticF_s_Initialized(bool  value)  {
::cordl_internals::setStaticField<bool, "s_Initialized", ::UnityEngine::UI::Image*>(std::forward<bool>(value));
}
inline bool UnityEngine::UI::Image::getStaticF_s_Initialized()  {
return ::cordl_internals::getStaticField<bool, "s_Initialized", ::UnityEngine::UI::Image*>();
}
inline ::UnityW<::UnityEngine::Sprite> UnityEngine::UI::Image::get_sprite()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"get_sprite", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::set_sprite(::UnityEngine::Sprite*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"set_sprite", {}, {::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UI::Image::DisableSpriteOptimizations()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"DisableSpriteOptimizations", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Sprite> UnityEngine::UI::Image::get_overrideSprite()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"get_overrideSprite", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::set_overrideSprite(::UnityEngine::Sprite*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"set_overrideSprite", {}, {::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Sprite> UnityEngine::UI::Image::get_activeSprite()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"get_activeSprite", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(this, ___internal_method);
}
inline ::GlobalNamespace::Image_Type UnityEngine::UI::Image::get_type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"get_type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Image_Type>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::set_type(::GlobalNamespace::Image_Type  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"set_type", {}, {::i2c::type_of<::GlobalNamespace::Image_Type>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UI::Image::get_preserveAspect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"get_preserveAspect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::set_preserveAspect(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"set_preserveAspect", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UI::Image::get_fillCenter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"get_fillCenter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::set_fillCenter(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"set_fillCenter", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::Image_FillMethod UnityEngine::UI::Image::get_fillMethod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"get_fillMethod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Image_FillMethod>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::set_fillMethod(::GlobalNamespace::Image_FillMethod  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"set_fillMethod", {}, {::i2c::type_of<::GlobalNamespace::Image_FillMethod>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::Image::get_fillAmount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"get_fillAmount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::set_fillAmount(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"set_fillAmount", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UI::Image::get_fillClockwise()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"get_fillClockwise", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::set_fillClockwise(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"set_fillClockwise", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UI::Image::get_fillOrigin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"get_fillOrigin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::set_fillOrigin(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"set_fillOrigin", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::Image::get_eventAlphaThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"get_eventAlphaThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::set_eventAlphaThreshold(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"set_eventAlphaThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::Image::get_alphaHitTestMinimumThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"get_alphaHitTestMinimumThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::set_alphaHitTestMinimumThreshold(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"set_alphaHitTestMinimumThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UI::Image::get_useSpriteMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"get_useSpriteMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::set_useSpriteMesh(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"set_useSpriteMesh", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UI::Image::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::UI::Image::get_defaultETC1GraphicMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"get_defaultETC1GraphicMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::UI::Image::get_mainTexture()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UI::Image*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(this, ___internal_method);
}
inline bool UnityEngine::UI::Image::get_hasBorder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"get_hasBorder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t UnityEngine::UI::Image::get_pixelsPerUnitMultiplier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"get_pixelsPerUnitMultiplier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::set_pixelsPerUnitMultiplier(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"set_pixelsPerUnitMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::Image::get_pixelsPerUnit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"get_pixelsPerUnit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::UI::Image::get_multipliedPixelsPerUnit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"get_multipliedPixelsPerUnit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::UI::Image::get_material()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UI::Image*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::set_material(::UnityEngine::Material*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UI::Image*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UI::Image::OnBeforeSerialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UI::Image*>(), 77}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::OnAfterDeserialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UI::Image*>(), 78}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::PreserveSpriteAspectRatio(::by_ref<::UnityEngine::Rect>  rect, ::UnityEngine::Vector2  spriteSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"PreserveSpriteAspectRatio", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rect, spriteSize);
}
inline ::UnityEngine::Vector4 UnityEngine::UI::Image::GetDrawingDimensions(bool  shouldPreserveAspect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"GetDrawingDimensions", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method, shouldPreserveAspect);
}
inline void UnityEngine::UI::Image::SetNativeSize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UI::Image*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::OnPopulateMesh(::UnityEngine::UI::VertexHelper*  toFill)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UI::Image*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toFill);
}
inline void UnityEngine::UI::Image::TrackSprite()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"TrackSprite", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UI::Image*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UI::Image*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::SecondarySpriteTexture> UnityEngine::UI::Image::get_secondaryTextures()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"get_secondaryTextures", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::SecondarySpriteTexture>>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::ClearArray(::by_ref<::ArrayW<::UnityEngine::SecondarySpriteTexture>>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"ClearArray", {}, {::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::SecondarySpriteTexture>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array);
}
inline bool UnityEngine::UI::Image::CheckSecondaryTexturesChanged(::UnityEngine::Sprite*  sprite)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"CheckSecondaryTexturesChanged", {}, {::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sprite);
}
inline bool UnityEngine::UI::Image::CheckSecondaryTexturesChanged(::UnityEngine::Sprite*  sprite, ::by_ref<::ArrayW<::UnityEngine::SecondarySpriteTexture>>  newSecondaryTextures)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"CheckSecondaryTexturesChanged", {}, {::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::SecondarySpriteTexture>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sprite, newSecondaryTextures);
}
inline void UnityEngine::UI::Image::SetSecondaryTextures(::UnityEngine::CanvasRenderer*  renderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"SetSecondaryTextures", {}, {::i2c::type_of<::UnityEngine::CanvasRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer);
}
inline void UnityEngine::UI::Image::UpdateMaterial()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UI::Image*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::OnCanvasHierarchyChanged()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UI::Image*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::GenerateSimpleSprite(::UnityEngine::UI::VertexHelper*  vh, bool  lPreserveAspect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"GenerateSimpleSprite", {}, {::i2c::type_of<::UnityEngine::UI::VertexHelper*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vh, lPreserveAspect);
}
inline void UnityEngine::UI::Image::GenerateSprite(::UnityEngine::UI::VertexHelper*  vh, bool  lPreserveAspect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"GenerateSprite", {}, {::i2c::type_of<::UnityEngine::UI::VertexHelper*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vh, lPreserveAspect);
}
inline void UnityEngine::UI::Image::GenerateSlicedSprite(::UnityEngine::UI::VertexHelper*  toFill)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"GenerateSlicedSprite", {}, {::i2c::type_of<::UnityEngine::UI::VertexHelper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toFill);
}
inline void UnityEngine::UI::Image::GenerateTiledSprite(::UnityEngine::UI::VertexHelper*  toFill)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"GenerateTiledSprite", {}, {::i2c::type_of<::UnityEngine::UI::VertexHelper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toFill);
}
inline void UnityEngine::UI::Image::AddQuad(::UnityEngine::UI::VertexHelper*  vertexHelper, ::ArrayW<::UnityEngine::Vector3>  quadPositions, ::UnityEngine::Color32  color, ::ArrayW<::UnityEngine::Vector3>  quadUVs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"AddQuad", {}, {::i2c::type_of<::UnityEngine::UI::VertexHelper*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, vertexHelper, quadPositions, color, quadUVs);
}
inline void UnityEngine::UI::Image::AddQuad(::UnityEngine::UI::VertexHelper*  vertexHelper, ::UnityEngine::Vector2  posMin, ::UnityEngine::Vector2  posMax, ::UnityEngine::Color32  color, ::UnityEngine::Vector2  uvMin, ::UnityEngine::Vector2  uvMax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"AddQuad", {}, {::i2c::type_of<::UnityEngine::UI::VertexHelper*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, vertexHelper, posMin, posMax, color, uvMin, uvMax);
}
inline ::UnityEngine::Vector4 UnityEngine::UI::Image::GetAdjustedBorders(::UnityEngine::Vector4  border, ::UnityEngine::Rect  adjustedRect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"GetAdjustedBorders", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method, border, adjustedRect);
}
inline void UnityEngine::UI::Image::GenerateFilledSprite(::UnityEngine::UI::VertexHelper*  toFill, bool  preserveAspect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"GenerateFilledSprite", {}, {::i2c::type_of<::UnityEngine::UI::VertexHelper*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toFill, preserveAspect);
}
inline bool UnityEngine::UI::Image::RadialCut(::ArrayW<::UnityEngine::Vector3>  xy, ::ArrayW<::UnityEngine::Vector3>  uv, float_t  fill, bool  invert, int32_t  corner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"RadialCut", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, xy, uv, fill, invert, corner);
}
inline void UnityEngine::UI::Image::RadialCut(::ArrayW<::UnityEngine::Vector3>  xy, float_t  cos, float_t  sin, bool  invert, int32_t  corner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"RadialCut", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, xy, cos, sin, invert, corner);
}
inline void UnityEngine::UI::Image::CalculateLayoutInputHorizontal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UI::Image*>(), 79}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::CalculateLayoutInputVertical()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UI::Image*>(), 80}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::UI::Image::get_minWidth()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UI::Image*>(), 81}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::UI::Image::get_preferredWidth()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UI::Image*>(), 82}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::UI::Image::get_flexibleWidth()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UI::Image*>(), 83}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::UI::Image::get_minHeight()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UI::Image*>(), 84}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::UI::Image::get_preferredHeight()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UI::Image*>(), 85}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::UI::Image::get_flexibleHeight()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UI::Image*>(), 86}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t UnityEngine::UI::Image::get_layoutPriority()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UI::Image*>(), 87}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::UI::Image::IsRaycastLocationValid(::UnityEngine::Vector2  screenPoint, ::UnityEngine::Camera*  eventCamera)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UI::Image*>(), 88}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, screenPoint, eventCamera);
}
inline ::UnityEngine::Vector2 UnityEngine::UI::Image::MapCoordinate(::UnityEngine::Vector2  local, ::UnityEngine::Rect  rect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"MapCoordinate", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, local, rect);
}
inline void UnityEngine::UI::Image::RebuildImage(::UnityEngine::U2D::SpriteAtlas*  spriteAtlas)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"RebuildImage", {}, {::i2c::type_of<::UnityEngine::U2D::SpriteAtlas*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, spriteAtlas);
}
inline void UnityEngine::UI::Image::TrackImage(::UnityEngine::UI::Image*  g)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"TrackImage", {}, {::i2c::type_of<::UnityEngine::UI::Image*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, g);
}
inline void UnityEngine::UI::Image::UnTrackImage(::UnityEngine::UI::Image*  g)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"UnTrackImage", {}, {::i2c::type_of<::UnityEngine::UI::Image*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, g);
}
inline void UnityEngine::UI::Image::OnDidApplyAnimationProperties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UI::Image*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::_set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"<set_sprite>g__ResetAlphaHitThresholdIfNeeded|11_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UI::Image::_set_sprite_g__SpriteSupportsAlphaHitTest_11_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"<set_sprite>g__SpriteSupportsAlphaHitTest|11_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UI::Image::_CheckSecondaryTexturesChanged_g__Compare_93_0(::ArrayW<::UnityEngine::SecondarySpriteTexture>  array1, ::ArrayW<::UnityEngine::SecondarySpriteTexture>  array2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UI::Image*>(),
                        {"<CheckSecondaryTexturesChanged>g__Compare|93_0", {}, {::i2c::type_of<::ArrayW<::UnityEngine::SecondarySpriteTexture>>(), ::i2c::type_of<::ArrayW<::UnityEngine::SecondarySpriteTexture>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, array1, array2);
}
inline ::UnityEngine::UI::Image* UnityEngine::UI::Image::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::Image*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  UnityEngine::UI::Image::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::UI::Image::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UI::ILayoutElement"
constexpr  UnityEngine::UI::Image::operator ::UnityEngine::UI::ILayoutElement*() noexcept {
return static_cast<::UnityEngine::UI::ILayoutElement*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UI::ILayoutElement"
constexpr ::UnityEngine::UI::ILayoutElement* UnityEngine::UI::Image::i___UnityEngine__UI__ILayoutElement() noexcept {
return static_cast<::UnityEngine::UI::ILayoutElement*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ICanvasRaycastFilter"
constexpr  UnityEngine::UI::Image::operator ::UnityEngine::ICanvasRaycastFilter*() noexcept {
return static_cast<::UnityEngine::ICanvasRaycastFilter*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ICanvasRaycastFilter"
constexpr ::UnityEngine::ICanvasRaycastFilter* UnityEngine::UI::Image::i___UnityEngine__ICanvasRaycastFilter() noexcept {
return static_cast<::UnityEngine::ICanvasRaycastFilter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::Image::Image()   {
}
