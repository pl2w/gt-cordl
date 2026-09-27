#pragma once
// IWYU pragma private; include "GlobalNamespace/SkyboxSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SkyboxSettings)
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class SkyboxSettings;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SkyboxSettings*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SkyboxSettings*, "", "SkyboxSettings");
// [ExecuteInEditMode]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SkyboxSettings
class CORDL_TYPE SkyboxSettings : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _skyMaterial, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__skyMaterial, put=__cordl_internal_set__skyMaterial)) ::UnityW<::UnityEngine::Material>  _skyMaterial;

static inline ::GlobalNamespace::SkyboxSettings* New_ctor() ;

/// @brief Method OnEnable, addr 0x56ad800, size 0x78, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__skyMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__skyMaterial() ;

constexpr void __cordl_internal_set__skyMaterial(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0x56ad878, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SkyboxSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SkyboxSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SkyboxSettings(SkyboxSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SkyboxSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SkyboxSettings(SkyboxSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{927};

/// [SerializeField]
/// @brief Field _skyMaterial, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____skyMaterial;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SkyboxSettings, ____skyMaterial) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SkyboxSettings) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
