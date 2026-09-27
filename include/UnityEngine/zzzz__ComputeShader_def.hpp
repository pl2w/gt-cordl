#pragma once
// IWYU pragma private; include "UnityEngine/ComputeShader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ComputeShader)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Rendering {
struct LocalKeywordSpace;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
class ComputeShader;
}
// Write type traits
MARK_REF_T(::UnityEngine::ComputeShader*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ComputeShader*, "UnityEngine", "ComputeShader");
// [UsedByNativeCode]
// [NativeHeader("Runtime/Graphics/ShaderScriptBindings.h")]
// [NativeHeader("Runtime/Graphics/RayTracing/RayTracingAccelerationStructure.h")]
// [NativeHeader("Runtime/Shaders/ComputeShader.h")]
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ComputeShader
class CORDL_TYPE ComputeShader : public ::UnityEngine::Object {
public:
// Declarations
 __declspec(property(get=get_keywordSpace)) ::UnityEngine::Rendering::LocalKeywordSpace  keywordSpace;

 __declspec(property(put=set_shaderKeywords)) ::ArrayW<::StringW>  shaderKeywords;

/// [FreeFunction("ComputeShaderScripting::DisableKeyword", HasExplicitThis = true)]
/// @brief Method DisableKeyword, addr 0xb5ec5d0, size 0x16c, virtual false, abstract: false, final false
inline void DisableKeyword(::StringW  keyword) ;

/// @brief Method DisableKeyword_Injected, addr 0xb5ec73c, size 0x44, virtual false, abstract: false, final false
static inline void DisableKeyword_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  keyword) ;

/// [NativeName("DispatchComputeShader")]
/// @brief Method Dispatch, addr 0xb5ec250, size 0xa0, virtual false, abstract: false, final false
inline void Dispatch(int32_t  kernelIndex, int32_t  threadGroupsX, int32_t  threadGroupsY, int32_t  threadGroupsZ) ;

/// @brief Method Dispatch_Injected, addr 0xb5ec2f0, size 0x6c, virtual false, abstract: false, final false
static inline void Dispatch_Injected(::System::IntPtr  _unity_self, int32_t  kernelIndex, int32_t  threadGroupsX, int32_t  threadGroupsY, int32_t  threadGroupsZ) ;

/// [FreeFunction("ComputeShaderScripting::EnableKeyword", HasExplicitThis = true)]
/// @brief Method EnableKeyword, addr 0xb5ec420, size 0x16c, virtual false, abstract: false, final false
inline void EnableKeyword(::StringW  keyword) ;

/// @brief Method EnableKeyword_Injected, addr 0xb5ec58c, size 0x44, virtual false, abstract: false, final false
static inline void EnableKeyword_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  keyword) ;

/// [NativeMethod(Name = "ComputeShaderScripting::FindKernel", HasExplicitThis = true, IsFreeFunction = true, ThrowsException = true)]
/// [RequiredByNativeCode]
/// @brief Method FindKernel, addr 0xb5eb5e8, size 0x178, virtual false, abstract: false, final false
inline int32_t FindKernel(::StringW  name) ;

/// @brief Method FindKernel_Injected, addr 0xb5eb76c, size 0x44, virtual false, abstract: false, final false
static inline int32_t FindKernel_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// [FreeFunction(Name = "ComputeShaderScripting::HasKernel", HasExplicitThis = true)]
/// @brief Method HasKernel, addr 0xb5eb7b0, size 0x17c, virtual false, abstract: false, final false
inline bool HasKernel(::StringW  name) ;

/// @brief Method HasKernel_Injected, addr 0xb5eb92c, size 0x44, virtual false, abstract: false, final false
static inline bool HasKernel_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// [FreeFunction(Name = "ComputeShaderScripting::SetBuffer", HasExplicitThis = true)]
/// @brief Method Internal_SetBuffer, addr 0xb5ebeec, size 0xb8, virtual false, abstract: false, final false
inline void Internal_SetBuffer(int32_t  kernelIndex, int32_t  nameID, /* [NotNull] */ ::UnityEngine::ComputeBuffer*  buffer) ;

/// @brief Method Internal_SetBuffer_Injected, addr 0xb5ebfa4, size 0x5c, virtual false, abstract: false, final false
static inline void Internal_SetBuffer_Injected(::System::IntPtr  _unity_self, int32_t  kernelIndex, int32_t  nameID, ::System::IntPtr  buffer) ;

/// [FreeFunction(Name = "ComputeShaderScripting::SetBuffer", HasExplicitThis = true)]
/// @brief Method Internal_SetGraphicsBuffer, addr 0xb5ec000, size 0xb8, virtual false, abstract: false, final false
inline void Internal_SetGraphicsBuffer(int32_t  kernelIndex, int32_t  nameID, /* [NotNull] */ ::UnityEngine::GraphicsBuffer*  buffer) ;

/// @brief Method Internal_SetGraphicsBuffer_Injected, addr 0xb5ec0b8, size 0x5c, virtual false, abstract: false, final false
static inline void Internal_SetGraphicsBuffer_Injected(::System::IntPtr  _unity_self, int32_t  kernelIndex, int32_t  nameID, ::System::IntPtr  buffer) ;

static inline ::UnityEngine::ComputeShader* New_ctor() ;

/// @brief Method SetBuffer, addr 0xb5ec8f8, size 0x3c, virtual false, abstract: false, final false
inline void SetBuffer(int32_t  kernelIndex, ::StringW  name, ::UnityEngine::ComputeBuffer*  buffer) ;

/// @brief Method SetBuffer, addr 0xb5ec114, size 0x4, virtual false, abstract: false, final false
inline void SetBuffer(int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::ComputeBuffer*  buffer) ;

/// @brief Method SetBuffer, addr 0xb5ec118, size 0x4, virtual false, abstract: false, final false
inline void SetBuffer(int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::GraphicsBuffer*  buffer) ;

/// @brief Method SetConstantBuffer, addr 0xb5ec934, size 0x4, virtual false, abstract: false, final false
inline void SetConstantBuffer(int32_t  nameID, ::UnityEngine::ComputeBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// [FreeFunction(Name = "ComputeShaderScripting::SetConstantBuffer", HasExplicitThis = true)]
/// @brief Method SetConstantComputeBuffer, addr 0xb5ec11c, size 0xc8, virtual false, abstract: false, final false
inline void SetConstantComputeBuffer(int32_t  nameID, /* [NotNull] */ ::UnityEngine::ComputeBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetConstantComputeBuffer_Injected, addr 0xb5ec1e4, size 0x6c, virtual false, abstract: false, final false
static inline void SetConstantComputeBuffer_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::System::IntPtr  buffer, int32_t  offset, int32_t  size) ;

/// [FreeFunction(Name = "ComputeShaderScripting::SetValue<float>", HasExplicitThis = true)]
/// @brief Method SetFloat, addr 0xb5eb970, size 0x88, virtual false, abstract: false, final false
inline void SetFloat(int32_t  nameID, float_t  val) ;

/// @brief Method SetFloat_Injected, addr 0xb5eb9f8, size 0x54, virtual false, abstract: false, final false
static inline void SetFloat_Injected(::System::IntPtr  _unity_self, int32_t  nameID, float_t  val) ;

/// [FreeFunction(Name = "ComputeShaderScripting::SetValue<int>", HasExplicitThis = true)]
/// @brief Method SetInt, addr 0xb5eba4c, size 0x88, virtual false, abstract: false, final false
inline void SetInt(int32_t  nameID, int32_t  val) ;

/// [FreeFunction(Name = "ComputeShaderScripting::SetArray<int>", HasExplicitThis = true)]
/// @brief Method SetIntArray, addr 0xb5ebc0c, size 0xfc, virtual false, abstract: false, final false
inline void SetIntArray(int32_t  nameID, ::ArrayW<int32_t>  values) ;

/// @brief Method SetIntArray_Injected, addr 0xb5ebd08, size 0x54, virtual false, abstract: false, final false
static inline void SetIntArray_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values) ;

/// @brief Method SetInt_Injected, addr 0xb5ebad4, size 0x54, virtual false, abstract: false, final false
static inline void SetInt_Injected(::System::IntPtr  _unity_self, int32_t  nameID, int32_t  val) ;

/// @brief Method SetInts, addr 0xb5ec8ec, size 0x4, virtual false, abstract: false, final false
inline void SetInts(int32_t  nameID, /* [ParamArray] */ ::ArrayW<int32_t>  values) ;

/// [FreeFunction("ComputeShaderScripting::SetShaderKeywords", HasExplicitThis = true)]
/// @brief Method SetShaderKeywords, addr 0xb5ec780, size 0x78, virtual false, abstract: false, final false
inline void SetShaderKeywords(::ArrayW<::StringW>  names) ;

/// @brief Method SetShaderKeywords_Injected, addr 0xb5ec7f8, size 0x44, virtual false, abstract: false, final false
static inline void SetShaderKeywords_Injected(::System::IntPtr  _unity_self, ::ArrayW<::StringW>  names) ;

/// @brief Method SetTexture, addr 0xb5ec8f0, size 0x8, virtual false, abstract: false, final false
inline void SetTexture(int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::Texture*  texture) ;

/// [NativeMethod(Name = "ComputeShaderScripting::SetTexture", HasExplicitThis = true, IsFreeFunction = true, ThrowsException = true)]
/// @brief Method SetTexture, addr 0xb5ebd5c, size 0xd4, virtual false, abstract: false, final false
inline void SetTexture(int32_t  kernelIndex, int32_t  nameID, /* [NotNull] */ ::UnityEngine::Texture*  texture, int32_t  mipLevel) ;

/// @brief Method SetTexture_Injected, addr 0xb5ebe80, size 0x6c, virtual false, abstract: false, final false
static inline void SetTexture_Injected(::System::IntPtr  _unity_self, int32_t  kernelIndex, int32_t  nameID, ::System::IntPtr  texture, int32_t  mipLevel) ;

/// @brief Method SetVector, addr 0xb5ec898, size 0x54, virtual false, abstract: false, final false
inline void SetVector(::StringW  name, ::UnityEngine::Vector4  val) ;

/// [FreeFunction(Name = "ComputeShaderScripting::SetValue<Vector4f>", HasExplicitThis = true)]
/// @brief Method SetVector, addr 0xb5ebb28, size 0x90, virtual false, abstract: false, final false
inline void SetVector(int32_t  nameID, ::UnityEngine::Vector4  val) ;

/// @brief Method SetVector_Injected, addr 0xb5ebbb8, size 0x54, virtual false, abstract: false, final false
static inline void SetVector_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::by_ref<::UnityEngine::Vector4>  val) ;

/// @brief Method .ctor, addr 0xb5ec840, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_keywordSpace, addr 0xb5ec35c, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::LocalKeywordSpace get_keywordSpace() ;

/// @brief Method get_keywordSpace_Injected, addr 0xb5ec3dc, size 0x44, virtual false, abstract: false, final false
static inline void get_keywordSpace_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rendering::LocalKeywordSpace>  ret) ;

/// @brief Method set_shaderKeywords, addr 0xb5ec83c, size 0x4, virtual false, abstract: false, final false
inline void set_shaderKeywords(::ArrayW<::StringW>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ComputeShader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ComputeShader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ComputeShader(ComputeShader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ComputeShader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ComputeShader(ComputeShader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15130};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ComputeShader) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
