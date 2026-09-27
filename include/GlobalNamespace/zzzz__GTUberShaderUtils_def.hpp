#pragma once
// IWYU pragma private; include "GlobalNamespace/GTUberShaderUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ShaderHashId_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GTUberShaderUtils)
namespace GlobalNamespace {
struct GTShaderStencilCompare;
}
namespace GlobalNamespace {
struct GTShaderStencilOp;
}
namespace UnityEngine::Rendering {
struct RenderQueue;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace GlobalNamespace {
class GTUberShaderUtils;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GTUberShaderUtils*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTUberShaderUtils*, "", "GTUberShaderUtils");
// [Extension]
// Dependencies ShaderHashId, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GTUberShaderUtils
class CORDL_TYPE GTUberShaderUtils : public ::System::Object {
public:
// Declarations
/// @brief Field _ColorMask_, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__ColorMask_, put=setStaticF__ColorMask_)) ::GlobalNamespace::ShaderHashId  _ColorMask_;

/// @brief Field _ManualZWrite, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__ManualZWrite, put=setStaticF__ManualZWrite)) ::GlobalNamespace::ShaderHashId  _ManualZWrite;

/// @brief Field _StencilComparison, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__StencilComparison, put=setStaticF__StencilComparison)) ::GlobalNamespace::ShaderHashId  _StencilComparison;

/// @brief Field _StencilPassFront, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__StencilPassFront, put=setStaticF__StencilPassFront)) ::GlobalNamespace::ShaderHashId  _StencilPassFront;

/// @brief Field _StencilReference, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__StencilReference, put=setStaticF__StencilReference)) ::GlobalNamespace::ShaderHashId  _StencilReference;

/// @brief Field _ZWrite, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__ZWrite, put=setStaticF__ZWrite)) ::GlobalNamespace::ShaderHashId  _ZWrite;

/// @brief Field kRenderQueueInts, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kRenderQueueInts, put=setStaticF_kRenderQueueInts)) ::ArrayW<int32_t>  kRenderQueueInts;

/// @brief Field kUberShader, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kUberShader, put=setStaticF_kUberShader)) ::UnityW<::UnityEngine::Shader>  kUberShader;

/// [Extension]
/// @brief Method GetNearestRenderQueue, addr 0x5b3ddb8, size 0x130, virtual false, abstract: false, final false
static inline int32_t GetNearestRenderQueue(::UnityEngine::Material*  m, ::by_ref<::UnityEngine::Rendering::RenderQueue>  queue) ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)1)]
/// @brief Method InitOnLoad, addr 0x5b3dee8, size 0x8c, virtual false, abstract: false, final false
static inline void InitOnLoad() ;

/// [Extension]
/// @brief Method SetRevealsXRay, addr 0x5b3db88, size 0x230, virtual false, abstract: false, final false
static inline void SetRevealsXRay(::UnityEngine::Material*  m, bool  reveals, bool  changeQueue, bool  saveToDisk) ;

/// [Extension]
/// @brief Method SetStencilComparison, addr 0x5b3d8b8, size 0x7c, virtual false, abstract: false, final false
static inline void SetStencilComparison(::UnityEngine::Material*  m, ::GlobalNamespace::GTShaderStencilCompare  cmp) ;

/// [Extension]
/// @brief Method SetStencilPassFrontOp, addr 0x5b3d934, size 0x7c, virtual false, abstract: false, final false
static inline void SetStencilPassFrontOp(::UnityEngine::Material*  m, ::GlobalNamespace::GTShaderStencilOp  op) ;

/// [Extension]
/// @brief Method SetStencilReferenceValue, addr 0x5b3d9b0, size 0x7c, virtual false, abstract: false, final false
static inline void SetStencilReferenceValue(::UnityEngine::Material*  m, int32_t  value) ;

/// [Extension]
/// @brief Method SetVisibleToXRay, addr 0x5b3da2c, size 0x15c, virtual false, abstract: false, final false
static inline void SetVisibleToXRay(::UnityEngine::Material*  m, bool  visible, bool  saveToDisk) ;

static inline ::GlobalNamespace::ShaderHashId getStaticF__ColorMask_() ;

static inline ::GlobalNamespace::ShaderHashId getStaticF__ManualZWrite() ;

static inline ::GlobalNamespace::ShaderHashId getStaticF__StencilComparison() ;

static inline ::GlobalNamespace::ShaderHashId getStaticF__StencilPassFront() ;

static inline ::GlobalNamespace::ShaderHashId getStaticF__StencilReference() ;

static inline ::GlobalNamespace::ShaderHashId getStaticF__ZWrite() ;

static inline ::ArrayW<int32_t> getStaticF_kRenderQueueInts() ;

static inline ::UnityW<::UnityEngine::Shader> getStaticF_kUberShader() ;

static inline void setStaticF__ColorMask_(::GlobalNamespace::ShaderHashId  value) ;

static inline void setStaticF__ManualZWrite(::GlobalNamespace::ShaderHashId  value) ;

static inline void setStaticF__StencilComparison(::GlobalNamespace::ShaderHashId  value) ;

static inline void setStaticF__StencilPassFront(::GlobalNamespace::ShaderHashId  value) ;

static inline void setStaticF__StencilReference(::GlobalNamespace::ShaderHashId  value) ;

static inline void setStaticF__ZWrite(::GlobalNamespace::ShaderHashId  value) ;

static inline void setStaticF_kRenderQueueInts(::ArrayW<int32_t>  value) ;

static inline void setStaticF_kUberShader(::UnityW<::UnityEngine::Shader>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTUberShaderUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTUberShaderUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTUberShaderUtils(GTUberShaderUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTUberShaderUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTUberShaderUtils(GTUberShaderUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3711};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GTUberShaderUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
