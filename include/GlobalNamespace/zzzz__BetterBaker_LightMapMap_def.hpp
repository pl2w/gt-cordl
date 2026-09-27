#pragma once
// IWYU pragma private; include "GlobalNamespace/BetterBaker_LightMapMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(BetterBaker_LightMapMap)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct BetterBaker_LightMapMap;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BetterBaker_LightMapMap);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BetterBaker_LightMapMap, "", "BetterBaker/LightMapMap");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BetterBaker/LightMapMap
struct CORDL_TYPE BetterBaker_LightMapMap {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BetterBaker_LightMapMap() ;

// Ctor Parameters [CppParam { name: "timeOfDayName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "lightObject", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }]
constexpr BetterBaker_LightMapMap(::StringW  timeOfDayName, ::UnityW<::UnityEngine::GameObject>  lightObject) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3464};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field timeOfDayName, offset: 0x0, size: 0x8, def value: None
 ::StringW  timeOfDayName;

/// @brief Field lightObject, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  lightObject;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BetterBaker_LightMapMap, timeOfDayName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterBaker_LightMapMap, lightObject) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BetterBaker_LightMapMap) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
