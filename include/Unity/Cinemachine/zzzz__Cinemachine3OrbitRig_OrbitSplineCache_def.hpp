#pragma once
// IWYU pragma private; include "Unity/Cinemachine/Cinemachine3OrbitRig_OrbitSplineCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__Cinemachine3OrbitRig_Settings_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Cinemachine3OrbitRig_OrbitSplineCache)
namespace GlobalNamespace {
struct Cinemachine3OrbitRig_Settings;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
struct Cinemachine3OrbitRig_OrbitSplineCache;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Cinemachine3OrbitRig_OrbitSplineCache);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Cinemachine3OrbitRig_OrbitSplineCache, "Unity.Cinemachine", "Cinemachine3OrbitRig/OrbitSplineCache");
// Dependencies Unity.Cinemachine.Cinemachine3OrbitRig::Settings, UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.Cinemachine3OrbitRig/OrbitSplineCache
struct CORDL_TYPE Cinemachine3OrbitRig_OrbitSplineCache {
public:
// Declarations
/// @brief Method SettingsChanged, addr 0xaea055c, size 0x7c, virtual false, abstract: false, final false
inline bool SettingsChanged(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Cinemachine3OrbitRig_Settings>  other) ;

/// @brief Method SplineValue, addr 0xaea03a4, size 0x1b8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 SplineValue(float_t  t) ;

/// @brief Method UpdateOrbitCache, addr 0xaea05d8, size 0x260, virtual false, abstract: false, final false
inline void UpdateOrbitCache(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Cinemachine3OrbitRig_Settings>  orbits) ;

// Ctor Parameters []
// @brief default ctor
constexpr Cinemachine3OrbitRig_OrbitSplineCache() ;

// Ctor Parameters [CppParam { name: "OrbitSettings", ty: "::GlobalNamespace::Cinemachine3OrbitRig_Settings", modifiers: "", def_value: None, comment: None }, CppParam { name: "CachedKnots", ty: "::ArrayW<::UnityEngine::Vector4>", modifiers: "", def_value: None, comment: None }, CppParam { name: "CachedCtrl1", ty: "::ArrayW<::UnityEngine::Vector4>", modifiers: "", def_value: None, comment: None }, CppParam { name: "CachedCtrl2", ty: "::ArrayW<::UnityEngine::Vector4>", modifiers: "", def_value: None, comment: None }]
constexpr Cinemachine3OrbitRig_OrbitSplineCache(::GlobalNamespace::Cinemachine3OrbitRig_Settings  OrbitSettings, ::ArrayW<::UnityEngine::Vector4>  CachedKnots, ::ArrayW<::UnityEngine::Vector4>  CachedCtrl1, ::ArrayW<::UnityEngine::Vector4>  CachedCtrl2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22233};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field OrbitSettings, offset: 0x0, size: 0x1c, def value: None
 ::GlobalNamespace::Cinemachine3OrbitRig_Settings  OrbitSettings;

/// @brief Field CachedKnots, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector4>  CachedKnots;

/// @brief Field CachedCtrl1, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector4>  CachedCtrl1;

/// @brief Field CachedCtrl2, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector4>  CachedCtrl2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Cinemachine3OrbitRig_OrbitSplineCache, OrbitSettings) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Cinemachine3OrbitRig_OrbitSplineCache, CachedKnots) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Cinemachine3OrbitRig_OrbitSplineCache, CachedCtrl1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Cinemachine3OrbitRig_OrbitSplineCache, CachedCtrl2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Cinemachine3OrbitRig_OrbitSplineCache) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
