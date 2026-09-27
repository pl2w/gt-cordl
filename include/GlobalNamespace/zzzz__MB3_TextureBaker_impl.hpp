#pragma once
// IWYU pragma private; include "GlobalNamespace/MB3_TextureBaker.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_PackingAlgorithmEnum_impl.hpp"
#include "GlobalNamespace/zzzz__MB2_TextureBakeResults_ResultType_impl.hpp"
#include "GlobalNamespace/zzzz__MB3_MeshBakerRoot_impl.hpp"
#include "GlobalNamespace/zzzz__MB_AtlasesAndRects_impl.hpp"
#include "GlobalNamespace/zzzz__MB_MultiMaterialTexArray_impl.hpp"
#include "GlobalNamespace/zzzz__MB_MultiMaterial_impl.hpp"
#include "GlobalNamespace/zzzz__MB_TextureArrayFormatSet_impl.hpp"
#include "GlobalNamespace/zzzz__MB_TextureArrayResultMaterial_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MB3_TextureBaker_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_EditorMethodsInterface_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_PackingAlgorithmEnum_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombiner_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__ProgressUpdateDelegate_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__ShaderTextureProperty_def.hpp"
#include "GlobalNamespace/zzzz__MB2_TextureBakeResults_ResultType_def.hpp"
#include "GlobalNamespace/zzzz__MB2_TextureBakeResults_def.hpp"
#include "GlobalNamespace/zzzz__MB3_TextureBaker_def.hpp"
#include "GlobalNamespace/zzzz__MB_AtlasesAndRects_def.hpp"
#include "GlobalNamespace/zzzz__MB_TextureArrayResultMaterial_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.get_textureBakeResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MB2_TextureBakeResults> (::GlobalNamespace::MB3_TextureBaker::*)()>(&::GlobalNamespace::MB3_TextureBaker::get_textureBakeResults)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.set_textureBakeResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker::*)(::GlobalNamespace::MB2_TextureBakeResults*)>(&::GlobalNamespace::MB3_TextureBaker::set_textureBakeResults)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a6b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.get_atlasPadding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MB3_TextureBaker::*)()>(&::GlobalNamespace::MB3_TextureBaker::get_atlasPadding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.set_atlasPadding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker::*)(int32_t)>(&::GlobalNamespace::MB3_TextureBaker::set_atlasPadding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a6c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.get_maxAtlasSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MB3_TextureBaker::*)()>(&::GlobalNamespace::MB3_TextureBaker::get_maxAtlasSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.set_maxAtlasSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker::*)(int32_t)>(&::GlobalNamespace::MB3_TextureBaker::set_maxAtlasSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a6d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.get_useMaxAtlasWidthOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB3_TextureBaker::*)()>(&::GlobalNamespace::MB3_TextureBaker::get_useMaxAtlasWidthOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.set_useMaxAtlasWidthOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker::*)(bool)>(&::GlobalNamespace::MB3_TextureBaker::set_useMaxAtlasWidthOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a6e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.get_maxAtlasWidthOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MB3_TextureBaker::*)()>(&::GlobalNamespace::MB3_TextureBaker::get_maxAtlasWidthOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.set_maxAtlasWidthOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker::*)(int32_t)>(&::GlobalNamespace::MB3_TextureBaker::set_maxAtlasWidthOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a6f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.get_useMaxAtlasHeightOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB3_TextureBaker::*)()>(&::GlobalNamespace::MB3_TextureBaker::get_useMaxAtlasHeightOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.set_useMaxAtlasHeightOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker::*)(bool)>(&::GlobalNamespace::MB3_TextureBaker::set_useMaxAtlasHeightOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.get_maxAtlasHeightOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MB3_TextureBaker::*)()>(&::GlobalNamespace::MB3_TextureBaker::get_maxAtlasHeightOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.set_maxAtlasHeightOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker::*)(int32_t)>(&::GlobalNamespace::MB3_TextureBaker::set_maxAtlasHeightOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.get_resizePowerOfTwoTextures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB3_TextureBaker::*)()>(&::GlobalNamespace::MB3_TextureBaker::get_resizePowerOfTwoTextures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.set_resizePowerOfTwoTextures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker::*)(bool)>(&::GlobalNamespace::MB3_TextureBaker::set_resizePowerOfTwoTextures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.get_fixOutOfBoundsUVs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB3_TextureBaker::*)()>(&::GlobalNamespace::MB3_TextureBaker::get_fixOutOfBoundsUVs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.set_fixOutOfBoundsUVs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker::*)(bool)>(&::GlobalNamespace::MB3_TextureBaker::set_fixOutOfBoundsUVs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.get_maxTilingBakeSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MB3_TextureBaker::*)()>(&::GlobalNamespace::MB3_TextureBaker::get_maxTilingBakeSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.set_maxTilingBakeSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker::*)(int32_t)>(&::GlobalNamespace::MB3_TextureBaker::set_maxTilingBakeSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.get_packingAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum (::GlobalNamespace::MB3_TextureBaker::*)()>(&::GlobalNamespace::MB3_TextureBaker::get_packingAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.set_packingAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker::*)(::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum)>(&::GlobalNamespace::MB3_TextureBaker::set_packingAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.get_layerForTexturePackerFastMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MB3_TextureBaker::*)()>(&::GlobalNamespace::MB3_TextureBaker::get_layerForTexturePackerFastMesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.set_layerForTexturePackerFastMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker::*)(int32_t)>(&::GlobalNamespace::MB3_TextureBaker::set_layerForTexturePackerFastMesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.get_meshBakerTexturePackerForcePowerOfTwo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB3_TextureBaker::*)()>(&::GlobalNamespace::MB3_TextureBaker::get_meshBakerTexturePackerForcePowerOfTwo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {"get_meshBakerTexturePackerForcePowerOfTwo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.set_meshBakerTexturePackerForcePowerOfTwo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker::*)(bool)>(&::GlobalNamespace::MB3_TextureBaker::set_meshBakerTexturePackerForcePowerOfTwo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {"set_meshBakerTexturePackerForcePowerOfTwo", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.get_customShaderProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* (::GlobalNamespace::MB3_TextureBaker::*)()>(&::GlobalNamespace::MB3_TextureBaker::get_customShaderProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.set_customShaderProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker::*)(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*)>(&::GlobalNamespace::MB3_TextureBaker::set_customShaderProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.get_texturePropNamesToIgnore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::GlobalNamespace::MB3_TextureBaker::*)()>(&::GlobalNamespace::MB3_TextureBaker::get_texturePropNamesToIgnore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.set_texturePropNamesToIgnore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker::*)(::System::Collections::Generic::List_1<::StringW>*)>(&::GlobalNamespace::MB3_TextureBaker::set_texturePropNamesToIgnore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.get_customShaderPropNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::GlobalNamespace::MB3_TextureBaker::*)()>(&::GlobalNamespace::MB3_TextureBaker::get_customShaderPropNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.set_customShaderPropNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker::*)(::System::Collections::Generic::List_1<::StringW>*)>(&::GlobalNamespace::MB3_TextureBaker::set_customShaderPropNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a7a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.get_resultType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MB2_TextureBakeResults_ResultType (::GlobalNamespace::MB3_TextureBaker::*)()>(&::GlobalNamespace::MB3_TextureBaker::get_resultType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.set_resultType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker::*)(::GlobalNamespace::MB2_TextureBakeResults_ResultType)>(&::GlobalNamespace::MB3_TextureBaker::set_resultType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a7b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.get_doMultiMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB3_TextureBaker::*)()>(&::GlobalNamespace::MB3_TextureBaker::get_doMultiMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.set_doMultiMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker::*)(bool)>(&::GlobalNamespace::MB3_TextureBaker::set_doMultiMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a7c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.get_doMultiMaterialSplitAtlasesIfTooBig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB3_TextureBaker::*)()>(&::GlobalNamespace::MB3_TextureBaker::get_doMultiMaterialSplitAtlasesIfTooBig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.set_doMultiMaterialSplitAtlasesIfTooBig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker::*)(bool)>(&::GlobalNamespace::MB3_TextureBaker::set_doMultiMaterialSplitAtlasesIfTooBig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a7d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.get_doMultiMaterialSplitAtlasesIfOBUVs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB3_TextureBaker::*)()>(&::GlobalNamespace::MB3_TextureBaker::get_doMultiMaterialSplitAtlasesIfOBUVs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.set_doMultiMaterialSplitAtlasesIfOBUVs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker::*)(bool)>(&::GlobalNamespace::MB3_TextureBaker::set_doMultiMaterialSplitAtlasesIfOBUVs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a7e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.get_resultMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::GlobalNamespace::MB3_TextureBaker::*)()>(&::GlobalNamespace::MB3_TextureBaker::get_resultMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.set_resultMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker::*)(::UnityEngine::Material*)>(&::GlobalNamespace::MB3_TextureBaker::set_resultMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.get_considerNonTextureProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB3_TextureBaker::*)()>(&::GlobalNamespace::MB3_TextureBaker::get_considerNonTextureProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {"get_considerNonTextureProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.set_considerNonTextureProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker::*)(bool)>(&::GlobalNamespace::MB3_TextureBaker::set_considerNonTextureProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {"set_considerNonTextureProperties", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.get_doSuggestTreatment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB3_TextureBaker::*)()>(&::GlobalNamespace::MB3_TextureBaker::get_doSuggestTreatment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {"get_doSuggestTreatment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.set_doSuggestTreatment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker::*)(bool)>(&::GlobalNamespace::MB3_TextureBaker::set_doSuggestTreatment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {"set_doSuggestTreatment", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.get_CoroutineResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult* (::GlobalNamespace::MB3_TextureBaker::*)()>(&::GlobalNamespace::MB3_TextureBaker::get_CoroutineResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {"get_CoroutineResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.GetObjectsToCombine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* (::GlobalNamespace::MB3_TextureBaker::*)()>(&::GlobalNamespace::MB3_TextureBaker::GetObjectsToCombine)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9d7a828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.PurgeNullsFromObjectsToCombine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker::*)()>(&::GlobalNamespace::MB3_TextureBaker::PurgeNullsFromObjectsToCombine)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x9d7a8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.CreateAtlases
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*> (::GlobalNamespace::MB3_TextureBaker::*)()>(&::GlobalNamespace::MB3_TextureBaker::CreateAtlases)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9d7aa8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {"CreateAtlases", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.CreateAtlasesCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::MB3_TextureBaker::*)(::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*, bool, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, float_t)>(&::GlobalNamespace::MB3_TextureBaker::CreateAtlasesCoroutine)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9d7adb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {"CreateAtlasesCoroutine", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker._CreateAtlasesCoroutineAtlases
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::MB3_TextureBaker::*)(::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*, bool, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, float_t)>(&::GlobalNamespace::MB3_TextureBaker::_CreateAtlasesCoroutineAtlases)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9d7aeac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {"_CreateAtlasesCoroutineAtlases", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker._CreateAtlasesCoroutineTextureArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::MB3_TextureBaker::*)(::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*, bool, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, float_t)>(&::GlobalNamespace::MB3_TextureBaker::_CreateAtlasesCoroutineTextureArray)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9d7afb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {"_CreateAtlasesCoroutineTextureArray", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker._CreateAtlasesCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::MB3_TextureBaker::*)(::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*, bool, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, float_t)>(&::GlobalNamespace::MB3_TextureBaker::_CreateAtlasesCoroutine)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9d7b0c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {"_CreateAtlasesCoroutine", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.CreateAtlases
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*> (::GlobalNamespace::MB3_TextureBaker::*)(::DigitalOpus::MB::Core::ProgressUpdateDelegate*, bool, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*)>(&::GlobalNamespace::MB3_TextureBaker::CreateAtlases)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x9d7aa9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {"CreateAtlases", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.unpackMat2RectMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker::*)(::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>)>(&::GlobalNamespace::MB3_TextureBaker::unpackMat2RectMap)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x9d7b1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {"unpackMat2RectMap", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.unpackMat2RectMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker::*)(::ArrayW<::GlobalNamespace::MB_TextureArrayResultMaterial*>)>(&::GlobalNamespace::MB3_TextureBaker::unpackMat2RectMap)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x9d7b3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {"unpackMat2RectMap", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::MB_TextureArrayResultMaterial*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.CreateAndConfigureTextureCombiner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB3_TextureCombiner* (::GlobalNamespace::MB3_TextureBaker::*)()>(&::GlobalNamespace::MB3_TextureBaker::CreateAndConfigureTextureCombiner)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9d7b61c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {"CreateAndConfigureTextureCombiner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.ConfigureNewMaterialToMatchOld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::UnityEngine::Material*)>(&::GlobalNamespace::MB3_TextureBaker::ConfigureNewMaterialToMatchOld)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x9d7b71c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {"ConfigureNewMaterialToMatchOld", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker.PrintSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MB3_TextureBaker::*)(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Material>>*)>(&::GlobalNamespace::MB3_TextureBaker::PrintSet)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x9d7b9ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {"PrintSet", {}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Material>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker._ValidateResultMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB3_TextureBaker::*)()>(&::GlobalNamespace::MB3_TextureBaker::_ValidateResultMaterials)> {
  constexpr static std::size_t size = 0x87c;
  constexpr static std::size_t addrs = 0x9d7bba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {"_ValidateResultMaterials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker::*)()>(&::GlobalNamespace::MB3_TextureBaker::_ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x9d7c41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get_LOG_LEVEL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get_LOG_LEVEL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr void GlobalNamespace::MB3_TextureBaker::__cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LOG_LEVEL = value;
}
constexpr ::UnityW<::GlobalNamespace::MB2_TextureBakeResults>& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__textureBakeResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textureBakeResults;
}
constexpr ::UnityW<::GlobalNamespace::MB2_TextureBakeResults> const& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__textureBakeResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textureBakeResults;
}
constexpr void GlobalNamespace::MB3_TextureBaker::__cordl_internal_set__textureBakeResults(::UnityW<::GlobalNamespace::MB2_TextureBakeResults>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____textureBakeResults = value;
}
constexpr int32_t& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__atlasPadding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____atlasPadding;
}
constexpr int32_t const& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__atlasPadding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____atlasPadding;
}
constexpr void GlobalNamespace::MB3_TextureBaker::__cordl_internal_set__atlasPadding(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____atlasPadding = value;
}
constexpr int32_t& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__maxAtlasSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxAtlasSize;
}
constexpr int32_t const& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__maxAtlasSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxAtlasSize;
}
constexpr void GlobalNamespace::MB3_TextureBaker::__cordl_internal_set__maxAtlasSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxAtlasSize = value;
}
constexpr bool& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__useMaxAtlasWidthOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useMaxAtlasWidthOverride;
}
constexpr bool const& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__useMaxAtlasWidthOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useMaxAtlasWidthOverride;
}
constexpr void GlobalNamespace::MB3_TextureBaker::__cordl_internal_set__useMaxAtlasWidthOverride(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useMaxAtlasWidthOverride = value;
}
constexpr int32_t& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__maxAtlasWidthOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxAtlasWidthOverride;
}
constexpr int32_t const& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__maxAtlasWidthOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxAtlasWidthOverride;
}
constexpr void GlobalNamespace::MB3_TextureBaker::__cordl_internal_set__maxAtlasWidthOverride(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxAtlasWidthOverride = value;
}
constexpr bool& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__useMaxAtlasHeightOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useMaxAtlasHeightOverride;
}
constexpr bool const& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__useMaxAtlasHeightOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useMaxAtlasHeightOverride;
}
constexpr void GlobalNamespace::MB3_TextureBaker::__cordl_internal_set__useMaxAtlasHeightOverride(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useMaxAtlasHeightOverride = value;
}
constexpr int32_t& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__maxAtlasHeightOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxAtlasHeightOverride;
}
constexpr int32_t const& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__maxAtlasHeightOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxAtlasHeightOverride;
}
constexpr void GlobalNamespace::MB3_TextureBaker::__cordl_internal_set__maxAtlasHeightOverride(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxAtlasHeightOverride = value;
}
constexpr bool& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__resizePowerOfTwoTextures()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resizePowerOfTwoTextures;
}
constexpr bool const& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__resizePowerOfTwoTextures() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resizePowerOfTwoTextures;
}
constexpr void GlobalNamespace::MB3_TextureBaker::__cordl_internal_set__resizePowerOfTwoTextures(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resizePowerOfTwoTextures = value;
}
constexpr bool& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__fixOutOfBoundsUVs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fixOutOfBoundsUVs;
}
constexpr bool const& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__fixOutOfBoundsUVs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fixOutOfBoundsUVs;
}
constexpr void GlobalNamespace::MB3_TextureBaker::__cordl_internal_set__fixOutOfBoundsUVs(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fixOutOfBoundsUVs = value;
}
constexpr int32_t& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__maxTilingBakeSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxTilingBakeSize;
}
constexpr int32_t const& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__maxTilingBakeSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxTilingBakeSize;
}
constexpr void GlobalNamespace::MB3_TextureBaker::__cordl_internal_set__maxTilingBakeSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxTilingBakeSize = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__packingAlgorithm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____packingAlgorithm;
}
constexpr ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum const& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__packingAlgorithm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____packingAlgorithm;
}
constexpr void GlobalNamespace::MB3_TextureBaker::__cordl_internal_set__packingAlgorithm(::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____packingAlgorithm = value;
}
constexpr int32_t& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__layerTexturePackerFastMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layerTexturePackerFastMesh;
}
constexpr int32_t const& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__layerTexturePackerFastMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layerTexturePackerFastMesh;
}
constexpr void GlobalNamespace::MB3_TextureBaker::__cordl_internal_set__layerTexturePackerFastMesh(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____layerTexturePackerFastMesh = value;
}
constexpr bool& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__meshBakerTexturePackerForcePowerOfTwo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshBakerTexturePackerForcePowerOfTwo;
}
constexpr bool const& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__meshBakerTexturePackerForcePowerOfTwo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshBakerTexturePackerForcePowerOfTwo;
}
constexpr void GlobalNamespace::MB3_TextureBaker::__cordl_internal_set__meshBakerTexturePackerForcePowerOfTwo(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____meshBakerTexturePackerForcePowerOfTwo = value;
}
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__customShaderProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customShaderProperties;
}
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* const& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__customShaderProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customShaderProperties;
}
constexpr void GlobalNamespace::MB3_TextureBaker::__cordl_internal_set__customShaderProperties(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____customShaderProperties = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__texturePropNamesToIgnore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____texturePropNamesToIgnore;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__texturePropNamesToIgnore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____texturePropNamesToIgnore;
}
constexpr void GlobalNamespace::MB3_TextureBaker::__cordl_internal_set__texturePropNamesToIgnore(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____texturePropNamesToIgnore = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__customShaderPropNames_Depricated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customShaderPropNames_Depricated;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__customShaderPropNames_Depricated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customShaderPropNames_Depricated;
}
constexpr void GlobalNamespace::MB3_TextureBaker::__cordl_internal_set__customShaderPropNames_Depricated(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____customShaderPropNames_Depricated = value;
}
constexpr ::GlobalNamespace::MB2_TextureBakeResults_ResultType& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__resultType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resultType;
}
constexpr ::GlobalNamespace::MB2_TextureBakeResults_ResultType const& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__resultType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resultType;
}
constexpr void GlobalNamespace::MB3_TextureBaker::__cordl_internal_set__resultType(::GlobalNamespace::MB2_TextureBakeResults_ResultType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resultType = value;
}
constexpr bool& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__doMultiMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doMultiMaterial;
}
constexpr bool const& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__doMultiMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doMultiMaterial;
}
constexpr void GlobalNamespace::MB3_TextureBaker::__cordl_internal_set__doMultiMaterial(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____doMultiMaterial = value;
}
constexpr bool& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__doMultiMaterialSplitAtlasesIfTooBig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doMultiMaterialSplitAtlasesIfTooBig;
}
constexpr bool const& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__doMultiMaterialSplitAtlasesIfTooBig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doMultiMaterialSplitAtlasesIfTooBig;
}
constexpr void GlobalNamespace::MB3_TextureBaker::__cordl_internal_set__doMultiMaterialSplitAtlasesIfTooBig(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____doMultiMaterialSplitAtlasesIfTooBig = value;
}
constexpr bool& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__doMultiMaterialSplitAtlasesIfOBUVs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doMultiMaterialSplitAtlasesIfOBUVs;
}
constexpr bool const& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__doMultiMaterialSplitAtlasesIfOBUVs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doMultiMaterialSplitAtlasesIfOBUVs;
}
constexpr void GlobalNamespace::MB3_TextureBaker::__cordl_internal_set__doMultiMaterialSplitAtlasesIfOBUVs(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____doMultiMaterialSplitAtlasesIfOBUVs = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__resultMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resultMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__resultMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resultMaterial;
}
constexpr void GlobalNamespace::MB3_TextureBaker::__cordl_internal_set__resultMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resultMaterial = value;
}
constexpr bool& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__considerNonTextureProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____considerNonTextureProperties;
}
constexpr bool const& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__considerNonTextureProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____considerNonTextureProperties;
}
constexpr void GlobalNamespace::MB3_TextureBaker::__cordl_internal_set__considerNonTextureProperties(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____considerNonTextureProperties = value;
}
constexpr bool& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__doSuggestTreatment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doSuggestTreatment;
}
constexpr bool const& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__doSuggestTreatment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doSuggestTreatment;
}
constexpr void GlobalNamespace::MB3_TextureBaker::__cordl_internal_set__doSuggestTreatment(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____doSuggestTreatment = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__coroutineResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coroutineResult;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult* const& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get__coroutineResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coroutineResult;
}
constexpr void GlobalNamespace::MB3_TextureBaker::__cordl_internal_set__coroutineResult(::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____coroutineResult = value;
}
constexpr ::ArrayW<::GlobalNamespace::MB_MultiMaterial*>& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get_resultMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultMaterials;
}
constexpr ::ArrayW<::GlobalNamespace::MB_MultiMaterial*> const& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get_resultMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultMaterials;
}
constexpr void GlobalNamespace::MB3_TextureBaker::__cordl_internal_set_resultMaterials(::ArrayW<::GlobalNamespace::MB_MultiMaterial*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultMaterials = value;
}
constexpr ::ArrayW<::GlobalNamespace::MB_MultiMaterialTexArray*>& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get_resultMaterialsTexArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultMaterialsTexArray;
}
constexpr ::ArrayW<::GlobalNamespace::MB_MultiMaterialTexArray*> const& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get_resultMaterialsTexArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultMaterialsTexArray;
}
constexpr void GlobalNamespace::MB3_TextureBaker::__cordl_internal_set_resultMaterialsTexArray(::ArrayW<::GlobalNamespace::MB_MultiMaterialTexArray*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultMaterialsTexArray = value;
}
constexpr ::ArrayW<::GlobalNamespace::MB_TextureArrayFormatSet*>& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get_textureArrayOutputFormats()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureArrayOutputFormats;
}
constexpr ::ArrayW<::GlobalNamespace::MB_TextureArrayFormatSet*> const& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get_textureArrayOutputFormats() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureArrayOutputFormats;
}
constexpr void GlobalNamespace::MB3_TextureBaker::__cordl_internal_set_textureArrayOutputFormats(::ArrayW<::GlobalNamespace::MB_TextureArrayFormatSet*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureArrayOutputFormats = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get_objsToMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objsToMesh;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get_objsToMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objsToMesh;
}
constexpr void GlobalNamespace::MB3_TextureBaker::__cordl_internal_set_objsToMesh(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objsToMesh = value;
}
constexpr ::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess*& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get_onBuiltAtlasesSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onBuiltAtlasesSuccess;
}
constexpr ::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess* const& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get_onBuiltAtlasesSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onBuiltAtlasesSuccess;
}
constexpr void GlobalNamespace::MB3_TextureBaker::__cordl_internal_set_onBuiltAtlasesSuccess(::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onBuiltAtlasesSuccess = value;
}
constexpr ::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail*& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get_onBuiltAtlasesFail()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onBuiltAtlasesFail;
}
constexpr ::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail* const& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get_onBuiltAtlasesFail() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onBuiltAtlasesFail;
}
constexpr void GlobalNamespace::MB3_TextureBaker::__cordl_internal_set_onBuiltAtlasesFail(::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onBuiltAtlasesFail = value;
}
constexpr ::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get_OnCombinedTexturesCoroutineAtlasesAndRects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCombinedTexturesCoroutineAtlasesAndRects;
}
constexpr ::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*> const& GlobalNamespace::MB3_TextureBaker::__cordl_internal_get_OnCombinedTexturesCoroutineAtlasesAndRects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCombinedTexturesCoroutineAtlasesAndRects;
}
constexpr void GlobalNamespace::MB3_TextureBaker::__cordl_internal_set_OnCombinedTexturesCoroutineAtlasesAndRects(::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnCombinedTexturesCoroutineAtlasesAndRects = value;
}
inline ::UnityW<::GlobalNamespace::MB2_TextureBakeResults> GlobalNamespace::MB3_TextureBaker::get_textureBakeResults()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MB2_TextureBakeResults>>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_TextureBaker::set_textureBakeResults(::GlobalNamespace::MB2_TextureBakeResults*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::MB3_TextureBaker::get_atlasPadding()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_TextureBaker::set_atlasPadding(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::MB3_TextureBaker::get_maxAtlasSize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_TextureBaker::set_maxAtlasSize(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MB3_TextureBaker::get_useMaxAtlasWidthOverride()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_TextureBaker::set_useMaxAtlasWidthOverride(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::MB3_TextureBaker::get_maxAtlasWidthOverride()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_TextureBaker::set_maxAtlasWidthOverride(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MB3_TextureBaker::get_useMaxAtlasHeightOverride()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_TextureBaker::set_useMaxAtlasHeightOverride(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::MB3_TextureBaker::get_maxAtlasHeightOverride()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_TextureBaker::set_maxAtlasHeightOverride(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MB3_TextureBaker::get_resizePowerOfTwoTextures()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_TextureBaker::set_resizePowerOfTwoTextures(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MB3_TextureBaker::get_fixOutOfBoundsUVs()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_TextureBaker::set_fixOutOfBoundsUVs(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::MB3_TextureBaker::get_maxTilingBakeSize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_TextureBaker::set_maxTilingBakeSize(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum GlobalNamespace::MB3_TextureBaker::get_packingAlgorithm()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_TextureBaker::set_packingAlgorithm(::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::MB3_TextureBaker::get_layerForTexturePackerFastMesh()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_TextureBaker::set_layerForTexturePackerFastMesh(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MB3_TextureBaker::get_meshBakerTexturePackerForcePowerOfTwo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {"get_meshBakerTexturePackerForcePowerOfTwo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_TextureBaker::set_meshBakerTexturePackerForcePowerOfTwo(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {"set_meshBakerTexturePackerForcePowerOfTwo", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* GlobalNamespace::MB3_TextureBaker::get_customShaderProperties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_TextureBaker::set_customShaderProperties(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::MB3_TextureBaker::get_texturePropNamesToIgnore()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_TextureBaker::set_texturePropNamesToIgnore(::System::Collections::Generic::List_1<::StringW>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::MB3_TextureBaker::get_customShaderPropNames()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_TextureBaker::set_customShaderPropNames(::System::Collections::Generic::List_1<::StringW>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MB2_TextureBakeResults_ResultType GlobalNamespace::MB3_TextureBaker::get_resultType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MB2_TextureBakeResults_ResultType>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_TextureBaker::set_resultType(::GlobalNamespace::MB2_TextureBakeResults_ResultType  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MB3_TextureBaker::get_doMultiMaterial()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_TextureBaker::set_doMultiMaterial(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MB3_TextureBaker::get_doMultiMaterialSplitAtlasesIfTooBig()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_TextureBaker::set_doMultiMaterialSplitAtlasesIfTooBig(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MB3_TextureBaker::get_doMultiMaterialSplitAtlasesIfOBUVs()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_TextureBaker::set_doMultiMaterialSplitAtlasesIfOBUVs(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::MB3_TextureBaker::get_resultMaterial()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_TextureBaker::set_resultMaterial(::UnityEngine::Material*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MB3_TextureBaker::get_considerNonTextureProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {"get_considerNonTextureProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_TextureBaker::set_considerNonTextureProperties(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {"set_considerNonTextureProperties", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MB3_TextureBaker::get_doSuggestTreatment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {"get_doSuggestTreatment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_TextureBaker::set_doSuggestTreatment(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {"set_doSuggestTreatment", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult* GlobalNamespace::MB3_TextureBaker::get_CoroutineResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {"get_CoroutineResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* GlobalNamespace::MB3_TextureBaker::GetObjectsToCombine()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_TextureBaker::PurgeNullsFromObjectsToCombine()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*> GlobalNamespace::MB3_TextureBaker::CreateAtlases()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {"CreateAtlases", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::MB3_TextureBaker::CreateAtlasesCoroutine(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  coroutineResult, bool  saveAtlasesAsAssets, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods, float_t  maxTimePerFrame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {"CreateAtlasesCoroutine", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, progressInfo, coroutineResult, saveAtlasesAsAssets, editorMethods, maxTimePerFrame);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::MB3_TextureBaker::_CreateAtlasesCoroutineAtlases(::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner, ::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  coroutineResult, bool  saveAtlasesAsAssets, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods, float_t  maxTimePerFrame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {"_CreateAtlasesCoroutineAtlases", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, combiner, progressInfo, coroutineResult, saveAtlasesAsAssets, editorMethods, maxTimePerFrame);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::MB3_TextureBaker::_CreateAtlasesCoroutineTextureArray(::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner, ::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  coroutineResult, bool  saveAtlasesAsAssets, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods, float_t  maxTimePerFrame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {"_CreateAtlasesCoroutineTextureArray", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, combiner, progressInfo, coroutineResult, saveAtlasesAsAssets, editorMethods, maxTimePerFrame);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::MB3_TextureBaker::_CreateAtlasesCoroutine(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  coroutineResult, bool  saveAtlasesAsAssets, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods, float_t  maxTimePerFrame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {"_CreateAtlasesCoroutine", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, progressInfo, coroutineResult, saveAtlasesAsAssets, editorMethods, maxTimePerFrame);
}
inline ::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*> GlobalNamespace::MB3_TextureBaker::CreateAtlases(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo, bool  saveAtlasesAsAssets, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {"CreateAtlases", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>>(this, ___internal_method, progressInfo, saveAtlasesAsAssets, editorMethods);
}
inline void GlobalNamespace::MB3_TextureBaker::unpackMat2RectMap(::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>  rawResults)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {"unpackMat2RectMap", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rawResults);
}
inline void GlobalNamespace::MB3_TextureBaker::unpackMat2RectMap(::ArrayW<::GlobalNamespace::MB_TextureArrayResultMaterial*>  rawResults)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {"unpackMat2RectMap", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::MB_TextureArrayResultMaterial*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rawResults);
}
inline ::DigitalOpus::MB::Core::MB3_TextureCombiner* GlobalNamespace::MB3_TextureBaker::CreateAndConfigureTextureCombiner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {"CreateAndConfigureTextureCombiner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_TextureBaker::ConfigureNewMaterialToMatchOld(::UnityEngine::Material*  newMat, ::UnityEngine::Material*  original)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {"ConfigureNewMaterialToMatchOld", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, newMat, original);
}
inline ::StringW GlobalNamespace::MB3_TextureBaker::PrintSet(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Material>>*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {"PrintSet", {}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Material>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, s);
}
inline bool GlobalNamespace::MB3_TextureBaker::_ValidateResultMaterials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {"_ValidateResultMaterials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_TextureBaker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MB3_TextureBaker* GlobalNamespace::MB3_TextureBaker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB3_TextureBaker*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB3_TextureBaker::MB3_TextureBaker()   {
}
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::*)(int32_t)>(&::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9d7b0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::*)()>(&::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d7d69c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::*)()>(&::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::MoveNext)> {
  constexpr static std::size_t size = 0xa34;
  constexpr static std::size_t addrs = 0x9d7d6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::*)()>(&::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7e0d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::*)()>(&::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d7e0dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::*)()>(&::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7e114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::MB3_TextureBaker>& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::MB3_TextureBaker> const& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MB3_TextureBaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::__cordl_internal_get_coroutineResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coroutineResult;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult* const& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::__cordl_internal_get_coroutineResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coroutineResult;
}
constexpr void GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::__cordl_internal_set_coroutineResult(::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coroutineResult = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::__cordl_internal_get_editorMethods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___editorMethods;
}
constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* const& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::__cordl_internal_get_editorMethods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___editorMethods;
}
constexpr void GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::__cordl_internal_set_editorMethods(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___editorMethods = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner*& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::__cordl_internal_get_combiner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combiner;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner* const& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::__cordl_internal_get_combiner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combiner;
}
constexpr void GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::__cordl_internal_set_combiner(::DigitalOpus::MB::Core::MB3_TextureCombiner*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___combiner = value;
}
constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate*& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::__cordl_internal_get_progressInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressInfo;
}
constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate* const& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::__cordl_internal_get_progressInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressInfo;
}
constexpr void GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::__cordl_internal_set_progressInfo(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressInfo = value;
}
constexpr bool& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::__cordl_internal_get_saveAtlasesAsAssets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveAtlasesAsAssets;
}
constexpr bool const& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::__cordl_internal_get_saveAtlasesAsAssets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveAtlasesAsAssets;
}
constexpr void GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::__cordl_internal_set_saveAtlasesAsAssets(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saveAtlasesAsAssets = value;
}
constexpr float_t& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::__cordl_internal_get_maxTimePerFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTimePerFrame;
}
constexpr float_t const& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::__cordl_internal_get_maxTimePerFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTimePerFrame;
}
constexpr void GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::__cordl_internal_set_maxTimePerFrame(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxTimePerFrame = value;
}
constexpr ::ArrayW<::GlobalNamespace::MB_TextureArrayResultMaterial*>& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::__cordl_internal_get__bakedMatsAndSlices_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bakedMatsAndSlices_5__2;
}
constexpr ::ArrayW<::GlobalNamespace::MB_TextureArrayResultMaterial*> const& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::__cordl_internal_get__bakedMatsAndSlices_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bakedMatsAndSlices_5__2;
}
constexpr void GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::__cordl_internal_set__bakedMatsAndSlices_5__2(::ArrayW<::GlobalNamespace::MB_TextureArrayResultMaterial*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bakedMatsAndSlices_5__2 = value;
}
constexpr int32_t& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::__cordl_internal_get__resMatIdx_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resMatIdx_5__3;
}
constexpr int32_t const& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::__cordl_internal_get__resMatIdx_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resMatIdx_5__3;
}
constexpr void GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::__cordl_internal_set__resMatIdx_5__3(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resMatIdx_5__3 = value;
}
inline void GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110* GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110::MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110()   {
}
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::*)(int32_t)>(&::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9d7af88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::*)()>(&::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d7cf9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::*)()>(&::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::MoveNext)> {
  constexpr static std::size_t size = 0x6b4;
  constexpr static std::size_t addrs = 0x9d7cfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::*)()>(&::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7d654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::*)()>(&::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d7d65c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::*)()>(&::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7d694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::MB3_TextureBaker>& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::MB3_TextureBaker> const& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MB3_TextureBaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner*& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::__cordl_internal_get_combiner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combiner;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner* const& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::__cordl_internal_get_combiner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combiner;
}
constexpr void GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::__cordl_internal_set_combiner(::DigitalOpus::MB::Core::MB3_TextureCombiner*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___combiner = value;
}
constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate*& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::__cordl_internal_get_progressInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressInfo;
}
constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate* const& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::__cordl_internal_get_progressInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressInfo;
}
constexpr void GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::__cordl_internal_set_progressInfo(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressInfo = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::__cordl_internal_get_editorMethods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___editorMethods;
}
constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* const& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::__cordl_internal_get_editorMethods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___editorMethods;
}
constexpr void GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::__cordl_internal_set_editorMethods(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___editorMethods = value;
}
constexpr float_t& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::__cordl_internal_get_maxTimePerFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTimePerFrame;
}
constexpr float_t const& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::__cordl_internal_get_maxTimePerFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTimePerFrame;
}
constexpr void GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::__cordl_internal_set_maxTimePerFrame(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxTimePerFrame = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::__cordl_internal_get_coroutineResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coroutineResult;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult* const& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::__cordl_internal_get_coroutineResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coroutineResult;
}
constexpr void GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::__cordl_internal_set_coroutineResult(::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coroutineResult = value;
}
constexpr int32_t& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::__cordl_internal_get__i_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__2;
}
constexpr int32_t const& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::__cordl_internal_get__i_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__2;
}
constexpr void GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::__cordl_internal_set__i_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____i_5__2 = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::__cordl_internal_get__coroutineResult2_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coroutineResult2_5__3;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult* const& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::__cordl_internal_get__coroutineResult2_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coroutineResult2_5__3;
}
constexpr void GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::__cordl_internal_set__coroutineResult2_5__3(::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____coroutineResult2_5__3 = value;
}
inline void GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109* GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109::MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109()   {
}
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::*)(int32_t)>(&::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9d7b19c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::*)()>(&::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d7c96c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::*)()>(&::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::MoveNext)> {
  constexpr static std::size_t size = 0x5e4;
  constexpr static std::size_t addrs = 0x9d7c970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::*)()>(&::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7cf54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::*)()>(&::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d7cf5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::*)()>(&::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7cf94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::MB3_TextureBaker>& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::MB3_TextureBaker> const& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MB3_TextureBaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr float_t& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::__cordl_internal_get_maxTimePerFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTimePerFrame;
}
constexpr float_t const& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::__cordl_internal_get_maxTimePerFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTimePerFrame;
}
constexpr void GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::__cordl_internal_set_maxTimePerFrame(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxTimePerFrame = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::__cordl_internal_get_coroutineResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coroutineResult;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult* const& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::__cordl_internal_get_coroutineResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coroutineResult;
}
constexpr void GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::__cordl_internal_set_coroutineResult(::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coroutineResult = value;
}
constexpr bool& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::__cordl_internal_get_saveAtlasesAsAssets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveAtlasesAsAssets;
}
constexpr bool const& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::__cordl_internal_get_saveAtlasesAsAssets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveAtlasesAsAssets;
}
constexpr void GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::__cordl_internal_set_saveAtlasesAsAssets(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saveAtlasesAsAssets = value;
}
constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate*& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::__cordl_internal_get_progressInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressInfo;
}
constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate* const& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::__cordl_internal_get_progressInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressInfo;
}
constexpr void GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::__cordl_internal_set_progressInfo(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressInfo = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::__cordl_internal_get_editorMethods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___editorMethods;
}
constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* const& GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::__cordl_internal_get_editorMethods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___editorMethods;
}
constexpr void GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::__cordl_internal_set_editorMethods(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___editorMethods = value;
}
inline void GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111* GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB3_TextureBaker___CreateAtlasesCoroutine_d__111::MB3_TextureBaker___CreateAtlasesCoroutine_d__111()   {
}
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::*)(int32_t)>(&::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9d7ae84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::*)()>(&::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d7c848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::*)()>(&::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::MoveNext)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9d7c84c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::*)()>(&::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7c924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::*)()>(&::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d7c92c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::*)()>(&::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7c964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::MB3_TextureBaker>& GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::MB3_TextureBaker> const& GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MB3_TextureBaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate*& GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::__cordl_internal_get_progressInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressInfo;
}
constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate* const& GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::__cordl_internal_get_progressInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressInfo;
}
constexpr void GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::__cordl_internal_set_progressInfo(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressInfo = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*& GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::__cordl_internal_get_coroutineResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coroutineResult;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult* const& GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::__cordl_internal_get_coroutineResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coroutineResult;
}
constexpr void GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::__cordl_internal_set_coroutineResult(::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coroutineResult = value;
}
constexpr bool& GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::__cordl_internal_get_saveAtlasesAsAssets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveAtlasesAsAssets;
}
constexpr bool const& GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::__cordl_internal_get_saveAtlasesAsAssets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveAtlasesAsAssets;
}
constexpr void GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::__cordl_internal_set_saveAtlasesAsAssets(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saveAtlasesAsAssets = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*& GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::__cordl_internal_get_editorMethods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___editorMethods;
}
constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* const& GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::__cordl_internal_get_editorMethods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___editorMethods;
}
constexpr void GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::__cordl_internal_set_editorMethods(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___editorMethods = value;
}
constexpr float_t& GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::__cordl_internal_get_maxTimePerFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTimePerFrame;
}
constexpr float_t const& GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::__cordl_internal_get_maxTimePerFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTimePerFrame;
}
constexpr void GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::__cordl_internal_set_maxTimePerFrame(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxTimePerFrame = value;
}
inline void GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108* GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB3_TextureBaker__CreateAtlasesCoroutine_d__108::MB3_TextureBaker__CreateAtlasesCoroutine_d__108()   {
}
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker___c::*)()>(&::GlobalNamespace::MB3_TextureBaker___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7c7e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker___c._PurgeNullsFromObjectsToCombine_b__101_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB3_TextureBaker___c::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::MB3_TextureBaker___c::_PurgeNullsFromObjectsToCombine_b__101_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9d7c7ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___c*>(),
                        {"<PurgeNullsFromObjectsToCombine>b__101_0", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MB3_TextureBaker___c::setStaticF___9(::GlobalNamespace::MB3_TextureBaker___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MB3_TextureBaker___c*, "<>9", ::GlobalNamespace::MB3_TextureBaker___c*>(std::forward<::GlobalNamespace::MB3_TextureBaker___c*>(value));
}
inline ::GlobalNamespace::MB3_TextureBaker___c* GlobalNamespace::MB3_TextureBaker___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MB3_TextureBaker___c*, "<>9", ::GlobalNamespace::MB3_TextureBaker___c*>();
}
inline void GlobalNamespace::MB3_TextureBaker___c::setStaticF___9__101_0(::System::Predicate_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::UnityW<::UnityEngine::GameObject>>*, "<>9__101_0", ::GlobalNamespace::MB3_TextureBaker___c*>(std::forward<::System::Predicate_1<::UnityW<::UnityEngine::GameObject>>*>(value));
}
inline ::System::Predicate_1<::UnityW<::UnityEngine::GameObject>>* GlobalNamespace::MB3_TextureBaker___c::getStaticF___9__101_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityW<::UnityEngine::GameObject>>*, "<>9__101_0", ::GlobalNamespace::MB3_TextureBaker___c*>();
}
inline void GlobalNamespace::MB3_TextureBaker___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MB3_TextureBaker___c::_PurgeNullsFromObjectsToCombine_b__101_0(::UnityEngine::GameObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker___c*>(),
                        {"<PurgeNullsFromObjectsToCombine>b__101_0", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline ::GlobalNamespace::MB3_TextureBaker___c* GlobalNamespace::MB3_TextureBaker___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB3_TextureBaker___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB3_TextureBaker___c::MB3_TextureBaker___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9d7c6a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail::*)()>(&::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9d7c740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail::*)(::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9d7c754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail::*)(::System::IAsyncResult*)>(&::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9d7c770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail* GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineFail::MB3_TextureBaker_OnCombinedTexturesCoroutineFail()   {
}
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9d7c5cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess::*)()>(&::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9d7c668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess::*)(::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9d7c67c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess::*)(::System::IAsyncResult*)>(&::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9d7c698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess* GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess()   {
}
