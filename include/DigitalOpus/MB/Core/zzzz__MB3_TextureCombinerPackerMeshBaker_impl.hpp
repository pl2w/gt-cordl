#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_TextureCombinerPackerMeshBaker.hpp"
#include "DigitalOpus/MB/Core/zzzz__AtlasPadding_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__DRect_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerPackerRoot_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__Texture2D_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerPackerMeshBaker_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__AtlasPackingResult_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__AtlasPadding_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__DRect_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_EditorMethodsInterface_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerPackerMeshBaker_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerPipeline_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombiner_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_TexSet_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MeshBakerMaterialTexture_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__ProgressUpdateDelegate_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__ShaderTextureProperty_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker.Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker::*)(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker::Validate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dd5c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker.CreateAtlases
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker::*)(::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::DigitalOpus::MB::Core::AtlasPackingResult*, ::ArrayW<::UnityEngine::Texture2D*>, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker::CreateAtlases)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9dd5c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker.CopyScaledAndTiledToAtlas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (*)(::DigitalOpus::MB::Core::MeshBakerMaterialTexture*, ::DigitalOpus::MB::Core::MB_TexSet*, ::DigitalOpus::MB::Core::ShaderTextureProperty*, ::DigitalOpus::MB::Core::DRect, int32_t, int32_t, int32_t, int32_t, ::DigitalOpus::MB::Core::AtlasPadding, ::ArrayW<::ArrayW<::UnityEngine::Color>>, bool, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker::CopyScaledAndTiledToAtlas)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x9dd5d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker*>(),
                        {"CopyScaledAndTiledToAtlas", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_TexSet*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>(), ::i2c::type_of<::DigitalOpus::MB::Core::DRect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::AtlasPadding>(), ::i2c::type_of<::ArrayW<::ArrayW<::UnityEngine::Color>>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dd5eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker::Validate(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data);
}
inline ::System::Collections::IEnumerator* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker::CreateAtlases(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, ::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner, ::DigitalOpus::MB::Core::AtlasPackingResult*  packedAtlasRects, ::ArrayW<::UnityEngine::Texture2D*>  atlases, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  textureEditorMethods, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, progressInfo, data, combiner, packedAtlasRects, atlases, textureEditorMethods, LOG_LEVEL);
}
inline ::System::Collections::IEnumerator* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker::CopyScaledAndTiledToAtlas(::DigitalOpus::MB::Core::MeshBakerMaterialTexture*  source, ::DigitalOpus::MB::Core::MB_TexSet*  sourceMaterial, ::DigitalOpus::MB::Core::ShaderTextureProperty*  shaderPropertyName, ::DigitalOpus::MB::Core::DRect  srcSamplingRect, int32_t  targX, int32_t  targY, int32_t  targW, int32_t  targH, ::DigitalOpus::MB::Core::AtlasPadding  padding, ::ArrayW<::ArrayW<::UnityEngine::Color>>  atlasPixels, bool  isNormalMap, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, ::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner, ::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker*>(),
                        {"CopyScaledAndTiledToAtlas", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_TexSet*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>(), ::i2c::type_of<::DigitalOpus::MB::Core::DRect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::AtlasPadding>(), ::i2c::type_of<::ArrayW<::ArrayW<::UnityEngine::Color>>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(nullptr, ___internal_method, source, sourceMaterial, shaderPropertyName, srcSamplingRect, targX, targY, targW, targH, padding, atlasPixels, isNormalMap, data, combiner, progressInfo, LOG_LEVEL);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker::MB3_TextureCombinerPackerMeshBaker()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::*)(int32_t)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9dd5cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9dd6934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::MoveNext)> {
  constexpr static std::size_t size = 0x1140;
  constexpr static std::size_t addrs = 0x9dd6938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dd7a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9dd7a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dd7ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::DigitalOpus::MB::Core::AtlasPackingResult*& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_get_packedAtlasRects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___packedAtlasRects;
}
constexpr ::DigitalOpus::MB::Core::AtlasPackingResult* const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_get_packedAtlasRects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___packedAtlasRects;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_set_packedAtlasRects(::DigitalOpus::MB::Core::AtlasPackingResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___packedAtlasRects = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_get_LOG_LEVEL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_get_LOG_LEVEL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LOG_LEVEL = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_set_data(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner*& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_get_combiner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combiner;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner* const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_get_combiner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combiner;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_set_combiner(::DigitalOpus::MB::Core::MB3_TextureCombiner*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___combiner = value;
}
constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate*& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_get_progressInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressInfo;
}
constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate* const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_get_progressInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressInfo;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_set_progressInfo(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressInfo = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_get_textureEditorMethods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureEditorMethods;
}
constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_get_textureEditorMethods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureEditorMethods;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_set_textureEditorMethods(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureEditorMethods = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>>& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_get_atlases()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atlases;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>> const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_get_atlases() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atlases;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_set_atlases(::ArrayW<::UnityW<::UnityEngine::Texture2D>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___atlases = value;
}
constexpr ::ArrayW<::UnityEngine::Rect>& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_get__uvRects_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uvRects_5__2;
}
constexpr ::ArrayW<::UnityEngine::Rect> const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_get__uvRects_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uvRects_5__2;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_set__uvRects_5__2(::ArrayW<::UnityEngine::Rect>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____uvRects_5__2 = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_get__atlasSizeX_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____atlasSizeX_5__3;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_get__atlasSizeX_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____atlasSizeX_5__3;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_set__atlasSizeX_5__3(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____atlasSizeX_5__3 = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_get__atlasSizeY_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____atlasSizeY_5__4;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_get__atlasSizeY_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____atlasSizeY_5__4;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_set__atlasSizeY_5__4(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____atlasSizeY_5__4 = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_get__propIdx_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propIdx_5__5;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_get__propIdx_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propIdx_5__5;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_set__propIdx_5__5(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____propIdx_5__5 = value;
}
constexpr ::DigitalOpus::MB::Core::ShaderTextureProperty*& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_get__property_5__6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____property_5__6;
}
constexpr ::DigitalOpus::MB::Core::ShaderTextureProperty* const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_get__property_5__6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____property_5__6;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_set__property_5__6(::DigitalOpus::MB::Core::ShaderTextureProperty*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____property_5__6 = value;
}
constexpr ::ArrayW<::ArrayW<::UnityEngine::Color>>& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_get__atlasPixels_5__7()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____atlasPixels_5__7;
}
constexpr ::ArrayW<::ArrayW<::UnityEngine::Color>> const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_get__atlasPixels_5__7() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____atlasPixels_5__7;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_set__atlasPixels_5__7(::ArrayW<::ArrayW<::UnityEngine::Color>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____atlasPixels_5__7 = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_get__isNormalMap_5__8()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isNormalMap_5__8;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_get__isNormalMap_5__8() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isNormalMap_5__8;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_set__isNormalMap_5__8(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isNormalMap_5__8 = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_get__texSetIdx_5__9()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____texSetIdx_5__9;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_get__texSetIdx_5__9() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____texSetIdx_5__9;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::__cordl_internal_set__texSetIdx_5__9(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____texSetIdx_5__9 = value;
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::*)(int32_t)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9dd5e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9dd5eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::MoveNext)> {
  constexpr static std::size_t size = 0xa30;
  constexpr static std::size_t addrs = 0x9dd5ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dd68ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9dd68f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dd692c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::DigitalOpus::MB::Core::MeshBakerMaterialTexture*& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr ::DigitalOpus::MB::Core::MeshBakerMaterialTexture* const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_set_source(::DigitalOpus::MB::Core::MeshBakerMaterialTexture*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get_LOG_LEVEL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get_LOG_LEVEL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LOG_LEVEL = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get_targX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targX;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get_targX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targX;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_set_targX(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targX = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get_targY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targY;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get_targY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targY;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_set_targY(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targY = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get_targW()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targW;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get_targW() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targW;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_set_targW(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targW = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get_targH()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targH;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get_targH() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targH;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_set_targH(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targH = value;
}
constexpr ::DigitalOpus::MB::Core::AtlasPadding& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get_padding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___padding;
}
constexpr ::DigitalOpus::MB::Core::AtlasPadding const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get_padding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___padding;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_set_padding(::DigitalOpus::MB::Core::AtlasPadding  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___padding = value;
}
constexpr ::DigitalOpus::MB::Core::DRect& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get_srcSamplingRect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___srcSamplingRect;
}
constexpr ::DigitalOpus::MB::Core::DRect const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get_srcSamplingRect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___srcSamplingRect;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_set_srcSamplingRect(::DigitalOpus::MB::Core::DRect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___srcSamplingRect = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_set_data(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner*& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get_combiner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combiner;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner* const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get_combiner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combiner;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_set_combiner(::DigitalOpus::MB::Core::MB3_TextureCombiner*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___combiner = value;
}
constexpr ::DigitalOpus::MB::Core::ShaderTextureProperty*& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get_shaderPropertyName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shaderPropertyName;
}
constexpr ::DigitalOpus::MB::Core::ShaderTextureProperty* const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get_shaderPropertyName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shaderPropertyName;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_set_shaderPropertyName(::DigitalOpus::MB::Core::ShaderTextureProperty*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shaderPropertyName = value;
}
constexpr ::DigitalOpus::MB::Core::MB_TexSet*& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get_sourceMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMaterial;
}
constexpr ::DigitalOpus::MB::Core::MB_TexSet* const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get_sourceMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMaterial;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_set_sourceMaterial(::DigitalOpus::MB::Core::MB_TexSet*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceMaterial = value;
}
constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate*& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get_progressInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressInfo;
}
constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate* const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get_progressInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressInfo;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_set_progressInfo(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressInfo = value;
}
constexpr ::ArrayW<::ArrayW<::UnityEngine::Color>>& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get_atlasPixels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atlasPixels;
}
constexpr ::ArrayW<::ArrayW<::UnityEngine::Color>> const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get_atlasPixels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atlasPixels;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_set_atlasPixels(::ArrayW<::ArrayW<::UnityEngine::Color>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___atlasPixels = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get__w_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____w_5__2;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get__w_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____w_5__2;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_set__w_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____w_5__2 = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get__h_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____h_5__3;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get__h_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____h_5__3;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_set__h_5__3(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____h_5__3 = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get__i_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__4;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get__i_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__4;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_set__i_5__4(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____i_5__4 = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get__j_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____j_5__5;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_get__j_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____j_5__5;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::__cordl_internal_set__j_5__5(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____j_5__5 = value;
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2()   {
}
