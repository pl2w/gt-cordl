#pragma once
// IWYU pragma private; include "UnityEngine/Shader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Shader)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Rendering {
struct GlobalKeyword;
}
namespace UnityEngine::Rendering {
struct LocalKeywordSpace;
}
namespace UnityEngine::Rendering {
class RayTracingAccelerationStructure;
}
namespace UnityEngine::Rendering {
struct RenderTextureSubElement;
}
namespace UnityEngine::Rendering {
struct ShaderHardwareTier;
}
namespace UnityEngine::Rendering {
struct ShaderPropertyFlags;
}
namespace UnityEngine::Rendering {
struct ShaderPropertyType;
}
namespace UnityEngine::Rendering {
struct ShaderTagId;
}
namespace UnityEngine::Rendering {
struct TextureDimension;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
struct DisableBatchingType;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
class Shader;
}
// Write type traits
MARK_REF_T(::UnityEngine::Shader*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Shader*, "UnityEngine", "Shader");
// [NativeHeader("Runtime/Shaders/GpuPrograms/ShaderVariantCollection.h")]
// [NativeHeader("Runtime/Shaders/ComputeShader.h")]
// [NativeHeader("Runtime/Shaders/ShaderNameRegistry.h")]
// [NativeHeader("Runtime/Shaders/Shader.h")]
// [NativeHeader("Runtime/Misc/ResourceManager.h")]
// [NativeHeader("Runtime/Shaders/Keywords/KeywordSpaceScriptBindings.h")]
// [NativeHeader("Runtime/Graphics/ShaderScriptBindings.h")]
// [NativeHeader("Runtime/Graphics/ShaderScriptBindings.h")]
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Shader
class CORDL_TYPE Shader : public ::UnityEngine::Object {
public:
// Declarations
 __declspec(property(get=get_disableBatching)) ::UnityEngine::DisableBatchingType  disableBatching;

 __declspec(property(get=get_isSupported)) bool  isSupported;

 __declspec(property(get=get_keywordSpace)) ::UnityEngine::Rendering::LocalKeywordSpace  keywordSpace;

/// @brief [NativeProperty("MaximumShaderLOD")]
 __declspec(property(get=get_maximumLOD, put=set_maximumLOD)) int32_t  maximumLOD;

 __declspec(property(get=get_passCount)) int32_t  passCount;

 __declspec(property(get=get_renderQueue)) int32_t  renderQueue;

 __declspec(property(get=get_subshaderCount)) int32_t  subshaderCount;

/// @brief Method CheckPropertyIndex, addr 0xb591ef0, size 0x70, virtual false, abstract: false, final false
static inline void CheckPropertyIndex(::UnityEngine::Shader*  s, int32_t  propertyIndex) ;

/// [FreeFunction("ShaderScripting::CreateFromCompiledData")]
/// @brief Method CreateFromCompiledData, addr 0xb58c520, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Shader> CreateFromCompiledData(::ArrayW<uint8_t>  compiledData, ::ArrayW<::UnityEngine::Shader*>  dependencies) ;

/// @brief Method CreateFromCompiledData_Injected, addr 0xb58c610, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateFromCompiledData_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  compiledData, ::ArrayW<::UnityEngine::Shader*>  dependencies) ;

/// [FreeFunction("ShaderScripting::DisableKeyword")]
/// @brief Method DisableKeyword, addr 0xb58d0fc, size 0x168, virtual false, abstract: false, final false
static inline void DisableKeyword(::StringW  keyword) ;

/// @brief Method DisableKeyword, addr 0xb58d698, size 0x44, virtual false, abstract: false, final false
static inline void DisableKeyword(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GlobalKeyword>  keyword) ;

/// [FreeFunction("ShaderScripting::DisableKeyword")]
/// @brief Method DisableKeywordFast, addr 0xb58d4cc, size 0x40, virtual false, abstract: false, final false
static inline void DisableKeywordFast(::UnityEngine::Rendering::GlobalKeyword  keyword) ;

/// @brief Method DisableKeywordFast_Injected, addr 0xb58d50c, size 0x3c, virtual false, abstract: false, final false
static inline void DisableKeywordFast_Injected(::by_ref<::UnityEngine::Rendering::GlobalKeyword>  keyword) ;

/// @brief Method DisableKeyword_Injected, addr 0xb58d264, size 0x3c, virtual false, abstract: false, final false
static inline void DisableKeyword_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  keyword) ;

/// [FreeFunction("ShaderScripting::EnableKeyword")]
/// @brief Method EnableKeyword, addr 0xb58cf58, size 0x168, virtual false, abstract: false, final false
static inline void EnableKeyword(::StringW  keyword) ;

/// @brief Method EnableKeyword, addr 0xb58d654, size 0x44, virtual false, abstract: false, final false
static inline void EnableKeyword(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GlobalKeyword>  keyword) ;

/// [FreeFunction("ShaderScripting::EnableKeyword")]
/// @brief Method EnableKeywordFast, addr 0xb58d450, size 0x40, virtual false, abstract: false, final false
static inline void EnableKeywordFast(::UnityEngine::Rendering::GlobalKeyword  keyword) ;

/// @brief Method EnableKeywordFast_Injected, addr 0xb58d490, size 0x3c, virtual false, abstract: false, final false
static inline void EnableKeywordFast_Injected(::by_ref<::UnityEngine::Rendering::GlobalKeyword>  keyword) ;

/// @brief Method EnableKeyword_Injected, addr 0xb58d0c0, size 0x3c, virtual false, abstract: false, final false
static inline void EnableKeyword_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  keyword) ;

/// @brief Method ExtractGlobalFloatArray, addr 0xb58fda4, size 0x13c, virtual false, abstract: false, final false
static inline void ExtractGlobalFloatArray(int32_t  name, ::System::Collections::Generic::List_1<float_t>*  values) ;

/// [FreeFunction("ShaderScripting::ExtractGlobalFloatArray")]
/// @brief Method ExtractGlobalFloatArrayImpl, addr 0xb58f768, size 0x114, virtual false, abstract: false, final false
static inline void ExtractGlobalFloatArrayImpl(int32_t  name, ::by_ref<::ArrayW<float_t>>  val) ;

/// @brief Method ExtractGlobalFloatArrayImpl_Injected, addr 0xb58f87c, size 0x44, virtual false, abstract: false, final false
static inline void ExtractGlobalFloatArrayImpl_Injected(int32_t  name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  val) ;

/// @brief Method ExtractGlobalMatrixArray, addr 0xb59001c, size 0x13c, virtual false, abstract: false, final false
static inline void ExtractGlobalMatrixArray(int32_t  name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  values) ;

/// [FreeFunction("ShaderScripting::ExtractGlobalMatrixArray")]
/// @brief Method ExtractGlobalMatrixArrayImpl, addr 0xb58fa18, size 0x114, virtual false, abstract: false, final false
static inline void ExtractGlobalMatrixArrayImpl(int32_t  name, ::by_ref<::ArrayW<::UnityEngine::Matrix4x4>>  val) ;

/// @brief Method ExtractGlobalMatrixArrayImpl_Injected, addr 0xb58fb2c, size 0x44, virtual false, abstract: false, final false
static inline void ExtractGlobalMatrixArrayImpl_Injected(int32_t  name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  val) ;

/// @brief Method ExtractGlobalVectorArray, addr 0xb58fee0, size 0x13c, virtual false, abstract: false, final false
static inline void ExtractGlobalVectorArray(int32_t  name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  values) ;

/// [FreeFunction("ShaderScripting::ExtractGlobalVectorArray")]
/// @brief Method ExtractGlobalVectorArrayImpl, addr 0xb58f8c0, size 0x114, virtual false, abstract: false, final false
static inline void ExtractGlobalVectorArrayImpl(int32_t  name, ::by_ref<::ArrayW<::UnityEngine::Vector4>>  val) ;

/// @brief Method ExtractGlobalVectorArrayImpl_Injected, addr 0xb58f9d4, size 0x44, virtual false, abstract: false, final false
static inline void ExtractGlobalVectorArrayImpl_Injected(int32_t  name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  val) ;

/// @brief Method Find, addr 0xb58c27c, size 0x6c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Shader> Find(::StringW  name) ;

/// [FreeFunction("GetBuiltinResource<Shader>")]
/// @brief Method FindBuiltin, addr 0xb58c2e8, size 0x1fc, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Shader> FindBuiltin(::StringW  name) ;

/// @brief Method FindBuiltin_Injected, addr 0xb58c4e4, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr FindBuiltin_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method FindPassTagValue, addr 0xb58e080, size 0xac, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::ShaderTagId FindPassTagValue(int32_t  passIndex, ::UnityEngine::Rendering::ShaderTagId  tagName) ;

/// @brief Method FindPassTagValue, addr 0xb58e1bc, size 0xf4, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::ShaderTagId FindPassTagValue(int32_t  subshaderIndex, int32_t  passIndex, ::UnityEngine::Rendering::ShaderTagId  tagName) ;

/// @brief Method FindPropertyIndex, addr 0xb592014, size 0x1a8, virtual false, abstract: false, final false
inline int32_t FindPropertyIndex(::StringW  propertyName) ;

/// @brief Method FindPropertyIndex_Injected, addr 0xb5921bc, size 0x44, virtual false, abstract: false, final false
static inline int32_t FindPropertyIndex_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  propertyName) ;

/// @brief Method FindSubshaderTagValue, addr 0xb58e348, size 0x104, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::ShaderTagId FindSubshaderTagValue(int32_t  subshaderIndex, ::UnityEngine::Rendering::ShaderTagId  tagName) ;

/// @brief Method FindTextureStack, addr 0xb592660, size 0xa8, virtual false, abstract: false, final false
inline bool FindTextureStack(int32_t  propertyIndex, ::by_ref<::StringW>  stackName, ::by_ref<int32_t>  layerIndex) ;

/// [FreeFunction("ShaderScripting::FindTextureStack")]
/// @brief Method FindTextureStackImpl, addr 0xb591d14, size 0x180, virtual false, abstract: false, final false
static inline bool FindTextureStackImpl(/* [NotNull] */ ::UnityEngine::Shader*  s, int32_t  propertyIdx, ::by_ref<::StringW>  stackName, ::by_ref<int32_t>  layerIndex) ;

/// @brief Method FindTextureStackImpl_Injected, addr 0xb591e94, size 0x5c, virtual false, abstract: false, final false
static inline bool FindTextureStackImpl_Injected(::System::IntPtr  s, int32_t  propertyIdx, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  stackName, ::by_ref<int32_t>  layerIndex) ;

/// [FreeFunction("keywords::GetAllGlobalKeywords")]
/// @brief Method GetAllGlobalKeywords, addr 0xb58cd04, size 0x110, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword> GetAllGlobalKeywords() ;

/// @brief Method GetAllGlobalKeywords_Injected, addr 0xb58cf1c, size 0x3c, virtual false, abstract: false, final false
static inline void GetAllGlobalKeywords_Injected(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// @brief Method GetDependency, addr 0xb58dbf8, size 0x218, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Shader> GetDependency(::StringW  name) ;

/// @brief Method GetDependency_Injected, addr 0xb58de10, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr GetDependency_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// [FreeFunction("keywords::GetEnabledGlobalKeywords")]
/// @brief Method GetEnabledGlobalKeywords, addr 0xb58cbf0, size 0x110, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword> GetEnabledGlobalKeywords() ;

/// @brief Method GetEnabledGlobalKeywords_Injected, addr 0xb58cee0, size 0x3c, virtual false, abstract: false, final false
static inline void GetEnabledGlobalKeywords_Injected(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// @brief Method GetGlobalColor, addr 0xb590e20, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Color GetGlobalColor(::StringW  name) ;

/// @brief Method GetGlobalColor, addr 0xb590e30, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Color GetGlobalColor(int32_t  nameID) ;

/// @brief Method GetGlobalFloat, addr 0xb590d14, size 0x40, virtual false, abstract: false, final false
static inline float_t GetGlobalFloat(::StringW  name) ;

/// @brief Method GetGlobalFloat, addr 0xb590d54, size 0x3c, virtual false, abstract: false, final false
static inline float_t GetGlobalFloat(int32_t  nameID) ;

/// @brief Method GetGlobalFloatArray, addr 0xb590f48, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<float_t> GetGlobalFloatArray(::StringW  name) ;

/// @brief Method GetGlobalFloatArray, addr 0xb590f58, size 0x58, virtual false, abstract: false, final false
static inline ::ArrayW<float_t> GetGlobalFloatArray(int32_t  nameID) ;

/// @brief Method GetGlobalFloatArray, addr 0xb591080, size 0x18, virtual false, abstract: false, final false
static inline void GetGlobalFloatArray(::StringW  name, ::System::Collections::Generic::List_1<float_t>*  values) ;

/// @brief Method GetGlobalFloatArray, addr 0xb591098, size 0x4, virtual false, abstract: false, final false
static inline void GetGlobalFloatArray(int32_t  nameID, ::System::Collections::Generic::List_1<float_t>*  values) ;

/// [FreeFunction("ShaderScripting::GetGlobalFloatArrayCount")]
/// @brief Method GetGlobalFloatArrayCountImpl, addr 0xb58f6b4, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetGlobalFloatArrayCountImpl(int32_t  name) ;

/// [FreeFunction("ShaderScripting::GetGlobalFloatArray")]
/// @brief Method GetGlobalFloatArrayImpl, addr 0xb58f2a0, size 0x118, virtual false, abstract: false, final false
static inline ::ArrayW<float_t> GetGlobalFloatArrayImpl(int32_t  name) ;

/// @brief Method GetGlobalFloatArrayImpl_Injected, addr 0xb58f3b8, size 0x44, virtual false, abstract: false, final false
static inline void GetGlobalFloatArrayImpl_Injected(int32_t  name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// [FreeFunction("ShaderScripting::GetGlobalFloat")]
/// @brief Method GetGlobalFloatImpl, addr 0xb58ecc8, size 0x3c, virtual false, abstract: false, final false
static inline float_t GetGlobalFloatImpl(int32_t  name) ;

/// @brief Method GetGlobalInt, addr 0xb590c60, size 0x5c, virtual false, abstract: false, final false
static inline int32_t GetGlobalInt(::StringW  name) ;

/// @brief Method GetGlobalInt, addr 0xb590cbc, size 0x58, virtual false, abstract: false, final false
static inline int32_t GetGlobalInt(int32_t  nameID) ;

/// [FreeFunction("ShaderScripting::GetGlobalInt")]
/// @brief Method GetGlobalIntImpl, addr 0xb58ec8c, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetGlobalIntImpl(int32_t  name) ;

/// @brief Method GetGlobalInteger, addr 0xb590d90, size 0x40, virtual false, abstract: false, final false
static inline int32_t GetGlobalInteger(::StringW  name) ;

/// @brief Method GetGlobalInteger, addr 0xb590dd0, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetGlobalInteger(int32_t  nameID) ;

/// @brief Method GetGlobalMatrix, addr 0xb590e34, size 0x84, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 GetGlobalMatrix(::StringW  name) ;

/// @brief Method GetGlobalMatrix, addr 0xb590eb8, size 0x7c, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 GetGlobalMatrix(int32_t  nameID) ;

/// @brief Method GetGlobalMatrixArray, addr 0xb591018, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Matrix4x4> GetGlobalMatrixArray(::StringW  name) ;

/// @brief Method GetGlobalMatrixArray, addr 0xb591028, size 0x58, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Matrix4x4> GetGlobalMatrixArray(int32_t  nameID) ;

/// @brief Method GetGlobalMatrixArray, addr 0xb5910b8, size 0x18, virtual false, abstract: false, final false
static inline void GetGlobalMatrixArray(::StringW  name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  values) ;

/// @brief Method GetGlobalMatrixArray, addr 0xb5910d0, size 0x4, virtual false, abstract: false, final false
static inline void GetGlobalMatrixArray(int32_t  nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  values) ;

/// [FreeFunction("ShaderScripting::GetGlobalMatrixArrayCount")]
/// @brief Method GetGlobalMatrixArrayCountImpl, addr 0xb58f72c, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetGlobalMatrixArrayCountImpl(int32_t  name) ;

/// [FreeFunction("ShaderScripting::GetGlobalMatrixArray")]
/// @brief Method GetGlobalMatrixArrayImpl, addr 0xb58f558, size 0x118, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Matrix4x4> GetGlobalMatrixArrayImpl(int32_t  name) ;

/// @brief Method GetGlobalMatrixArrayImpl_Injected, addr 0xb58f670, size 0x44, virtual false, abstract: false, final false
static inline void GetGlobalMatrixArrayImpl_Injected(int32_t  name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// [FreeFunction("ShaderScripting::GetGlobalMatrix")]
/// @brief Method GetGlobalMatrixImpl, addr 0xb58eda0, size 0x6c, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 GetGlobalMatrixImpl(int32_t  name) ;

/// @brief Method GetGlobalMatrixImpl_Injected, addr 0xb58ee0c, size 0x44, virtual false, abstract: false, final false
static inline void GetGlobalMatrixImpl_Injected(int32_t  name, ::by_ref<::UnityEngine::Matrix4x4>  ret) ;

/// @brief Method GetGlobalTexture, addr 0xb590f34, size 0x10, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture> GetGlobalTexture(::StringW  name) ;

/// @brief Method GetGlobalTexture, addr 0xb590f44, size 0x4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture> GetGlobalTexture(int32_t  nameID) ;

/// [FreeFunction("ShaderScripting::GetGlobalTexture")]
/// @brief Method GetGlobalTextureImpl, addr 0xb58ee50, size 0x6c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture> GetGlobalTextureImpl(int32_t  name) ;

/// @brief Method GetGlobalTextureImpl_Injected, addr 0xb58eebc, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetGlobalTextureImpl_Injected(int32_t  name) ;

/// @brief Method GetGlobalVector, addr 0xb590e0c, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 GetGlobalVector(::StringW  name) ;

/// @brief Method GetGlobalVector, addr 0xb590e1c, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 GetGlobalVector(int32_t  nameID) ;

/// @brief Method GetGlobalVectorArray, addr 0xb590fb0, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Vector4> GetGlobalVectorArray(::StringW  name) ;

/// @brief Method GetGlobalVectorArray, addr 0xb590fc0, size 0x58, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Vector4> GetGlobalVectorArray(int32_t  nameID) ;

/// @brief Method GetGlobalVectorArray, addr 0xb59109c, size 0x18, virtual false, abstract: false, final false
static inline void GetGlobalVectorArray(::StringW  name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  values) ;

/// @brief Method GetGlobalVectorArray, addr 0xb5910b4, size 0x4, virtual false, abstract: false, final false
static inline void GetGlobalVectorArray(int32_t  nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  values) ;

/// [FreeFunction("ShaderScripting::GetGlobalVectorArrayCount")]
/// @brief Method GetGlobalVectorArrayCountImpl, addr 0xb58f6f0, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetGlobalVectorArrayCountImpl(int32_t  name) ;

/// [FreeFunction("ShaderScripting::GetGlobalVectorArray")]
/// @brief Method GetGlobalVectorArrayImpl, addr 0xb58f3fc, size 0x118, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Vector4> GetGlobalVectorArrayImpl(int32_t  name) ;

/// @brief Method GetGlobalVectorArrayImpl_Injected, addr 0xb58f514, size 0x44, virtual false, abstract: false, final false
static inline void GetGlobalVectorArrayImpl_Injected(int32_t  name, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// [FreeFunction("ShaderScripting::GetGlobalVector")]
/// @brief Method GetGlobalVectorImpl, addr 0xb58ed04, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 GetGlobalVectorImpl(int32_t  name) ;

/// @brief Method GetGlobalVectorImpl_Injected, addr 0xb58ed5c, size 0x44, virtual false, abstract: false, final false
static inline void GetGlobalVectorImpl_Injected(int32_t  name, ::by_ref<::UnityEngine::Vector4>  ret) ;

/// [FreeFunction(Name = "ShaderScripting::GetPassCountInSubshader", HasExplicitThis = true)]
/// @brief Method GetPassCountInSubshader, addr 0xb58dfbc, size 0x80, virtual false, abstract: false, final false
inline int32_t GetPassCountInSubshader(int32_t  subshaderIndex) ;

/// @brief Method GetPassCountInSubshader_Injected, addr 0xb58e03c, size 0x44, virtual false, abstract: false, final false
static inline int32_t GetPassCountInSubshader_Injected(::System::IntPtr  _unity_self, int32_t  subshaderIndex) ;

/// @brief Method GetPropertyAttributes, addr 0xb5922c8, size 0x28, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> GetPropertyAttributes(int32_t  propertyIndex) ;

/// [FreeFunction("ShaderScripting::GetPropertyAttributes")]
/// @brief Method GetPropertyAttributes, addr 0xb591768, size 0xb0, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> GetPropertyAttributes(/* [NotNull] */ ::UnityEngine::Shader*  shader, int32_t  propertyIndex) ;

/// @brief Method GetPropertyAttributes_Injected, addr 0xb591818, size 0x44, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> GetPropertyAttributes_Injected(::System::IntPtr  shader, int32_t  propertyIndex) ;

/// @brief Method GetPropertyCount, addr 0xb591f60, size 0x78, virtual false, abstract: false, final false
inline int32_t GetPropertyCount() ;

/// @brief Method GetPropertyCount_Injected, addr 0xb591fd8, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetPropertyCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetPropertyDefaultFloatValue, addr 0xb5922f0, size 0x94, virtual false, abstract: false, final false
inline float_t GetPropertyDefaultFloatValue(int32_t  propertyIndex) ;

/// @brief Method GetPropertyDefaultIntValue, addr 0xb5924b0, size 0x90, virtual false, abstract: false, final false
inline int32_t GetPropertyDefaultIntValue(int32_t  propertyIndex) ;

/// [FreeFunction("ShaderScripting::GetPropertyDefaultIntValue")]
/// @brief Method GetPropertyDefaultIntValue, addr 0xb59185c, size 0xb0, virtual false, abstract: false, final false
static inline int32_t GetPropertyDefaultIntValue(/* [NotNull] */ ::UnityEngine::Shader*  shader, int32_t  propertyIndex) ;

/// @brief Method GetPropertyDefaultIntValue_Injected, addr 0xb59190c, size 0x44, virtual false, abstract: false, final false
static inline int32_t GetPropertyDefaultIntValue_Injected(::System::IntPtr  shader, int32_t  propertyIndex) ;

/// [FreeFunction("ShaderScripting::GetPropertyDefaultValue")]
/// @brief Method GetPropertyDefaultValue, addr 0xb591950, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 GetPropertyDefaultValue(/* [NotNull] */ ::UnityEngine::Shader*  shader, int32_t  propertyIndex) ;

/// @brief Method GetPropertyDefaultValue_Injected, addr 0xb591a1c, size 0x54, virtual false, abstract: false, final false
static inline void GetPropertyDefaultValue_Injected(::System::IntPtr  shader, int32_t  propertyIndex, ::by_ref<::UnityEngine::Vector4>  ret) ;

/// @brief Method GetPropertyDefaultVectorValue, addr 0xb592384, size 0x90, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 GetPropertyDefaultVectorValue(int32_t  propertyIndex) ;

/// @brief Method GetPropertyDescription, addr 0xb592278, size 0x28, virtual false, abstract: false, final false
inline ::StringW GetPropertyDescription(int32_t  propertyIndex) ;

/// [FreeFunction("ShaderScripting::GetPropertyDescription")]
/// @brief Method GetPropertyDescription, addr 0xb5914c4, size 0x15c, virtual false, abstract: false, final false
static inline ::StringW GetPropertyDescription(/* [NotNull] */ ::UnityEngine::Shader*  shader, int32_t  propertyIndex) ;

/// @brief Method GetPropertyDescription_Injected, addr 0xb591620, size 0x54, virtual false, abstract: false, final false
static inline void GetPropertyDescription_Injected(::System::IntPtr  shader, int32_t  propertyIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetPropertyFlags, addr 0xb5922a0, size 0x28, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::ShaderPropertyFlags GetPropertyFlags(int32_t  propertyIndex) ;

/// [FreeFunction("ShaderScripting::GetPropertyFlags")]
/// @brief Method GetPropertyFlags, addr 0xb591674, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::ShaderPropertyFlags GetPropertyFlags(/* [NotNull] */ ::UnityEngine::Shader*  shader, int32_t  propertyIndex) ;

/// @brief Method GetPropertyFlags_Injected, addr 0xb591724, size 0x44, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::ShaderPropertyFlags GetPropertyFlags_Injected(::System::IntPtr  shader, int32_t  propertyIndex) ;

/// @brief Method GetPropertyName, addr 0xb592200, size 0x28, virtual false, abstract: false, final false
inline ::StringW GetPropertyName(int32_t  propertyIndex) ;

/// [FreeFunction("ShaderScripting::GetPropertyName")]
/// @brief Method GetPropertyName, addr 0xb59112c, size 0x15c, virtual false, abstract: false, final false
static inline ::StringW GetPropertyName(/* [NotNull] */ ::UnityEngine::Shader*  shader, int32_t  propertyIndex) ;

/// @brief Method GetPropertyNameId, addr 0xb592228, size 0x28, virtual false, abstract: false, final false
inline int32_t GetPropertyNameId(int32_t  propertyIndex) ;

/// [FreeFunction("ShaderScripting::GetPropertyNameId")]
/// @brief Method GetPropertyNameId, addr 0xb5912dc, size 0xb0, virtual false, abstract: false, final false
static inline int32_t GetPropertyNameId(/* [NotNull] */ ::UnityEngine::Shader*  shader, int32_t  propertyIndex) ;

/// @brief Method GetPropertyNameId_Injected, addr 0xb59138c, size 0x44, virtual false, abstract: false, final false
static inline int32_t GetPropertyNameId_Injected(::System::IntPtr  shader, int32_t  propertyIndex) ;

/// @brief Method GetPropertyName_Injected, addr 0xb591288, size 0x54, virtual false, abstract: false, final false
static inline void GetPropertyName_Injected(::System::IntPtr  shader, int32_t  propertyIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetPropertyRangeLimits, addr 0xb592414, size 0x9c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetPropertyRangeLimits(int32_t  propertyIndex) ;

/// @brief Method GetPropertyTextureDefaultName, addr 0xb5925d0, size 0x90, virtual false, abstract: false, final false
inline ::StringW GetPropertyTextureDefaultName(int32_t  propertyIndex) ;

/// [FreeFunction("ShaderScripting::GetPropertyTextureDefaultName")]
/// @brief Method GetPropertyTextureDefaultName, addr 0xb591b64, size 0x15c, virtual false, abstract: false, final false
static inline ::StringW GetPropertyTextureDefaultName(/* [NotNull] */ ::UnityEngine::Shader*  shader, int32_t  propertyIndex) ;

/// @brief Method GetPropertyTextureDefaultName_Injected, addr 0xb591cc0, size 0x54, virtual false, abstract: false, final false
static inline void GetPropertyTextureDefaultName_Injected(::System::IntPtr  shader, int32_t  propertyIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetPropertyTextureDimension, addr 0xb592540, size 0x90, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension(int32_t  propertyIndex) ;

/// [FreeFunction("ShaderScripting::GetPropertyTextureDimension")]
/// @brief Method GetPropertyTextureDimension, addr 0xb591a70, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension(/* [NotNull] */ ::UnityEngine::Shader*  shader, int32_t  propertyIndex) ;

/// @brief Method GetPropertyTextureDimension_Injected, addr 0xb591b20, size 0x44, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension_Injected(::System::IntPtr  shader, int32_t  propertyIndex) ;

/// @brief Method GetPropertyType, addr 0xb592250, size 0x28, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::ShaderPropertyType GetPropertyType(int32_t  propertyIndex) ;

/// [FreeFunction("ShaderScripting::GetPropertyType")]
/// @brief Method GetPropertyType, addr 0xb5913d0, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::ShaderPropertyType GetPropertyType(/* [NotNull] */ ::UnityEngine::Shader*  shader, int32_t  propertyIndex) ;

/// @brief Method GetPropertyType_Injected, addr 0xb591480, size 0x44, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::ShaderPropertyType GetPropertyType_Injected(::System::IntPtr  shader, int32_t  propertyIndex) ;

/// [FreeFunction("ShaderScripting::IDToTag")]
/// @brief Method IDToTag, addr 0xb58daac, size 0xcc, virtual false, abstract: false, final false
static inline ::StringW IDToTag(int32_t  name) ;

/// @brief Method IDToTag_Injected, addr 0xb58db78, size 0x44, virtual false, abstract: false, final false
static inline void IDToTag_Injected(int32_t  name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// [FreeFunction(Name = "ShaderScripting::FindPassTagValue", HasExplicitThis = true)]
/// @brief Method Internal_FindPassTagValue, addr 0xb58e12c, size 0x90, virtual false, abstract: false, final false
inline int32_t Internal_FindPassTagValue(int32_t  passIndex, int32_t  tagName) ;

/// [FreeFunction(Name = "ShaderScripting::FindPassTagValue", HasExplicitThis = true)]
/// @brief Method Internal_FindPassTagValueInSubShader, addr 0xb58e2b0, size 0x98, virtual false, abstract: false, final false
inline int32_t Internal_FindPassTagValueInSubShader(int32_t  subShaderIndex, int32_t  passIndex, int32_t  tagName) ;

/// @brief Method Internal_FindPassTagValueInSubShader_Injected, addr 0xb58e530, size 0x5c, virtual false, abstract: false, final false
static inline int32_t Internal_FindPassTagValueInSubShader_Injected(::System::IntPtr  _unity_self, int32_t  subShaderIndex, int32_t  passIndex, int32_t  tagName) ;

/// @brief Method Internal_FindPassTagValue_Injected, addr 0xb58e4dc, size 0x54, virtual false, abstract: false, final false
static inline int32_t Internal_FindPassTagValue_Injected(::System::IntPtr  _unity_self, int32_t  passIndex, int32_t  tagName) ;

/// [FreeFunction(Name = "ShaderScripting::FindSubshaderTagValue", HasExplicitThis = true)]
/// @brief Method Internal_FindSubshaderTagValue, addr 0xb58e44c, size 0x90, virtual false, abstract: false, final false
inline int32_t Internal_FindSubshaderTagValue(int32_t  subShaderIndex, int32_t  tagName) ;

/// @brief Method Internal_FindSubshaderTagValue_Injected, addr 0xb58e58c, size 0x54, virtual false, abstract: false, final false
static inline int32_t Internal_FindSubshaderTagValue_Injected(::System::IntPtr  _unity_self, int32_t  subShaderIndex, int32_t  tagName) ;

/// [FreeFunction("ShaderScripting::IsKeywordEnabled")]
/// @brief Method IsKeywordEnabled, addr 0xb58d2a0, size 0x174, virtual false, abstract: false, final false
static inline bool IsKeywordEnabled(::StringW  keyword) ;

/// @brief Method IsKeywordEnabled, addr 0xb58d728, size 0x48, virtual false, abstract: false, final false
static inline bool IsKeywordEnabled(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GlobalKeyword>  keyword) ;

/// [FreeFunction("ShaderScripting::IsKeywordEnabled")]
/// @brief Method IsKeywordEnabledFast, addr 0xb58d5d4, size 0x44, virtual false, abstract: false, final false
static inline bool IsKeywordEnabledFast(::UnityEngine::Rendering::GlobalKeyword  keyword) ;

/// @brief Method IsKeywordEnabledFast_Injected, addr 0xb58d618, size 0x3c, virtual false, abstract: false, final false
static inline bool IsKeywordEnabledFast_Injected(::by_ref<::UnityEngine::Rendering::GlobalKeyword>  keyword) ;

/// @brief Method IsKeywordEnabled_Injected, addr 0xb58d414, size 0x3c, virtual false, abstract: false, final false
static inline bool IsKeywordEnabled_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  keyword) ;

static inline ::UnityEngine::Shader* New_ctor() ;

/// [FreeFunction(Name = "ShaderScripting::PropertyToID", IsThreadSafe = true)]
/// @brief Method PropertyToID, addr 0xb588f6c, size 0x170, virtual false, abstract: false, final false
static inline int32_t PropertyToID(::StringW  name) ;

/// @brief Method PropertyToID_Injected, addr 0xb58dbbc, size 0x3c, virtual false, abstract: false, final false
static inline int32_t PropertyToID_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method SetGlobalBuffer, addr 0xb59049c, size 0x50, virtual false, abstract: false, final false
static inline void SetGlobalBuffer(::StringW  name, ::UnityEngine::ComputeBuffer*  value) ;

/// @brief Method SetGlobalBuffer, addr 0xb59053c, size 0x50, virtual false, abstract: false, final false
static inline void SetGlobalBuffer(::StringW  name, ::UnityEngine::GraphicsBuffer*  value) ;

/// @brief Method SetGlobalBuffer, addr 0xb5904ec, size 0x50, virtual false, abstract: false, final false
static inline void SetGlobalBuffer(int32_t  nameID, ::UnityEngine::ComputeBuffer*  value) ;

/// @brief Method SetGlobalBuffer, addr 0xb59058c, size 0x50, virtual false, abstract: false, final false
static inline void SetGlobalBuffer(int32_t  nameID, ::UnityEngine::GraphicsBuffer*  value) ;

/// [FreeFunction("ShaderScripting::SetGlobalBuffer")]
/// @brief Method SetGlobalBufferImpl, addr 0xb58e948, size 0x50, virtual false, abstract: false, final false
static inline void SetGlobalBufferImpl(int32_t  name, ::UnityEngine::ComputeBuffer*  value) ;

/// @brief Method SetGlobalBufferImpl_Injected, addr 0xb58e998, size 0x44, virtual false, abstract: false, final false
static inline void SetGlobalBufferImpl_Injected(int32_t  name, ::System::IntPtr  value) ;

/// @brief Method SetGlobalColor, addr 0xb590350, size 0x40, virtual false, abstract: false, final false
static inline void SetGlobalColor(::StringW  name, ::UnityEngine::Color  value) ;

/// @brief Method SetGlobalColor, addr 0xb590390, size 0x4, virtual false, abstract: false, final false
static inline void SetGlobalColor(int32_t  nameID, ::UnityEngine::Color  value) ;

/// @brief Method SetGlobalConstantBuffer, addr 0xb5905dc, size 0x68, virtual false, abstract: false, final false
static inline void SetGlobalConstantBuffer(::StringW  name, ::UnityEngine::ComputeBuffer*  value, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantBuffer, addr 0xb5906ac, size 0x68, virtual false, abstract: false, final false
static inline void SetGlobalConstantBuffer(::StringW  name, ::UnityEngine::GraphicsBuffer*  value, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantBuffer, addr 0xb590644, size 0x68, virtual false, abstract: false, final false
static inline void SetGlobalConstantBuffer(int32_t  nameID, ::UnityEngine::ComputeBuffer*  value, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantBuffer, addr 0xb590714, size 0x68, virtual false, abstract: false, final false
static inline void SetGlobalConstantBuffer(int32_t  nameID, ::UnityEngine::GraphicsBuffer*  value, int32_t  offset, int32_t  size) ;

/// [FreeFunction("ShaderScripting::SetGlobalConstantBuffer")]
/// @brief Method SetGlobalConstantBufferImpl, addr 0xb58ea70, size 0x68, virtual false, abstract: false, final false
static inline void SetGlobalConstantBufferImpl(int32_t  name, ::UnityEngine::ComputeBuffer*  value, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantBufferImpl_Injected, addr 0xb58ead8, size 0x5c, virtual false, abstract: false, final false
static inline void SetGlobalConstantBufferImpl_Injected(int32_t  name, ::System::IntPtr  value, int32_t  offset, int32_t  size) ;

/// [FreeFunction("ShaderScripting::SetGlobalConstantBuffer")]
/// @brief Method SetGlobalConstantGraphicsBufferImpl, addr 0xb58eb34, size 0x68, virtual false, abstract: false, final false
static inline void SetGlobalConstantGraphicsBufferImpl(int32_t  name, ::UnityEngine::GraphicsBuffer*  value, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantGraphicsBufferImpl_Injected, addr 0xb58eb9c, size 0x5c, virtual false, abstract: false, final false
static inline void SetGlobalConstantGraphicsBufferImpl_Injected(int32_t  name, ::System::IntPtr  value, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalFloat, addr 0xb5901e4, size 0x50, virtual false, abstract: false, final false
static inline void SetGlobalFloat(::StringW  name, float_t  value) ;

/// @brief Method SetGlobalFloat, addr 0xb590234, size 0x4c, virtual false, abstract: false, final false
static inline void SetGlobalFloat(int32_t  nameID, float_t  value) ;

/// @brief Method SetGlobalFloatArray, addr 0xb590950, size 0x24, virtual false, abstract: false, final false
static inline void SetGlobalFloatArray(::StringW  name, ::ArrayW<float_t>  values) ;

/// @brief Method SetGlobalFloatArray, addr 0xb59081c, size 0xa0, virtual false, abstract: false, final false
static inline void SetGlobalFloatArray(::StringW  name, ::System::Collections::Generic::List_1<float_t>*  values) ;

/// @brief Method SetGlobalFloatArray, addr 0xb58fb70, size 0xbc, virtual false, abstract: false, final false
static inline void SetGlobalFloatArray(int32_t  name, ::ArrayW<float_t>  values, int32_t  count) ;

/// @brief Method SetGlobalFloatArray, addr 0xb590974, size 0x14, virtual false, abstract: false, final false
static inline void SetGlobalFloatArray(int32_t  nameID, ::ArrayW<float_t>  values) ;

/// @brief Method SetGlobalFloatArray, addr 0xb5908bc, size 0x94, virtual false, abstract: false, final false
static inline void SetGlobalFloatArray(int32_t  nameID, ::System::Collections::Generic::List_1<float_t>*  values) ;

/// [FreeFunction("ShaderScripting::SetGlobalFloatArray")]
/// @brief Method SetGlobalFloatArrayImpl, addr 0xb58eef8, size 0xe4, virtual false, abstract: false, final false
static inline void SetGlobalFloatArrayImpl(int32_t  name, ::ArrayW<float_t>  values, int32_t  count) ;

/// @brief Method SetGlobalFloatArrayImpl_Injected, addr 0xb58efdc, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalFloatArrayImpl_Injected(int32_t  name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values, int32_t  count) ;

/// [FreeFunction("ShaderScripting::SetGlobalFloat")]
/// @brief Method SetGlobalFloatImpl, addr 0xb58e624, size 0x4c, virtual false, abstract: false, final false
static inline void SetGlobalFloatImpl(int32_t  name, float_t  value) ;

/// [FreeFunction("ShaderScripting::SetGlobalBuffer")]
/// @brief Method SetGlobalGraphicsBufferImpl, addr 0xb58e9dc, size 0x50, virtual false, abstract: false, final false
static inline void SetGlobalGraphicsBufferImpl(int32_t  name, ::UnityEngine::GraphicsBuffer*  value) ;

/// @brief Method SetGlobalGraphicsBufferImpl_Injected, addr 0xb58ea2c, size 0x44, virtual false, abstract: false, final false
static inline void SetGlobalGraphicsBufferImpl_Injected(int32_t  name, ::System::IntPtr  value) ;

/// @brief Method SetGlobalInt, addr 0xb590158, size 0x48, virtual false, abstract: false, final false
static inline void SetGlobalInt(::StringW  name, int32_t  value) ;

/// @brief Method SetGlobalInt, addr 0xb5901a0, size 0x44, virtual false, abstract: false, final false
static inline void SetGlobalInt(int32_t  nameID, int32_t  value) ;

/// [FreeFunction("ShaderScripting::SetGlobalInt")]
/// @brief Method SetGlobalIntImpl, addr 0xb58e5e0, size 0x44, virtual false, abstract: false, final false
static inline void SetGlobalIntImpl(int32_t  name, int32_t  value) ;

/// @brief Method SetGlobalInteger, addr 0xb590280, size 0x48, virtual false, abstract: false, final false
static inline void SetGlobalInteger(::StringW  name, int32_t  value) ;

/// @brief Method SetGlobalInteger, addr 0xb5902c8, size 0x44, virtual false, abstract: false, final false
static inline void SetGlobalInteger(int32_t  nameID, int32_t  value) ;

/// @brief Method SetGlobalMatrix, addr 0xb590394, size 0x64, virtual false, abstract: false, final false
static inline void SetGlobalMatrix(::StringW  name, ::UnityEngine::Matrix4x4  value) ;

/// @brief Method SetGlobalMatrix, addr 0xb5903f8, size 0x5c, virtual false, abstract: false, final false
static inline void SetGlobalMatrix(int32_t  nameID, ::UnityEngine::Matrix4x4  value) ;

/// @brief Method SetGlobalMatrixArray, addr 0xb590c28, size 0x24, virtual false, abstract: false, final false
static inline void SetGlobalMatrixArray(::StringW  name, ::ArrayW<::UnityEngine::Matrix4x4>  values) ;

/// @brief Method SetGlobalMatrixArray, addr 0xb590af4, size 0xa0, virtual false, abstract: false, final false
static inline void SetGlobalMatrixArray(::StringW  name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  values) ;

/// @brief Method SetGlobalMatrixArray, addr 0xb58fce8, size 0xbc, virtual false, abstract: false, final false
static inline void SetGlobalMatrixArray(int32_t  name, ::ArrayW<::UnityEngine::Matrix4x4>  values, int32_t  count) ;

/// @brief Method SetGlobalMatrixArray, addr 0xb590c4c, size 0x14, virtual false, abstract: false, final false
static inline void SetGlobalMatrixArray(int32_t  nameID, ::ArrayW<::UnityEngine::Matrix4x4>  values) ;

/// @brief Method SetGlobalMatrixArray, addr 0xb590b94, size 0x94, virtual false, abstract: false, final false
static inline void SetGlobalMatrixArray(int32_t  nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  values) ;

/// [FreeFunction("ShaderScripting::SetGlobalMatrixArray")]
/// @brief Method SetGlobalMatrixArrayImpl, addr 0xb58f168, size 0xe4, virtual false, abstract: false, final false
static inline void SetGlobalMatrixArrayImpl(int32_t  name, ::ArrayW<::UnityEngine::Matrix4x4>  values, int32_t  count) ;

/// @brief Method SetGlobalMatrixArrayImpl_Injected, addr 0xb58f24c, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalMatrixArrayImpl_Injected(int32_t  name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values, int32_t  count) ;

/// [FreeFunction("ShaderScripting::SetGlobalMatrix")]
/// @brief Method SetGlobalMatrixImpl, addr 0xb58e708, size 0x44, virtual false, abstract: false, final false
static inline void SetGlobalMatrixImpl(int32_t  name, ::UnityEngine::Matrix4x4  value) ;

/// @brief Method SetGlobalMatrixImpl_Injected, addr 0xb58e74c, size 0x44, virtual false, abstract: false, final false
static inline void SetGlobalMatrixImpl_Injected(int32_t  name, ::by_ref<::UnityEngine::Matrix4x4>  value) ;

/// @brief Method SetGlobalRayTracingAccelerationStructure, addr 0xb59077c, size 0x50, virtual false, abstract: false, final false
static inline void SetGlobalRayTracingAccelerationStructure(::StringW  name, ::UnityEngine::Rendering::RayTracingAccelerationStructure*  value) ;

/// @brief Method SetGlobalRayTracingAccelerationStructure, addr 0xb5907cc, size 0x50, virtual false, abstract: false, final false
static inline void SetGlobalRayTracingAccelerationStructure(int32_t  nameID, ::UnityEngine::Rendering::RayTracingAccelerationStructure*  value) ;

/// [FreeFunction("ShaderScripting::SetGlobalRayTracingAccelerationStructure")]
/// @brief Method SetGlobalRayTracingAccelerationStructureImpl, addr 0xb58ebf8, size 0x50, virtual false, abstract: false, final false
static inline void SetGlobalRayTracingAccelerationStructureImpl(int32_t  name, ::UnityEngine::Rendering::RayTracingAccelerationStructure*  accelerationStructure) ;

/// @brief Method SetGlobalRayTracingAccelerationStructureImpl_Injected, addr 0xb58ec48, size 0x44, virtual false, abstract: false, final false
static inline void SetGlobalRayTracingAccelerationStructureImpl_Injected(int32_t  name, ::System::IntPtr  accelerationStructure) ;

/// [FreeFunction("ShaderScripting::SetGlobalRenderTexture")]
/// @brief Method SetGlobalRenderTextureImpl, addr 0xb58e860, size 0x94, virtual false, abstract: false, final false
static inline void SetGlobalRenderTextureImpl(int32_t  name, ::UnityEngine::RenderTexture*  value, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetGlobalRenderTextureImpl_Injected, addr 0xb58e8f4, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalRenderTextureImpl_Injected(int32_t  name, ::System::IntPtr  value, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetGlobalTexture, addr 0xb590470, size 0x28, virtual false, abstract: false, final false
static inline void SetGlobalTexture(::StringW  name, ::UnityEngine::RenderTexture*  value, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetGlobalTexture, addr 0xb590454, size 0x18, virtual false, abstract: false, final false
static inline void SetGlobalTexture(::StringW  name, ::UnityEngine::Texture*  value) ;

/// @brief Method SetGlobalTexture, addr 0xb590498, size 0x4, virtual false, abstract: false, final false
static inline void SetGlobalTexture(int32_t  nameID, ::UnityEngine::RenderTexture*  value, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetGlobalTexture, addr 0xb59046c, size 0x4, virtual false, abstract: false, final false
static inline void SetGlobalTexture(int32_t  nameID, ::UnityEngine::Texture*  value) ;

/// [FreeFunction("ShaderScripting::SetGlobalTexture")]
/// @brief Method SetGlobalTextureImpl, addr 0xb58e790, size 0x8c, virtual false, abstract: false, final false
static inline void SetGlobalTextureImpl(int32_t  name, ::UnityEngine::Texture*  value) ;

/// @brief Method SetGlobalTextureImpl_Injected, addr 0xb58e81c, size 0x44, virtual false, abstract: false, final false
static inline void SetGlobalTextureImpl_Injected(int32_t  name, ::System::IntPtr  value) ;

/// @brief Method SetGlobalVector, addr 0xb59030c, size 0x40, virtual false, abstract: false, final false
static inline void SetGlobalVector(::StringW  name, ::UnityEngine::Vector4  value) ;

/// @brief Method SetGlobalVector, addr 0xb59034c, size 0x4, virtual false, abstract: false, final false
static inline void SetGlobalVector(int32_t  nameID, ::UnityEngine::Vector4  value) ;

/// @brief Method SetGlobalVectorArray, addr 0xb590abc, size 0x24, virtual false, abstract: false, final false
static inline void SetGlobalVectorArray(::StringW  name, ::ArrayW<::UnityEngine::Vector4>  values) ;

/// @brief Method SetGlobalVectorArray, addr 0xb590988, size 0xa0, virtual false, abstract: false, final false
static inline void SetGlobalVectorArray(::StringW  name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  values) ;

/// @brief Method SetGlobalVectorArray, addr 0xb58fc2c, size 0xbc, virtual false, abstract: false, final false
static inline void SetGlobalVectorArray(int32_t  name, ::ArrayW<::UnityEngine::Vector4>  values, int32_t  count) ;

/// @brief Method SetGlobalVectorArray, addr 0xb590ae0, size 0x14, virtual false, abstract: false, final false
static inline void SetGlobalVectorArray(int32_t  nameID, ::ArrayW<::UnityEngine::Vector4>  values) ;

/// @brief Method SetGlobalVectorArray, addr 0xb590a28, size 0x94, virtual false, abstract: false, final false
static inline void SetGlobalVectorArray(int32_t  nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  values) ;

/// [FreeFunction("ShaderScripting::SetGlobalVectorArray")]
/// @brief Method SetGlobalVectorArrayImpl, addr 0xb58f030, size 0xe4, virtual false, abstract: false, final false
static inline void SetGlobalVectorArrayImpl(int32_t  name, ::ArrayW<::UnityEngine::Vector4>  values, int32_t  count) ;

/// @brief Method SetGlobalVectorArrayImpl_Injected, addr 0xb58f114, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalVectorArrayImpl_Injected(int32_t  name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values, int32_t  count) ;

/// [FreeFunction("ShaderScripting::SetGlobalVector")]
/// @brief Method SetGlobalVectorImpl, addr 0xb58e670, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalVectorImpl(int32_t  name, ::UnityEngine::Vector4  value) ;

/// @brief Method SetGlobalVectorImpl_Injected, addr 0xb58e6c4, size 0x44, virtual false, abstract: false, final false
static inline void SetGlobalVectorImpl_Injected(int32_t  name, ::by_ref<::UnityEngine::Vector4>  value) ;

/// @brief Method SetKeyword, addr 0xb58d6dc, size 0x4c, virtual false, abstract: false, final false
static inline void SetKeyword(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GlobalKeyword>  keyword, bool  value) ;

/// [FreeFunction("ShaderScripting::SetKeyword")]
/// @brief Method SetKeywordFast, addr 0xb58d548, size 0x48, virtual false, abstract: false, final false
static inline void SetKeywordFast(::UnityEngine::Rendering::GlobalKeyword  keyword, bool  value) ;

/// @brief Method SetKeywordFast_Injected, addr 0xb58d590, size 0x44, virtual false, abstract: false, final false
static inline void SetKeywordFast_Injected(::by_ref<::UnityEngine::Rendering::GlobalKeyword>  keyword, bool  value) ;

/// [FreeFunction("ShaderScripting::TagToID")]
/// @brief Method TagToID, addr 0xb58d900, size 0x170, virtual false, abstract: false, final false
static inline int32_t TagToID(::StringW  name) ;

/// @brief Method TagToID_Injected, addr 0xb58da70, size 0x3c, virtual false, abstract: false, final false
static inline int32_t TagToID_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// [FreeFunction]
/// @brief Method WarmupAllShaders, addr 0xb58d8d8, size 0x28, virtual false, abstract: false, final false
static inline void WarmupAllShaders() ;

/// @brief Method .ctor, addr 0xb5910d4, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// [FreeFunction("ShaderScripting::GetDisableBatchingType", HasExplicitThis = true)]
/// @brief Method get_disableBatching, addr 0xb58d824, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::DisableBatchingType get_disableBatching() ;

/// @brief Method get_disableBatching_Injected, addr 0xb58d89c, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::DisableBatchingType get_disableBatching_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_enabledGlobalKeywords, addr 0xb58cbec, size 0x4, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword> get_enabledGlobalKeywords() ;

/// @brief Method get_globalKeywords, addr 0xb58cd00, size 0x4, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Rendering::GlobalKeyword> get_globalKeywords() ;

/// @brief Method get_globalMaximumLOD, addr 0xb58c830, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_globalMaximumLOD() ;

/// @brief Method get_globalRenderPipeline, addr 0xb58c948, size 0xc4, virtual false, abstract: false, final false
static inline ::StringW get_globalRenderPipeline() ;

/// @brief Method get_globalRenderPipeline_Injected, addr 0xb58ca0c, size 0x3c, virtual false, abstract: false, final false
static inline void get_globalRenderPipeline_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method get_globalShaderHardwareTier, addr 0xb58c1a0, size 0x68, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::ShaderHardwareTier get_globalShaderHardwareTier() ;

/// [NativeMethod("IsSupported")]
/// @brief Method get_isSupported, addr 0xb58c894, size 0x78, virtual false, abstract: false, final false
inline bool get_isSupported() ;

/// @brief Method get_isSupported_Injected, addr 0xb58c90c, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isSupported_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_keywordSpace, addr 0xb58ce14, size 0x88, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::LocalKeywordSpace get_keywordSpace() ;

/// @brief Method get_keywordSpace_Injected, addr 0xb58ce9c, size 0x44, virtual false, abstract: false, final false
static inline void get_keywordSpace_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeywordSpace>  ret) ;

/// @brief Method get_maximumChunksOverride, addr 0xb58c654, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_maximumChunksOverride() ;

/// @brief Method get_maximumLOD, addr 0xb58c6b8, size 0x78, virtual false, abstract: false, final false
inline int32_t get_maximumLOD() ;

/// @brief Method get_maximumLOD_Injected, addr 0xb58c730, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_maximumLOD_Injected(::System::IntPtr  _unity_self) ;

/// [FreeFunction(Name = "ShaderScripting::GetPassCount", HasExplicitThis = true)]
/// @brief Method get_passCount, addr 0xb58de54, size 0x78, virtual false, abstract: false, final false
inline int32_t get_passCount() ;

/// @brief Method get_passCount_Injected, addr 0xb58decc, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_passCount_Injected(::System::IntPtr  _unity_self) ;

/// [FreeFunction("ShaderScripting::GetRenderQueue", HasExplicitThis = true)]
/// @brief Method get_renderQueue, addr 0xb58d770, size 0x78, virtual false, abstract: false, final false
inline int32_t get_renderQueue() ;

/// @brief Method get_renderQueue_Injected, addr 0xb58d7e8, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_renderQueue_Injected(::System::IntPtr  _unity_self) ;

/// [FreeFunction(Name = "ShaderScripting::GetSubshaderCount", HasExplicitThis = true)]
/// @brief Method get_subshaderCount, addr 0xb58df08, size 0x78, virtual false, abstract: false, final false
inline int32_t get_subshaderCount() ;

/// @brief Method get_subshaderCount_Injected, addr 0xb58df80, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_subshaderCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_globalMaximumLOD, addr 0xb58c858, size 0x3c, virtual false, abstract: false, final false
static inline void set_globalMaximumLOD(int32_t  value) ;

/// @brief Method set_globalRenderPipeline, addr 0xb58ca48, size 0x168, virtual false, abstract: false, final false
static inline void set_globalRenderPipeline(::StringW  value) ;

/// @brief Method set_globalRenderPipeline_Injected, addr 0xb58cbb0, size 0x3c, virtual false, abstract: false, final false
static inline void set_globalRenderPipeline_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  value) ;

/// @brief Method set_globalShaderHardwareTier, addr 0xb58c208, size 0x74, virtual false, abstract: false, final false
static inline void set_globalShaderHardwareTier(::UnityEngine::Rendering::ShaderHardwareTier  value) ;

/// @brief Method set_maximumChunksOverride, addr 0xb58c67c, size 0x3c, virtual false, abstract: false, final false
static inline void set_maximumChunksOverride(int32_t  value) ;

/// @brief Method set_maximumLOD, addr 0xb58c76c, size 0x80, virtual false, abstract: false, final false
inline void set_maximumLOD(int32_t  value) ;

/// @brief Method set_maximumLOD_Injected, addr 0xb58c7ec, size 0x44, virtual false, abstract: false, final false
static inline void set_maximumLOD_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Shader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Shader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Shader(Shader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Shader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Shader(Shader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14883};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Shader) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
