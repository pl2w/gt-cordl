#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB_TextureArrays.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_TextureCompressionQuality_def.hpp"
#include "GlobalNamespace/zzzz__MB_TextureArrayFormatSet_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MB_TextureArrays)
namespace DigitalOpus::MB::Core {
class MB2_EditorMethodsInterface;
}
namespace DigitalOpus::MB::Core {
struct MB2_LogLevel;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombiner_CreateAtlasesCoroutineResult;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombiner_TemporaryTexture;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombiner;
}
namespace DigitalOpus::MB::Core {
class MB_TextureArrays_TexturePropertyData;
}
namespace DigitalOpus::MB::Core {
class MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6;
}
namespace DigitalOpus::MB::Core {
class ProgressUpdateDelegate;
}
namespace DigitalOpus::MB::Core {
class ShaderTextureProperty;
}
namespace GlobalNamespace {
class MB_AtlasesAndRects;
}
namespace GlobalNamespace {
class MB_MultiMaterialTexArray;
}
namespace GlobalNamespace {
class MB_TexArraySliceRendererMatPair;
}
namespace GlobalNamespace {
class MB_TexArraySlice;
}
namespace GlobalNamespace {
class MB_TextureArrayFormatSet;
}
namespace GlobalNamespace {
class MB_TextureArrayResultMaterial;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
class GameObject;
}
namespace UnityEngine {
class Texture2DArray;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MB_TextureArrays;
}
namespace DigitalOpus::MB::Core {
class MB_TextureArrays_TexturePropertyData;
}
namespace DigitalOpus::MB::Core {
class MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB_TextureArrays*);
MARK_REF_T(::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData*);
MARK_REF_T(::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB_TextureArrays*, "DigitalOpus.MB.Core", "MB_TextureArrays");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData*, "DigitalOpus.MB.Core", "MB_TextureArrays/TexturePropertyData");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6*, "DigitalOpus.MB.Core", "MB_TextureArrays/<_CreateAtlasesCoroutineSingleResultMaterial>d__6");
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB_TextureArrays
class CORDL_TYPE MB_TextureArrays : public ::System::Object {
public:
// Declarations
using TexturePropertyData = ::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData;

using __CreateAtlasesCoroutineSingleResultMaterial_d__6 = ::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6;

/// @brief Method ConvertTexturesToReadableFormat, addr 0x9de8da0, size 0xbf0, virtual false, abstract: false, final false
static inline bool ConvertTexturesToReadableFormat(::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData*  texturePropertyData, ::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>  resultAtlasesAndRectSlices, ::ArrayW<bool>  hasTexForProperty, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  textureShaderProperties, ::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner, ::DigitalOpus::MB::Core::MB2_LogLevel  logLevel, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  createdTemporaryTextureAssets, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  textureEditorMethods) ;

/// @brief Method CreateTextureArraysForResultMaterial, addr 0x9de84ac, size 0x8f4, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Texture2DArray>> CreateTextureArraysForResultMaterial(::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData*  texPropertyData, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  masterListOfTexProperties, ::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>  resultAtlasesAndRectSlices, ::ArrayW<bool>  hasTexForProperty, ::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL) ;

/// @brief Method DetermineWhichPropertiesHaveTextures, addr 0x9de8250, size 0x188, virtual false, abstract: false, final false
static inline ::ArrayW<bool> DetermineWhichPropertiesHaveTextures(::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>  resultAtlasesAndRectSlices) ;

/// @brief Method FindBestSizeAndMipCountAndFormatForTextureArrays, addr 0x9de9990, size 0x4f8, virtual false, abstract: false, final false
static inline void FindBestSizeAndMipCountAndFormatForTextureArrays(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  texPropertyNames, int32_t  maxAtlasSize, ::GlobalNamespace::MB_TextureArrayFormatSet*  targetFormatSet, ::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>  resultAtlasesAndRectSlices, ::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData*  texturePropertyData) ;

/// @brief Method IsLinearProperty, addr 0x9de83d8, size 0xd4, virtual false, abstract: false, final false
static inline bool IsLinearProperty(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  shaderPropertyNames, ::StringW  shaderProperty) ;

static inline ::DigitalOpus::MB::Core::MB_TextureArrays* New_ctor() ;

/// [IteratorStateMachine(typeof(DigitalOpus.MB.Core.MB_TextureArrays::<_CreateAtlasesCoroutineSingleResultMaterial>d__6))]
/// @brief Method _CreateAtlasesCoroutineSingleResultMaterial, addr 0x9de9e88, size 0x178, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* _CreateAtlasesCoroutineSingleResultMaterial(int32_t  resMatIdx, ::GlobalNamespace::MB_TextureArrayResultMaterial*  bakedMatsAndSlicesResMat, ::GlobalNamespace::MB_MultiMaterialTexArray*  resMatConfig, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objsToMesh, ::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner, ::ArrayW<::GlobalNamespace::MB_TextureArrayFormatSet*>  textureArrayOutputFormats, ::ArrayW<::GlobalNamespace::MB_MultiMaterialTexArray*>  resultMaterialsTexArray, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  customShaderProperties, ::System::Collections::Generic::List_1<::StringW>*  texPropNamesToIgnore, ::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  coroutineResult, bool  saveAtlasesAsAssets, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods, float_t  maxTimePerFrame) ;

/// @brief Method .ctor, addr 0x9dea028, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_TextureArrays() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_TextureArrays", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_TextureArrays(MB_TextureArrays && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_TextureArrays", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_TextureArrays(MB_TextureArrays const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22830};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::DigitalOpus::MB::Core::MB_TextureArrays) == 0x10, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// [CompilerGenerated]
// Dependencies DigitalOpus.MB.Core.MB2_LogLevel, MB_TextureArrayFormatSet, System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB_TextureArrays/<_CreateAtlasesCoroutineSingleResultMaterial>d__6
class CORDL_TYPE MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <LOG_LEVEL>5__2, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__LOG_LEVEL_5__2, put=__cordl_internal_set__LOG_LEVEL_5__2)) ::DigitalOpus::MB::Core::MB2_LogLevel  _LOG_LEVEL_5__2;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <coroutineResult2>5__7, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__coroutineResult2_5__7, put=__cordl_internal_set__coroutineResult2_5__7)) ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  _coroutineResult2_5__7;

/// @brief Field <generatedTemporaryAtlases>5__3, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__generatedTemporaryAtlases_5__3, put=__cordl_internal_set__generatedTemporaryAtlases_5__3)) ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture*>*  _generatedTemporaryAtlases_5__3;

/// @brief Field <sliceAtlasesAndRectOutput>5__8, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__sliceAtlasesAndRectOutput_5__8, put=__cordl_internal_set__sliceAtlasesAndRectOutput_5__8)) ::GlobalNamespace::MB_AtlasesAndRects*  _sliceAtlasesAndRectOutput_5__8;

/// @brief Field <sliceIdx>5__5, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get__sliceIdx_5__5, put=__cordl_internal_set__sliceIdx_5__5)) int32_t  _sliceIdx_5__5;

/// @brief Field <slicesConfig>5__4, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__slicesConfig_5__4, put=__cordl_internal_set__slicesConfig_5__4)) ::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArraySlice*>*  _slicesConfig_5__4;

/// @brief Field <srcMatAndObjPairs>5__6, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__srcMatAndObjPairs_5__6, put=__cordl_internal_set__srcMatAndObjPairs_5__6)) ::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArraySliceRendererMatPair*>*  _srcMatAndObjPairs_5__6;

/// @brief Field bakedMatsAndSlicesResMat, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_bakedMatsAndSlicesResMat, put=__cordl_internal_set_bakedMatsAndSlicesResMat)) ::GlobalNamespace::MB_TextureArrayResultMaterial*  bakedMatsAndSlicesResMat;

/// @brief Field combiner, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_combiner, put=__cordl_internal_set_combiner)) ::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner;

/// @brief Field coroutineResult, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_coroutineResult, put=__cordl_internal_set_coroutineResult)) ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  coroutineResult;

/// @brief Field customShaderProperties, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_customShaderProperties, put=__cordl_internal_set_customShaderProperties)) ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  customShaderProperties;

/// @brief Field editorMethods, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_editorMethods, put=__cordl_internal_set_editorMethods)) ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods;

/// @brief Field maxTimePerFrame, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxTimePerFrame, put=__cordl_internal_set_maxTimePerFrame)) float_t  maxTimePerFrame;

/// @brief Field objsToMesh, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_objsToMesh, put=__cordl_internal_set_objsToMesh)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objsToMesh;

/// @brief Field progressInfo, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_progressInfo, put=__cordl_internal_set_progressInfo)) ::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo;

/// @brief Field resMatConfig, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_resMatConfig, put=__cordl_internal_set_resMatConfig)) ::GlobalNamespace::MB_MultiMaterialTexArray*  resMatConfig;

/// @brief Field resMatIdx, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_resMatIdx, put=__cordl_internal_set_resMatIdx)) int32_t  resMatIdx;

/// @brief Field saveAtlasesAsAssets, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_saveAtlasesAsAssets, put=__cordl_internal_set_saveAtlasesAsAssets)) bool  saveAtlasesAsAssets;

/// @brief Field texPropNamesToIgnore, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_texPropNamesToIgnore, put=__cordl_internal_set_texPropNamesToIgnore)) ::System::Collections::Generic::List_1<::StringW>*  texPropNamesToIgnore;

/// @brief Field textureArrayOutputFormats, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_textureArrayOutputFormats, put=__cordl_internal_set_textureArrayOutputFormats)) ::ArrayW<::GlobalNamespace::MB_TextureArrayFormatSet*>  textureArrayOutputFormats;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9dea03c, size 0x1c04, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9debc40, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9debc48, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9debc80, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9dea038, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& __cordl_internal_get__LOG_LEVEL_5__2() const;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& __cordl_internal_get__LOG_LEVEL_5__2() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult* const& __cordl_internal_get__coroutineResult2_5__7() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*& __cordl_internal_get__coroutineResult2_5__7() ;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture*>* const& __cordl_internal_get__generatedTemporaryAtlases_5__3() const;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture*>*& __cordl_internal_get__generatedTemporaryAtlases_5__3() ;

constexpr ::GlobalNamespace::MB_AtlasesAndRects* const& __cordl_internal_get__sliceAtlasesAndRectOutput_5__8() const;

constexpr ::GlobalNamespace::MB_AtlasesAndRects*& __cordl_internal_get__sliceAtlasesAndRectOutput_5__8() ;

constexpr int32_t const& __cordl_internal_get__sliceIdx_5__5() const;

constexpr int32_t& __cordl_internal_get__sliceIdx_5__5() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArraySlice*>* const& __cordl_internal_get__slicesConfig_5__4() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArraySlice*>*& __cordl_internal_get__slicesConfig_5__4() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArraySliceRendererMatPair*>* const& __cordl_internal_get__srcMatAndObjPairs_5__6() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArraySliceRendererMatPair*>*& __cordl_internal_get__srcMatAndObjPairs_5__6() ;

constexpr ::GlobalNamespace::MB_TextureArrayResultMaterial* const& __cordl_internal_get_bakedMatsAndSlicesResMat() const;

constexpr ::GlobalNamespace::MB_TextureArrayResultMaterial*& __cordl_internal_get_bakedMatsAndSlicesResMat() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner* const& __cordl_internal_get_combiner() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner*& __cordl_internal_get_combiner() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult* const& __cordl_internal_get_coroutineResult() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*& __cordl_internal_get_coroutineResult() ;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* const& __cordl_internal_get_customShaderProperties() const;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*& __cordl_internal_get_customShaderProperties() ;

constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* const& __cordl_internal_get_editorMethods() const;

constexpr ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*& __cordl_internal_get_editorMethods() ;

constexpr float_t const& __cordl_internal_get_maxTimePerFrame() const;

constexpr float_t& __cordl_internal_get_maxTimePerFrame() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_objsToMesh() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_objsToMesh() ;

constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate* const& __cordl_internal_get_progressInfo() const;

constexpr ::DigitalOpus::MB::Core::ProgressUpdateDelegate*& __cordl_internal_get_progressInfo() ;

constexpr ::GlobalNamespace::MB_MultiMaterialTexArray* const& __cordl_internal_get_resMatConfig() const;

constexpr ::GlobalNamespace::MB_MultiMaterialTexArray*& __cordl_internal_get_resMatConfig() ;

constexpr int32_t const& __cordl_internal_get_resMatIdx() const;

constexpr int32_t& __cordl_internal_get_resMatIdx() ;

constexpr bool const& __cordl_internal_get_saveAtlasesAsAssets() const;

constexpr bool& __cordl_internal_get_saveAtlasesAsAssets() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_texPropNamesToIgnore() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_texPropNamesToIgnore() ;

constexpr ::ArrayW<::GlobalNamespace::MB_TextureArrayFormatSet*> const& __cordl_internal_get_textureArrayOutputFormats() const;

constexpr ::ArrayW<::GlobalNamespace::MB_TextureArrayFormatSet*>& __cordl_internal_get_textureArrayOutputFormats() ;

constexpr void __cordl_internal_set__LOG_LEVEL_5__2(::DigitalOpus::MB::Core::MB2_LogLevel  value) ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set__coroutineResult2_5__7(::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  value) ;

constexpr void __cordl_internal_set__generatedTemporaryAtlases_5__3(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture*>*  value) ;

constexpr void __cordl_internal_set__sliceAtlasesAndRectOutput_5__8(::GlobalNamespace::MB_AtlasesAndRects*  value) ;

constexpr void __cordl_internal_set__sliceIdx_5__5(int32_t  value) ;

constexpr void __cordl_internal_set__slicesConfig_5__4(::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArraySlice*>*  value) ;

constexpr void __cordl_internal_set__srcMatAndObjPairs_5__6(::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArraySliceRendererMatPair*>*  value) ;

constexpr void __cordl_internal_set_bakedMatsAndSlicesResMat(::GlobalNamespace::MB_TextureArrayResultMaterial*  value) ;

constexpr void __cordl_internal_set_combiner(::DigitalOpus::MB::Core::MB3_TextureCombiner*  value) ;

constexpr void __cordl_internal_set_coroutineResult(::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  value) ;

constexpr void __cordl_internal_set_customShaderProperties(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  value) ;

constexpr void __cordl_internal_set_editorMethods(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  value) ;

constexpr void __cordl_internal_set_maxTimePerFrame(float_t  value) ;

constexpr void __cordl_internal_set_objsToMesh(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_progressInfo(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  value) ;

constexpr void __cordl_internal_set_resMatConfig(::GlobalNamespace::MB_MultiMaterialTexArray*  value) ;

constexpr void __cordl_internal_set_resMatIdx(int32_t  value) ;

constexpr void __cordl_internal_set_saveAtlasesAsAssets(bool  value) ;

constexpr void __cordl_internal_set_texPropNamesToIgnore(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_textureArrayOutputFormats(::ArrayW<::GlobalNamespace::MB_TextureArrayFormatSet*>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9dea000, size 0x28, virtual false, abstract: false, final false
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
constexpr MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6(MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6(MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22829};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field combiner, offset: 0x20, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombiner*  ___combiner;

/// @brief Field resMatIdx, offset: 0x28, size: 0x4, def value: None
 int32_t  ___resMatIdx;

/// @brief Field resMatConfig, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::MB_MultiMaterialTexArray*  ___resMatConfig;

/// @brief Field bakedMatsAndSlicesResMat, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::MB_TextureArrayResultMaterial*  ___bakedMatsAndSlicesResMat;

/// @brief Field progressInfo, offset: 0x40, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::ProgressUpdateDelegate*  ___progressInfo;

/// @brief Field objsToMesh, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___objsToMesh;

/// @brief Field texPropNamesToIgnore, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___texPropNamesToIgnore;

/// @brief Field editorMethods, offset: 0x58, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  ___editorMethods;

/// @brief Field maxTimePerFrame, offset: 0x60, size: 0x4, def value: None
 float_t  ___maxTimePerFrame;

/// @brief Field coroutineResult, offset: 0x68, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  ___coroutineResult;

/// @brief Field saveAtlasesAsAssets, offset: 0x70, size: 0x1, def value: None
 bool  ___saveAtlasesAsAssets;

/// @brief Field customShaderProperties, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  ___customShaderProperties;

/// @brief Field textureArrayOutputFormats, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::MB_TextureArrayFormatSet*>  ___textureArrayOutputFormats;

/// @brief Field <LOG_LEVEL>5__2, offset: 0x88, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB2_LogLevel  ____LOG_LEVEL_5__2;

/// @brief Field <generatedTemporaryAtlases>5__3, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture*>*  ____generatedTemporaryAtlases_5__3;

/// @brief Field <slicesConfig>5__4, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArraySlice*>*  ____slicesConfig_5__4;

/// @brief Field <sliceIdx>5__5, offset: 0xa0, size: 0x4, def value: None
 int32_t  ____sliceIdx_5__5;

/// @brief Field <srcMatAndObjPairs>5__6, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArraySliceRendererMatPair*>*  ____srcMatAndObjPairs_5__6;

/// @brief Field <coroutineResult2>5__7, offset: 0xb0, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*  ____coroutineResult2_5__7;

/// @brief Field <sliceAtlasesAndRectOutput>5__8, offset: 0xb8, size: 0x8, def value: None
 ::GlobalNamespace::MB_AtlasesAndRects*  ____sliceAtlasesAndRectOutput_5__8;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6, ___combiner) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6, ___resMatIdx) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6, ___resMatConfig) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6, ___bakedMatsAndSlicesResMat) == 0x38, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6, ___progressInfo) == 0x40, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6, ___objsToMesh) == 0x48, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6, ___texPropNamesToIgnore) == 0x50, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6, ___editorMethods) == 0x58, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6, ___maxTimePerFrame) == 0x60, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6, ___coroutineResult) == 0x68, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6, ___saveAtlasesAsAssets) == 0x70, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6, ___customShaderProperties) == 0x78, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6, ___textureArrayOutputFormats) == 0x80, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6, ____LOG_LEVEL_5__2) == 0x88, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6, ____generatedTemporaryAtlases_5__3) == 0x90, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6, ____slicesConfig_5__4) == 0x98, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6, ____sliceIdx_5__5) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6, ____srcMatAndObjPairs_5__6) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6, ____coroutineResult2_5__7) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6, ____sliceAtlasesAndRectOutput_5__8) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6) == 0xc0, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies DigitalOpus.MB.Core.MB_TextureCompressionQuality, System.Object, UnityEngine.TextureFormat, UnityEngine.Vector2
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB_TextureArrays/TexturePropertyData
class CORDL_TYPE MB_TextureArrays_TexturePropertyData : public ::System::Object {
public:
// Declarations
/// @brief Field compressionQualities, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_compressionQualities, put=__cordl_internal_set_compressionQualities)) ::ArrayW<::DigitalOpus::MB::Core::MB_TextureCompressionQuality>  compressionQualities;

/// @brief Field doMips, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_doMips, put=__cordl_internal_set_doMips)) ::ArrayW<bool>  doMips;

/// @brief Field formats, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_formats, put=__cordl_internal_set_formats)) ::ArrayW<::UnityEngine::TextureFormat>  formats;

/// @brief Field numMipMaps, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_numMipMaps, put=__cordl_internal_set_numMipMaps)) ::ArrayW<int32_t>  numMipMaps;

/// @brief Field sizes, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_sizes, put=__cordl_internal_set_sizes)) ::ArrayW<::UnityEngine::Vector2>  sizes;

static inline ::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData* New_ctor() ;

constexpr ::ArrayW<::DigitalOpus::MB::Core::MB_TextureCompressionQuality> const& __cordl_internal_get_compressionQualities() const;

constexpr ::ArrayW<::DigitalOpus::MB::Core::MB_TextureCompressionQuality>& __cordl_internal_get_compressionQualities() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_doMips() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_doMips() ;

constexpr ::ArrayW<::UnityEngine::TextureFormat> const& __cordl_internal_get_formats() const;

constexpr ::ArrayW<::UnityEngine::TextureFormat>& __cordl_internal_get_formats() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_numMipMaps() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_numMipMaps() ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get_sizes() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get_sizes() ;

constexpr void __cordl_internal_set_compressionQualities(::ArrayW<::DigitalOpus::MB::Core::MB_TextureCompressionQuality>  value) ;

constexpr void __cordl_internal_set_doMips(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_formats(::ArrayW<::UnityEngine::TextureFormat>  value) ;

constexpr void __cordl_internal_set_numMipMaps(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_sizes(::ArrayW<::UnityEngine::Vector2>  value) ;

/// @brief Method .ctor, addr 0x9dea030, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_TextureArrays_TexturePropertyData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_TextureArrays_TexturePropertyData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_TextureArrays_TexturePropertyData(MB_TextureArrays_TexturePropertyData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_TextureArrays_TexturePropertyData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_TextureArrays_TexturePropertyData(MB_TextureArrays_TexturePropertyData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22828};

/// @brief Field doMips, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<bool>  ___doMips;

/// @brief Field numMipMaps, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___numMipMaps;

/// @brief Field formats, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::TextureFormat>  ___formats;

/// @brief Field compressionQualities, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::DigitalOpus::MB::Core::MB_TextureCompressionQuality>  ___compressionQualities;

/// @brief Field sizes, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ___sizes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData, ___doMips) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData, ___numMipMaps) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData, ___formats) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData, ___compressionQualities) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData, ___sizes) == 0x30, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData) == 0x38, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
