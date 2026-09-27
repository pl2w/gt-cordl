#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_TextureCombinerMerging.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerMerging_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerNonTextureProperties_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_TexSet_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerMerging.BuildTransformMeshUV2AtlasRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(bool, ::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Rect)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerMerging::BuildTransformMeshUV2AtlasRect)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x9dd04d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerMerging*>(),
                        {"BuildTransformMeshUV2AtlasRect", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerMerging._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerMerging::*)(bool, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*, bool, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerMerging::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9dd06ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerMerging*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerMerging.MergeOverlappingDistinctMaterialTexturesAndCalcMaterialSubrects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerMerging::*)(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerMerging::MergeOverlappingDistinctMaterialTexturesAndCalcMaterialSubrects)> {
  constexpr static std::size_t size = 0x11dc;
  constexpr static std::size_t addrs = 0x9dd0710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerMerging*>(),
                        {"MergeOverlappingDistinctMaterialTexturesAndCalcMaterialSubrects", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerMerging.MergeDistinctMaterialTexturesThatWouldExceedMaxAtlasSizeAndCalcMaterialSubrects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerMerging::*)(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*, int32_t)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerMerging::MergeDistinctMaterialTexturesThatWouldExceedMaxAtlasSizeAndCalcMaterialSubrects)> {
  constexpr static std::size_t size = 0xccc;
  constexpr static std::size_t addrs = 0x9dd20bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerMerging*>(),
                        {"MergeDistinctMaterialTexturesThatWouldExceedMaxAtlasSizeAndCalcMaterialSubrects", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerMerging.DoIntegrityCheckMergedEncapsulatingSamplingRects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerMerging::*)(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerMerging::DoIntegrityCheckMergedEncapsulatingSamplingRects)> {
  constexpr static std::size_t size = 0x7d0;
  constexpr static std::size_t addrs = 0x9dd18ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerMerging*>(),
                        {"DoIntegrityCheckMergedEncapsulatingSamplingRects", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& DigitalOpus::MB::Core::MB3_TextureCombinerMerging::__cordl_internal_get__HasBeenInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasBeenInitialized;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_TextureCombinerMerging::__cordl_internal_get__HasBeenInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasBeenInitialized;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerMerging::__cordl_internal_set__HasBeenInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HasBeenInitialized = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_TextureCombinerMerging::__cordl_internal_get__considerNonTextureProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____considerNonTextureProperties;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_TextureCombinerMerging::__cordl_internal_get__considerNonTextureProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____considerNonTextureProperties;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerMerging::__cordl_internal_set__considerNonTextureProperties(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____considerNonTextureProperties = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*& DigitalOpus::MB::Core::MB3_TextureCombinerMerging::__cordl_internal_get_resultMaterialTextureBlender()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultMaterialTextureBlender;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties* const& DigitalOpus::MB::Core::MB3_TextureCombinerMerging::__cordl_internal_get_resultMaterialTextureBlender() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultMaterialTextureBlender;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerMerging::__cordl_internal_set_resultMaterialTextureBlender(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultMaterialTextureBlender = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_TextureCombinerMerging::__cordl_internal_get_fixOutOfBoundsUVs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fixOutOfBoundsUVs;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_TextureCombinerMerging::__cordl_internal_get_fixOutOfBoundsUVs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fixOutOfBoundsUVs;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerMerging::__cordl_internal_set_fixOutOfBoundsUVs(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fixOutOfBoundsUVs = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& DigitalOpus::MB::Core::MB3_TextureCombinerMerging::__cordl_internal_get_LOG_LEVEL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& DigitalOpus::MB::Core::MB3_TextureCombinerMerging::__cordl_internal_get_LOG_LEVEL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerMerging::__cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LOG_LEVEL = value;
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerMerging::setStaticF_DO_INTEGRITY_CHECKS(bool  value)  {
::cordl_internals::setStaticField<bool, "DO_INTEGRITY_CHECKS", ::DigitalOpus::MB::Core::MB3_TextureCombinerMerging*>(std::forward<bool>(value));
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombinerMerging::getStaticF_DO_INTEGRITY_CHECKS()  {
return ::cordl_internals::getStaticField<bool, "DO_INTEGRITY_CHECKS", ::DigitalOpus::MB::Core::MB3_TextureCombinerMerging*>();
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerMerging::setStaticF_LOG_LEVEL_TRACE_MERGE_MAT_SUBRECTS(bool  value)  {
::cordl_internals::setStaticField<bool, "LOG_LEVEL_TRACE_MERGE_MAT_SUBRECTS", ::DigitalOpus::MB::Core::MB3_TextureCombinerMerging*>(std::forward<bool>(value));
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombinerMerging::getStaticF_LOG_LEVEL_TRACE_MERGE_MAT_SUBRECTS()  {
return ::cordl_internals::getStaticField<bool, "LOG_LEVEL_TRACE_MERGE_MAT_SUBRECTS", ::DigitalOpus::MB::Core::MB3_TextureCombinerMerging*>();
}
inline ::UnityEngine::Rect DigitalOpus::MB::Core::MB3_TextureCombinerMerging::BuildTransformMeshUV2AtlasRect(bool  considerMeshUVs, ::UnityEngine::Rect  _atlasRect, ::UnityEngine::Rect  _obUVRect, ::UnityEngine::Rect  _sourceMaterialTiling, ::UnityEngine::Rect  _encapsulatingRect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerMerging*>(),
                        {"BuildTransformMeshUV2AtlasRect", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, considerMeshUVs, _atlasRect, _obUVRect, _sourceMaterialTiling, _encapsulatingRect);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerMerging::_ctor(bool  considerNonTextureProps, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  resultMaterialTexBlender, bool  fixObUVs, ::DigitalOpus::MB::Core::MB2_LogLevel  logLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerMerging*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, considerNonTextureProps, resultMaterialTexBlender, fixObUVs, logLevel);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerMerging::MergeOverlappingDistinctMaterialTexturesAndCalcMaterialSubrects(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*  distinctMaterialTextures)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerMerging*>(),
                        {"MergeOverlappingDistinctMaterialTexturesAndCalcMaterialSubrects", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, distinctMaterialTextures);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerMerging::MergeDistinctMaterialTexturesThatWouldExceedMaxAtlasSizeAndCalcMaterialSubrects(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*  distinctMaterialTextures, int32_t  maxAtlasSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerMerging*>(),
                        {"MergeDistinctMaterialTexturesThatWouldExceedMaxAtlasSizeAndCalcMaterialSubrects", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, distinctMaterialTextures, maxAtlasSize);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerMerging::DoIntegrityCheckMergedEncapsulatingSamplingRects(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*  distinctMaterialTextures)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerMerging*>(),
                        {"DoIntegrityCheckMergedEncapsulatingSamplingRects", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, distinctMaterialTextures);
}
inline ::DigitalOpus::MB::Core::MB3_TextureCombinerMerging* DigitalOpus::MB::Core::MB3_TextureCombinerMerging::New_ctor(bool  considerNonTextureProps, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  resultMaterialTexBlender, bool  fixObUVs, ::DigitalOpus::MB::Core::MB2_LogLevel  logLevel)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_TextureCombinerMerging*>(considerNonTextureProps, resultMaterialTexBlender, fixObUVs, logLevel));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerMerging::MB3_TextureCombinerMerging()   {
}
