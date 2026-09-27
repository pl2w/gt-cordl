#pragma once
// IWYU pragma private; include "GlobalNamespace/BetterBaker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BetterBaker)
namespace GlobalNamespace {
struct BetterBaker_LightMapMap;
}
// Forward declare root types
namespace GlobalNamespace {
class BetterBaker;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BetterBaker*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BetterBaker*, "", "BetterBaker");
// Dependencies UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BetterBaker
class CORDL_TYPE BetterBaker : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using LightMapMap = ::GlobalNamespace::BetterBaker_LightMapMap;

/// @brief Field allLights, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_allLights, put=__cordl_internal_set_allLights)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  allLights;

/// @brief Field bakeryLightmapDirectory, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_bakeryLightmapDirectory, put=__cordl_internal_set_bakeryLightmapDirectory)) ::StringW  bakeryLightmapDirectory;

/// @brief Field dayNightLightmapsDirectory, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_dayNightLightmapsDirectory, put=__cordl_internal_set_dayNightLightmapsDirectory)) ::StringW  dayNightLightmapsDirectory;

static inline ::GlobalNamespace::BetterBaker* New_ctor() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_allLights() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_allLights() ;

constexpr ::StringW const& __cordl_internal_get_bakeryLightmapDirectory() const;

constexpr ::StringW& __cordl_internal_get_bakeryLightmapDirectory() ;

constexpr ::StringW const& __cordl_internal_get_dayNightLightmapsDirectory() const;

constexpr ::StringW& __cordl_internal_get_dayNightLightmapsDirectory() ;

constexpr void __cordl_internal_set_allLights(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_bakeryLightmapDirectory(::StringW  value) ;

constexpr void __cordl_internal_set_dayNightLightmapsDirectory(::StringW  value) ;

/// @brief Method .ctor, addr 0x5ae1d88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BetterBaker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BetterBaker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BetterBaker(BetterBaker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BetterBaker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BetterBaker(BetterBaker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3465};

/// @brief Field bakeryLightmapDirectory, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___bakeryLightmapDirectory;

/// @brief Field dayNightLightmapsDirectory, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___dayNightLightmapsDirectory;

/// @brief Field allLights, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___allLights;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BetterBaker, ___bakeryLightmapDirectory) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterBaker, ___dayNightLightmapsDirectory) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterBaker, ___allLights) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BetterBaker) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
