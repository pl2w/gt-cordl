#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_TextureCombinerPackerMeshBakerHorizontalVertical.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerPackerMeshBakerHorizontalVertical_AtlasDirection_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerPackerMeshBaker_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerPackerMeshBakerHorizontalVertical_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__AtlasPackingResult_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__AtlasPadding_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_PackingAlgorithmEnum_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerPackerMeshBakerHorizontalVertical_AtlasDirection_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerPackerMeshBakerHorizontalVertical_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerPipeline_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_TexSet_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_TextureTilingTreatment_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::*)(::GlobalNamespace::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_AtlasDirection)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9ddbfac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_AtlasDirection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical.CalculateAtlasRectangles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::*)(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, bool, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::CalculateAtlasRectangles)> {
  constexpr static std::size_t size = 0x1228;
  constexpr static std::size_t addrs = 0x9ddbfd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical.TestStackRectanglesHorizontal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::AtlasPackingResult* (*)(::DigitalOpus::MB::Core::AtlasPackingResult*, ::DigitalOpus::MB::Core::AtlasPackingResult*, int32_t, int32_t, bool)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::TestStackRectanglesHorizontal)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9ddd644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical*>(),
                        {"TestStackRectanglesHorizontal", {}, {::i2c::type_of<::DigitalOpus::MB::Core::AtlasPackingResult*>(), ::i2c::type_of<::DigitalOpus::MB::Core::AtlasPackingResult*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical.TestStackRectanglesVertical
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::AtlasPackingResult* (*)(::DigitalOpus::MB::Core::AtlasPackingResult*, ::DigitalOpus::MB::Core::AtlasPackingResult*, int32_t, int32_t, bool)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::TestStackRectanglesVertical)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9ddd6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical*>(),
                        {"TestStackRectanglesVertical", {}, {::i2c::type_of<::DigitalOpus::MB::Core::AtlasPackingResult*>(), ::i2c::type_of<::DigitalOpus::MB::Core::AtlasPackingResult*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical.MergeAtlasPackingResultStackBonA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::AtlasPackingResult* (*)(::DigitalOpus::MB::Core::AtlasPackingResult*, ::DigitalOpus::MB::Core::AtlasPackingResult*, int32_t, int32_t, bool, ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::MergeAtlasPackingResultStackBonA)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x9ddd20c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical*>(),
                        {"MergeAtlasPackingResultStackBonA", {}, {::i2c::type_of<::DigitalOpus::MB::Core::AtlasPackingResult*>(), ::i2c::type_of<::DigitalOpus::MB::Core::AtlasPackingResult*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_AtlasDirection& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::__cordl_internal_get__atlasDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____atlasDirection;
}
constexpr ::GlobalNamespace::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_AtlasDirection const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::__cordl_internal_get__atlasDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____atlasDirection;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::__cordl_internal_set__atlasDirection(::GlobalNamespace::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_AtlasDirection  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____atlasDirection = value;
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::_ctor(::GlobalNamespace::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_AtlasDirection  ad)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_AtlasDirection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ad);
}
inline ::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::CalculateAtlasRectangles(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, bool  doMultiAtlas, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*>>(this, ___internal_method, data, doMultiAtlas, LOG_LEVEL);
}
inline ::DigitalOpus::MB::Core::AtlasPackingResult* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::TestStackRectanglesHorizontal(::DigitalOpus::MB::Core::AtlasPackingResult*  a, ::DigitalOpus::MB::Core::AtlasPackingResult*  b, int32_t  maxHeightDim, int32_t  maxWidthDim, bool  stretchBToAtlasWidth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical*>(),
                        {"TestStackRectanglesHorizontal", {}, {::i2c::type_of<::DigitalOpus::MB::Core::AtlasPackingResult*>(), ::i2c::type_of<::DigitalOpus::MB::Core::AtlasPackingResult*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::AtlasPackingResult*>(nullptr, ___internal_method, a, b, maxHeightDim, maxWidthDim, stretchBToAtlasWidth);
}
inline ::DigitalOpus::MB::Core::AtlasPackingResult* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::TestStackRectanglesVertical(::DigitalOpus::MB::Core::AtlasPackingResult*  a, ::DigitalOpus::MB::Core::AtlasPackingResult*  b, int32_t  maxHeightDim, int32_t  maxWidthDim, bool  stretchBToAtlasWidth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical*>(),
                        {"TestStackRectanglesVertical", {}, {::i2c::type_of<::DigitalOpus::MB::Core::AtlasPackingResult*>(), ::i2c::type_of<::DigitalOpus::MB::Core::AtlasPackingResult*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::AtlasPackingResult*>(nullptr, ___internal_method, a, b, maxHeightDim, maxWidthDim, stretchBToAtlasWidth);
}
inline ::DigitalOpus::MB::Core::AtlasPackingResult* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::MergeAtlasPackingResultStackBonA(::DigitalOpus::MB::Core::AtlasPackingResult*  a, ::DigitalOpus::MB::Core::AtlasPackingResult*  b, int32_t  maxWidthDim, int32_t  maxHeightDim, bool  stretchBToAtlasWidth, ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline*  pipeline)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical*>(),
                        {"MergeAtlasPackingResultStackBonA", {}, {::i2c::type_of<::DigitalOpus::MB::Core::AtlasPackingResult*>(), ::i2c::type_of<::DigitalOpus::MB::Core::AtlasPackingResult*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::AtlasPackingResult*>(nullptr, ___internal_method, a, b, maxWidthDim, maxHeightDim, stretchBToAtlasWidth, pipeline);
}
inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::New_ctor(::GlobalNamespace::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_AtlasDirection  ad)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical*>(ad));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::MB3_TextureCombinerPackerMeshBakerHorizontalVertical()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline.GetPackingAlg
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline::GetPackingAlg)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ddda60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline*>(),
                        {"GetPackingAlg", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline.SortTexSetIntoBins
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline::*)(::DigitalOpus::MB::Core::MB_TexSet*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*, int32_t, int32_t)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline::SortTexSetIntoBins)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x9ddda68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline*>(),
                        {"SortTexSetIntoBins", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_TexSet*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline.GetEdge2EdgeTreatment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB_TextureTilingTreatment (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline::GetEdge2EdgeTreatment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dddbac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline*>(),
                        {"GetEdge2EdgeTreatment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline.InitializeAtlasPadding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline::*)(::by_ref<::DigitalOpus::MB::Core::AtlasPadding>, int32_t)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline::InitializeAtlasPadding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dddbb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline*>(),
                        {"InitializeAtlasPadding", {}, {::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::AtlasPadding>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline.MergeAtlasPackingResultStackBonAInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline::*)(::DigitalOpus::MB::Core::AtlasPackingResult*, ::DigitalOpus::MB::Core::AtlasPackingResult*, ::by_ref<::UnityEngine::Rect>, ::by_ref<::UnityEngine::Rect>, bool, int32_t, int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline::MergeAtlasPackingResultStackBonAInternal)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x9dddbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline*>(),
                        {"MergeAtlasPackingResultStackBonAInternal", {}, {::i2c::type_of<::DigitalOpus::MB::Core::AtlasPackingResult*>(), ::i2c::type_of<::DigitalOpus::MB::Core::AtlasPackingResult*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline.GetExtraRoomForRegularAtlas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline::*)(int32_t, int32_t, int32_t, int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline::GetExtraRoomForRegularAtlas)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9dddd54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline*>(),
                        {"GetExtraRoomForRegularAtlas", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ddd1fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline::GetPackingAlg()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline*>(),
                        {"GetPackingAlg", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline::SortTexSetIntoBins(::DigitalOpus::MB::Core::MB_TexSet*  texSet, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*  horizontalVert, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*  regular, int32_t  maxAtlasWidth, int32_t  maxAtlasHeight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline*>(),
                        {"SortTexSetIntoBins", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_TexSet*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, texSet, horizontalVert, regular, maxAtlasWidth, maxAtlasHeight);
}
inline ::DigitalOpus::MB::Core::MB_TextureTilingTreatment DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline::GetEdge2EdgeTreatment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline*>(),
                        {"GetEdge2EdgeTreatment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB_TextureTilingTreatment>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline::InitializeAtlasPadding(::by_ref<::DigitalOpus::MB::Core::AtlasPadding>  padding, int32_t  paddingValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline*>(),
                        {"InitializeAtlasPadding", {}, {::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::AtlasPadding>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, padding, paddingValue);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline::MergeAtlasPackingResultStackBonAInternal(::DigitalOpus::MB::Core::AtlasPackingResult*  a, ::DigitalOpus::MB::Core::AtlasPackingResult*  b, ::by_ref<::UnityEngine::Rect>  AatlasToFinal, ::by_ref<::UnityEngine::Rect>  BatlasToFinal, bool  stretchBToAtlasWidth, int32_t  maxWidthDim, int32_t  maxHeightDim, ::by_ref<int32_t>  atlasX, ::by_ref<int32_t>  atlasY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline*>(),
                        {"MergeAtlasPackingResultStackBonAInternal", {}, {::i2c::type_of<::DigitalOpus::MB::Core::AtlasPackingResult*>(), ::i2c::type_of<::DigitalOpus::MB::Core::AtlasPackingResult*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, b, AatlasToFinal, BatlasToFinal, stretchBToAtlasWidth, maxWidthDim, maxHeightDim, atlasX, atlasY);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline::GetExtraRoomForRegularAtlas(int32_t  usedHorizontalVertWidth, int32_t  usedHorizontalVertHeight, int32_t  maxAtlasWidth, int32_t  maxAtlasHeight, ::by_ref<int32_t>  atlasRegularMaxWidth, ::by_ref<int32_t>  atlasRegularMaxHeight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline*>(),
                        {"GetExtraRoomForRegularAtlas", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, usedHorizontalVertWidth, usedHorizontalVertHeight, maxAtlasWidth, maxAtlasHeight, atlasRegularMaxWidth, atlasRegularMaxHeight);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline*>());
}
/// @brief Convert operator to "::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline::operator ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline*() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline*>(static_cast<void*>(this));
}
/// @brief Convert to "::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline"
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline::i___DigitalOpus__MB__Core__MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline.GetPackingAlg
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline::GetPackingAlg)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ddd75c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline*>(),
                        {"GetPackingAlg", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline.SortTexSetIntoBins
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline::*)(::DigitalOpus::MB::Core::MB_TexSet*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*, int32_t, int32_t)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline::SortTexSetIntoBins)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x9ddd764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline*>(),
                        {"SortTexSetIntoBins", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_TexSet*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline.GetEdge2EdgeTreatment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB_TextureTilingTreatment (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline::GetEdge2EdgeTreatment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ddd8a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline*>(),
                        {"GetEdge2EdgeTreatment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline.InitializeAtlasPadding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline::*)(::by_ref<::DigitalOpus::MB::Core::AtlasPadding>, int32_t)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline::InitializeAtlasPadding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ddd8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline*>(),
                        {"InitializeAtlasPadding", {}, {::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::AtlasPadding>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline.MergeAtlasPackingResultStackBonAInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline::*)(::DigitalOpus::MB::Core::AtlasPackingResult*, ::DigitalOpus::MB::Core::AtlasPackingResult*, ::by_ref<::UnityEngine::Rect>, ::by_ref<::UnityEngine::Rect>, bool, int32_t, int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline::MergeAtlasPackingResultStackBonAInternal)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x9ddd8b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline*>(),
                        {"MergeAtlasPackingResultStackBonAInternal", {}, {::i2c::type_of<::DigitalOpus::MB::Core::AtlasPackingResult*>(), ::i2c::type_of<::DigitalOpus::MB::Core::AtlasPackingResult*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline.GetExtraRoomForRegularAtlas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline::*)(int32_t, int32_t, int32_t, int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline::GetExtraRoomForRegularAtlas)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9ddda50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline*>(),
                        {"GetExtraRoomForRegularAtlas", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ddd204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline::GetPackingAlg()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline*>(),
                        {"GetPackingAlg", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline::SortTexSetIntoBins(::DigitalOpus::MB::Core::MB_TexSet*  texSet, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*  horizontalVert, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*  regular, int32_t  maxAtlasWidth, int32_t  maxAtlasHeight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline*>(),
                        {"SortTexSetIntoBins", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_TexSet*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, texSet, horizontalVert, regular, maxAtlasWidth, maxAtlasHeight);
}
inline ::DigitalOpus::MB::Core::MB_TextureTilingTreatment DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline::GetEdge2EdgeTreatment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline*>(),
                        {"GetEdge2EdgeTreatment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB_TextureTilingTreatment>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline::InitializeAtlasPadding(::by_ref<::DigitalOpus::MB::Core::AtlasPadding>  padding, int32_t  paddingValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline*>(),
                        {"InitializeAtlasPadding", {}, {::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::AtlasPadding>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, padding, paddingValue);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline::MergeAtlasPackingResultStackBonAInternal(::DigitalOpus::MB::Core::AtlasPackingResult*  a, ::DigitalOpus::MB::Core::AtlasPackingResult*  b, ::by_ref<::UnityEngine::Rect>  AatlasToFinal, ::by_ref<::UnityEngine::Rect>  BatlasToFinal, bool  stretchBToAtlasWidth, int32_t  maxWidthDim, int32_t  maxHeightDim, ::by_ref<int32_t>  atlasX, ::by_ref<int32_t>  atlasY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline*>(),
                        {"MergeAtlasPackingResultStackBonAInternal", {}, {::i2c::type_of<::DigitalOpus::MB::Core::AtlasPackingResult*>(), ::i2c::type_of<::DigitalOpus::MB::Core::AtlasPackingResult*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, b, AatlasToFinal, BatlasToFinal, stretchBToAtlasWidth, maxWidthDim, maxHeightDim, atlasX, atlasY);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline::GetExtraRoomForRegularAtlas(int32_t  usedHorizontalVertWidth, int32_t  usedHorizontalVertHeight, int32_t  maxAtlasWidth, int32_t  maxAtlasHeight, ::by_ref<int32_t>  atlasRegularMaxWidth, ::by_ref<int32_t>  atlasRegularMaxHeight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline*>(),
                        {"GetExtraRoomForRegularAtlas", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, usedHorizontalVertWidth, usedHorizontalVertHeight, maxAtlasWidth, maxAtlasHeight, atlasRegularMaxWidth, atlasRegularMaxHeight);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline*>());
}
/// @brief Convert operator to "::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline::operator ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline*() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline*>(static_cast<void*>(this));
}
/// @brief Convert to "::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline"
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline::i___DigitalOpus__MB__Core__MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline.GetPackingAlg
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline::GetPackingAlg)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline.SortTexSetIntoBins
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline::*)(::DigitalOpus::MB::Core::MB_TexSet*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*, int32_t, int32_t)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline::SortTexSetIntoBins)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline.GetEdge2EdgeTreatment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB_TextureTilingTreatment (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline::GetEdge2EdgeTreatment)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline.InitializeAtlasPadding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline::*)(::by_ref<::DigitalOpus::MB::Core::AtlasPadding>, int32_t)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline::InitializeAtlasPadding)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline.MergeAtlasPackingResultStackBonAInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline::*)(::DigitalOpus::MB::Core::AtlasPackingResult*, ::DigitalOpus::MB::Core::AtlasPackingResult*, ::by_ref<::UnityEngine::Rect>, ::by_ref<::UnityEngine::Rect>, bool, int32_t, int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline::MergeAtlasPackingResultStackBonAInternal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline.GetExtraRoomForRegularAtlas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline::*)(int32_t, int32_t, int32_t, int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline::GetExtraRoomForRegularAtlas)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline*>(), 5}
                ));
    return ___internal_method;
  }
};
inline ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline::GetPackingAlg()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline::SortTexSetIntoBins(::DigitalOpus::MB::Core::MB_TexSet*  texSet, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*  horizontalVert, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*  regular, int32_t  maxAtlasWidth, int32_t  maxAtlasHeight)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, texSet, horizontalVert, regular, maxAtlasWidth, maxAtlasHeight);
}
inline ::DigitalOpus::MB::Core::MB_TextureTilingTreatment DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline::GetEdge2EdgeTreatment()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB_TextureTilingTreatment>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline::InitializeAtlasPadding(::by_ref<::DigitalOpus::MB::Core::AtlasPadding>  padding, int32_t  paddingValue)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, padding, paddingValue);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline::MergeAtlasPackingResultStackBonAInternal(::DigitalOpus::MB::Core::AtlasPackingResult*  a, ::DigitalOpus::MB::Core::AtlasPackingResult*  b, ::by_ref<::UnityEngine::Rect>  AatlasToFinal, ::by_ref<::UnityEngine::Rect>  BatlasToFinal, bool  stretchBToAtlasWidth, int32_t  maxWidthDim, int32_t  maxHeightDim, ::by_ref<int32_t>  atlasX, ::by_ref<int32_t>  atlasY)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, b, AatlasToFinal, BatlasToFinal, stretchBToAtlasWidth, maxWidthDim, maxHeightDim, atlasX, atlasY);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline::GetExtraRoomForRegularAtlas(int32_t  usedHorizontalVertWidth, int32_t  usedHorizontalVertHeight, int32_t  maxAtlasWidth, int32_t  maxAtlasHeight, ::by_ref<int32_t>  atlasRegularMaxWidth, ::by_ref<int32_t>  atlasRegularMaxHeight)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, usedHorizontalVertWidth, usedHorizontalVertHeight, maxAtlasWidth, maxAtlasHeight, atlasRegularMaxWidth, atlasRegularMaxHeight);
}
