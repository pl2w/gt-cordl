#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/AsyncGPUReadback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncGPUReadback)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Rendering {
struct AsyncGPUReadbackRequest;
}
namespace UnityEngine::Rendering {
struct AsyncRequestNativeArrayData;
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
// Forward declare root types
namespace UnityEngine::Rendering {
class AsyncGPUReadback;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::AsyncGPUReadback*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::AsyncGPUReadback*, "UnityEngine.Rendering", "AsyncGPUReadback");
// [StaticAccessor("AsyncGPUReadbackManager::GetInstance()", (UnityEngine.Bindings.StaticAccessorType)0)]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.AsyncGPUReadback
class CORDL_TYPE AsyncGPUReadback : public ::System::Object {
public:
// Declarations
/// @brief Method Request, addr 0xb605588, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest Request(::UnityEngine::GraphicsBuffer*  src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method Request, addr 0xb605680, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest Request(::UnityEngine::GraphicsBuffer*  src, int32_t  size, int32_t  offset, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest RequestIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::ComputeBuffer*  src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest RequestIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::Texture*  src, int32_t  mipIndex, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// [NativeMethod("Request")]
/// @brief Method Request_Internal_ComputeBuffer_1, addr 0xb605790, size 0x98, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest Request_Internal_ComputeBuffer_1(/* [NotNull] */ ::UnityEngine::ComputeBuffer*  buffer, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  data) ;

/// @brief Method Request_Internal_ComputeBuffer_1_Injected, addr 0xb605828, size 0x54, virtual false, abstract: false, final false
static inline void Request_Internal_ComputeBuffer_1_Injected(::System::IntPtr  buffer, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  data, ::by_ref<::UnityEngine::Rendering::AsyncGPUReadbackRequest>  ret) ;

/// [NativeMethod("Request")]
/// @brief Method Request_Internal_GraphicsBuffer_1, addr 0xb6055e8, size 0x98, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest Request_Internal_GraphicsBuffer_1(/* [NotNull] */ ::UnityEngine::GraphicsBuffer*  buffer, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  data) ;

/// @brief Method Request_Internal_GraphicsBuffer_1_Injected, addr 0xb60587c, size 0x54, virtual false, abstract: false, final false
static inline void Request_Internal_GraphicsBuffer_1_Injected(::System::IntPtr  buffer, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  data, ::by_ref<::UnityEngine::Rendering::AsyncGPUReadbackRequest>  ret) ;

/// [NativeMethod("Request")]
/// @brief Method Request_Internal_GraphicsBuffer_2, addr 0xb6056e0, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest Request_Internal_GraphicsBuffer_2(/* [NotNull] */ ::UnityEngine::GraphicsBuffer*  src, int32_t  size, int32_t  offset, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  data) ;

/// @brief Method Request_Internal_GraphicsBuffer_2_Injected, addr 0xb6058d0, size 0x6c, virtual false, abstract: false, final false
static inline void Request_Internal_GraphicsBuffer_2_Injected(::System::IntPtr  src, int32_t  size, int32_t  offset, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  data, ::by_ref<::UnityEngine::Rendering::AsyncGPUReadbackRequest>  ret) ;

/// [NativeMethod("Request")]
/// @brief Method Request_Internal_Texture_1, addr 0xb60593c, size 0xb4, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest Request_Internal_Texture_1(/* [NotNull] */ ::UnityEngine::Texture*  src, int32_t  mipIndex, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  data) ;

/// @brief Method Request_Internal_Texture_1_Injected, addr 0xb6059f0, size 0x5c, virtual false, abstract: false, final false
static inline void Request_Internal_Texture_1_Injected(::System::IntPtr  src, int32_t  mipIndex, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  data, ::by_ref<::UnityEngine::Rendering::AsyncGPUReadbackRequest>  ret) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncGPUReadback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncGPUReadback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncGPUReadback(AsyncGPUReadback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncGPUReadback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncGPUReadback(AsyncGPUReadback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15438};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::AsyncGPUReadback) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
