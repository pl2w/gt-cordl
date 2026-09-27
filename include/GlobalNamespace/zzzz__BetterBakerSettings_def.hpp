#pragma once
// IWYU pragma private; include "GlobalNamespace/BetterBakerSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(BetterBakerSettings)
namespace GlobalNamespace {
struct BetterBakerSettings_LightMapMap;
}
// Forward declare root types
namespace GlobalNamespace {
class BetterBakerSettings;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BetterBakerSettings*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BetterBakerSettings*, "", "BetterBakerSettings");
// Dependencies UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BetterBakerSettings
class CORDL_TYPE BetterBakerSettings : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using LightMapMap = ::GlobalNamespace::BetterBakerSettings_LightMapMap;

/// @brief Field lightMapMaps, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_lightMapMaps, put=__cordl_internal_set_lightMapMaps)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  lightMapMaps;

static inline ::GlobalNamespace::BetterBakerSettings* New_ctor() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_lightMapMaps() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_lightMapMaps() ;

constexpr void __cordl_internal_set_lightMapMaps(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

/// @brief Method .ctor, addr 0x5ae1e20, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BetterBakerSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BetterBakerSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BetterBakerSettings(BetterBakerSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BetterBakerSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BetterBakerSettings(BetterBakerSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3470};

/// [SerializeField]
/// @brief Field lightMapMaps, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___lightMapMaps;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BetterBakerSettings, ___lightMapMaps) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BetterBakerSettings) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
