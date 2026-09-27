#pragma once
// IWYU pragma private; include "UnityEngine/MaterialPropertyBlock.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialPropertyBlock)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Rendering {
struct RenderTextureSubElement;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
class MaterialPropertyBlock_BindingsMarshaller;
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
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class MaterialPropertyBlock_BindingsMarshaller;
}
// Write type traits
MARK_REF_T(::UnityEngine::MaterialPropertyBlock*);
MARK_REF_T(::UnityEngine::MaterialPropertyBlock_BindingsMarshaller*);
DEFINE_IL2CPP_CLASS(::UnityEngine::MaterialPropertyBlock*, "UnityEngine", "MaterialPropertyBlock");
DEFINE_IL2CPP_CLASS(::UnityEngine::MaterialPropertyBlock_BindingsMarshaller*, "UnityEngine", "MaterialPropertyBlock/BindingsMarshaller");
// [NativeHeader("Runtime/Math/SphericalHarmonicsL2.h")]
// [NativeHeader("Runtime/Shaders/ShaderPropertySheet.h")]
// [NativeHeader("Runtime/Shaders/ComputeShader.h")]
// [NativeHeader("Runtime/Graphics/ShaderScriptBindings.h")]
// Dependencies System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.MaterialPropertyBlock
class CORDL_TYPE MaterialPropertyBlock : public ::System::Object {
public:
// Declarations
using BindingsMarshaller = ::UnityEngine::MaterialPropertyBlock_BindingsMarshaller;

/// @brief Field m_Ptr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Ptr, put=__cordl_internal_set_m_Ptr)) ::System::IntPtr  m_Ptr;

/// @brief Method Clear, addr 0xb588ba4, size 0x8, virtual false, abstract: false, final false
inline void Clear() ;

/// [ThreadSafe]
/// @brief Method Clear, addr 0xb588b08, size 0x58, virtual false, abstract: false, final false
inline void Clear(bool  keepMemory) ;

/// @brief Method Clear_Injected, addr 0xb588b60, size 0x44, virtual false, abstract: false, final false
static inline void Clear_Injected(::System::IntPtr  _unity_self, bool  keepMemory) ;

/// [NativeMethod(Name = "MaterialPropertyBlockScripting::Create", IsFreeFunction = true)]
/// @brief Method CreateImpl, addr 0xb588aa4, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateImpl() ;

/// [NativeMethod(Name = "MaterialPropertyBlockScripting::Destroy", IsFreeFunction = true, IsThreadSafe = true)]
/// @brief Method DestroyImpl, addr 0xb588acc, size 0x3c, virtual false, abstract: false, final false
static inline void DestroyImpl(::System::IntPtr  mpb) ;

/// @brief Method Dispose, addr 0xb588ea8, size 0x94, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method Finalize, addr 0xb588e24, size 0x84, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetColor, addr 0xb589498, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetColor(int32_t  nameID) ;

/// [ThreadSafe]
/// [NativeName("GetColorFromScript")]
/// @brief Method GetColorImpl, addr 0xb587cf0, size 0x74, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetColorImpl(int32_t  name) ;

/// @brief Method GetColorImpl_Injected, addr 0xb587d64, size 0x54, virtual false, abstract: false, final false
static inline void GetColorImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, ::by_ref<::UnityEngine::Color>  ret) ;

/// @brief Method GetFloat, addr 0xb589494, size 0x4, virtual false, abstract: false, final false
inline float_t GetFloat(int32_t  nameID) ;

/// [ThreadSafe]
/// [NativeName("GetFloatFromScript")]
/// @brief Method GetFloatImpl, addr 0xb587c54, size 0x58, virtual false, abstract: false, final false
inline float_t GetFloatImpl(int32_t  name) ;

/// @brief Method GetFloatImpl_Injected, addr 0xb587cac, size 0x44, virtual false, abstract: false, final false
static inline float_t GetFloatImpl_Injected(::System::IntPtr  _unity_self, int32_t  name) ;

static inline ::UnityEngine::MaterialPropertyBlock* New_ctor() ;

/// @brief Method SetBuffer, addr 0xb58926c, size 0x30, virtual false, abstract: false, final false
inline void SetBuffer(::StringW  name, ::UnityEngine::ComputeBuffer*  value) ;

/// @brief Method SetBuffer, addr 0xb5892a0, size 0x30, virtual false, abstract: false, final false
inline void SetBuffer(::StringW  name, ::UnityEngine::GraphicsBuffer*  value) ;

/// @brief Method SetBuffer, addr 0xb58929c, size 0x4, virtual false, abstract: false, final false
inline void SetBuffer(int32_t  nameID, ::UnityEngine::ComputeBuffer*  value) ;

/// @brief Method SetBuffer, addr 0xb5892d0, size 0x4, virtual false, abstract: false, final false
inline void SetBuffer(int32_t  nameID, ::UnityEngine::GraphicsBuffer*  value) ;

/// [NativeName("SetBufferFromScript")]
/// [ThreadSafe]
/// @brief Method SetBufferImpl, addr 0xb5883fc, size 0x70, virtual false, abstract: false, final false
inline void SetBufferImpl(int32_t  name, ::UnityEngine::ComputeBuffer*  value) ;

/// @brief Method SetBufferImpl_Injected, addr 0xb58846c, size 0x54, virtual false, abstract: false, final false
static inline void SetBufferImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, ::System::IntPtr  value) ;

/// @brief Method SetColor, addr 0xb5891a0, size 0x50, virtual false, abstract: false, final false
inline void SetColor(::StringW  name, ::UnityEngine::Color  value) ;

/// @brief Method SetColor, addr 0xb5891f0, size 0x4, virtual false, abstract: false, final false
inline void SetColor(int32_t  nameID, ::UnityEngine::Color  value) ;

/// [ThreadSafe]
/// [NativeName("SetColorFromScript")]
/// @brief Method SetColorImpl, addr 0xb587ff4, size 0x70, virtual false, abstract: false, final false
inline void SetColorImpl(int32_t  name, ::UnityEngine::Color  value) ;

/// @brief Method SetColorImpl_Injected, addr 0xb588064, size 0x54, virtual false, abstract: false, final false
static inline void SetColorImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, ::by_ref<::UnityEngine::Color>  value) ;

/// @brief Method SetConstantBuffer, addr 0xb58930c, size 0x4, virtual false, abstract: false, final false
inline void SetConstantBuffer(int32_t  nameID, ::UnityEngine::ComputeBuffer*  value, int32_t  offset, int32_t  size) ;

/// [NativeName("SetConstantBufferFromScript")]
/// [ThreadSafe]
/// @brief Method SetConstantBufferImpl, addr 0xb588584, size 0x88, virtual false, abstract: false, final false
inline void SetConstantBufferImpl(int32_t  name, ::UnityEngine::ComputeBuffer*  value, int32_t  offset, int32_t  size) ;

/// @brief Method SetConstantBufferImpl_Injected, addr 0xb58860c, size 0x6c, virtual false, abstract: false, final false
static inline void SetConstantBufferImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, ::System::IntPtr  value, int32_t  offset, int32_t  size) ;

/// @brief Method SetFloat, addr 0xb5890e4, size 0x30, virtual false, abstract: false, final false
inline void SetFloat(::StringW  name, float_t  value) ;

/// @brief Method SetFloat, addr 0xb589114, size 0x4, virtual false, abstract: false, final false
inline void SetFloat(int32_t  nameID, float_t  value) ;

/// @brief Method SetFloatArray, addr 0xb5893b8, size 0x3c, virtual false, abstract: false, final false
inline void SetFloatArray(::StringW  name, ::ArrayW<float_t>  values) ;

/// @brief Method SetFloatArray, addr 0xb589310, size 0xa8, virtual false, abstract: false, final false
inline void SetFloatArray(::StringW  name, ::System::Collections::Generic::List_1<float_t>*  values) ;

/// @brief Method SetFloatArray, addr 0xb588bac, size 0xbc, virtual false, abstract: false, final false
inline void SetFloatArray(int32_t  name, ::ArrayW<float_t>  values, int32_t  count) ;

/// @brief Method SetFloatArray, addr 0xb5893f4, size 0x14, virtual false, abstract: false, final false
inline void SetFloatArray(int32_t  nameID, ::ArrayW<float_t>  values) ;

/// [ThreadSafe]
/// [NativeName("SetFloatArrayFromScript")]
/// @brief Method SetFloatArrayImpl, addr 0xb588678, size 0x108, virtual false, abstract: false, final false
inline void SetFloatArrayImpl(int32_t  name, ::ArrayW<float_t>  values, int32_t  count) ;

/// @brief Method SetFloatArrayImpl_Injected, addr 0xb588780, size 0x5c, virtual false, abstract: false, final false
static inline void SetFloatArrayImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values, int32_t  count) ;

/// [NativeName("SetFloatFromScript")]
/// [ThreadSafe]
/// @brief Method SetFloatImpl, addr 0xb587e74, size 0x68, virtual false, abstract: false, final false
inline void SetFloatImpl(int32_t  name, float_t  value) ;

/// @brief Method SetFloatImpl_Injected, addr 0xb587edc, size 0x54, virtual false, abstract: false, final false
static inline void SetFloatImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, float_t  value) ;

/// [ThreadSafe]
/// [NativeName("SetBufferFromScript")]
/// @brief Method SetGraphicsBufferImpl, addr 0xb5884c0, size 0x70, virtual false, abstract: false, final false
inline void SetGraphicsBufferImpl(int32_t  name, ::UnityEngine::GraphicsBuffer*  value) ;

/// @brief Method SetGraphicsBufferImpl_Injected, addr 0xb588530, size 0x54, virtual false, abstract: false, final false
static inline void SetGraphicsBufferImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, ::System::IntPtr  value) ;

/// @brief Method SetInt, addr 0xb588f3c, size 0x30, virtual false, abstract: false, final false
inline void SetInt(::StringW  name, int32_t  value) ;

/// @brief Method SetInt, addr 0xb5890dc, size 0x8, virtual false, abstract: false, final false
inline void SetInt(int32_t  nameID, int32_t  value) ;

/// [ThreadSafe]
/// [NativeName("SetIntFromScript")]
/// @brief Method SetIntImpl, addr 0xb587db8, size 0x68, virtual false, abstract: false, final false
inline void SetIntImpl(int32_t  name, int32_t  value) ;

/// @brief Method SetIntImpl_Injected, addr 0xb587e20, size 0x54, virtual false, abstract: false, final false
static inline void SetIntImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, int32_t  value) ;

/// @brief Method SetInteger, addr 0xb589118, size 0x30, virtual false, abstract: false, final false
inline void SetInteger(::StringW  name, int32_t  value) ;

/// @brief Method SetInteger, addr 0xb589148, size 0x4, virtual false, abstract: false, final false
inline void SetInteger(int32_t  nameID, int32_t  value) ;

/// @brief Method SetMatrix, addr 0xb5891f4, size 0x4c, virtual false, abstract: false, final false
inline void SetMatrix(::StringW  name, ::UnityEngine::Matrix4x4  value) ;

/// @brief Method SetMatrix, addr 0xb589240, size 0x2c, virtual false, abstract: false, final false
inline void SetMatrix(int32_t  nameID, ::UnityEngine::Matrix4x4  value) ;

/// @brief Method SetMatrixArray, addr 0xb589458, size 0x3c, virtual false, abstract: false, final false
inline void SetMatrixArray(::StringW  name, ::ArrayW<::UnityEngine::Matrix4x4>  values) ;

/// @brief Method SetMatrixArray, addr 0xb588d24, size 0xbc, virtual false, abstract: false, final false
inline void SetMatrixArray(int32_t  name, ::ArrayW<::UnityEngine::Matrix4x4>  values, int32_t  count) ;

/// [ThreadSafe]
/// [NativeName("SetMatrixArrayFromScript")]
/// @brief Method SetMatrixArrayImpl, addr 0xb588940, size 0x108, virtual false, abstract: false, final false
inline void SetMatrixArrayImpl(int32_t  name, ::ArrayW<::UnityEngine::Matrix4x4>  values, int32_t  count) ;

/// @brief Method SetMatrixArrayImpl_Injected, addr 0xb588a48, size 0x5c, virtual false, abstract: false, final false
static inline void SetMatrixArrayImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values, int32_t  count) ;

/// [NativeName("SetMatrixFromScript")]
/// [ThreadSafe]
/// @brief Method SetMatrixImpl, addr 0xb5880b8, size 0x68, virtual false, abstract: false, final false
inline void SetMatrixImpl(int32_t  name, ::UnityEngine::Matrix4x4  value) ;

/// @brief Method SetMatrixImpl_Injected, addr 0xb588120, size 0x54, virtual false, abstract: false, final false
static inline void SetMatrixImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, ::by_ref<::UnityEngine::Matrix4x4>  value) ;

/// [ThreadSafe]
/// [NativeName("SetRenderTextureFromScript")]
/// @brief Method SetRenderTextureImpl, addr 0xb5882b0, size 0xf0, virtual false, abstract: false, final false
inline void SetRenderTextureImpl(int32_t  name, /* [NotNull] */ ::UnityEngine::RenderTexture*  value, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetRenderTextureImpl_Injected, addr 0xb5883a0, size 0x5c, virtual false, abstract: false, final false
static inline void SetRenderTextureImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, ::System::IntPtr  value, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetTexture, addr 0xb5892d4, size 0x30, virtual false, abstract: false, final false
inline void SetTexture(::StringW  name, ::UnityEngine::Texture*  value) ;

/// @brief Method SetTexture, addr 0xb589308, size 0x4, virtual false, abstract: false, final false
inline void SetTexture(int32_t  nameID, ::UnityEngine::RenderTexture*  value, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetTexture, addr 0xb589304, size 0x4, virtual false, abstract: false, final false
inline void SetTexture(int32_t  nameID, ::UnityEngine::Texture*  value) ;

/// [NativeName("SetTextureFromScript")]
/// [ThreadSafe]
/// @brief Method SetTextureImpl, addr 0xb588174, size 0xe8, virtual false, abstract: false, final false
inline void SetTextureImpl(int32_t  name, /* [NotNull] */ ::UnityEngine::Texture*  value) ;

/// @brief Method SetTextureImpl_Injected, addr 0xb58825c, size 0x54, virtual false, abstract: false, final false
static inline void SetTextureImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, ::System::IntPtr  value) ;

/// @brief Method SetVector, addr 0xb58914c, size 0x50, virtual false, abstract: false, final false
inline void SetVector(::StringW  name, ::UnityEngine::Vector4  value) ;

/// @brief Method SetVector, addr 0xb58919c, size 0x4, virtual false, abstract: false, final false
inline void SetVector(int32_t  nameID, ::UnityEngine::Vector4  value) ;

/// @brief Method SetVectorArray, addr 0xb589408, size 0x3c, virtual false, abstract: false, final false
inline void SetVectorArray(::StringW  name, ::ArrayW<::UnityEngine::Vector4>  values) ;

/// @brief Method SetVectorArray, addr 0xb588c68, size 0xbc, virtual false, abstract: false, final false
inline void SetVectorArray(int32_t  name, ::ArrayW<::UnityEngine::Vector4>  values, int32_t  count) ;

/// @brief Method SetVectorArray, addr 0xb589444, size 0x14, virtual false, abstract: false, final false
inline void SetVectorArray(int32_t  nameID, ::ArrayW<::UnityEngine::Vector4>  values) ;

/// [ThreadSafe]
/// [NativeName("SetVectorArrayFromScript")]
/// @brief Method SetVectorArrayImpl, addr 0xb5887dc, size 0x108, virtual false, abstract: false, final false
inline void SetVectorArrayImpl(int32_t  name, ::ArrayW<::UnityEngine::Vector4>  values, int32_t  count) ;

/// @brief Method SetVectorArrayImpl_Injected, addr 0xb5888e4, size 0x5c, virtual false, abstract: false, final false
static inline void SetVectorArrayImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values, int32_t  count) ;

/// [ThreadSafe]
/// [NativeName("SetVectorFromScript")]
/// @brief Method SetVectorImpl, addr 0xb587f30, size 0x70, virtual false, abstract: false, final false
inline void SetVectorImpl(int32_t  name, ::UnityEngine::Vector4  value) ;

/// @brief Method SetVectorImpl_Injected, addr 0xb587fa0, size 0x54, virtual false, abstract: false, final false
static inline void SetVectorImpl_Injected(::System::IntPtr  _unity_self, int32_t  name, ::by_ref<::UnityEngine::Vector4>  value) ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr() ;

constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0xb588de0, size 0x44, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaterialPropertyBlock() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlock", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialPropertyBlock(MaterialPropertyBlock && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlock", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialPropertyBlock(MaterialPropertyBlock const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14880};

/// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_Ptr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::MaterialPropertyBlock, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::MaterialPropertyBlock) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.MaterialPropertyBlock/BindingsMarshaller
class CORDL_TYPE MaterialPropertyBlock_BindingsMarshaller : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertToNative, addr 0xb58949c, size 0x14, virtual false, abstract: false, final false
static inline ::System::IntPtr ConvertToNative(::UnityEngine::MaterialPropertyBlock*  materialPropertyBlock) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaterialPropertyBlock_BindingsMarshaller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlock_BindingsMarshaller", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialPropertyBlock_BindingsMarshaller(MaterialPropertyBlock_BindingsMarshaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlock_BindingsMarshaller", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialPropertyBlock_BindingsMarshaller(MaterialPropertyBlock_BindingsMarshaller const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14879};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::MaterialPropertyBlock_BindingsMarshaller) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
