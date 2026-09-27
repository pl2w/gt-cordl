#pragma once
// IWYU pragma private; include "GlobalNamespace/BetterBakerSettings_LightMapMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(BetterBakerSettings_LightMapMap)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct BetterBakerSettings_LightMapMap;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BetterBakerSettings_LightMapMap);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BetterBakerSettings_LightMapMap, "", "BetterBakerSettings/LightMapMap");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BetterBakerSettings/LightMapMap
struct CORDL_TYPE BetterBakerSettings_LightMapMap {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BetterBakerSettings_LightMapMap() ;

// Ctor Parameters [CppParam { name: "timeOfDayName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "sceneLightObject", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }]
constexpr BetterBakerSettings_LightMapMap(::StringW  timeOfDayName, ::UnityW<::UnityEngine::GameObject>  sceneLightObject) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3469};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [SerializeField]
/// @brief Field timeOfDayName, offset: 0x0, size: 0x8, def value: None
 ::StringW  timeOfDayName;

/// [SerializeField]
/// @brief Field sceneLightObject, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  sceneLightObject;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BetterBakerSettings_LightMapMap, timeOfDayName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterBakerSettings_LightMapMap, sceneLightObject) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BetterBakerSettings_LightMapMap) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
