#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/TextureBlitter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__TextureBlitter_BlitInfo_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextureBlitter)
namespace GlobalNamespace {
struct TextureBlitter_BlitInfo;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector2Int;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class TextureBlitter;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::UIR::TextureBlitter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIR::TextureBlitter*, "UnityEngine.UIElements.UIR", "TextureBlitter");
// Dependencies System.Object, Unity.Profiling.ProfilerMarker, UnityEngine.RectInt, UnityEngine.UIElements.UIR.TextureBlitter::BlitInfo
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.TextureBlitter
class CORDL_TYPE TextureBlitter : public ::System::Object {
public:
// Declarations
using BlitInfo = ::GlobalNamespace::TextureBlitter_BlitInfo;

/// @brief Field <disposed>k__BackingField, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__disposed_k__BackingField, put=__cordl_internal_set__disposed_k__BackingField)) bool  _disposed_k__BackingField;

 __declspec(property(get=get_disposed, put=set_disposed)) bool  disposed;

/// @brief Field k_TextureIds, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_TextureIds, put=setStaticF_k_TextureIds)) ::ArrayW<int32_t>  k_TextureIds;

/// @brief Field m_BlitMaterial, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BlitMaterial, put=__cordl_internal_set_m_BlitMaterial)) ::UnityW<::UnityEngine::Material>  m_BlitMaterial;

/// @brief Field m_PendingBlits, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PendingBlits, put=__cordl_internal_set_m_PendingBlits)) ::System::Collections::Generic::List_1<::GlobalNamespace::TextureBlitter_BlitInfo>*  m_PendingBlits;

/// @brief Field m_PrevRT, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PrevRT, put=__cordl_internal_set_m_PrevRT)) ::UnityW<::UnityEngine::RenderTexture>  m_PrevRT;

/// @brief Field m_Properties, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Properties, put=__cordl_internal_set_m_Properties)) ::UnityEngine::MaterialPropertyBlock*  m_Properties;

/// @brief Field m_SingleBlit, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SingleBlit, put=__cordl_internal_set_m_SingleBlit)) ::ArrayW<::GlobalNamespace::TextureBlitter_BlitInfo>  m_SingleBlit;

/// @brief Field m_Viewport, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_Viewport, put=__cordl_internal_set_m_Viewport)) ::UnityEngine::RectInt  m_Viewport;

/// @brief Field s_CommitSampler, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_CommitSampler, put=setStaticF_s_CommitSampler)) ::Unity::Profiling::ProfilerMarker  s_CommitSampler;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method BeginBlit, addr 0xb7f2a28, size 0x230, virtual false, abstract: false, final false
inline void BeginBlit(::UnityEngine::RenderTexture*  dst) ;

/// @brief Method BlitOneNow, addr 0xb7f28f0, size 0x138, virtual false, abstract: false, final false
inline void BlitOneNow(::UnityEngine::RenderTexture*  dst, ::UnityEngine::Texture*  src, ::UnityEngine::RectInt  srcRect, ::UnityEngine::Vector2Int  dstPos, bool  addBorder, ::UnityEngine::Color  tint) ;

/// @brief Method Commit, addr 0xb7f3280, size 0xec, virtual false, abstract: false, final false
inline void Commit(::UnityEngine::RenderTexture*  dst) ;

/// @brief Method Dispose, addr 0xb7f2428, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0xb7f2494, size 0x8c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method DoBlit, addr 0xb7f2c58, size 0x5ac, virtual false, abstract: false, final false
inline void DoBlit(::System::Collections::Generic::IList_1<::GlobalNamespace::TextureBlitter_BlitInfo>*  blitInfos, int32_t  startIndex) ;

/// @brief Method EndBlit, addr 0xb7f3204, size 0x7c, virtual false, abstract: false, final false
inline void EndBlit() ;

static inline ::UnityEngine::UIElements::UIR::TextureBlitter* New_ctor(int32_t  capacity) ;

/// @brief Method QueueBlit, addr 0xb7f272c, size 0x1c4, virtual false, abstract: false, final false
inline void QueueBlit(::UnityEngine::Texture*  src, ::UnityEngine::RectInt  srcRect, ::UnityEngine::Vector2Int  dstPos, bool  addBorder, ::UnityEngine::Color  tint) ;

constexpr bool const& __cordl_internal_get__disposed_k__BackingField() const;

constexpr bool& __cordl_internal_get__disposed_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_BlitMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_BlitMaterial() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TextureBlitter_BlitInfo>* const& __cordl_internal_get_m_PendingBlits() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TextureBlitter_BlitInfo>*& __cordl_internal_get_m_PendingBlits() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_m_PrevRT() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_m_PrevRT() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_m_Properties() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_m_Properties() ;

constexpr ::ArrayW<::GlobalNamespace::TextureBlitter_BlitInfo> const& __cordl_internal_get_m_SingleBlit() const;

constexpr ::ArrayW<::GlobalNamespace::TextureBlitter_BlitInfo>& __cordl_internal_get_m_SingleBlit() ;

constexpr ::UnityEngine::RectInt const& __cordl_internal_get_m_Viewport() const;

constexpr ::UnityEngine::RectInt& __cordl_internal_get_m_Viewport() ;

constexpr void __cordl_internal_set__disposed_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_m_BlitMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_m_PendingBlits(::System::Collections::Generic::List_1<::GlobalNamespace::TextureBlitter_BlitInfo>*  value) ;

constexpr void __cordl_internal_set_m_PrevRT(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_m_Properties(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set_m_SingleBlit(::ArrayW<::GlobalNamespace::TextureBlitter_BlitInfo>  value) ;

constexpr void __cordl_internal_set_m_Viewport(::UnityEngine::RectInt  value) ;

/// @brief Method .ctor, addr 0xb7f2664, size 0xc8, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

static inline ::ArrayW<int32_t> getStaticF_k_TextureIds() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_CommitSampler() ;

/// [CompilerGenerated]
/// @brief Method get_disposed, addr 0xb7f2418, size 0x8, virtual false, abstract: false, final false
inline bool get_disposed() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_k_TextureIds(::ArrayW<int32_t>  value) ;

static inline void setStaticF_s_CommitSampler(::Unity::Profiling::ProfilerMarker  value) ;

/// [CompilerGenerated]
/// @brief Method set_disposed, addr 0xb7f2420, size 0x8, virtual false, abstract: false, final false
inline void set_disposed(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextureBlitter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextureBlitter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TextureBlitter(TextureBlitter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextureBlitter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextureBlitter(TextureBlitter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8587};

/// @brief Field m_SingleBlit, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::TextureBlitter_BlitInfo>  ___m_SingleBlit;

/// @brief Field m_BlitMaterial, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___m_BlitMaterial;

/// @brief Field m_Properties, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___m_Properties;

/// @brief Field m_Viewport, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::RectInt  ___m_Viewport;

/// @brief Field m_PrevRT, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___m_PrevRT;

/// @brief Field m_PendingBlits, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::TextureBlitter_BlitInfo>*  ___m_PendingBlits;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <disposed>k__BackingField, offset: 0x48, size: 0x1, def value: None
 bool  ____disposed_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::TextureBlitter, ___m_SingleBlit) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TextureBlitter, ___m_BlitMaterial) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TextureBlitter, ___m_Properties) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TextureBlitter, ___m_Viewport) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TextureBlitter, ___m_PrevRT) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TextureBlitter, ___m_PendingBlits) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TextureBlitter, ____disposed_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::UIR::TextureBlitter) == 0x50, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
