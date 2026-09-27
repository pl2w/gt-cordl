#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_TextureCombinerPackerOneTextureInAtlas.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Texture2D_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerPackerOneTextureInAtlas_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__AtlasPackingResult_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_EditorMethodsInterface_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerPackerOneTextureInAtlas_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerPipeline_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombiner_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_ITextureCombinerPacker_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__ProgressUpdateDelegate_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas.Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas::*)(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas::Validate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9dddd64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas.ConvertTexturesToReadableFormats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas::*)(::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas::ConvertTexturesToReadableFormats)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9ddddf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas*>(),
                        {"ConvertTexturesToReadableFormats", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas.CalculateAtlasRectangles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas::*)(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, bool, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas::CalculateAtlasRectangles)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x9ddde74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas*>(),
                        {"CalculateAtlasRectangles", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas.CreateAtlases
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas::*)(::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::DigitalOpus::MB::Core::AtlasPackingResult*, ::ArrayW<::UnityEngine::Texture2D*>, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas::CreateAtlases)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9dde1a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas*>(),
                        {"CreateAtlases", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), ::i2c::type_of<::DigitalOpus::MB::Core::AtlasPackingResult*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Texture2D*>>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dde260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas::Validate(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data);
}
inline ::System::Collections::IEnumerator* DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas::ConvertTexturesToReadableFormats(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  result, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, ::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  textureEditorMethods, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas*>(),
                        {"ConvertTexturesToReadableFormats", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, progressInfo, result, data, combiner, textureEditorMethods, LOG_LEVEL);
}
inline ::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas::CalculateAtlasRectangles(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, bool  doMultiAtlas, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas*>(),
                        {"CalculateAtlasRectangles", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*>>(this, ___internal_method, data, doMultiAtlas, LOG_LEVEL);
}
inline ::System::Collections::IEnumerator* DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas::CreateAtlases(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, ::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner, ::DigitalOpus::MB::Core::AtlasPackingResult*  packedAtlasRects, ::ArrayW<::UnityEngine::Texture2D*>  atlases, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  textureEditorMethods, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas*>(),
                        {"CreateAtlases", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ProgressUpdateDelegate*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), ::i2c::type_of<::DigitalOpus::MB::Core::AtlasPackingResult*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Texture2D*>>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, progressInfo, data, combiner, packedAtlasRects, atlases, textureEditorMethods, LOG_LEVEL);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas* DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas*>());
}
/// @brief Convert operator to "::DigitalOpus::MB::Core::MB_ITextureCombinerPacker"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas::operator ::DigitalOpus::MB::Core::MB_ITextureCombinerPacker*() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB_ITextureCombinerPacker*>(static_cast<void*>(this));
}
/// @brief Convert to "::DigitalOpus::MB::Core::MB_ITextureCombinerPacker"
constexpr ::DigitalOpus::MB::Core::MB_ITextureCombinerPacker* DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas::i___DigitalOpus__MB__Core__MB_ITextureCombinerPacker() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB_ITextureCombinerPacker*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas::MB3_TextureCombinerPackerOneTextureInAtlas()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::*)(int32_t)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9dde238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9dde2cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::MoveNext)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x9dde2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dde570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9dde578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dde5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::__cordl_internal_get_LOG_LEVEL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::__cordl_internal_get_LOG_LEVEL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::__cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LOG_LEVEL = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*& DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::__cordl_internal_set_data(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>>& DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::__cordl_internal_get_atlases()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atlases;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>> const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::__cordl_internal_get_atlases() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atlases;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::__cordl_internal_set_atlases(::ArrayW<::UnityW<::UnityEngine::Texture2D>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___atlases = value;
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3* DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3::MB3_TextureCombinerPackerOneTextureInAtlas__CreateAtlases_d__3()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1::*)(int32_t)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9ddde4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9dde268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1::MoveNext)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9dde26c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dde284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9dde28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dde2c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1* DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1::MB3_TextureCombinerPackerOneTextureInAtlas__ConvertTexturesToReadableFormats_d__1()   {
}
