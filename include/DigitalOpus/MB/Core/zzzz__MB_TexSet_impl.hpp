#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB_TexSet.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_TextureTilingTreatment_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MeshBakerMaterialTexture_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_TexSet_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__DRect_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerNonTextureProperties_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombiner_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_TexSet_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_TextureTilingTreatment_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MatsAndGOs_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MeshBakerMaterialTexture_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__ShaderTextureProperty_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet.get_allTexturesUseSameMatTiling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB_TexSet::*)()>(&::DigitalOpus::MB::Core::MB_TexSet::get_allTexturesUseSameMatTiling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dce7d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"get_allTexturesUseSameMatTiling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet.set_allTexturesUseSameMatTiling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_TexSet::*)(bool)>(&::DigitalOpus::MB::Core::MB_TexSet::set_allTexturesUseSameMatTiling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dce7dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"set_allTexturesUseSameMatTiling", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet.get_thisIsOnlyTexSetInAtlas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB_TexSet::*)()>(&::DigitalOpus::MB::Core::MB_TexSet::get_thisIsOnlyTexSetInAtlas)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dce7e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"get_thisIsOnlyTexSetInAtlas", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet.set_thisIsOnlyTexSetInAtlas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_TexSet::*)(bool)>(&::DigitalOpus::MB::Core::MB_TexSet::set_thisIsOnlyTexSetInAtlas)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dce7ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"set_thisIsOnlyTexSetInAtlas", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet.get_tilingTreatment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB_TextureTilingTreatment (::DigitalOpus::MB::Core::MB_TexSet::*)()>(&::DigitalOpus::MB::Core::MB_TexSet::get_tilingTreatment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dce7f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"get_tilingTreatment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet.set_tilingTreatment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_TexSet::*)(::DigitalOpus::MB::Core::MB_TextureTilingTreatment)>(&::DigitalOpus::MB::Core::MB_TexSet::set_tilingTreatment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dce7fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"set_tilingTreatment", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_TextureTilingTreatment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet.get_obUVoffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::DigitalOpus::MB::Core::MB_TexSet::*)()>(&::DigitalOpus::MB::Core::MB_TexSet::get_obUVoffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dce804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"get_obUVoffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet.set_obUVoffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_TexSet::*)(::UnityEngine::Vector2)>(&::DigitalOpus::MB::Core::MB_TexSet::set_obUVoffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dce80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"set_obUVoffset", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet.get_obUVscale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::DigitalOpus::MB::Core::MB_TexSet::*)()>(&::DigitalOpus::MB::Core::MB_TexSet::get_obUVscale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dce814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"get_obUVscale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet.set_obUVscale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_TexSet::*)(::UnityEngine::Vector2)>(&::DigitalOpus::MB::Core::MB_TexSet::set_obUVscale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dce81c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"set_obUVscale", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet.get_obUVrect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::DRect (::DigitalOpus::MB::Core::MB_TexSet::*)()>(&::DigitalOpus::MB::Core::MB_TexSet::get_obUVrect)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9dce824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"get_obUVrect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_TexSet::*)(::ArrayW<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DigitalOpus::MB::Core::MB_TextureTilingTreatment)>(&::DigitalOpus::MB::Core::MB_TexSet::_ctor)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x9dce85c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_TextureTilingTreatment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet.IsEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB_TexSet::*)(::System::Object*, bool, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*)>(&::DigitalOpus::MB::Core::MB_TexSet::IsEqual)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x9dcea48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"IsEqual", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet.GetMaxRawTextureHeightWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::DigitalOpus::MB::Core::MB_TexSet::*)()>(&::DigitalOpus::MB::Core::MB_TexSet::GetMaxRawTextureHeightWidth)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9dced1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"GetMaxRawTextureHeightWidth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet.GetEncapsulatingSamplingRectIfTilingSame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::DigitalOpus::MB::Core::MB_TexSet::*)()>(&::DigitalOpus::MB::Core::MB_TexSet::GetEncapsulatingSamplingRectIfTilingSame)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9dcedbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"GetEncapsulatingSamplingRectIfTilingSame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet.SetEncapsulatingSamplingRectWhenMergingTexSets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_TexSet::*)(::DigitalOpus::MB::Core::DRect)>(&::DigitalOpus::MB::Core::MB_TexSet::SetEncapsulatingSamplingRectWhenMergingTexSets)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9dcee24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"SetEncapsulatingSamplingRectWhenMergingTexSets", {}, {::i2c::type_of<::DigitalOpus::MB::Core::DRect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet.SetEncapsulatingSamplingRectForTesting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_TexSet::*)(int32_t, ::DigitalOpus::MB::Core::DRect)>(&::DigitalOpus::MB::Core::MB_TexSet::SetEncapsulatingSamplingRectForTesting)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9dcee78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"SetEncapsulatingSamplingRectForTesting", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::DRect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet.SetEncapsulatingRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_TexSet::*)(int32_t, bool)>(&::DigitalOpus::MB::Core::MB_TexSet::SetEncapsulatingRect)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9dceeb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"SetEncapsulatingRect", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet.CreateColoredTexToReplaceNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_TexSet::*)(::StringW, int32_t, bool, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::UnityEngine::Color, bool)>(&::DigitalOpus::MB::Core::MB_TexSet::CreateColoredTexToReplaceNull)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9dcef4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"CreateColoredTexToReplaceNull", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet.SetThisIsOnlyTexSetInAtlasTrue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_TexSet::*)()>(&::DigitalOpus::MB::Core::MB_TexSet::SetThisIsOnlyTexSetInAtlasTrue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9dceff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"SetThisIsOnlyTexSetInAtlasTrue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet.SetAllTexturesUseSameMatTilingTrue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_TexSet::*)()>(&::DigitalOpus::MB::Core::MB_TexSet::SetAllTexturesUseSameMatTilingTrue)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9dceffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"SetAllTexturesUseSameMatTilingTrue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet.AdjustResultMaterialNonTextureProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_TexSet::*)(::UnityEngine::Material*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*)>(&::DigitalOpus::MB::Core::MB_TexSet::AdjustResultMaterialNonTextureProperties)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9dcf0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"AdjustResultMaterialNonTextureProperties", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet.SetTilingTreatmentAndAdjustEncapsulatingSamplingRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_TexSet::*)(::DigitalOpus::MB::Core::MB_TextureTilingTreatment)>(&::DigitalOpus::MB::Core::MB_TexSet::SetTilingTreatmentAndAdjustEncapsulatingSamplingRect)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9dcf160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"SetTilingTreatmentAndAdjustEncapsulatingSamplingRect", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_TextureTilingTreatment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet.GetRectsForTextureBakeResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_TexSet::*)(::by_ref<::UnityEngine::Rect>, ::by_ref<::UnityEngine::Rect>)>(&::DigitalOpus::MB::Core::MB_TexSet::GetRectsForTextureBakeResults)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9dcf210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"GetRectsForTextureBakeResults", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet.GetMaterialTilingRectForTextureBakerResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::DigitalOpus::MB::Core::MB_TexSet::*)(int32_t)>(&::DigitalOpus::MB::Core::MB_TexSet::GetMaterialTilingRectForTextureBakerResults)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9dcf2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"GetMaterialTilingRectForTextureBakerResults", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet.CalcInitialFullSamplingRects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_TexSet::*)(bool)>(&::DigitalOpus::MB::Core::MB_TexSet::CalcInitialFullSamplingRects)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x9dcf374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"CalcInitialFullSamplingRects", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet.CalcMatAndUVSamplingRects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_TexSet::*)()>(&::DigitalOpus::MB::Core::MB_TexSet::CalcMatAndUVSamplingRects)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x9dcf54c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"CalcMatAndUVSamplingRects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet.AllTexturesAreSameForMerge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB_TexSet::*)(::DigitalOpus::MB::Core::MB_TexSet*, bool, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*)>(&::DigitalOpus::MB::Core::MB_TexSet::AllTexturesAreSameForMerge)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x9dcf688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"AllTexturesAreSameForMerge", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_TexSet*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet.DrawRectsToMergeGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_TexSet::*)(::UnityEngine::Color, ::UnityEngine::Color)>(&::DigitalOpus::MB::Core::MB_TexSet::DrawRectsToMergeGizmos)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x9dcf894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"DrawRectsToMergeGizmos", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet.GetDescription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::DigitalOpus::MB::Core::MB_TexSet::*)()>(&::DigitalOpus::MB::Core::MB_TexSet::GetDescription)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x9dcfb08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"GetDescription", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet.GetMatSubrectDescriptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::DigitalOpus::MB::Core::MB_TexSet::*)()>(&::DigitalOpus::MB::Core::MB_TexSet::GetMatSubrectDescriptions)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x9dcfdbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"GetMatSubrectDescriptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>& DigitalOpus::MB::Core::MB_TexSet::__cordl_internal_get_ts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ts;
}
constexpr ::ArrayW<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*> const& DigitalOpus::MB::Core::MB_TexSet::__cordl_internal_get_ts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ts;
}
constexpr void DigitalOpus::MB::Core::MB_TexSet::__cordl_internal_set_ts(::ArrayW<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ts = value;
}
constexpr ::DigitalOpus::MB::Core::MatsAndGOs*& DigitalOpus::MB::Core::MB_TexSet::__cordl_internal_get_matsAndGOs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matsAndGOs;
}
constexpr ::DigitalOpus::MB::Core::MatsAndGOs* const& DigitalOpus::MB::Core::MB_TexSet::__cordl_internal_get_matsAndGOs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matsAndGOs;
}
constexpr void DigitalOpus::MB::Core::MB_TexSet::__cordl_internal_set_matsAndGOs(::DigitalOpus::MB::Core::MatsAndGOs*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matsAndGOs = value;
}
constexpr bool& DigitalOpus::MB::Core::MB_TexSet::__cordl_internal_get__allTexturesUseSameMatTiling_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allTexturesUseSameMatTiling_k__BackingField;
}
constexpr bool const& DigitalOpus::MB::Core::MB_TexSet::__cordl_internal_get__allTexturesUseSameMatTiling_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allTexturesUseSameMatTiling_k__BackingField;
}
constexpr void DigitalOpus::MB::Core::MB_TexSet::__cordl_internal_set__allTexturesUseSameMatTiling_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allTexturesUseSameMatTiling_k__BackingField = value;
}
constexpr bool& DigitalOpus::MB::Core::MB_TexSet::__cordl_internal_get__thisIsOnlyTexSetInAtlas_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thisIsOnlyTexSetInAtlas_k__BackingField;
}
constexpr bool const& DigitalOpus::MB::Core::MB_TexSet::__cordl_internal_get__thisIsOnlyTexSetInAtlas_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thisIsOnlyTexSetInAtlas_k__BackingField;
}
constexpr void DigitalOpus::MB::Core::MB_TexSet::__cordl_internal_set__thisIsOnlyTexSetInAtlas_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thisIsOnlyTexSetInAtlas_k__BackingField = value;
}
constexpr ::DigitalOpus::MB::Core::MB_TextureTilingTreatment& DigitalOpus::MB::Core::MB_TexSet::__cordl_internal_get__tilingTreatment_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tilingTreatment_k__BackingField;
}
constexpr ::DigitalOpus::MB::Core::MB_TextureTilingTreatment const& DigitalOpus::MB::Core::MB_TexSet::__cordl_internal_get__tilingTreatment_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tilingTreatment_k__BackingField;
}
constexpr void DigitalOpus::MB::Core::MB_TexSet::__cordl_internal_set__tilingTreatment_k__BackingField(::DigitalOpus::MB::Core::MB_TextureTilingTreatment  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tilingTreatment_k__BackingField = value;
}
constexpr ::UnityEngine::Vector2& DigitalOpus::MB::Core::MB_TexSet::__cordl_internal_get__obUVoffset_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____obUVoffset_k__BackingField;
}
constexpr ::UnityEngine::Vector2 const& DigitalOpus::MB::Core::MB_TexSet::__cordl_internal_get__obUVoffset_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____obUVoffset_k__BackingField;
}
constexpr void DigitalOpus::MB::Core::MB_TexSet::__cordl_internal_set__obUVoffset_k__BackingField(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____obUVoffset_k__BackingField = value;
}
constexpr ::UnityEngine::Vector2& DigitalOpus::MB::Core::MB_TexSet::__cordl_internal_get__obUVscale_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____obUVscale_k__BackingField;
}
constexpr ::UnityEngine::Vector2 const& DigitalOpus::MB::Core::MB_TexSet::__cordl_internal_get__obUVscale_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____obUVscale_k__BackingField;
}
constexpr void DigitalOpus::MB::Core::MB_TexSet::__cordl_internal_set__obUVscale_k__BackingField(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____obUVscale_k__BackingField = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB_TexSet::__cordl_internal_get_idealWidth_pix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idealWidth_pix;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB_TexSet::__cordl_internal_get_idealWidth_pix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idealWidth_pix;
}
constexpr void DigitalOpus::MB::Core::MB_TexSet::__cordl_internal_set_idealWidth_pix(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idealWidth_pix = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB_TexSet::__cordl_internal_get_idealHeight_pix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idealHeight_pix;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB_TexSet::__cordl_internal_get_idealHeight_pix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idealHeight_pix;
}
constexpr void DigitalOpus::MB::Core::MB_TexSet::__cordl_internal_set_idealHeight_pix(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idealHeight_pix = value;
}
constexpr ::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation*& DigitalOpus::MB::Core::MB_TexSet::__cordl_internal_get_pipelineVariation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pipelineVariation;
}
constexpr ::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation* const& DigitalOpus::MB::Core::MB_TexSet::__cordl_internal_get_pipelineVariation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pipelineVariation;
}
constexpr void DigitalOpus::MB::Core::MB_TexSet::__cordl_internal_set_pipelineVariation(::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pipelineVariation = value;
}
inline bool DigitalOpus::MB::Core::MB_TexSet::get_allTexturesUseSameMatTiling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"get_allTexturesUseSameMatTiling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB_TexSet::set_allTexturesUseSameMatTiling(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"set_allTexturesUseSameMatTiling", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB_TexSet::get_thisIsOnlyTexSetInAtlas()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"get_thisIsOnlyTexSetInAtlas", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB_TexSet::set_thisIsOnlyTexSetInAtlas(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"set_thisIsOnlyTexSetInAtlas", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::DigitalOpus::MB::Core::MB_TextureTilingTreatment DigitalOpus::MB::Core::MB_TexSet::get_tilingTreatment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"get_tilingTreatment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB_TextureTilingTreatment>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB_TexSet::set_tilingTreatment(::DigitalOpus::MB::Core::MB_TextureTilingTreatment  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"set_tilingTreatment", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_TextureTilingTreatment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 DigitalOpus::MB::Core::MB_TexSet::get_obUVoffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"get_obUVoffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB_TexSet::set_obUVoffset(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"set_obUVoffset", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 DigitalOpus::MB::Core::MB_TexSet::get_obUVscale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"get_obUVscale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB_TexSet::set_obUVscale(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"set_obUVscale", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::DigitalOpus::MB::Core::DRect DigitalOpus::MB::Core::MB_TexSet::get_obUVrect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"get_obUVrect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::DRect>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB_TexSet::_ctor(::ArrayW<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>  tss, ::UnityEngine::Vector2  uvOffset, ::UnityEngine::Vector2  uvScale, ::DigitalOpus::MB::Core::MB_TextureTilingTreatment  treatment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_TextureTilingTreatment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tss, uvOffset, uvScale, treatment);
}
inline bool DigitalOpus::MB::Core::MB_TexSet::IsEqual(::System::Object*  obj, bool  fixOutOfBoundsUVs, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  resultMaterialTextureBlender)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"IsEqual", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj, fixOutOfBoundsUVs, resultMaterialTextureBlender);
}
inline ::UnityEngine::Vector2 DigitalOpus::MB::Core::MB_TexSet::GetMaxRawTextureHeightWidth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"GetMaxRawTextureHeightWidth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::Rect DigitalOpus::MB::Core::MB_TexSet::GetEncapsulatingSamplingRectIfTilingSame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"GetEncapsulatingSamplingRectIfTilingSame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB_TexSet::SetEncapsulatingSamplingRectWhenMergingTexSets(::DigitalOpus::MB::Core::DRect  newEncapsulatingSamplingRect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"SetEncapsulatingSamplingRectWhenMergingTexSets", {}, {::i2c::type_of<::DigitalOpus::MB::Core::DRect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newEncapsulatingSamplingRect);
}
inline void DigitalOpus::MB::Core::MB_TexSet::SetEncapsulatingSamplingRectForTesting(int32_t  propIdx, ::DigitalOpus::MB::Core::DRect  newEncapsulatingSamplingRect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"SetEncapsulatingSamplingRectForTesting", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::DRect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propIdx, newEncapsulatingSamplingRect);
}
inline void DigitalOpus::MB::Core::MB_TexSet::SetEncapsulatingRect(int32_t  propIdx, bool  considerMeshUVs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"SetEncapsulatingRect", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propIdx, considerMeshUVs);
}
inline void DigitalOpus::MB::Core::MB_TexSet::CreateColoredTexToReplaceNull(::StringW  propName, int32_t  propIdx, bool  considerMeshUVs, ::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner, ::UnityEngine::Color  col, bool  isLinear)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"CreateColoredTexToReplaceNull", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propName, propIdx, considerMeshUVs, combiner, col, isLinear);
}
inline void DigitalOpus::MB::Core::MB_TexSet::SetThisIsOnlyTexSetInAtlasTrue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"SetThisIsOnlyTexSetInAtlasTrue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB_TexSet::SetAllTexturesUseSameMatTilingTrue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"SetAllTexturesUseSameMatTilingTrue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB_TexSet::AdjustResultMaterialNonTextureProperties(::UnityEngine::Material*  resultMaterial, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  props)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"AdjustResultMaterialNonTextureProperties", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resultMaterial, props);
}
inline void DigitalOpus::MB::Core::MB_TexSet::SetTilingTreatmentAndAdjustEncapsulatingSamplingRect(::DigitalOpus::MB::Core::MB_TextureTilingTreatment  newTilingTreatment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"SetTilingTreatmentAndAdjustEncapsulatingSamplingRect", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_TextureTilingTreatment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newTilingTreatment);
}
inline void DigitalOpus::MB::Core::MB_TexSet::GetRectsForTextureBakeResults(::by_ref<::UnityEngine::Rect>  allPropsUseSameTiling_encapsulatingSamplingRect, ::by_ref<::UnityEngine::Rect>  propsUseDifferntTiling_obUVRect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"GetRectsForTextureBakeResults", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allPropsUseSameTiling_encapsulatingSamplingRect, propsUseDifferntTiling_obUVRect);
}
inline ::UnityEngine::Rect DigitalOpus::MB::Core::MB_TexSet::GetMaterialTilingRectForTextureBakerResults(int32_t  materialIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"GetMaterialTilingRectForTextureBakerResults", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method, materialIndex);
}
inline void DigitalOpus::MB::Core::MB_TexSet::CalcInitialFullSamplingRects(bool  fixOutOfBoundsUVs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"CalcInitialFullSamplingRects", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fixOutOfBoundsUVs);
}
inline void DigitalOpus::MB::Core::MB_TexSet::CalcMatAndUVSamplingRects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"CalcMatAndUVSamplingRects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB_TexSet::AllTexturesAreSameForMerge(::DigitalOpus::MB::Core::MB_TexSet*  other, bool  considerNonTextureProperties, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  resultMaterialTextureBlender)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"AllTexturesAreSameForMerge", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_TexSet*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other, considerNonTextureProperties, resultMaterialTextureBlender);
}
inline void DigitalOpus::MB::Core::MB_TexSet::DrawRectsToMergeGizmos(::UnityEngine::Color  encC, ::UnityEngine::Color  innerC)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"DrawRectsToMergeGizmos", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encC, innerC);
}
inline ::StringW DigitalOpus::MB::Core::MB_TexSet::GetDescription()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"GetDescription", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW DigitalOpus::MB::Core::MB_TexSet::GetMatSubrectDescriptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet*>(),
                        {"GetMatSubrectDescriptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB_TexSet* DigitalOpus::MB::Core::MB_TexSet::New_ctor(::ArrayW<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>  tss, ::UnityEngine::Vector2  uvOffset, ::UnityEngine::Vector2  uvScale, ::DigitalOpus::MB::Core::MB_TextureTilingTreatment  treatment)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB_TexSet*>(tss, uvOffset, uvScale, treatment));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB_TexSet::MB_TexSet()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling::*)(::DigitalOpus::MB::Core::MB_TexSet*)>(&::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9dcea18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling*>(),
                        {".ctor", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_TexSet*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling.GetRectsForTextureBakeResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling::*)(::by_ref<::UnityEngine::Rect>, ::by_ref<::UnityEngine::Rect>)>(&::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling::GetRectsForTextureBakeResults)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9dd0158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling*>(),
                        {"GetRectsForTextureBakeResults", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling.SetTilingTreatmentAndAdjustEncapsulatingSamplingRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling::*)(::DigitalOpus::MB::Core::MB_TextureTilingTreatment)>(&::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling::SetTilingTreatmentAndAdjustEncapsulatingSamplingRect)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9dd020c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling*>(),
                        {"SetTilingTreatmentAndAdjustEncapsulatingSamplingRect", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_TextureTilingTreatment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling.GetMaterialTilingRectForTextureBakerResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling::*)(int32_t)>(&::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling::GetMaterialTilingRectForTextureBakerResults)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9dd0318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling*>(),
                        {"GetMaterialTilingRectForTextureBakerResults", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling.AdjustResultMaterialNonTextureProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling::*)(::UnityEngine::Material*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*)>(&::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling::AdjustResultMaterialNonTextureProperties)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x9dd032c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling*>(),
                        {"AdjustResultMaterialNonTextureProperties", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::DigitalOpus::MB::Core::MB_TexSet*& DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling::__cordl_internal_get_texSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texSet;
}
constexpr ::DigitalOpus::MB::Core::MB_TexSet* const& DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling::__cordl_internal_get_texSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texSet;
}
constexpr void DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling::__cordl_internal_set_texSet(::DigitalOpus::MB::Core::MB_TexSet*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texSet = value;
}
inline void DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling::_ctor(::DigitalOpus::MB::Core::MB_TexSet*  ts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling*>(),
                        {".ctor", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_TexSet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ts);
}
inline void DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling::GetRectsForTextureBakeResults(::by_ref<::UnityEngine::Rect>  allPropsUseSameTiling_encapsulatingSamplingRect, ::by_ref<::UnityEngine::Rect>  propsUseDifferntTiling_obUVRect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling*>(),
                        {"GetRectsForTextureBakeResults", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allPropsUseSameTiling_encapsulatingSamplingRect, propsUseDifferntTiling_obUVRect);
}
inline void DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling::SetTilingTreatmentAndAdjustEncapsulatingSamplingRect(::DigitalOpus::MB::Core::MB_TextureTilingTreatment  newTilingTreatment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling*>(),
                        {"SetTilingTreatmentAndAdjustEncapsulatingSamplingRect", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_TextureTilingTreatment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newTilingTreatment);
}
inline ::UnityEngine::Rect DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling::GetMaterialTilingRectForTextureBakerResults(int32_t  materialIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling*>(),
                        {"GetMaterialTilingRectForTextureBakerResults", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method, materialIndex);
}
inline void DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling::AdjustResultMaterialNonTextureProperties(::UnityEngine::Material*  resultMaterial, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  props)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling*>(),
                        {"AdjustResultMaterialNonTextureProperties", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resultMaterial, props);
}
inline ::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling* DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling::New_ctor(::DigitalOpus::MB::Core::MB_TexSet*  ts)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling*>(ts));
}
/// @brief Convert operator to "::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation"
constexpr  DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling::operator ::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation*() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation*>(static_cast<void*>(this));
}
/// @brief Convert to "::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation"
constexpr ::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation* DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling::i___DigitalOpus__MB__Core__MB_TexSet_PipelineVariation() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling::*)(::DigitalOpus::MB::Core::MB_TexSet*)>(&::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9dcf074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling*>(),
                        {".ctor", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_TexSet*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling.GetRectsForTextureBakeResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling::*)(::by_ref<::UnityEngine::Rect>, ::by_ref<::UnityEngine::Rect>)>(&::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling::GetRectsForTextureBakeResults)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9dcff20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling*>(),
                        {"GetRectsForTextureBakeResults", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling.SetTilingTreatmentAndAdjustEncapsulatingSamplingRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling::*)(::DigitalOpus::MB::Core::MB_TextureTilingTreatment)>(&::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling::SetTilingTreatmentAndAdjustEncapsulatingSamplingRect)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9dcffb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling*>(),
                        {"SetTilingTreatmentAndAdjustEncapsulatingSamplingRect", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_TextureTilingTreatment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling.GetMaterialTilingRectForTextureBakerResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling::*)(int32_t)>(&::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling::GetMaterialTilingRectForTextureBakerResults)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9dd00bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling*>(),
                        {"GetMaterialTilingRectForTextureBakerResults", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling.AdjustResultMaterialNonTextureProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling::*)(::UnityEngine::Material*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*)>(&::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling::AdjustResultMaterialNonTextureProperties)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9dd0154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling*>(),
                        {"AdjustResultMaterialNonTextureProperties", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::DigitalOpus::MB::Core::MB_TexSet*& DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling::__cordl_internal_get_texSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texSet;
}
constexpr ::DigitalOpus::MB::Core::MB_TexSet* const& DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling::__cordl_internal_get_texSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texSet;
}
constexpr void DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling::__cordl_internal_set_texSet(::DigitalOpus::MB::Core::MB_TexSet*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texSet = value;
}
inline void DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling::_ctor(::DigitalOpus::MB::Core::MB_TexSet*  ts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling*>(),
                        {".ctor", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_TexSet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ts);
}
inline void DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling::GetRectsForTextureBakeResults(::by_ref<::UnityEngine::Rect>  allPropsUseSameTiling_encapsulatingSamplingRect, ::by_ref<::UnityEngine::Rect>  propsUseDifferntTiling_obUVRect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling*>(),
                        {"GetRectsForTextureBakeResults", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allPropsUseSameTiling_encapsulatingSamplingRect, propsUseDifferntTiling_obUVRect);
}
inline void DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling::SetTilingTreatmentAndAdjustEncapsulatingSamplingRect(::DigitalOpus::MB::Core::MB_TextureTilingTreatment  newTilingTreatment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling*>(),
                        {"SetTilingTreatmentAndAdjustEncapsulatingSamplingRect", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_TextureTilingTreatment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newTilingTreatment);
}
inline ::UnityEngine::Rect DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling::GetMaterialTilingRectForTextureBakerResults(int32_t  materialIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling*>(),
                        {"GetMaterialTilingRectForTextureBakerResults", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method, materialIndex);
}
inline void DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling::AdjustResultMaterialNonTextureProperties(::UnityEngine::Material*  resultMaterial, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  props)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling*>(),
                        {"AdjustResultMaterialNonTextureProperties", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resultMaterial, props);
}
inline ::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling* DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling::New_ctor(::DigitalOpus::MB::Core::MB_TexSet*  ts)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling*>(ts));
}
/// @brief Convert operator to "::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation"
constexpr  DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling::operator ::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation*() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation*>(static_cast<void*>(this));
}
/// @brief Convert to "::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation"
constexpr ::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation* DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling::i___DigitalOpus__MB__Core__MB_TexSet_PipelineVariation() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation.GetRectsForTextureBakeResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation::*)(::by_ref<::UnityEngine::Rect>, ::by_ref<::UnityEngine::Rect>)>(&::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation::GetRectsForTextureBakeResults)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation.SetTilingTreatmentAndAdjustEncapsulatingSamplingRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation::*)(::DigitalOpus::MB::Core::MB_TextureTilingTreatment)>(&::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation::SetTilingTreatmentAndAdjustEncapsulatingSamplingRect)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation.GetMaterialTilingRectForTextureBakerResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation::*)(int32_t)>(&::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation::GetMaterialTilingRectForTextureBakerResults)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation.AdjustResultMaterialNonTextureProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation::*)(::UnityEngine::Material*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*)>(&::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation::AdjustResultMaterialNonTextureProperties)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation*>(), 3}
                ));
    return ___internal_method;
  }
};
inline void DigitalOpus::MB::Core::MB_TexSet_PipelineVariation::GetRectsForTextureBakeResults(::by_ref<::UnityEngine::Rect>  allPropsUseSameTiling_encapsulatingSamplingRect, ::by_ref<::UnityEngine::Rect>  propsUseDifferntTiling_obUVRect)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allPropsUseSameTiling_encapsulatingSamplingRect, propsUseDifferntTiling_obUVRect);
}
inline void DigitalOpus::MB::Core::MB_TexSet_PipelineVariation::SetTilingTreatmentAndAdjustEncapsulatingSamplingRect(::DigitalOpus::MB::Core::MB_TextureTilingTreatment  newTilingTreatment)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newTilingTreatment);
}
inline ::UnityEngine::Rect DigitalOpus::MB::Core::MB_TexSet_PipelineVariation::GetMaterialTilingRectForTextureBakerResults(int32_t  materialIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method, materialIndex);
}
inline void DigitalOpus::MB::Core::MB_TexSet_PipelineVariation::AdjustResultMaterialNonTextureProperties(::UnityEngine::Material*  resultMaterial, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  props)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resultMaterial, props);
}
