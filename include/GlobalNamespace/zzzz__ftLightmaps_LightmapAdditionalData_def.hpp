#pragma once
// IWYU pragma private; include "GlobalNamespace/ftLightmaps_LightmapAdditionalData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ftLightmaps_LightmapAdditionalData)
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
struct ftLightmaps_LightmapAdditionalData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ftLightmaps_LightmapAdditionalData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ftLightmaps_LightmapAdditionalData, "", "ftLightmaps/LightmapAdditionalData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ftLightmaps/LightmapAdditionalData
struct CORDL_TYPE ftLightmaps_LightmapAdditionalData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ftLightmaps_LightmapAdditionalData() ;

// Ctor Parameters [CppParam { name: "rnm0", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None, comment: None }, CppParam { name: "rnm1", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None, comment: None }, CppParam { name: "rnm2", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None, comment: None }, CppParam { name: "mode", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ftLightmaps_LightmapAdditionalData(::UnityW<::UnityEngine::Texture2D>  rnm0, ::UnityW<::UnityEngine::Texture2D>  rnm1, ::UnityW<::UnityEngine::Texture2D>  rnm2, int32_t  mode) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32454};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field rnm0, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  rnm0;

/// @brief Field rnm1, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  rnm1;

/// @brief Field rnm2, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  rnm2;

/// @brief Field mode, offset: 0x18, size: 0x4, def value: None
 int32_t  mode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ftLightmaps_LightmapAdditionalData, rnm0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftLightmaps_LightmapAdditionalData, rnm1) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftLightmaps_LightmapAdditionalData, rnm2) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftLightmaps_LightmapAdditionalData, mode) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ftLightmaps_LightmapAdditionalData) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
