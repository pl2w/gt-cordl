#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB2_TexturePackerHorizontalVert.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_TexturePackerHorizontalVert_TexturePackingOrientation_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_TexturePacker_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_TexturePackerHorizontalVert_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__AtlasPackingResult_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__AtlasPadding_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_TexturePackerHorizontalVert_TexturePackingOrientation_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_TexturePacker_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert.GetRects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> (::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, int32_t, int32_t, int32_t)>(&::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert::GetRects)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x9dc5d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert.GetRects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> (::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*, int32_t, int32_t, bool)>(&::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert::GetRects)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x9dc5ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert._GetRectsSingleAtlas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::AtlasPackingResult* (::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert::_GetRectsSingleAtlas)> {
  constexpr static std::size_t size = 0xdc0;
  constexpr static std::size_t addrs = 0x9dc761c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert*>(),
                        {"_GetRectsSingleAtlas", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert._GetRectsMultiAtlasVertical
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> (::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert::_GetRectsMultiAtlasVertical)> {
  constexpr static std::size_t size = 0xac8;
  constexpr static std::size_t addrs = 0x9dc609c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert*>(),
                        {"_GetRectsMultiAtlasVertical", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert._GetRectsMultiAtlasHorizontal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> (::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert::_GetRectsMultiAtlasHorizontal)> {
  constexpr static std::size_t size = 0xab8;
  constexpr static std::size_t addrs = 0x9dc6b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert*>(),
                        {"_GetRectsMultiAtlasHorizontal", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert.PopLargestThatFits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB2_TexturePacker_Image* (::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert::*)(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>*, int32_t, int32_t, bool)>(&::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert::PopLargestThatFits)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x9dc83dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert*>(),
                        {"PopLargestThatFits", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert::*)()>(&::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9dc8510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MB2_TexturePackerHorizontalVert_TexturePackingOrientation& DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert::__cordl_internal_get_packingOrientation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___packingOrientation;
}
constexpr ::GlobalNamespace::MB2_TexturePackerHorizontalVert_TexturePackingOrientation const& DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert::__cordl_internal_get_packingOrientation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___packingOrientation;
}
constexpr void DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert::__cordl_internal_set_packingOrientation(::GlobalNamespace::MB2_TexturePackerHorizontalVert_TexturePackingOrientation  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___packingOrientation = value;
}
constexpr bool& DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert::__cordl_internal_get_stretchImagesToEdges()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stretchImagesToEdges;
}
constexpr bool const& DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert::__cordl_internal_get_stretchImagesToEdges() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stretchImagesToEdges;
}
constexpr void DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert::__cordl_internal_set_stretchImagesToEdges(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stretchImagesToEdges = value;
}
inline ::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert::GetRects(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  imgWidthHeights, int32_t  maxDimensionX, int32_t  maxDimensionY, int32_t  padding)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*>>(this, ___internal_method, imgWidthHeights, maxDimensionX, maxDimensionY, padding);
}
inline ::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert::GetRects(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  imgWidthHeights, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*  paddings, int32_t  maxDimensionX, int32_t  maxDimensionY, bool  doMultiAtlas)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*>>(this, ___internal_method, imgWidthHeights, paddings, maxDimensionX, maxDimensionY, doMultiAtlas);
}
inline ::DigitalOpus::MB::Core::AtlasPackingResult* DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert::_GetRectsSingleAtlas(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  imgWidthHeights, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*  paddings, int32_t  maxDimensionX, int32_t  maxDimensionY, int32_t  minImageSizeX, int32_t  minImageSizeY, int32_t  masterImageSizeX, int32_t  masterImageSizeY, int32_t  recursionDepth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert*>(),
                        {"_GetRectsSingleAtlas", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::AtlasPackingResult*>(this, ___internal_method, imgWidthHeights, paddings, maxDimensionX, maxDimensionY, minImageSizeX, minImageSizeY, masterImageSizeX, masterImageSizeY, recursionDepth);
}
inline ::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert::_GetRectsMultiAtlasVertical(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  imgWidthHeights, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*  paddings, int32_t  maxDimensionPassedX, int32_t  maxDimensionPassedY, int32_t  minImageSizeX, int32_t  minImageSizeY, int32_t  masterImageSizeX, int32_t  masterImageSizeY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert*>(),
                        {"_GetRectsMultiAtlasVertical", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*>>(this, ___internal_method, imgWidthHeights, paddings, maxDimensionPassedX, maxDimensionPassedY, minImageSizeX, minImageSizeY, masterImageSizeX, masterImageSizeY);
}
inline ::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert::_GetRectsMultiAtlasHorizontal(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  imgWidthHeights, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*  paddings, int32_t  maxDimensionPassedX, int32_t  maxDimensionPassedY, int32_t  minImageSizeX, int32_t  minImageSizeY, int32_t  masterImageSizeX, int32_t  masterImageSizeY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert*>(),
                        {"_GetRectsMultiAtlasHorizontal", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*>>(this, ___internal_method, imgWidthHeights, paddings, maxDimensionPassedX, maxDimensionPassedY, minImageSizeX, minImageSizeY, masterImageSizeX, masterImageSizeY);
}
inline ::DigitalOpus::MB::Core::MB2_TexturePacker_Image* DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert::PopLargestThatFits(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>*  images, int32_t  spaceRemaining, int32_t  maxDim, bool  emptyAtlas)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert*>(),
                        {"PopLargestThatFits", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>(this, ___internal_method, images, spaceRemaining, maxDim, emptyAtlas);
}
inline void DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert* DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert::MB2_TexturePackerHorizontalVert()   {
}
