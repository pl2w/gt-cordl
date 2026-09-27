#pragma once
// IWYU pragma private; include "GlobalNamespace/GameLight.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GameLight)
namespace UnityEngine {
class Light;
}
// Forward declare root types
namespace GlobalNamespace {
class GameLight;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameLight*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameLight*, "", "GameLight");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3, UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameLight
class CORDL_TYPE GameLight : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_InitialIntensity, put=set_InitialIntensity)) float_t  InitialIntensity;

 __declspec(property(get=get_IsRegistered)) bool  IsRegistered;

/// @brief Field <InitialIntensity>k__BackingField, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__InitialIntensity_k__BackingField, put=__cordl_internal_set__InitialIntensity_k__BackingField)) float_t  _InitialIntensity_k__BackingField;

/// @brief Field applyRange, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyRange, put=__cordl_internal_set_applyRange)) bool  applyRange;

/// @brief Field cachedColorAndIntensity, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_cachedColorAndIntensity, put=__cordl_internal_set_cachedColorAndIntensity)) ::UnityEngine::Vector4  cachedColorAndIntensity;

/// @brief Field cachedPosition, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get_cachedPosition, put=__cordl_internal_set_cachedPosition)) ::UnityEngine::Vector3  cachedPosition;

/// @brief Field initialized, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialized, put=__cordl_internal_set_initialized)) bool  initialized;

/// @brief Field intensityMult, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_intensityMult, put=__cordl_internal_set_intensityMult)) int32_t  intensityMult;

/// @brief Field isHighPriorityPlayerLight, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_isHighPriorityPlayerLight, put=__cordl_internal_set_isHighPriorityPlayerLight)) bool  isHighPriorityPlayerLight;

/// @brief Field light, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_light, put=__cordl_internal_set_light)) ::UnityW<::UnityEngine::Light>  light;

/// @brief Field lightId, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lightId, put=__cordl_internal_set_lightId)) int32_t  lightId;

/// @brief Field negativeLight, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_negativeLight, put=__cordl_internal_set_negativeLight)) bool  negativeLight;

/// @brief Field range, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_range, put=__cordl_internal_set_range)) float_t  range;

/// @brief Method Awake, addr 0x58359dc, size 0x68, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GameLight* New_ctor() ;

/// @brief Method OnDisable, addr 0x5835ce8, size 0x84, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5835a44, size 0x84, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0x5835c64, size 0x84, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateCachedLightColorAndIntensity, addr 0x5835f10, size 0xb8, virtual false, abstract: false, final false
inline void UpdateCachedLightColorAndIntensity() ;

constexpr float_t const& __cordl_internal_get__InitialIntensity_k__BackingField() const;

constexpr float_t& __cordl_internal_get__InitialIntensity_k__BackingField() ;

constexpr bool const& __cordl_internal_get_applyRange() const;

constexpr bool& __cordl_internal_get_applyRange() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_cachedColorAndIntensity() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_cachedColorAndIntensity() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_cachedPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_cachedPosition() ;

constexpr bool const& __cordl_internal_get_initialized() const;

constexpr bool& __cordl_internal_get_initialized() ;

constexpr int32_t const& __cordl_internal_get_intensityMult() const;

constexpr int32_t& __cordl_internal_get_intensityMult() ;

constexpr bool const& __cordl_internal_get_isHighPriorityPlayerLight() const;

constexpr bool& __cordl_internal_get_isHighPriorityPlayerLight() ;

constexpr ::UnityW<::UnityEngine::Light> const& __cordl_internal_get_light() const;

constexpr ::UnityW<::UnityEngine::Light>& __cordl_internal_get_light() ;

constexpr int32_t const& __cordl_internal_get_lightId() const;

constexpr int32_t& __cordl_internal_get_lightId() ;

constexpr bool const& __cordl_internal_get_negativeLight() const;

constexpr bool& __cordl_internal_get_negativeLight() ;

constexpr float_t const& __cordl_internal_get_range() const;

constexpr float_t& __cordl_internal_get_range() ;

constexpr void __cordl_internal_set__InitialIntensity_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set_applyRange(bool  value) ;

constexpr void __cordl_internal_set_cachedColorAndIntensity(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set_cachedPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_initialized(bool  value) ;

constexpr void __cordl_internal_set_intensityMult(int32_t  value) ;

constexpr void __cordl_internal_set_isHighPriorityPlayerLight(bool  value) ;

constexpr void __cordl_internal_set_light(::UnityW<::UnityEngine::Light>  value) ;

constexpr void __cordl_internal_set_lightId(int32_t  value) ;

constexpr void __cordl_internal_set_negativeLight(bool  value) ;

constexpr void __cordl_internal_set_range(float_t  value) ;

/// @brief Method .ctor, addr 0x5835fc8, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_InitialIntensity, addr 0x58359cc, size 0x8, virtual false, abstract: false, final false
inline float_t get_InitialIntensity() ;

/// @brief Method get_IsRegistered, addr 0x58359bc, size 0x10, virtual false, abstract: false, final false
inline bool get_IsRegistered() ;

/// [CompilerGenerated]
/// @brief Method set_InitialIntensity, addr 0x58359d4, size 0x8, virtual false, abstract: false, final false
inline void set_InitialIntensity(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameLight() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameLight", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameLight(GameLight && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameLight", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameLight(GameLight const& ) = delete;

/// @brief Field DEFAULT_RANGE offset 0xffffffff size 0x4
static constexpr float_t  DEFAULT_RANGE{static_cast<float_t>(0.005f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1771};

/// @brief Field light, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Light>  ___light;

/// @brief Field negativeLight, offset: 0x28, size: 0x1, def value: None
 bool  ___negativeLight;

/// @brief Field isHighPriorityPlayerLight, offset: 0x29, size: 0x1, def value: None
 bool  ___isHighPriorityPlayerLight;

/// @brief Field applyRange, offset: 0x2a, size: 0x1, def value: None
 bool  ___applyRange;

/// @brief Field cachedPosition, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___cachedPosition;

/// @brief Field cachedColorAndIntensity, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___cachedColorAndIntensity;

/// @brief Field range, offset: 0x48, size: 0x4, def value: None
 float_t  ___range;

/// @brief Field lightId, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___lightId;

/// @brief Field intensityMult, offset: 0x50, size: 0x4, def value: None
 int32_t  ___intensityMult;

/// @brief Field initialized, offset: 0x54, size: 0x1, def value: None
 bool  ___initialized;

/// [CompilerGenerated]
/// @brief Field <InitialIntensity>k__BackingField, offset: 0x58, size: 0x4, def value: None
 float_t  ____InitialIntensity_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameLight, ___light) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLight, ___negativeLight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLight, ___isHighPriorityPlayerLight) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLight, ___applyRange) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLight, ___cachedPosition) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLight, ___cachedColorAndIntensity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLight, ___range) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLight, ___lightId) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLight, ___intensityMult) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLight, ___initialized) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLight, ____InitialIntensity_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameLight) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
