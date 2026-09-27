#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_TextureCombinerPackerMeshBaker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DigitalOpus/MB/Core/zzzz__AtlasPadding_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__DRect_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerPackerRoot_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MB3_TextureCombinerPackerMeshBaker)
namespace DigitalOpus::MB::Core {
class AtlasPackingResult;
}
namespace DigitalOpus::MB::Core {
struct AtlasPadding;
}
namespace DigitalOpus::MB::Core {
struct DRect;
}
namespace DigitalOpus::MB::Core {
class MB2_EditorMethodsInterface;
}
namespace DigitalOpus::MB::Core {
struct MB2_LogLevel;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPipeline_TexturePipelineData;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombiner;
}
namespace DigitalOpus::MB::Core {
class MB_TexSet;
}
namespace DigitalOpus::MB::Core {
class MeshBakerMaterialTexture;
}
namespace DigitalOpus::MB::Core {
class ProgressUpdateDelegate;
}
namespace DigitalOpus::MB::Core {
class ShaderTextureProperty;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPackerMeshBaker;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker*, "DigitalOpus.MB.Core", "MB3_TextureCombinerPackerMeshBaker");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2*, "DigitalOpus.MB.Core", "MB3_TextureCombinerPackerMeshBaker/<CopyScaledAndTiledToAtlas>d__2");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1*, "DigitalOpus.MB.Core", "MB3_TextureCombinerPackerMeshBaker/<CreateAtlases>d__1");
// Dependencies DigitalOpus.MB.Core.MB3_TextureCombinerPackerRoot
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombinerPackerMeshBaker
class CORDL_TYPE MB3_TextureCombinerPackerMeshBaker : public ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerRoot {
public:
// Declarations
using _CopyScaledAndTiledToAtlas_d__2 = ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2;

using _CreateAtlases_d__1 = ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1;

/// [IteratorStateMachine(typeof(DigitalOpus.MB.Core.MB3_TextureCombinerPackerMeshBaker::<CopyScaledAndTiledToAtlas>d__2))]
/// @brief Method CopyScaledAndTiledToAtlas, addr 0x9dd5d24, size 0x164, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* CopyScaledAndTiledToAtlas(::DigitalOpus::MB::Core::MeshBakerMaterialTexture*  source, ::DigitalOpus::MB::Core::MB_TexSet*  sourceMaterial, ::DigitalOpus::MB::Core::ShaderTextureProperty*  shaderPropertyName, ::DigitalOpus::MB::Core::DRect  srcSamplingRect, int32_t  targX, int32_t  targY, int32_t  targW, int32_t  targH, ::DigitalOpus::MB::Core::AtlasPadding  padding, ::ArrayW<::ArrayW<::UnityEngine::Color>>  atlasPixels, bool  isNormalMap, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, ::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner, ::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL) ;

/// [IteratorStateMachine(typeof(DigitalOpus.MB.Core.MB3_TextureCombinerPackerMeshBaker::<CreateAtlases>d__1))]
/// @brief Method CreateAtlases, addr 0x9dd5c0c, size 0xf0, virtual true, abstract: false, final false
inline ::System::Collections::IEnumerator* CreateAtlases(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, ::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner, ::DigitalOpus::MB::Core::AtlasPackingResult*  packedAtlasRects, ::ArrayW<::UnityEngine::Texture2D*>  atlases, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  textureEditorMethods, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL) ;

static inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker* New_ctor() ;

/// @brief Method Validate, addr 0x9dd5c04, size 0x8, virtual true, abstract: false, final false
inline bool Validate(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data) ;

/// @brief Method .ctor, addr 0x9dd5eb0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_TextureCombinerPackerMeshBaker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerPackerMeshBaker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureCombinerPackerMeshBaker(MB3_TextureCombinerPackerMeshBaker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerPackerMeshBaker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureCombinerPackerMeshBaker(MB3_TextureCombinerPackerMeshBaker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22799};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker) == 0x10, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// [CompilerGenerated]
// Dependencies DigitalOpus.MB.Core.MB2_LogLevel, System.Object, UnityEngine.Color, UnityEngine.Rect, UnityEngine.Texture2D
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombinerPackerMeshBaker/<CreateAtlases>d__1
class CORDL_TYPE MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1 : public ::System::Object {
public:
// Declarations
/// @brief Field LOG_LEVEL, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_LOG_LEVEL, put=__cordl_internal_set_LOG_LEVEL)) ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <atlasPixels>5__7, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__atlasPixels_5__7, put=__cordl_internal_set__atlasPixels_5__7)) ::ArrayW<::ArrayW<::UnityEngine::Color>>  _atlasPixels_5__7;

/// @brief Field <atlasSizeX>5__3, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__atlasSizeX_5__3, put=__cordl_internal_set__atlasSizeX_5__3)) int32_t  _atlasSizeX_5__3;

/// @brief Field <atlasSizeY>5__4, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__atlasSizeY_5__4, put=__cordl_internal_set__atlasSizeY_5__4)) int32_t  _atlasSizeY_5__4;

/// @brief Field <isNormalMap>5__8, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get__isNormalMap_5__8, put=__cordl_internal_set__isNormalMap_5__8)) bool  _isNormalMap_5__8;

/// @brief Field <propIdx>5__5, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__propIdx_5__5, put=__cordl_internal_set__propIdx_5__5)) int32_t  _propIdx_5__5;

/// @brief Field <property>5__6, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__property_5__6, put=__cordl_internal_set__property_5__6)) ::DigitalOpus::MB::Core::ShaderTextureProperty*  _property_5__6;

/// @brief Field <texSetIdx>5__9, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__texSetIdx_5__9, put=__cordl_internal_set__texSetIdx_5__9)) int32_t  _texSetIdx_5__9;

/// @brief Field <uvRects>5__2, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__uvRects_5__2, put=__cordl_internal_set__uvRects_5__2)) ::ArrayW<::UnityEngine::Rect>  _uvRects_5__2;

/// @brief Field atlases, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_atlases, put=__cordl_internal_set_atlases)) ::ArrayW<::UnityW<::UnityEngine::Texture2D>>  atlases;

/// @brief Field combiner, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_combiner, put=__cordl_internal_set_combiner)) ::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner;

/// @brief Field data, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data;

/// @brief Field packedAtlasRects, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_packedAtlasRects, put=__cordl_internal_set_packedAtlasRects)) ::DigitalOpus::MB::Core::AtlasPackingResult*  packedAtlasRects;

/// @brief Field progressInfo, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_progressInfo, put=__cordl_internal_set_progressInfo)) ::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo;

/// @brief Field textureEditorMethods, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_textureEditorMethods, put=__cordl_internal_set_textureEditorMethods)) ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  textureEditorMethods;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9dd6938, size 0x1140, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9dd7a78, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9dd7a80, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9dd7ab8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9dd6934, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& __cordl_internal_get_LOG_LEVEL() const;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& __cordl_internal_get_LOG_LEVEL() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::ArrayW<::ArrayW<::UnityEngine::Color>> const& __cordl_internal_get__atlasPixels_5__7() const;

constexpr ::ArrayW<::ArrayW<::UnityEngine::Color>>& __cordl_internal_get__atlasPixels_5__7() ;

constexpr int32_t const& __cordl_internal_get__atlasSizeX_5__3() const;

constexpr int32_t& __cordl_internal_get__atlasSizeX_5__3() ;

constexpr int32_t const& __cordl_internal_get__atlasSizeY_5__4() const;

constexpr int32_t& __cordl_internal_get__atlasSizeY_5__4() ;

constexpr bool const& __cordl_internal_get__isNormalMap_5__8() const;

constexpr bool& __cordl_internal_get__isNormalMap_5__8() ;

constexpr int32_t const& __cordl_internal_get__propIdx_5__5() const;

constexpr int32_t& __cordl_internal_get__propIdx_5__5() ;

constexpr ::DigitalOpus::MB::Core::ShaderTextureProperty* const& __cordl_internal_get__property_5__6() const;

constexpr ::DigitalOpus::MB::Core::ShaderTextureProperty*& __cordl_internal_get__property_5__6() ;

constexpr int32_t const& __cordl_internal_get__texSetIdx_5__9() const;

constexpr int32_t& __cordl_internal_get__texSetIdx_5__9() ;

constexpr ::ArrayW<::UnityEngine::Rect> const& __cordl_internal_get__uvRects_5__2() const;

constexpr ::ArrayW<::UnityEngine::Rect>& __cordl_internal_get__uvRects_5__2() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>> const& __cordl_internal_get_atlases() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>>& __cordl_internal_get_atlases() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner* const& __cordl_internal_get_combiner() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner*& __cordl_internal_get_combiner() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* const& __cordl_internal_get_data() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*& __cordl_internal_get_data() ;

constexpr ::DigitalOpus::MB::Core::AtlasPackingResult* const& __cordl_internal_get_packedAtlasRects() const;

constexpr ::DigitalOpus::MB::Core::AtlasPackingResult*& __cordl_internal_get_packedAtlasRects() ;

constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate* const& __cordl_internal_get_progressInfo() const;

constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate*& __cordl_internal_get_progressInfo() ;

constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* const& __cordl_internal_get_textureEditorMethods() const;

constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*& __cordl_internal_get_textureEditorMethods() ;

constexpr void __cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value) ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set__atlasPixels_5__7(::ArrayW<::ArrayW<::UnityEngine::Color>>  value) ;

constexpr void __cordl_internal_set__atlasSizeX_5__3(int32_t  value) ;

constexpr void __cordl_internal_set__atlasSizeY_5__4(int32_t  value) ;

constexpr void __cordl_internal_set__isNormalMap_5__8(bool  value) ;

constexpr void __cordl_internal_set__propIdx_5__5(int32_t  value) ;

constexpr void __cordl_internal_set__property_5__6(::DigitalOpus::MB::Core::ShaderTextureProperty*  value) ;

constexpr void __cordl_internal_set__texSetIdx_5__9(int32_t  value) ;

constexpr void __cordl_internal_set__uvRects_5__2(::ArrayW<::UnityEngine::Rect>  value) ;

constexpr void __cordl_internal_set_atlases(::ArrayW<::UnityW<::UnityEngine::Texture2D>>  value) ;

constexpr void __cordl_internal_set_combiner(::DigitalOpus::MB::Core::MB3_TextureCombiner*  value) ;

constexpr void __cordl_internal_set_data(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  value) ;

constexpr void __cordl_internal_set_packedAtlasRects(::DigitalOpus::MB::Core::AtlasPackingResult*  value) ;

constexpr void __cordl_internal_set_progressInfo(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  value) ;

constexpr void __cordl_internal_set_textureEditorMethods(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9dd5cfc, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1(MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1(MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22798};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field packedAtlasRects, offset: 0x20, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::AtlasPackingResult*  ___packedAtlasRects;

/// @brief Field LOG_LEVEL, offset: 0x28, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB2_LogLevel  ___LOG_LEVEL;

/// @brief Field data, offset: 0x30, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  ___data;

/// @brief Field combiner, offset: 0x38, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombiner*  ___combiner;

/// @brief Field progressInfo, offset: 0x40, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::ProgressUpdateDelegate*  ___progressInfo;

/// @brief Field textureEditorMethods, offset: 0x48, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  ___textureEditorMethods;

/// @brief Field atlases, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Texture2D>>  ___atlases;

/// @brief Field <uvRects>5__2, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Rect>  ____uvRects_5__2;

/// @brief Field <atlasSizeX>5__3, offset: 0x60, size: 0x4, def value: None
 int32_t  ____atlasSizeX_5__3;

/// @brief Field <atlasSizeY>5__4, offset: 0x64, size: 0x4, def value: None
 int32_t  ____atlasSizeY_5__4;

/// @brief Field <propIdx>5__5, offset: 0x68, size: 0x4, def value: None
 int32_t  ____propIdx_5__5;

/// @brief Field <property>5__6, offset: 0x70, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::ShaderTextureProperty*  ____property_5__6;

/// @brief Field <atlasPixels>5__7, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::ArrayW<::UnityEngine::Color>>  ____atlasPixels_5__7;

/// @brief Field <isNormalMap>5__8, offset: 0x80, size: 0x1, def value: None
 bool  ____isNormalMap_5__8;

/// @brief Field <texSetIdx>5__9, offset: 0x84, size: 0x4, def value: None
 int32_t  ____texSetIdx_5__9;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1, ___packedAtlasRects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1, ___LOG_LEVEL) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1, ___data) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1, ___combiner) == 0x38, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1, ___progressInfo) == 0x40, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1, ___textureEditorMethods) == 0x48, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1, ___atlases) == 0x50, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1, ____uvRects_5__2) == 0x58, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1, ____atlasSizeX_5__3) == 0x60, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1, ____atlasSizeY_5__4) == 0x64, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1, ____propIdx_5__5) == 0x68, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1, ____property_5__6) == 0x70, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1, ____atlasPixels_5__7) == 0x78, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1, ____isNormalMap_5__8) == 0x80, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1, ____texSetIdx_5__9) == 0x84, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1) == 0x88, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// [CompilerGenerated]
// Dependencies DigitalOpus.MB.Core.AtlasPadding, DigitalOpus.MB.Core.DRect, DigitalOpus.MB.Core.MB2_LogLevel, System.Object, UnityEngine.Color
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombinerPackerMeshBaker/<CopyScaledAndTiledToAtlas>d__2
class CORDL_TYPE MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2 : public ::System::Object {
public:
// Declarations
/// @brief Field LOG_LEVEL, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_LOG_LEVEL, put=__cordl_internal_set_LOG_LEVEL)) ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <h>5__3, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get__h_5__3, put=__cordl_internal_set__h_5__3)) int32_t  _h_5__3;

/// @brief Field <i>5__4, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__4, put=__cordl_internal_set__i_5__4)) int32_t  _i_5__4;

/// @brief Field <j>5__5, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get__j_5__5, put=__cordl_internal_set__j_5__5)) int32_t  _j_5__5;

/// @brief Field <w>5__2, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get__w_5__2, put=__cordl_internal_set__w_5__2)) int32_t  _w_5__2;

/// @brief Field atlasPixels, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_atlasPixels, put=__cordl_internal_set_atlasPixels)) ::ArrayW<::ArrayW<::UnityEngine::Color>>  atlasPixels;

/// @brief Field combiner, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_combiner, put=__cordl_internal_set_combiner)) ::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner;

/// @brief Field data, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data;

/// @brief Field padding, offset 0x3c, size 0x8 
 __declspec(property(get=__cordl_internal_get_padding, put=__cordl_internal_set_padding)) ::DigitalOpus::MB::Core::AtlasPadding  padding;

/// @brief Field progressInfo, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_progressInfo, put=__cordl_internal_set_progressInfo)) ::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo;

/// @brief Field shaderPropertyName, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_shaderPropertyName, put=__cordl_internal_set_shaderPropertyName)) ::DigitalOpus::MB::Core::ShaderTextureProperty*  shaderPropertyName;

/// @brief Field source, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::DigitalOpus::MB::Core::MeshBakerMaterialTexture*  source;

/// @brief Field sourceMaterial, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_sourceMaterial, put=__cordl_internal_set_sourceMaterial)) ::DigitalOpus::MB::Core::MB_TexSet*  sourceMaterial;

/// @brief Field srcSamplingRect, offset 0x48, size 0x20 
 __declspec(property(get=__cordl_internal_get_srcSamplingRect, put=__cordl_internal_set_srcSamplingRect)) ::DigitalOpus::MB::Core::DRect  srcSamplingRect;

/// @brief Field targH, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_targH, put=__cordl_internal_set_targH)) int32_t  targH;

/// @brief Field targW, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_targW, put=__cordl_internal_set_targW)) int32_t  targW;

/// @brief Field targX, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_targX, put=__cordl_internal_set_targX)) int32_t  targX;

/// @brief Field targY, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_targY, put=__cordl_internal_set_targY)) int32_t  targY;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9dd5ebc, size 0xa30, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9dd68ec, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9dd68f4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9dd692c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9dd5eb8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& __cordl_internal_get_LOG_LEVEL() const;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& __cordl_internal_get_LOG_LEVEL() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr int32_t const& __cordl_internal_get__h_5__3() const;

constexpr int32_t& __cordl_internal_get__h_5__3() ;

constexpr int32_t const& __cordl_internal_get__i_5__4() const;

constexpr int32_t& __cordl_internal_get__i_5__4() ;

constexpr int32_t const& __cordl_internal_get__j_5__5() const;

constexpr int32_t& __cordl_internal_get__j_5__5() ;

constexpr int32_t const& __cordl_internal_get__w_5__2() const;

constexpr int32_t& __cordl_internal_get__w_5__2() ;

constexpr ::ArrayW<::ArrayW<::UnityEngine::Color>> const& __cordl_internal_get_atlasPixels() const;

constexpr ::ArrayW<::ArrayW<::UnityEngine::Color>>& __cordl_internal_get_atlasPixels() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner* const& __cordl_internal_get_combiner() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner*& __cordl_internal_get_combiner() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* const& __cordl_internal_get_data() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*& __cordl_internal_get_data() ;

constexpr ::DigitalOpus::MB::Core::AtlasPadding const& __cordl_internal_get_padding() const;

constexpr ::DigitalOpus::MB::Core::AtlasPadding& __cordl_internal_get_padding() ;

constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate* const& __cordl_internal_get_progressInfo() const;

constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate*& __cordl_internal_get_progressInfo() ;

constexpr ::DigitalOpus::MB::Core::ShaderTextureProperty* const& __cordl_internal_get_shaderPropertyName() const;

constexpr ::DigitalOpus::MB::Core::ShaderTextureProperty*& __cordl_internal_get_shaderPropertyName() ;

constexpr ::DigitalOpus::MB::Core::MeshBakerMaterialTexture* const& __cordl_internal_get_source() const;

constexpr ::DigitalOpus::MB::Core::MeshBakerMaterialTexture*& __cordl_internal_get_source() ;

constexpr ::DigitalOpus::MB::Core::MB_TexSet* const& __cordl_internal_get_sourceMaterial() const;

constexpr ::DigitalOpus::MB::Core::MB_TexSet*& __cordl_internal_get_sourceMaterial() ;

constexpr ::DigitalOpus::MB::Core::DRect const& __cordl_internal_get_srcSamplingRect() const;

constexpr ::DigitalOpus::MB::Core::DRect& __cordl_internal_get_srcSamplingRect() ;

constexpr int32_t const& __cordl_internal_get_targH() const;

constexpr int32_t& __cordl_internal_get_targH() ;

constexpr int32_t const& __cordl_internal_get_targW() const;

constexpr int32_t& __cordl_internal_get_targW() ;

constexpr int32_t const& __cordl_internal_get_targX() const;

constexpr int32_t& __cordl_internal_get_targX() ;

constexpr int32_t const& __cordl_internal_get_targY() const;

constexpr int32_t& __cordl_internal_get_targY() ;

constexpr void __cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value) ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set__h_5__3(int32_t  value) ;

constexpr void __cordl_internal_set__i_5__4(int32_t  value) ;

constexpr void __cordl_internal_set__j_5__5(int32_t  value) ;

constexpr void __cordl_internal_set__w_5__2(int32_t  value) ;

constexpr void __cordl_internal_set_atlasPixels(::ArrayW<::ArrayW<::UnityEngine::Color>>  value) ;

constexpr void __cordl_internal_set_combiner(::DigitalOpus::MB::Core::MB3_TextureCombiner*  value) ;

constexpr void __cordl_internal_set_data(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  value) ;

constexpr void __cordl_internal_set_padding(::DigitalOpus::MB::Core::AtlasPadding  value) ;

constexpr void __cordl_internal_set_progressInfo(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  value) ;

constexpr void __cordl_internal_set_shaderPropertyName(::DigitalOpus::MB::Core::ShaderTextureProperty*  value) ;

constexpr void __cordl_internal_set_source(::DigitalOpus::MB::Core::MeshBakerMaterialTexture*  value) ;

constexpr void __cordl_internal_set_sourceMaterial(::DigitalOpus::MB::Core::MB_TexSet*  value) ;

constexpr void __cordl_internal_set_srcSamplingRect(::DigitalOpus::MB::Core::DRect  value) ;

constexpr void __cordl_internal_set_targH(int32_t  value) ;

constexpr void __cordl_internal_set_targW(int32_t  value) ;

constexpr void __cordl_internal_set_targX(int32_t  value) ;

constexpr void __cordl_internal_set_targY(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9dd5e88, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2(MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2(MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22797};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field source, offset: 0x20, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MeshBakerMaterialTexture*  ___source;

/// @brief Field LOG_LEVEL, offset: 0x28, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB2_LogLevel  ___LOG_LEVEL;

/// @brief Field targX, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___targX;

/// @brief Field targY, offset: 0x30, size: 0x4, def value: None
 int32_t  ___targY;

/// @brief Field targW, offset: 0x34, size: 0x4, def value: None
 int32_t  ___targW;

/// @brief Field targH, offset: 0x38, size: 0x4, def value: None
 int32_t  ___targH;

/// @brief Field padding, offset: 0x3c, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::AtlasPadding  ___padding;

/// @brief Field srcSamplingRect, offset: 0x48, size: 0x20, def value: None
 ::DigitalOpus::MB::Core::DRect  ___srcSamplingRect;

/// @brief Field data, offset: 0x68, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  ___data;

/// @brief Field combiner, offset: 0x70, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombiner*  ___combiner;

/// @brief Field shaderPropertyName, offset: 0x78, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::ShaderTextureProperty*  ___shaderPropertyName;

/// @brief Field sourceMaterial, offset: 0x80, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB_TexSet*  ___sourceMaterial;

/// @brief Field progressInfo, offset: 0x88, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::ProgressUpdateDelegate*  ___progressInfo;

/// @brief Field atlasPixels, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<::ArrayW<::UnityEngine::Color>>  ___atlasPixels;

/// @brief Field <w>5__2, offset: 0x98, size: 0x4, def value: None
 int32_t  ____w_5__2;

/// @brief Field <h>5__3, offset: 0x9c, size: 0x4, def value: None
 int32_t  ____h_5__3;

/// @brief Field <i>5__4, offset: 0xa0, size: 0x4, def value: None
 int32_t  ____i_5__4;

/// @brief Field <j>5__5, offset: 0xa4, size: 0x4, def value: None
 int32_t  ____j_5__5;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2, ___source) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2, ___LOG_LEVEL) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2, ___targX) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2, ___targY) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2, ___targW) == 0x34, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2, ___targH) == 0x38, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2, ___padding) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2, ___srcSamplingRect) == 0x48, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2, ___data) == 0x68, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2, ___combiner) == 0x70, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2, ___shaderPropertyName) == 0x78, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2, ___sourceMaterial) == 0x80, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2, ___progressInfo) == 0x88, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2, ___atlasPixels) == 0x90, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2, ____w_5__2) == 0x98, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2, ____h_5__3) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2, ____i_5__4) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2, ____j_5__5) == 0xa4, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2) == 0xa8, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
