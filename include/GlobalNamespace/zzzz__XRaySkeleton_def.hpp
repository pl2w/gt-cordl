#pragma once
// IWYU pragma private; include "GlobalNamespace/XRaySkeleton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ShaderHashId_def.hpp"
#include "GlobalNamespace/zzzz__SyncToPlayerColor_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XRaySkeleton)
namespace GlobalNamespace {
class IGorillaSimpleBackgroundWorker;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class XRaySkeleton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::XRaySkeleton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRaySkeleton*, "", "XRaySkeleton");
// Dependencies ShaderHashId, SyncToPlayerColor, UnityEngine.Material, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: XRaySkeleton
class CORDL_TYPE XRaySkeleton : public ::GlobalNamespace::SyncToPlayerColor {
public:
// Declarations
/// @brief Field _BaseColor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__BaseColor, put=setStaticF__BaseColor)) ::GlobalNamespace::ShaderHashId  _BaseColor;

/// @brief Field _EmissionColor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__EmissionColor, put=setStaticF__EmissionColor)) ::GlobalNamespace::ShaderHashId  _EmissionColor;

/// @brief Field _lastMatIndex, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastMatIndex, put=__cordl_internal_set__lastMatIndex)) int32_t  _lastMatIndex;

/// @brief Field baseValueMinMax, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_baseValueMinMax, put=__cordl_internal_set_baseValueMinMax)) ::UnityEngine::Vector2  baseValueMinMax;

/// @brief Field currentIndex, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentIndex, put=__cordl_internal_set_currentIndex)) int32_t  currentIndex;

/// @brief Field mats, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_mats, put=__cordl_internal_set_mats)) ::ArrayW<::UnityW<::UnityEngine::Material>>  mats;

/// @brief Field renderer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderer, put=__cordl_internal_set_renderer)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  renderer;

/// @brief Field tagMaterials, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_tagMaterials, put=__cordl_internal_set_tagMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  tagMaterials;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSimpleBackgroundWorker"
constexpr operator  ::GlobalNamespace::IGorillaSimpleBackgroundWorker*() noexcept;

/// @brief Method Awake, addr 0x5796024, size 0x4, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::XRaySkeleton* New_ctor() ;

/// @brief Method OnBuildInitialize, addr 0x5796028, size 0x1bc, virtual false, abstract: false, final false
inline void OnBuildInitialize() ;

/// @brief Method SetMaterialIndex, addr 0x5796304, size 0x54, virtual false, abstract: false, final false
inline void SetMaterialIndex(int32_t  index) ;

/// @brief Method Setup, addr 0x5796358, size 0xe8, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method SimpleWork, addr 0x57961e4, size 0x120, virtual true, abstract: false, final true
inline void SimpleWork() ;

/// @brief Method UpdateColor, addr 0x5796440, size 0x1d8, virtual true, abstract: false, final false
inline void UpdateColor(::UnityEngine::Color  color) ;

constexpr int32_t const& __cordl_internal_get__lastMatIndex() const;

constexpr int32_t& __cordl_internal_get__lastMatIndex() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_baseValueMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_baseValueMinMax() ;

constexpr int32_t const& __cordl_internal_get_currentIndex() const;

constexpr int32_t& __cordl_internal_get_currentIndex() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_mats() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_mats() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get_renderer() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get_renderer() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_tagMaterials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_tagMaterials() ;

constexpr void __cordl_internal_set__lastMatIndex(int32_t  value) ;

constexpr void __cordl_internal_set_baseValueMinMax(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_currentIndex(int32_t  value) ;

constexpr void __cordl_internal_set_mats(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set_renderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

constexpr void __cordl_internal_set_tagMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

/// @brief Method .ctor, addr 0x5796618, size 0x74, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::ShaderHashId getStaticF__BaseColor() ;

static inline ::GlobalNamespace::ShaderHashId getStaticF__EmissionColor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSimpleBackgroundWorker"
constexpr ::GlobalNamespace::IGorillaSimpleBackgroundWorker* i___GlobalNamespace__IGorillaSimpleBackgroundWorker() noexcept;

static inline void setStaticF__BaseColor(::GlobalNamespace::ShaderHashId  value) ;

static inline void setStaticF__EmissionColor(::GlobalNamespace::ShaderHashId  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRaySkeleton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRaySkeleton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRaySkeleton(XRaySkeleton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRaySkeleton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRaySkeleton(XRaySkeleton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1460};

/// @brief Field renderer, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ___renderer;

/// @brief Field baseValueMinMax, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___baseValueMinMax;

/// @brief Field tagMaterials, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ___tagMaterials;

/// @brief Field _lastMatIndex, offset: 0x58, size: 0x4, def value: None
 int32_t  ____lastMatIndex;

/// @brief Field mats, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ___mats;

/// @brief Field currentIndex, offset: 0x68, size: 0x4, def value: None
 int32_t  ___currentIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRaySkeleton, ___renderer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRaySkeleton, ___baseValueMinMax) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRaySkeleton, ___tagMaterials) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRaySkeleton, ____lastMatIndex) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRaySkeleton, ___mats) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRaySkeleton, ___currentIndex) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRaySkeleton) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
