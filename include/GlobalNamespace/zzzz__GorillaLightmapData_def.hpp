#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaLightmapData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(GorillaLightmapData)
// Forward declare root types
namespace GlobalNamespace {
class GorillaLightmapData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaLightmapData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaLightmapData*, "", "GorillaLightmapData");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.Texture2D
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaLightmapData
class CORDL_TYPE GorillaLightmapData : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field dirTextures, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_dirTextures, put=__cordl_internal_set_dirTextures)) ::ArrayW<::UnityW<::UnityEngine::Texture2D>>  dirTextures;

/// @brief Field dirs, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_dirs, put=__cordl_internal_set_dirs)) ::ArrayW<::ArrayW<::UnityEngine::Color>>  dirs;

/// @brief Field done, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_done, put=__cordl_internal_set_done)) bool  done;

/// @brief Field lightTextures, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_lightTextures, put=__cordl_internal_set_lightTextures)) ::ArrayW<::UnityW<::UnityEngine::Texture2D>>  lightTextures;

/// @brief Field lights, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_lights, put=__cordl_internal_set_lights)) ::ArrayW<::ArrayW<::UnityEngine::Color>>  lights;

/// @brief Method Awake, addr 0x5919bdc, size 0x260, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GorillaLightmapData* New_ctor() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>> const& __cordl_internal_get_dirTextures() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>>& __cordl_internal_get_dirTextures() ;

constexpr ::ArrayW<::ArrayW<::UnityEngine::Color>> const& __cordl_internal_get_dirs() const;

constexpr ::ArrayW<::ArrayW<::UnityEngine::Color>>& __cordl_internal_get_dirs() ;

constexpr bool const& __cordl_internal_get_done() const;

constexpr bool& __cordl_internal_get_done() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>> const& __cordl_internal_get_lightTextures() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>>& __cordl_internal_get_lightTextures() ;

constexpr ::ArrayW<::ArrayW<::UnityEngine::Color>> const& __cordl_internal_get_lights() const;

constexpr ::ArrayW<::ArrayW<::UnityEngine::Color>>& __cordl_internal_get_lights() ;

constexpr void __cordl_internal_set_dirTextures(::ArrayW<::UnityW<::UnityEngine::Texture2D>>  value) ;

constexpr void __cordl_internal_set_dirs(::ArrayW<::ArrayW<::UnityEngine::Color>>  value) ;

constexpr void __cordl_internal_set_done(bool  value) ;

constexpr void __cordl_internal_set_lightTextures(::ArrayW<::UnityW<::UnityEngine::Texture2D>>  value) ;

constexpr void __cordl_internal_set_lights(::ArrayW<::ArrayW<::UnityEngine::Color>>  value) ;

/// @brief Method .ctor, addr 0x5919e3c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaLightmapData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaLightmapData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaLightmapData(GorillaLightmapData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaLightmapData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaLightmapData(GorillaLightmapData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2196};

/// [SerializeField]
/// @brief Field dirTextures, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Texture2D>>  ___dirTextures;

/// [SerializeField]
/// @brief Field lightTextures, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Texture2D>>  ___lightTextures;

/// @brief Field lights, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::ArrayW<::UnityEngine::Color>>  ___lights;

/// @brief Field dirs, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::ArrayW<::UnityEngine::Color>>  ___dirs;

/// @brief Field done, offset: 0x40, size: 0x1, def value: None
 bool  ___done;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaLightmapData, ___dirTextures) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaLightmapData, ___lightTextures) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaLightmapData, ___lights) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaLightmapData, ___dirs) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaLightmapData, ___done) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaLightmapData) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
