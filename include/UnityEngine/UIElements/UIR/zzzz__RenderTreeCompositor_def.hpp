#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/RenderTreeCompositor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderTreeCompositor_DrawOperationType_def.hpp"
#include "UnityEngine/UIElements/zzzz__FilterFunction_def.hpp"
#include "UnityEngine/UIElements/zzzz__PostProcessingPass_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
CORDL_MODULE_EXPORT(RenderTreeCompositor)
namespace GlobalNamespace {
struct RenderTreeCompositor_DrawOperationType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements::UIR {
class RenderTreeCompositor_DrawOperation;
}
namespace UnityEngine::UIElements::UIR {
class RenderTreeCompositor___c;
}
namespace UnityEngine::UIElements::UIR {
class RenderTreeManager;
}
namespace UnityEngine::UIElements::UIR {
class RenderTree;
}
namespace UnityEngine::UIElements {
struct FilterFunction;
}
namespace UnityEngine::UIElements {
template<typename T>
class ObjectPool_1;
}
namespace UnityEngine::UIElements {
struct PostProcessingMargins;
}
namespace UnityEngine::UIElements {
struct PostProcessingPass;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class RenderTreeCompositor;
}
namespace UnityEngine::UIElements::UIR {
class RenderTreeCompositor_DrawOperation;
}
namespace UnityEngine::UIElements::UIR {
class RenderTreeCompositor___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::UIR::RenderTreeCompositor*);
MARK_REF_T(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*);
MARK_REF_T(::UnityEngine::UIElements::UIR::RenderTreeCompositor___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIR::RenderTreeCompositor*, "UnityEngine.UIElements.UIR", "RenderTreeCompositor");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*, "UnityEngine.UIElements.UIR", "RenderTreeCompositor/DrawOperation");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIR::RenderTreeCompositor___c*, "UnityEngine.UIElements.UIR", "RenderTreeCompositor/<>c");
// Dependencies System.Object
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.RenderTreeCompositor
class CORDL_TYPE RenderTreeCompositor : public ::System::Object {
public:
// Declarations
using DrawOperationType = ::GlobalNamespace::RenderTreeCompositor_DrawOperationType;

using DrawOperation = ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation;

using __c = ::UnityEngine::UIElements::UIR::RenderTreeCompositor___c;

/// @brief Field <disposed>k__BackingField, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__disposed_k__BackingField, put=__cordl_internal_set__disposed_k__BackingField)) bool  _disposed_k__BackingField;

 __declspec(property(get=get_disposed, put=set_disposed)) bool  disposed;

/// @brief Field m_AllocatedRenderTextures, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AllocatedRenderTextures, put=__cordl_internal_set_m_AllocatedRenderTextures)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*  m_AllocatedRenderTextures;

/// @brief Field m_Block, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Block, put=__cordl_internal_set_m_Block)) ::UnityEngine::MaterialPropertyBlock*  m_Block;

/// @brief Field m_DrawOperationPool, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DrawOperationPool, put=__cordl_internal_set_m_DrawOperationPool)) ::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>*  m_DrawOperationPool;

/// @brief Field m_RenderTreeManager, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RenderTreeManager, put=__cordl_internal_set_m_RenderTreeManager)) ::UnityEngine::UIElements::UIR::RenderTreeManager*  m_RenderTreeManager;

/// @brief Field m_RootOperation, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RootOperation, put=__cordl_internal_set_m_RootOperation)) ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*  m_RootOperation;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method ApplyEffectParameters, addr 0xb7e8fcc, size 0x154, virtual false, abstract: false, final false
inline void ApplyEffectParameters(::UnityEngine::UIElements::PostProcessingPass  effect, ::UnityEngine::UIElements::FilterFunction  filter, ::UnityEngine::UIElements::VisualElement*  source) ;

/// @brief Method AssignTextureIds_DepthFirst, addr 0xb7e8394, size 0x1cc, virtual false, abstract: false, final false
inline void AssignTextureIds_DepthFirst(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*  op) ;

/// @brief Method BuildDrawOperationTree, addr 0xb7e7c24, size 0x74, virtual false, abstract: false, final false
inline void BuildDrawOperationTree(::UnityEngine::UIElements::UIR::RenderTree*  rootRenderTree) ;

/// @brief Method CleanupOperationTree, addr 0xb7e7b40, size 0xe4, virtual false, abstract: false, final false
inline void CleanupOperationTree() ;

/// @brief Method CleanupOperation_PostOrder, addr 0xb7e95d4, size 0x110, virtual false, abstract: false, final false
inline void CleanupOperation_PostOrder(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*  op) ;

/// @brief Method Dispose, addr 0xb7e979c, size 0x70, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0xb7e980c, size 0x30, virtual false, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method ExecuteDrawOperation_PostOrder, addr 0xb7e8664, size 0x968, virtual false, abstract: false, final false
inline void ExecuteDrawOperation_PostOrder(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*  op) ;

/// @brief Method GetReadMargins, addr 0xb7e85b4, size 0x54, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::PostProcessingMargins GetReadMargins(::UnityEngine::UIElements::PostProcessingPass  effect, ::UnityEngine::UIElements::FilterFunction  func) ;

/// @brief Method GetWriteMargins, addr 0xb7e8608, size 0x54, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::PostProcessingMargins GetWriteMargins(::UnityEngine::UIElements::PostProcessingPass  effect, ::UnityEngine::UIElements::FilterFunction  func) ;

static inline ::UnityEngine::UIElements::UIR::RenderTreeCompositor* New_ctor(::UnityEngine::UIElements::UIR::RenderTreeManager*  owner) ;

/// @brief Method RenderNestedPasses, addr 0xb7e865c, size 0x8, virtual false, abstract: false, final false
inline void RenderNestedPasses() ;

/// @brief Method Update, addr 0xb7e7af4, size 0x4c, virtual false, abstract: false, final false
inline void Update(::UnityEngine::UIElements::UIR::RenderTree*  rootRenderTree) ;

/// @brief Method UpdateDrawBounds_PostOrder, addr 0xb7e7c98, size 0x6fc, virtual false, abstract: false, final false
static inline void UpdateDrawBounds_PostOrder(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*  op) ;

constexpr bool const& __cordl_internal_get__disposed_k__BackingField() const;

constexpr bool& __cordl_internal_get__disposed_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>* const& __cordl_internal_get_m_AllocatedRenderTextures() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*& __cordl_internal_get_m_AllocatedRenderTextures() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_m_Block() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_m_Block() ;

constexpr ::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>* const& __cordl_internal_get_m_DrawOperationPool() const;

constexpr ::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>*& __cordl_internal_get_m_DrawOperationPool() ;

constexpr ::UnityEngine::UIElements::UIR::RenderTreeManager* const& __cordl_internal_get_m_RenderTreeManager() const;

constexpr ::UnityEngine::UIElements::UIR::RenderTreeManager*& __cordl_internal_get_m_RenderTreeManager() ;

constexpr ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation* const& __cordl_internal_get_m_RootOperation() const;

constexpr ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*& __cordl_internal_get_m_RootOperation() ;

constexpr void __cordl_internal_set__disposed_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_m_AllocatedRenderTextures(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*  value) ;

constexpr void __cordl_internal_set_m_Block(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set_m_DrawOperationPool(::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>*  value) ;

constexpr void __cordl_internal_set_m_RenderTreeManager(::UnityEngine::UIElements::UIR::RenderTreeManager*  value) ;

constexpr void __cordl_internal_set_m_RootOperation(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*  value) ;

/// @brief Method .ctor, addr 0xb7e7920, size 0x1d4, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::UIR::RenderTreeManager*  owner) ;

/// [CompilerGenerated]
/// @brief Method get_disposed, addr 0xb7e978c, size 0x8, virtual false, abstract: false, final false
inline bool get_disposed() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_disposed, addr 0xb7e9794, size 0x8, virtual false, abstract: false, final false
inline void set_disposed(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RenderTreeCompositor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RenderTreeCompositor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RenderTreeCompositor(RenderTreeCompositor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RenderTreeCompositor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RenderTreeCompositor(RenderTreeCompositor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8566};

/// @brief Field m_RenderTreeManager, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIR::RenderTreeManager*  ___m_RenderTreeManager;

/// @brief Field m_RootOperation, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*  ___m_RootOperation;

/// @brief Field m_AllocatedRenderTextures, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*  ___m_AllocatedRenderTextures;

/// @brief Field m_Block, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___m_Block;

/// @brief Field m_DrawOperationPool, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>*  ___m_DrawOperationPool;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <disposed>k__BackingField, offset: 0x38, size: 0x1, def value: None
 bool  ____disposed_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeCompositor, ___m_RenderTreeManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeCompositor, ___m_RootOperation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeCompositor, ___m_AllocatedRenderTextures) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeCompositor, ___m_Block) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeCompositor, ___m_DrawOperationPool) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeCompositor, ____disposed_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::UIR::RenderTreeCompositor) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.RenderTreeCompositor/<>c
class CORDL_TYPE RenderTreeCompositor___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::UIElements::UIR::RenderTreeCompositor___c*  __9;

/// @brief Field <>9__7_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_0, put=setStaticF___9__7_0)) ::System::Func_1<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>*  __9__7_0;

static inline ::UnityEngine::UIElements::UIR::RenderTreeCompositor___c* New_ctor() ;

/// @brief Method <.ctor>b__7_0, addr 0xb7e9948, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation* __ctor_b__7_0() ;

/// @brief Method .ctor, addr 0xb7e9940, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::UIElements::UIR::RenderTreeCompositor___c* getStaticF___9() ;

static inline ::System::Func_1<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>* getStaticF___9__7_0() ;

static inline void setStaticF___9(::UnityEngine::UIElements::UIR::RenderTreeCompositor___c*  value) ;

static inline void setStaticF___9__7_0(::System::Func_1<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RenderTreeCompositor___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RenderTreeCompositor___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RenderTreeCompositor___c(RenderTreeCompositor___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RenderTreeCompositor___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RenderTreeCompositor___c(RenderTreeCompositor___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8565};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::UIR::RenderTreeCompositor___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
// Dependencies System.Object, UnityEngine.RectInt, UnityEngine.UIElements.FilterFunction, UnityEngine.UIElements.PostProcessingPass, UnityEngine.UIElements.TextureId, UnityEngine.UIElements.UIR.RenderTreeCompositor::DrawOperationType, UnityEngine.Vector4
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.RenderTreeCompositor/DrawOperation
class CORDL_TYPE RenderTreeCompositor_DrawOperation : public ::System::Object {
public:
// Declarations
/// @brief Field bounds, offset 0xb0, size 0x10 
 __declspec(property(get=__cordl_internal_get_bounds, put=__cordl_internal_set_bounds)) ::UnityEngine::RectInt  bounds;

/// @brief Field drawSourceBounds, offset 0xc0, size 0x10 
 __declspec(property(get=__cordl_internal_get_drawSourceBounds, put=__cordl_internal_set_drawSourceBounds)) ::UnityEngine::RectInt  drawSourceBounds;

/// @brief Field drawSourceTexOffsets, offset 0xd0, size 0x10 
 __declspec(property(get=__cordl_internal_get_drawSourceTexOffsets, put=__cordl_internal_set_drawSourceTexOffsets)) ::UnityEngine::Vector4  drawSourceTexOffsets;

/// @brief Field dstTexture, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_dstTexture, put=__cordl_internal_set_dstTexture)) ::UnityW<::UnityEngine::RenderTexture>  dstTexture;

/// @brief Field dstTextureId, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_dstTextureId, put=__cordl_internal_set_dstTextureId)) ::UnityEngine::UIElements::TextureId  dstTextureId;

 __declspec(property(get=get_effect)) ::UnityEngine::UIElements::PostProcessingPass  effect;

 __declspec(property(get=get_filter)) ::UnityEngine::UIElements::FilterFunction  filter;

/// @brief Field firstChild, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_firstChild, put=__cordl_internal_set_firstChild)) ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*  firstChild;

/// @brief Field lastChild, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastChild, put=__cordl_internal_set_lastChild)) ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*  lastChild;

/// @brief Field m_Effect, offset 0x28, size 0x50 
 __declspec(property(get=__cordl_internal_get_m_Effect, put=__cordl_internal_set_m_Effect)) ::UnityEngine::UIElements::PostProcessingPass  m_Effect;

/// @brief Field m_Filter, offset 0x78, size 0x38 
 __declspec(property(get=__cordl_internal_get_m_Filter, put=__cordl_internal_set_m_Filter)) ::UnityEngine::UIElements::FilterFunction  m_Filter;

/// @brief Field m_RenderTree, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RenderTree, put=__cordl_internal_set_m_RenderTree)) ::UnityEngine::UIElements::UIR::RenderTree*  m_RenderTree;

/// @brief Field m_Type, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Type, put=__cordl_internal_set_m_Type)) ::GlobalNamespace::RenderTreeCompositor_DrawOperationType  m_Type;

/// @brief Field m_VisualElement, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VisualElement, put=__cordl_internal_set_m_VisualElement)) ::UnityEngine::UIElements::VisualElement*  m_VisualElement;

/// @brief Field nextSibling, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextSibling, put=__cordl_internal_set_nextSibling)) ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*  nextSibling;

/// @brief Field parent, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_parent, put=__cordl_internal_set_parent)) ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*  parent;

/// @brief Field prevSibling, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_prevSibling, put=__cordl_internal_set_prevSibling)) ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*  prevSibling;

 __declspec(property(get=get_renderTree)) ::UnityEngine::UIElements::UIR::RenderTree*  renderTree;

 __declspec(property(get=get_type)) ::GlobalNamespace::RenderTreeCompositor_DrawOperationType  type;

 __declspec(property(get=get_visualElement)) ::UnityEngine::UIElements::VisualElement*  visualElement;

/// @brief Method Init, addr 0xb7e8560, size 0x54, virtual false, abstract: false, final false
inline void Init(::UnityEngine::UIElements::UIR::RenderTree*  renderTree) ;

/// @brief Method InitPointers, addr 0xb7e9874, size 0x5c, virtual false, abstract: false, final false
inline void InitPointers() ;

static inline ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation* New_ctor() ;

/// @brief Method Reset, addr 0xb7e96e4, size 0xa8, virtual false, abstract: false, final false
inline void Reset() ;

constexpr ::UnityEngine::RectInt const& __cordl_internal_get_bounds() const;

constexpr ::UnityEngine::RectInt& __cordl_internal_get_bounds() ;

constexpr ::UnityEngine::RectInt const& __cordl_internal_get_drawSourceBounds() const;

constexpr ::UnityEngine::RectInt& __cordl_internal_get_drawSourceBounds() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_drawSourceTexOffsets() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_drawSourceTexOffsets() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_dstTexture() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_dstTexture() ;

constexpr ::UnityEngine::UIElements::TextureId const& __cordl_internal_get_dstTextureId() const;

constexpr ::UnityEngine::UIElements::TextureId& __cordl_internal_get_dstTextureId() ;

constexpr ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation* const& __cordl_internal_get_firstChild() const;

constexpr ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*& __cordl_internal_get_firstChild() ;

constexpr ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation* const& __cordl_internal_get_lastChild() const;

constexpr ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*& __cordl_internal_get_lastChild() ;

constexpr ::UnityEngine::UIElements::PostProcessingPass const& __cordl_internal_get_m_Effect() const;

constexpr ::UnityEngine::UIElements::PostProcessingPass& __cordl_internal_get_m_Effect() ;

constexpr ::UnityEngine::UIElements::FilterFunction const& __cordl_internal_get_m_Filter() const;

constexpr ::UnityEngine::UIElements::FilterFunction& __cordl_internal_get_m_Filter() ;

constexpr ::UnityEngine::UIElements::UIR::RenderTree* const& __cordl_internal_get_m_RenderTree() const;

constexpr ::UnityEngine::UIElements::UIR::RenderTree*& __cordl_internal_get_m_RenderTree() ;

constexpr ::GlobalNamespace::RenderTreeCompositor_DrawOperationType const& __cordl_internal_get_m_Type() const;

constexpr ::GlobalNamespace::RenderTreeCompositor_DrawOperationType& __cordl_internal_get_m_Type() ;

constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_VisualElement() const;

constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_VisualElement() ;

constexpr ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation* const& __cordl_internal_get_nextSibling() const;

constexpr ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*& __cordl_internal_get_nextSibling() ;

constexpr ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation* const& __cordl_internal_get_parent() const;

constexpr ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*& __cordl_internal_get_parent() ;

constexpr ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation* const& __cordl_internal_get_prevSibling() const;

constexpr ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*& __cordl_internal_get_prevSibling() ;

constexpr void __cordl_internal_set_bounds(::UnityEngine::RectInt  value) ;

constexpr void __cordl_internal_set_drawSourceBounds(::UnityEngine::RectInt  value) ;

constexpr void __cordl_internal_set_drawSourceTexOffsets(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set_dstTexture(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_dstTextureId(::UnityEngine::UIElements::TextureId  value) ;

constexpr void __cordl_internal_set_firstChild(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*  value) ;

constexpr void __cordl_internal_set_lastChild(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*  value) ;

constexpr void __cordl_internal_set_m_Effect(::UnityEngine::UIElements::PostProcessingPass  value) ;

constexpr void __cordl_internal_set_m_Filter(::UnityEngine::UIElements::FilterFunction  value) ;

constexpr void __cordl_internal_set_m_RenderTree(::UnityEngine::UIElements::UIR::RenderTree*  value) ;

constexpr void __cordl_internal_set_m_Type(::GlobalNamespace::RenderTreeCompositor_DrawOperationType  value) ;

constexpr void __cordl_internal_set_m_VisualElement(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr void __cordl_internal_set_nextSibling(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*  value) ;

constexpr void __cordl_internal_set_parent(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*  value) ;

constexpr void __cordl_internal_set_prevSibling(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*  value) ;

/// @brief Method .ctor, addr 0xb7e98d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_effect, addr 0xb7e9854, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::PostProcessingPass get_effect() ;

/// @brief Method get_filter, addr 0xb7e9864, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::FilterFunction get_filter() ;

/// @brief Method get_renderTree, addr 0xb7e984c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::UIR::RenderTree* get_renderTree() ;

/// @brief Method get_type, addr 0xb7e983c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::RenderTreeCompositor_DrawOperationType get_type() ;

/// @brief Method get_visualElement, addr 0xb7e9844, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::VisualElement* get_visualElement() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RenderTreeCompositor_DrawOperation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RenderTreeCompositor_DrawOperation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RenderTreeCompositor_DrawOperation(RenderTreeCompositor_DrawOperation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RenderTreeCompositor_DrawOperation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RenderTreeCompositor_DrawOperation(RenderTreeCompositor_DrawOperation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8564};

/// @brief Field m_Type, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::RenderTreeCompositor_DrawOperationType  ___m_Type;

/// @brief Field m_VisualElement, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::UIElements::VisualElement*  ___m_VisualElement;

/// @brief Field m_RenderTree, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIR::RenderTree*  ___m_RenderTree;

/// @brief Field m_Effect, offset: 0x28, size: 0x50, def value: None
 ::UnityEngine::UIElements::PostProcessingPass  ___m_Effect;

/// @brief Field m_Filter, offset: 0x78, size: 0x38, def value: None
 ::UnityEngine::UIElements::FilterFunction  ___m_Filter;

/// @brief Field bounds, offset: 0xb0, size: 0x10, def value: None
 ::UnityEngine::RectInt  ___bounds;

/// @brief Field drawSourceBounds, offset: 0xc0, size: 0x10, def value: None
 ::UnityEngine::RectInt  ___drawSourceBounds;

/// @brief Field drawSourceTexOffsets, offset: 0xd0, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___drawSourceTexOffsets;

/// @brief Field dstTexture, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___dstTexture;

/// @brief Field dstTextureId, offset: 0xe8, size: 0x4, def value: None
 ::UnityEngine::UIElements::TextureId  ___dstTextureId;

/// @brief Field parent, offset: 0xf0, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*  ___parent;

/// @brief Field firstChild, offset: 0xf8, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*  ___firstChild;

/// @brief Field lastChild, offset: 0x100, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*  ___lastChild;

/// @brief Field prevSibling, offset: 0x108, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*  ___prevSibling;

/// @brief Field nextSibling, offset: 0x110, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*  ___nextSibling;

/// @brief Size padding 0x150 - 0x118 = 0x38, packed as 0x38
 uint8_t  _cordl_size_padding[0x38];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation, ___m_Type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation, ___m_VisualElement) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation, ___m_RenderTree) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation, ___m_Effect) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation, ___m_Filter) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation, ___bounds) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation, ___drawSourceBounds) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation, ___drawSourceTexOffsets) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation, ___dstTexture) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation, ___dstTextureId) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation, ___parent) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation, ___firstChild) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation, ___lastChild) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation, ___prevSibling) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation, ___nextSibling) == 0x110, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation) == 0x150, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
