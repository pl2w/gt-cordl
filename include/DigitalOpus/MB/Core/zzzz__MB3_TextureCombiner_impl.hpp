#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_TextureCombiner.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_PackingAlgorithmEnum_impl.hpp"
#include "GlobalNamespace/zzzz__MB2_TextureBakeResults_ResultType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombiner_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__AtlasPackingResult_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_EditorMethodsInterface_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_PackingAlgorithmEnum_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerPipeline_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombiner_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_ITextureCombinerPacker_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_TexSet_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__ProgressUpdateDelegate_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__ShaderTextureProperty_def.hpp"
#include "GlobalNamespace/zzzz__MB2_TextureBakeResults_ResultType_def.hpp"
#include "GlobalNamespace/zzzz__MB2_TextureBakeResults_def.hpp"
#include "GlobalNamespace/zzzz__MB_AtlasesAndRects_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.get_textureBakeResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MB2_TextureBakeResults> (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::get_textureBakeResults)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc926c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"get_textureBakeResults", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.set_textureBakeResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)(::GlobalNamespace::MB2_TextureBakeResults*)>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::set_textureBakeResults)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc9274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"set_textureBakeResults", {}, {::i2c::type_of<::GlobalNamespace::MB2_TextureBakeResults*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.get_atlasPadding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::get_atlasPadding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc927c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"get_atlasPadding", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.set_atlasPadding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)(int32_t)>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::set_atlasPadding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc9284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"set_atlasPadding", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.get_maxAtlasSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::get_maxAtlasSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc928c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"get_maxAtlasSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.set_maxAtlasSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)(int32_t)>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::set_maxAtlasSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc9294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"set_maxAtlasSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.get_maxAtlasWidthOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::get_maxAtlasWidthOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc929c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.set_maxAtlasWidthOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)(int32_t)>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::set_maxAtlasWidthOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc92a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.get_maxAtlasHeightOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::get_maxAtlasHeightOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc92ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.set_maxAtlasHeightOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)(int32_t)>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::set_maxAtlasHeightOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc92b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.get_useMaxAtlasWidthOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::get_useMaxAtlasWidthOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc92bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.set_useMaxAtlasWidthOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)(bool)>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::set_useMaxAtlasWidthOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc92c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.get_useMaxAtlasHeightOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::get_useMaxAtlasHeightOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc92cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.set_useMaxAtlasHeightOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)(bool)>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::set_useMaxAtlasHeightOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc92d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.get_resizePowerOfTwoTextures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::get_resizePowerOfTwoTextures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc92dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"get_resizePowerOfTwoTextures", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.set_resizePowerOfTwoTextures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)(bool)>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::set_resizePowerOfTwoTextures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc92e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"set_resizePowerOfTwoTextures", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.get_fixOutOfBoundsUVs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::get_fixOutOfBoundsUVs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc92ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"get_fixOutOfBoundsUVs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.set_fixOutOfBoundsUVs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)(bool)>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::set_fixOutOfBoundsUVs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc92f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"set_fixOutOfBoundsUVs", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.get_layerTexturePackerFastMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::get_layerTexturePackerFastMesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc92fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"get_layerTexturePackerFastMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.set_layerTexturePackerFastMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)(int32_t)>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::set_layerTexturePackerFastMesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc9304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"set_layerTexturePackerFastMesh", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.get_maxTilingBakeSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::get_maxTilingBakeSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc930c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"get_maxTilingBakeSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.set_maxTilingBakeSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)(int32_t)>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::set_maxTilingBakeSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc9314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"set_maxTilingBakeSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.get_saveAtlasesAsAssets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::get_saveAtlasesAsAssets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc931c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"get_saveAtlasesAsAssets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.set_saveAtlasesAsAssets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)(bool)>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::set_saveAtlasesAsAssets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc9324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"set_saveAtlasesAsAssets", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.get_resultType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MB2_TextureBakeResults_ResultType (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::get_resultType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc932c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"get_resultType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.set_resultType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)(::GlobalNamespace::MB2_TextureBakeResults_ResultType)>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::set_resultType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc9334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"set_resultType", {}, {::i2c::type_of<::GlobalNamespace::MB2_TextureBakeResults_ResultType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.get_packingAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::get_packingAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc933c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"get_packingAlgorithm", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.set_packingAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)(::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum)>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::set_packingAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc9344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"set_packingAlgorithm", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.get_meshBakerTexturePackerForcePowerOfTwo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::get_meshBakerTexturePackerForcePowerOfTwo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc934c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"get_meshBakerTexturePackerForcePowerOfTwo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.set_meshBakerTexturePackerForcePowerOfTwo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)(bool)>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::set_meshBakerTexturePackerForcePowerOfTwo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc9354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"set_meshBakerTexturePackerForcePowerOfTwo", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.get_customShaderPropNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::get_customShaderPropNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc935c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"get_customShaderPropNames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.set_customShaderPropNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*)>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::set_customShaderPropNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc9364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"set_customShaderPropNames", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.get_considerNonTextureProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::get_considerNonTextureProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc936c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"get_considerNonTextureProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.set_considerNonTextureProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)(bool)>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::set_considerNonTextureProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc9374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"set_considerNonTextureProperties", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.get_doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::get_doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc937c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"get_doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.set_doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)(bool)>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::set_doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc9384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"set_doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.RunCorutineWithoutPause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::IEnumerator*, int32_t)>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::RunCorutineWithoutPause)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x9dc938c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"RunCorutineWithoutPause", {}, {::i2c::type_of<::System::Collections::IEnumerator*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.CombineTexturesIntoAtlases
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)(::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::GlobalNamespace::MB_AtlasesAndRects*, ::UnityEngine::Material*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*, ::System::Collections::Generic::List_1<::StringW>*, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*, bool, bool)>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::CombineTexturesIntoAtlases)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x9dc9668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"CombineTexturesIntoAtlases", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(), ::i2c::type_of<::GlobalNamespace::MB_AtlasesAndRects*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.CombineTexturesIntoAtlasesCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)(::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::GlobalNamespace::MB_AtlasesAndRects*, ::UnityEngine::Material*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*, ::System::Collections::Generic::List_1<::StringW>*, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*, float_t, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*, bool, bool)>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::CombineTexturesIntoAtlasesCoroutine)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x9dc995c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"CombineTexturesIntoAtlasesCoroutine", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(), ::i2c::type_of<::GlobalNamespace::MB_AtlasesAndRects*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner._CombineTexturesIntoAtlases
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)(::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*, ::GlobalNamespace::MB_AtlasesAndRects*, ::UnityEngine::Material*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*, ::System::Collections::Generic::List_1<::StringW>*, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*, bool, bool)>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::_CombineTexturesIntoAtlases)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x9dc97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"_CombineTexturesIntoAtlases", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*>(), ::i2c::type_of<::GlobalNamespace::MB_AtlasesAndRects*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.LoadPipelineData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)(::UnityEngine::Material*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*, ::System::Collections::Generic::List_1<::StringW>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*)>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::LoadPipelineData)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x9dc9ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"LoadPipelineData", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.__CombineTexturesIntoAtlases
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)(::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*, ::GlobalNamespace::MB_AtlasesAndRects*, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*)>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::__CombineTexturesIntoAtlases)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9dc9cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"__CombineTexturesIntoAtlases", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*>(), ::i2c::type_of<::GlobalNamespace::MB_AtlasesAndRects*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.__RunTexturePackerOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)(::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*, ::GlobalNamespace::MB_AtlasesAndRects*, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, bool, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*)>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::__RunTexturePackerOnly)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x9dc9ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"__RunTexturePackerOnly", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*>(), ::i2c::type_of<::GlobalNamespace::MB_AtlasesAndRects*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner._getNumTemporaryTextures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::_getNumTemporaryTextures)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9dc9ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"_getNumTemporaryTextures", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner._createTemporaryTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)(::StringW, int32_t, int32_t, ::UnityEngine::TextureFormat, bool, bool)>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::_createTemporaryTexture)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x9dc9f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"_createTemporaryTexture", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.AddTemporaryTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)(::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture*)>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::AddTemporaryTexture)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9dca124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"AddTemporaryTexture", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner._createTextureCopy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)(::DigitalOpus::MB::Core::ShaderTextureProperty*, ::UnityEngine::Texture2D*)>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::_createTextureCopy)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x9dca1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"_createTextureCopy", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>(), ::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner._resizeTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)(::DigitalOpus::MB::Core::ShaderTextureProperty*, ::UnityEngine::Texture2D*, int32_t, int32_t)>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::_resizeTexture)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x9dca3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"_resizeTexture", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>(), ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner._destroyAllTemporaryTextures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::_destroyAllTemporaryTextures)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x9dca578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"_destroyAllTemporaryTextures", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner._destroyTemporaryTextures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)(::StringW)>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::_destroyTemporaryTextures)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x9dca6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"_destroyTemporaryTextures", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner._restoreProceduralMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::_restoreProceduralMaterials)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9dca990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"_restoreProceduralMaterials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.SuggestTreatment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, ::ArrayW<::UnityEngine::Material*>, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, ::System::Collections::Generic::List_1<::StringW>*)>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::SuggestTreatment)> {
  constexpr static std::size_t size = 0x1828;
  constexpr static std::size_t addrs = 0x9dca994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"SuggestTreatment", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Material*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.ShouldTextureBeLinear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::DigitalOpus::MB::Core::ShaderTextureProperty*)>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::ShouldTextureBeLinear)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9dc8768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"ShouldTextureBeLinear", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner.PrintList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*)>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::PrintList)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9dcc1bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"PrintList", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9dcc2c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get_LOG_LEVEL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get_LOG_LEVEL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LOG_LEVEL = value;
}
constexpr ::UnityW<::GlobalNamespace::MB2_TextureBakeResults>& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__textureBakeResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textureBakeResults;
}
constexpr ::UnityW<::GlobalNamespace::MB2_TextureBakeResults> const& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__textureBakeResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textureBakeResults;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_set__textureBakeResults(::UnityW<::GlobalNamespace::MB2_TextureBakeResults>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____textureBakeResults = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__atlasPadding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____atlasPadding;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__atlasPadding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____atlasPadding;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_set__atlasPadding(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____atlasPadding = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__maxAtlasSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxAtlasSize;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__maxAtlasSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxAtlasSize;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_set__maxAtlasSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxAtlasSize = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__maxAtlasWidthOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxAtlasWidthOverride;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__maxAtlasWidthOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxAtlasWidthOverride;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_set__maxAtlasWidthOverride(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxAtlasWidthOverride = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__maxAtlasHeightOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxAtlasHeightOverride;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__maxAtlasHeightOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxAtlasHeightOverride;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_set__maxAtlasHeightOverride(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxAtlasHeightOverride = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__useMaxAtlasWidthOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useMaxAtlasWidthOverride;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__useMaxAtlasWidthOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useMaxAtlasWidthOverride;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_set__useMaxAtlasWidthOverride(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useMaxAtlasWidthOverride = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__useMaxAtlasHeightOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useMaxAtlasHeightOverride;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__useMaxAtlasHeightOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useMaxAtlasHeightOverride;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_set__useMaxAtlasHeightOverride(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useMaxAtlasHeightOverride = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__resizePowerOfTwoTextures()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resizePowerOfTwoTextures;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__resizePowerOfTwoTextures() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resizePowerOfTwoTextures;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_set__resizePowerOfTwoTextures(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resizePowerOfTwoTextures = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__fixOutOfBoundsUVs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fixOutOfBoundsUVs;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__fixOutOfBoundsUVs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fixOutOfBoundsUVs;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_set__fixOutOfBoundsUVs(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fixOutOfBoundsUVs = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__layerTexturePackerFastMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layerTexturePackerFastMesh;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__layerTexturePackerFastMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layerTexturePackerFastMesh;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_set__layerTexturePackerFastMesh(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____layerTexturePackerFastMesh = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__maxTilingBakeSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxTilingBakeSize;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__maxTilingBakeSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxTilingBakeSize;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_set__maxTilingBakeSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxTilingBakeSize = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__saveAtlasesAsAssets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____saveAtlasesAsAssets;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__saveAtlasesAsAssets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____saveAtlasesAsAssets;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_set__saveAtlasesAsAssets(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____saveAtlasesAsAssets = value;
}
constexpr ::GlobalNamespace::MB2_TextureBakeResults_ResultType& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__resultType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resultType;
}
constexpr ::GlobalNamespace::MB2_TextureBakeResults_ResultType const& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__resultType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resultType;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_set__resultType(::GlobalNamespace::MB2_TextureBakeResults_ResultType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resultType = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__packingAlgorithm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____packingAlgorithm;
}
constexpr ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum const& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__packingAlgorithm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____packingAlgorithm;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_set__packingAlgorithm(::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____packingAlgorithm = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__meshBakerTexturePackerForcePowerOfTwo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshBakerTexturePackerForcePowerOfTwo;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__meshBakerTexturePackerForcePowerOfTwo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshBakerTexturePackerForcePowerOfTwo;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_set__meshBakerTexturePackerForcePowerOfTwo(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____meshBakerTexturePackerForcePowerOfTwo = value;
}
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__customShaderPropNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customShaderPropNames;
}
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* const& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__customShaderPropNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customShaderPropNames;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_set__customShaderPropNames(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____customShaderPropNames = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__normalizeTexelDensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalizeTexelDensity;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__normalizeTexelDensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalizeTexelDensity;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_set__normalizeTexelDensity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____normalizeTexelDensity = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__considerNonTextureProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____considerNonTextureProperties;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__considerNonTextureProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____considerNonTextureProperties;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_set__considerNonTextureProperties(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____considerNonTextureProperties = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_set__doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize = value;
}
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture*>*& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__temporaryTextures()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____temporaryTextures;
}
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture*>* const& DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_get__temporaryTextures() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____temporaryTextures;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner::__cordl_internal_set__temporaryTextures(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____temporaryTextures = value;
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner::setStaticF_NEUTRAL_NORMAL_MAP_COLOR_SWIZZLED(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "NEUTRAL_NORMAL_MAP_COLOR_SWIZZLED", ::DigitalOpus::MB::Core::MB3_TextureCombiner*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color DigitalOpus::MB::Core::MB3_TextureCombiner::getStaticF_NEUTRAL_NORMAL_MAP_COLOR_SWIZZLED()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "NEUTRAL_NORMAL_MAP_COLOR_SWIZZLED", ::DigitalOpus::MB::Core::MB3_TextureCombiner*>();
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner::setStaticF_NEUTRAL_NORMAL_MAP_COLOR_NON_SWIZZLED(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "NEUTRAL_NORMAL_MAP_COLOR_NON_SWIZZLED", ::DigitalOpus::MB::Core::MB3_TextureCombiner*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color DigitalOpus::MB::Core::MB3_TextureCombiner::getStaticF_NEUTRAL_NORMAL_MAP_COLOR_NON_SWIZZLED()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "NEUTRAL_NORMAL_MAP_COLOR_NON_SWIZZLED", ::DigitalOpus::MB::Core::MB3_TextureCombiner*>();
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner::setStaticF__RunCorutineWithoutPauseIsRunning(bool  value)  {
::cordl_internals::setStaticField<bool, "_RunCorutineWithoutPauseIsRunning", ::DigitalOpus::MB::Core::MB3_TextureCombiner*>(std::forward<bool>(value));
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombiner::getStaticF__RunCorutineWithoutPauseIsRunning()  {
return ::cordl_internals::getStaticField<bool, "_RunCorutineWithoutPauseIsRunning", ::DigitalOpus::MB::Core::MB3_TextureCombiner*>();
}
inline ::UnityW<::GlobalNamespace::MB2_TextureBakeResults> DigitalOpus::MB::Core::MB3_TextureCombiner::get_textureBakeResults()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"get_textureBakeResults", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MB2_TextureBakeResults>>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner::set_textureBakeResults(::GlobalNamespace::MB2_TextureBakeResults*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"set_textureBakeResults", {}, {::i2c::type_of<::GlobalNamespace::MB2_TextureBakeResults*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t DigitalOpus::MB::Core::MB3_TextureCombiner::get_atlasPadding()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"get_atlasPadding", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner::set_atlasPadding(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"set_atlasPadding", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t DigitalOpus::MB::Core::MB3_TextureCombiner::get_maxAtlasSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"get_maxAtlasSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner::set_maxAtlasSize(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"set_maxAtlasSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t DigitalOpus::MB::Core::MB3_TextureCombiner::get_maxAtlasWidthOverride()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner::set_maxAtlasWidthOverride(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t DigitalOpus::MB::Core::MB3_TextureCombiner::get_maxAtlasHeightOverride()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner::set_maxAtlasHeightOverride(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombiner::get_useMaxAtlasWidthOverride()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner::set_useMaxAtlasWidthOverride(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombiner::get_useMaxAtlasHeightOverride()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner::set_useMaxAtlasHeightOverride(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombiner::get_resizePowerOfTwoTextures()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"get_resizePowerOfTwoTextures", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner::set_resizePowerOfTwoTextures(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"set_resizePowerOfTwoTextures", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombiner::get_fixOutOfBoundsUVs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"get_fixOutOfBoundsUVs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner::set_fixOutOfBoundsUVs(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"set_fixOutOfBoundsUVs", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t DigitalOpus::MB::Core::MB3_TextureCombiner::get_layerTexturePackerFastMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"get_layerTexturePackerFastMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner::set_layerTexturePackerFastMesh(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"set_layerTexturePackerFastMesh", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t DigitalOpus::MB::Core::MB3_TextureCombiner::get_maxTilingBakeSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"get_maxTilingBakeSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner::set_maxTilingBakeSize(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"set_maxTilingBakeSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombiner::get_saveAtlasesAsAssets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"get_saveAtlasesAsAssets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner::set_saveAtlasesAsAssets(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"set_saveAtlasesAsAssets", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MB2_TextureBakeResults_ResultType DigitalOpus::MB::Core::MB3_TextureCombiner::get_resultType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"get_resultType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MB2_TextureBakeResults_ResultType>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner::set_resultType(::GlobalNamespace::MB2_TextureBakeResults_ResultType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"set_resultType", {}, {::i2c::type_of<::GlobalNamespace::MB2_TextureBakeResults_ResultType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum DigitalOpus::MB::Core::MB3_TextureCombiner::get_packingAlgorithm()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"get_packingAlgorithm", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner::set_packingAlgorithm(::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"set_packingAlgorithm", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombiner::get_meshBakerTexturePackerForcePowerOfTwo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"get_meshBakerTexturePackerForcePowerOfTwo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner::set_meshBakerTexturePackerForcePowerOfTwo(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"set_meshBakerTexturePackerForcePowerOfTwo", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* DigitalOpus::MB::Core::MB3_TextureCombiner::get_customShaderPropNames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"get_customShaderPropNames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner::set_customShaderPropNames(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"set_customShaderPropNames", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombiner::get_considerNonTextureProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"get_considerNonTextureProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner::set_considerNonTextureProperties(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"set_considerNonTextureProperties", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombiner::get_doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"get_doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner::set_doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"set_doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner::RunCorutineWithoutPause(::System::Collections::IEnumerator*  cor, int32_t  recursionDepth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"RunCorutineWithoutPause", {}, {::i2c::type_of<::System::Collections::IEnumerator*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cor, recursionDepth);
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombiner::CombineTexturesIntoAtlases(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo, ::GlobalNamespace::MB_AtlasesAndRects*  resultAtlasesAndRects, ::UnityEngine::Material*  resultMaterial, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objsToMesh, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  allowedMaterialsFilter, ::System::Collections::Generic::List_1<::StringW>*  texPropsToIgnore, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  textureEditorMethods, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*  packingResults, bool  onlyPackRects, bool  splitAtlasWhenPackingIfTooBig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"CombineTexturesIntoAtlases", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(), ::i2c::type_of<::GlobalNamespace::MB_AtlasesAndRects*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, progressInfo, resultAtlasesAndRects, resultMaterial, objsToMesh, allowedMaterialsFilter, texPropsToIgnore, textureEditorMethods, packingResults, onlyPackRects, splitAtlasWhenPackingIfTooBig);
}
inline ::System::Collections::IEnumerator* DigitalOpus::MB::Core::MB3_TextureCombiner::CombineTexturesIntoAtlasesCoroutine(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo, ::GlobalNamespace::MB_AtlasesAndRects*  resultAtlasesAndRects, ::UnityEngine::Material*  resultMaterial, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objsToMesh, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  allowedMaterialsFilter, ::System::Collections::Generic::List_1<::StringW>*  texPropsToIgnore, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  textureEditorMethods, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  coroutineResult, float_t  maxTimePerFrame, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*  packingResults, bool  onlyPackRects, bool  splitAtlasWhenPackingIfTooBig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"CombineTexturesIntoAtlasesCoroutine", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(), ::i2c::type_of<::GlobalNamespace::MB_AtlasesAndRects*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, progressInfo, resultAtlasesAndRects, resultMaterial, objsToMesh, allowedMaterialsFilter, texPropsToIgnore, textureEditorMethods, coroutineResult, maxTimePerFrame, packingResults, onlyPackRects, splitAtlasWhenPackingIfTooBig);
}
inline ::System::Collections::IEnumerator* DigitalOpus::MB::Core::MB3_TextureCombiner::_CombineTexturesIntoAtlases(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  result, ::GlobalNamespace::MB_AtlasesAndRects*  resultAtlasesAndRects, ::UnityEngine::Material*  resultMaterial, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objsToMesh, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  allowedMaterialsFilter, ::System::Collections::Generic::List_1<::StringW>*  texPropsToIgnore, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  textureEditorMethods, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*  atlasPackingResult, bool  onlyPackRects, bool  splitAtlasWhenPackingIfTooBig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"_CombineTexturesIntoAtlases", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*>(), ::i2c::type_of<::GlobalNamespace::MB_AtlasesAndRects*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, progressInfo, result, resultAtlasesAndRects, resultMaterial, objsToMesh, allowedMaterialsFilter, texPropsToIgnore, textureEditorMethods, atlasPackingResult, onlyPackRects, splitAtlasWhenPackingIfTooBig);
}
inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* DigitalOpus::MB::Core::MB3_TextureCombiner::LoadPipelineData(::UnityEngine::Material*  resultMaterial, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  texPropertyNames, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objsToMesh, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  allowedMaterialsFilter, ::System::Collections::Generic::List_1<::StringW>*  texPropsToIgnore, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*  distinctMaterialTextures)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"LoadPipelineData", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(this, ___internal_method, resultMaterial, texPropertyNames, objsToMesh, allowedMaterialsFilter, texPropsToIgnore, distinctMaterialTextures);
}
inline ::System::Collections::IEnumerator* DigitalOpus::MB::Core::MB3_TextureCombiner::__CombineTexturesIntoAtlases(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  result, ::GlobalNamespace::MB_AtlasesAndRects*  resultAtlasesAndRects, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  textureEditorMethods)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"__CombineTexturesIntoAtlases", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*>(), ::i2c::type_of<::GlobalNamespace::MB_AtlasesAndRects*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, progressInfo, result, resultAtlasesAndRects, data, textureEditorMethods);
}
inline ::System::Collections::IEnumerator* DigitalOpus::MB::Core::MB3_TextureCombiner::__RunTexturePackerOnly(::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  result, ::GlobalNamespace::MB_AtlasesAndRects*  resultAtlasesAndRects, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, bool  splitAtlasWhenPackingIfTooBig, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  textureEditorMethods, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*  packingResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"__RunTexturePackerOnly", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*>(), ::i2c::type_of<::GlobalNamespace::MB_AtlasesAndRects*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, result, resultAtlasesAndRects, data, splitAtlasWhenPackingIfTooBig, textureEditorMethods, packingResult);
}
inline int32_t DigitalOpus::MB::Core::MB3_TextureCombiner::_getNumTemporaryTextures()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"_getNumTemporaryTextures", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> DigitalOpus::MB::Core::MB3_TextureCombiner::_createTemporaryTexture(::StringW  propertyName, int32_t  w, int32_t  h, ::UnityEngine::TextureFormat  texFormat, bool  mipMaps, bool  linear)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"_createTemporaryTexture", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method, propertyName, w, h, texFormat, mipMaps, linear);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner::AddTemporaryTexture(::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture*  tt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"AddTemporaryTexture", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tt);
}
inline ::UnityW<::UnityEngine::Texture2D> DigitalOpus::MB::Core::MB3_TextureCombiner::_createTextureCopy(::DigitalOpus::MB::Core::ShaderTextureProperty*  propertyName, ::UnityEngine::Texture2D*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"_createTextureCopy", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>(), ::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method, propertyName, t);
}
inline ::UnityW<::UnityEngine::Texture2D> DigitalOpus::MB::Core::MB3_TextureCombiner::_resizeTexture(::DigitalOpus::MB::Core::ShaderTextureProperty*  propertyName, ::UnityEngine::Texture2D*  t, int32_t  w, int32_t  h)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"_resizeTexture", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>(), ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method, propertyName, t, w, h);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner::_destroyAllTemporaryTextures()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"_destroyAllTemporaryTextures", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner::_destroyTemporaryTextures(::StringW  propertyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"_destroyTemporaryTextures", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyName);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner::_restoreProceduralMaterials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"_restoreProceduralMaterials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner::SuggestTreatment(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objsToMesh, ::ArrayW<::UnityEngine::Material*>  resultMaterials, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  _customShaderPropNames, ::System::Collections::Generic::List_1<::StringW>*  texPropsToIgnore)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"SuggestTreatment", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Material*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objsToMesh, resultMaterials, _customShaderPropNames, texPropsToIgnore);
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombiner::ShouldTextureBeLinear(::DigitalOpus::MB::Core::ShaderTextureProperty*  shaderTextureProperty)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"ShouldTextureBeLinear", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, shaderTextureProperty);
}
inline ::StringW DigitalOpus::MB::Core::MB3_TextureCombiner::PrintList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  gos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {"PrintList", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, gos);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_TextureCombiner* DigitalOpus::MB::Core::MB3_TextureCombiner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_TextureCombiner*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner::MB3_TextureCombiner()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::*)(int32_t)>(&::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9dcd8f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9dcd91c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::MoveNext)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x9dcd920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dcde18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9dcde20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dcde58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner*& DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner* const& DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::__cordl_internal_set___4__this(::DigitalOpus::MB::Core::MB3_TextureCombiner*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*& DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* const& DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::__cordl_internal_set_data(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*& DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::__cordl_internal_get_result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult* const& DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::__cordl_internal_get_result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::__cordl_internal_set_result(::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___result = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*& DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::__cordl_internal_get_textureEditorMethods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureEditorMethods;
}
constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* const& DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::__cordl_internal_get_textureEditorMethods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureEditorMethods;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::__cordl_internal_set_textureEditorMethods(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureEditorMethods = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::__cordl_internal_get_splitAtlasWhenPackingIfTooBig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splitAtlasWhenPackingIfTooBig;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::__cordl_internal_get_splitAtlasWhenPackingIfTooBig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splitAtlasWhenPackingIfTooBig;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::__cordl_internal_set_splitAtlasWhenPackingIfTooBig(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splitAtlasWhenPackingIfTooBig = value;
}
constexpr ::GlobalNamespace::MB_AtlasesAndRects*& DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::__cordl_internal_get_resultAtlasesAndRects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultAtlasesAndRects;
}
constexpr ::GlobalNamespace::MB_AtlasesAndRects* const& DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::__cordl_internal_get_resultAtlasesAndRects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultAtlasesAndRects;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::__cordl_internal_set_resultAtlasesAndRects(::GlobalNamespace::MB_AtlasesAndRects*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultAtlasesAndRects = value;
}
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*& DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::__cordl_internal_get_packingResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___packingResult;
}
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>* const& DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::__cordl_internal_get_packingResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___packingResult;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::__cordl_internal_set_packingResult(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___packingResult = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*& DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::__cordl_internal_get__pipeline_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pipeline_5__2;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline* const& DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::__cordl_internal_get__pipeline_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pipeline_5__2;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::__cordl_internal_set__pipeline_5__2(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pipeline_5__2 = value;
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88* DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner____RunTexturePackerOnly_d__88::MB3_TextureCombiner____RunTexturePackerOnly_d__88()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::*)(int32_t)>(&::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9dcd1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9dcd1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::MoveNext)> {
  constexpr static std::size_t size = 0x6bc;
  constexpr static std::size_t addrs = 0x9dcd1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dcd8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9dcd8b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dcd8ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner*& DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner* const& DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::__cordl_internal_set___4__this(::DigitalOpus::MB::Core::MB3_TextureCombiner*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*& DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* const& DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::__cordl_internal_set_data(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate*& DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::__cordl_internal_get_progressInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressInfo;
}
constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate* const& DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::__cordl_internal_get_progressInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressInfo;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::__cordl_internal_set_progressInfo(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressInfo = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*& DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::__cordl_internal_get_result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult* const& DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::__cordl_internal_get_result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::__cordl_internal_set_result(::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___result = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*& DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::__cordl_internal_get_textureEditorMethods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureEditorMethods;
}
constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* const& DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::__cordl_internal_get_textureEditorMethods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureEditorMethods;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::__cordl_internal_set_textureEditorMethods(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureEditorMethods = value;
}
constexpr ::GlobalNamespace::MB_AtlasesAndRects*& DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::__cordl_internal_get_resultAtlasesAndRects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultAtlasesAndRects;
}
constexpr ::GlobalNamespace::MB_AtlasesAndRects* const& DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::__cordl_internal_get_resultAtlasesAndRects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultAtlasesAndRects;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::__cordl_internal_set_resultAtlasesAndRects(::GlobalNamespace::MB_AtlasesAndRects*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultAtlasesAndRects = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*& DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::__cordl_internal_get__pipeline_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pipeline_5__2;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline* const& DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::__cordl_internal_get__pipeline_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pipeline_5__2;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::__cordl_internal_set__pipeline_5__2(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pipeline_5__2 = value;
}
constexpr ::System::Text::StringBuilder*& DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::__cordl_internal_get__report_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____report_5__3;
}
constexpr ::System::Text::StringBuilder* const& DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::__cordl_internal_get__report_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____report_5__3;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::__cordl_internal_set__report_5__3(::System::Text::StringBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____report_5__3 = value;
}
constexpr ::DigitalOpus::MB::Core::MB_ITextureCombinerPacker*& DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::__cordl_internal_get__texturePaker_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____texturePaker_5__4;
}
constexpr ::DigitalOpus::MB::Core::MB_ITextureCombinerPacker* const& DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::__cordl_internal_get__texturePaker_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____texturePaker_5__4;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::__cordl_internal_set__texturePaker_5__4(::DigitalOpus::MB::Core::MB_ITextureCombinerPacker*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____texturePaker_5__4 = value;
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87* DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87::MB3_TextureCombiner____CombineTexturesIntoAtlases_d__87()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::*)(int32_t)>(&::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9dcc638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9dcc660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::MoveNext)> {
  constexpr static std::size_t size = 0x878;
  constexpr static std::size_t addrs = 0x9dcc68c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__m__Finally1)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x9dccf38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dcd17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9dcd184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dcd1bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner*& DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner* const& DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_set___4__this(::DigitalOpus::MB::Core::MB3_TextureCombiner*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*& DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_get_textureEditorMethods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureEditorMethods;
}
constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* const& DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_get_textureEditorMethods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureEditorMethods;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_set_textureEditorMethods(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureEditorMethods = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_get_splitAtlasWhenPackingIfTooBig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splitAtlasWhenPackingIfTooBig;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_get_splitAtlasWhenPackingIfTooBig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splitAtlasWhenPackingIfTooBig;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_set_splitAtlasWhenPackingIfTooBig(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splitAtlasWhenPackingIfTooBig = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_get_onlyPackRects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlyPackRects;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_get_onlyPackRects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlyPackRects;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_set_onlyPackRects(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onlyPackRects = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*& DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_get_result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult* const& DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_get_result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_set_result(::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___result = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_get_objsToMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objsToMesh;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_get_objsToMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objsToMesh;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_set_objsToMesh(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objsToMesh = value;
}
constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate*& DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_get_progressInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressInfo;
}
constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate* const& DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_get_progressInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressInfo;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_set_progressInfo(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressInfo = value;
}
constexpr ::UnityW<::UnityEngine::Material>& DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_get_resultMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_get_resultMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultMaterial;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_set_resultMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultMaterial = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*& DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_get_allowedMaterialsFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowedMaterialsFilter;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* const& DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_get_allowedMaterialsFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowedMaterialsFilter;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_set_allowedMaterialsFilter(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowedMaterialsFilter = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_get_texPropsToIgnore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texPropsToIgnore;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_get_texPropsToIgnore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texPropsToIgnore;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_set_texPropsToIgnore(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texPropsToIgnore = value;
}
constexpr ::GlobalNamespace::MB_AtlasesAndRects*& DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_get_resultAtlasesAndRects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultAtlasesAndRects;
}
constexpr ::GlobalNamespace::MB_AtlasesAndRects* const& DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_get_resultAtlasesAndRects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultAtlasesAndRects;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_set_resultAtlasesAndRects(::GlobalNamespace::MB_AtlasesAndRects*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultAtlasesAndRects = value;
}
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*& DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_get_atlasPackingResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atlasPackingResult;
}
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>* const& DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_get_atlasPackingResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atlasPackingResult;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_set_atlasPackingResult(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___atlasPackingResult = value;
}
constexpr ::System::Diagnostics::Stopwatch*& DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_get__sw_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sw_5__2;
}
constexpr ::System::Diagnostics::Stopwatch* const& DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_get__sw_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sw_5__2;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__cordl_internal_set__sw_5__2(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sw_5__2 = value;
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85* DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85::MB3_TextureCombiner___CombineTexturesIntoAtlases_d__85()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::*)(int32_t)>(&::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9dcc498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9dcc4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::MoveNext)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x9dcc4c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dcc5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9dcc5f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dcc630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*& DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_get_coroutineResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coroutineResult;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult* const& DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_get_coroutineResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coroutineResult;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_set_coroutineResult(::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coroutineResult = value;
}
constexpr float_t& DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_get_maxTimePerFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTimePerFrame;
}
constexpr float_t const& DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_get_maxTimePerFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTimePerFrame;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_set_maxTimePerFrame(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxTimePerFrame = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner*& DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner* const& DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_set___4__this(::DigitalOpus::MB::Core::MB3_TextureCombiner*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate*& DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_get_progressInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressInfo;
}
constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate* const& DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_get_progressInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressInfo;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_set_progressInfo(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressInfo = value;
}
constexpr ::GlobalNamespace::MB_AtlasesAndRects*& DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_get_resultAtlasesAndRects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultAtlasesAndRects;
}
constexpr ::GlobalNamespace::MB_AtlasesAndRects* const& DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_get_resultAtlasesAndRects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultAtlasesAndRects;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_set_resultAtlasesAndRects(::GlobalNamespace::MB_AtlasesAndRects*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultAtlasesAndRects = value;
}
constexpr ::UnityW<::UnityEngine::Material>& DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_get_resultMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_get_resultMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultMaterial;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_set_resultMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultMaterial = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_get_objsToMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objsToMesh;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_get_objsToMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objsToMesh;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_set_objsToMesh(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objsToMesh = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*& DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_get_allowedMaterialsFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowedMaterialsFilter;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* const& DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_get_allowedMaterialsFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowedMaterialsFilter;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_set_allowedMaterialsFilter(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowedMaterialsFilter = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_get_texPropsToIgnore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texPropsToIgnore;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_get_texPropsToIgnore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texPropsToIgnore;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_set_texPropsToIgnore(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texPropsToIgnore = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*& DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_get_textureEditorMethods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureEditorMethods;
}
constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* const& DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_get_textureEditorMethods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureEditorMethods;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_set_textureEditorMethods(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureEditorMethods = value;
}
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*& DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_get_packingResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___packingResults;
}
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>* const& DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_get_packingResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___packingResults;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_set_packingResults(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___packingResults = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_get_onlyPackRects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlyPackRects;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_get_onlyPackRects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlyPackRects;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_set_onlyPackRects(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onlyPackRects = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_get_splitAtlasWhenPackingIfTooBig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splitAtlasWhenPackingIfTooBig;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_get_splitAtlasWhenPackingIfTooBig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splitAtlasWhenPackingIfTooBig;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::__cordl_internal_set_splitAtlasWhenPackingIfTooBig(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splitAtlasWhenPackingIfTooBig = value;
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84* DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84::MB3_TextureCombiner__CombineTexturesIntoAtlasesCoroutine_d__84()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9dcc488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult::__cordl_internal_get_success()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___success;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult::__cordl_internal_get_success() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___success;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult::__cordl_internal_set_success(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___success = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult::__cordl_internal_get_isFinished()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isFinished;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult::__cordl_internal_get_isFinished() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isFinished;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult::__cordl_internal_set_isFinished(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isFinished = value;
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult* DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture::*)(::StringW, ::UnityEngine::Texture2D*)>(&::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9dcc444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture::__cordl_internal_get_property()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___property;
}
constexpr ::StringW const& DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture::__cordl_internal_get_property() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___property;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture::__cordl_internal_set_property(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___property = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture::__cordl_internal_get_texture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture::__cordl_internal_get_texture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture::__cordl_internal_set_texture(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texture = value;
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture::_ctor(::StringW  prop, ::UnityEngine::Texture2D*  tex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prop, tex);
}
inline ::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture* DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture::New_ctor(::StringW  prop, ::UnityEngine::Texture2D*  tex)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture*>(prop, tex));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture::MB3_TextureCombiner_TemporaryTexture()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9dcc434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult::__cordl_internal_get_success()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___success;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult::__cordl_internal_get_success() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___success;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult::__cordl_internal_set_success(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___success = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult::__cordl_internal_get_isFinished()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isFinished;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult::__cordl_internal_get_isFinished() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isFinished;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult::__cordl_internal_set_isFinished(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isFinished = value;
}
inline void DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult* DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult::MB3_TextureCombiner_CreateAtlasesCoroutineResult()   {
}
