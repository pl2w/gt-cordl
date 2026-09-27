#pragma once
// IWYU pragma private; include "GlobalNamespace/LightArray.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameLight_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightArray)
namespace GlobalNamespace {
class LightArrayPresets;
}
namespace GlobalNamespace {
struct LightArray__SetColorAndIntensity_d__10;
}
namespace GlobalNamespace {
struct LightArray__SetColor_d__12;
}
namespace GlobalNamespace {
struct LightArray__SetIntensity_d__13;
}
namespace GlobalNamespace {
struct LightArray__SetLightColorAndIntensity_d__14;
}
namespace GlobalNamespace {
struct LightArray__SetLightColor_d__15;
}
namespace GlobalNamespace {
struct LightArray__SetLightIntensity_d__16;
}
namespace System::Threading::Tasks {
class Task;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class LightArray;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LightArray*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightArray*, "", "LightArray");
// Dependencies GameLight, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightArray
class CORDL_TYPE LightArray : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _SetColorAndIntensity_d__10 = ::GlobalNamespace::LightArray__SetColorAndIntensity_d__10;

using _SetColor_d__12 = ::GlobalNamespace::LightArray__SetColor_d__12;

using _SetIntensity_d__13 = ::GlobalNamespace::LightArray__SetIntensity_d__13;

using _SetLightColorAndIntensity_d__14 = ::GlobalNamespace::LightArray__SetLightColorAndIntensity_d__14;

using _SetLightColor_d__15 = ::GlobalNamespace::LightArray__SetLightColor_d__15;

using _SetLightIntensity_d__16 = ::GlobalNamespace::LightArray__SetLightIntensity_d__16;

/// @brief Field cascadeTime, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_cascadeTime, put=__cordl_internal_set_cascadeTime)) int32_t  cascadeTime;

/// @brief Field lights, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_lights, put=__cordl_internal_set_lights)) ::ArrayW<::UnityW<::GlobalNamespace::GameLight>>  lights;

/// @brief Field preLightHue, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_preLightHue, put=__cordl_internal_set_preLightHue)) float_t  preLightHue;

/// @brief Field preLightIntensity, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_preLightIntensity, put=__cordl_internal_set_preLightIntensity)) float_t  preLightIntensity;

/// @brief Field preLightSat, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_preLightSat, put=__cordl_internal_set_preLightSat)) float_t  preLightSat;

/// @brief Field preLightVal, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_preLightVal, put=__cordl_internal_set_preLightVal)) float_t  preLightVal;

/// @brief Field presets, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_presets, put=__cordl_internal_set_presets)) ::UnityW<::GlobalNamespace::LightArrayPresets>  presets;

/// @brief Field setLightHue, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_setLightHue, put=__cordl_internal_set_setLightHue)) float_t  setLightHue;

/// @brief Field setLightIntensity, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_setLightIntensity, put=__cordl_internal_set_setLightIntensity)) float_t  setLightIntensity;

/// @brief Field setLightSat, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_setLightSat, put=__cordl_internal_set_setLightSat)) float_t  setLightSat;

/// @brief Field setLightVal, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_setLightVal, put=__cordl_internal_set_setLightVal)) float_t  setLightVal;

/// @brief Field subArrays, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_subArrays, put=__cordl_internal_set_subArrays)) ::ArrayW<::UnityW<::GlobalNamespace::LightArray>>  subArrays;

/// @brief Method GetColor, addr 0x56cf6d8, size 0xac, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetColor(::StringW  RRGGBB) ;

/// @brief Method LateUpdate, addr 0x56cfc54, size 0xb4, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::LightArray* New_ctor() ;

/// @brief Method SetCascadeTime, addr 0x56cf324, size 0x8, virtual false, abstract: false, final false
inline void SetCascadeTime(int32_t  ct) ;

/// @brief Method SetColor, addr 0x56cf784, size 0x18, virtual false, abstract: false, final false
inline void SetColor(::StringW  RRGGBB) ;

/// [AsyncStateMachine(typeof(LightArray::<SetColor>d__12))]
/// @brief Method SetColor, addr 0x56cf79c, size 0xd0, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  c) ;

/// @brief Method SetColorAndIntensity, addr 0x56cf650, size 0x88, virtual false, abstract: false, final false
inline void SetColorAndIntensity(::StringW  RRGGBBF) ;

/// [AsyncStateMachine(typeof(LightArray::<SetColorAndIntensity>d__10))]
/// @brief Method SetColorAndIntensity, addr 0x56cf45c, size 0xe0, virtual false, abstract: false, final false
inline void SetColorAndIntensity(::UnityEngine::Color  c, float_t  intensity) ;

/// [AsyncStateMachine(typeof(LightArray::<SetIntensity>d__13))]
/// @brief Method SetIntensity, addr 0x56cf86c, size 0xb4, virtual false, abstract: false, final false
inline void SetIntensity(float_t  intensity) ;

/// [AsyncStateMachine(typeof(LightArray::<SetLightColor>d__15))]
/// @brief Method SetLightColor, addr 0x56cfa44, size 0x114, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SetLightColor(::UnityEngine::Color  c, int32_t  i) ;

/// [AsyncStateMachine(typeof(LightArray::<SetLightColorAndIntensity>d__14))]
/// @brief Method SetLightColorAndIntensity, addr 0x56cf920, size 0x124, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SetLightColorAndIntensity(::UnityEngine::Color  c, float_t  intensity, int32_t  i) ;

/// [AsyncStateMachine(typeof(LightArray::<SetLightIntensity>d__16))]
/// @brief Method SetLightIntensity, addr 0x56cfb58, size 0xfc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SetLightIntensity(float_t  intensity, int32_t  i) ;

/// @brief Method SetPreset, addr 0x56cf380, size 0xac, virtual false, abstract: false, final false
inline void SetPreset(int32_t  i) ;

/// @brief Method SetPreset, addr 0x56cf53c, size 0xac, virtual false, abstract: false, final false
inline void SetPreset(::StringW  n) ;

/// @brief Method SetSubArraysCascadeTime, addr 0x56cf32c, size 0x54, virtual false, abstract: false, final false
inline void SetSubArraysCascadeTime(int32_t  ct) ;

/// @brief Method ToggleDynamicLighting, addr 0x56cf2b8, size 0x6c, virtual false, abstract: false, final false
inline void ToggleDynamicLighting() ;

constexpr int32_t const& __cordl_internal_get_cascadeTime() const;

constexpr int32_t& __cordl_internal_get_cascadeTime() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GameLight>> const& __cordl_internal_get_lights() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GameLight>>& __cordl_internal_get_lights() ;

constexpr float_t const& __cordl_internal_get_preLightHue() const;

constexpr float_t& __cordl_internal_get_preLightHue() ;

constexpr float_t const& __cordl_internal_get_preLightIntensity() const;

constexpr float_t& __cordl_internal_get_preLightIntensity() ;

constexpr float_t const& __cordl_internal_get_preLightSat() const;

constexpr float_t& __cordl_internal_get_preLightSat() ;

constexpr float_t const& __cordl_internal_get_preLightVal() const;

constexpr float_t& __cordl_internal_get_preLightVal() ;

constexpr ::UnityW<::GlobalNamespace::LightArrayPresets> const& __cordl_internal_get_presets() const;

constexpr ::UnityW<::GlobalNamespace::LightArrayPresets>& __cordl_internal_get_presets() ;

constexpr float_t const& __cordl_internal_get_setLightHue() const;

constexpr float_t& __cordl_internal_get_setLightHue() ;

constexpr float_t const& __cordl_internal_get_setLightIntensity() const;

constexpr float_t& __cordl_internal_get_setLightIntensity() ;

constexpr float_t const& __cordl_internal_get_setLightSat() const;

constexpr float_t& __cordl_internal_get_setLightSat() ;

constexpr float_t const& __cordl_internal_get_setLightVal() const;

constexpr float_t& __cordl_internal_get_setLightVal() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightArray>> const& __cordl_internal_get_subArrays() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightArray>>& __cordl_internal_get_subArrays() ;

constexpr void __cordl_internal_set_cascadeTime(int32_t  value) ;

constexpr void __cordl_internal_set_lights(::ArrayW<::UnityW<::GlobalNamespace::GameLight>>  value) ;

constexpr void __cordl_internal_set_preLightHue(float_t  value) ;

constexpr void __cordl_internal_set_preLightIntensity(float_t  value) ;

constexpr void __cordl_internal_set_preLightSat(float_t  value) ;

constexpr void __cordl_internal_set_preLightVal(float_t  value) ;

constexpr void __cordl_internal_set_presets(::UnityW<::GlobalNamespace::LightArrayPresets>  value) ;

constexpr void __cordl_internal_set_setLightHue(float_t  value) ;

constexpr void __cordl_internal_set_setLightIntensity(float_t  value) ;

constexpr void __cordl_internal_set_setLightSat(float_t  value) ;

constexpr void __cordl_internal_set_setLightVal(float_t  value) ;

constexpr void __cordl_internal_set_subArrays(::ArrayW<::UnityW<::GlobalNamespace::LightArray>>  value) ;

/// @brief Method .ctor, addr 0x56cfd08, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightArray() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightArray", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LightArray(LightArray && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightArray", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightArray(LightArray const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1053};

/// [SerializeField]
/// @brief Field presets, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LightArrayPresets>  ___presets;

/// [SerializeField]
/// @brief Field lights, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::GameLight>>  ___lights;

/// [SerializeField]
/// @brief Field subArrays, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::LightArray>>  ___subArrays;

/// [SerializeField]
/// @brief Field cascadeTime, offset: 0x38, size: 0x4, def value: None
 int32_t  ___cascadeTime;

/// [SerializeField]
/// @brief Field setLightHue, offset: 0x3c, size: 0x4, def value: None
 float_t  ___setLightHue;

/// @brief Field preLightHue, offset: 0x40, size: 0x4, def value: None
 float_t  ___preLightHue;

/// [SerializeField]
/// @brief Field setLightSat, offset: 0x44, size: 0x4, def value: None
 float_t  ___setLightSat;

/// @brief Field preLightSat, offset: 0x48, size: 0x4, def value: None
 float_t  ___preLightSat;

/// [SerializeField]
/// @brief Field setLightVal, offset: 0x4c, size: 0x4, def value: None
 float_t  ___setLightVal;

/// @brief Field preLightVal, offset: 0x50, size: 0x4, def value: None
 float_t  ___preLightVal;

/// [SerializeField]
/// @brief Field setLightIntensity, offset: 0x54, size: 0x4, def value: None
 float_t  ___setLightIntensity;

/// @brief Field preLightIntensity, offset: 0x58, size: 0x4, def value: None
 float_t  ___preLightIntensity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightArray, ___presets) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightArray, ___lights) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightArray, ___subArrays) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightArray, ___cascadeTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightArray, ___setLightHue) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightArray, ___preLightHue) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightArray, ___setLightSat) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightArray, ___preLightSat) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightArray, ___setLightVal) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightArray, ___preLightVal) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightArray, ___setLightIntensity) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightArray, ___preLightIntensity) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightArray) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
