#pragma once
// IWYU pragma private; include "GlobalNamespace/MoonController_Scenes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MoonController_Scenes)
// Forward declare root types
namespace GlobalNamespace {
struct MoonController_Scenes;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MoonController_Scenes);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MoonController_Scenes, "", "MoonController/Scenes");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: MoonController/Scenes
struct CORDL_TYPE MoonController_Scenes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MoonController_Scenes_Unwrapped
enum struct __MoonController_Scenes_Unwrapped : int32_t {
__E_Forest = static_cast<int32_t>(0x0),
__E_Bayou = static_cast<int32_t>(0x1),
__E_Beach = static_cast<int32_t>(0x2),
__E_Canyon = static_cast<int32_t>(0x3),
__E_Clouds = static_cast<int32_t>(0x4),
__E_City = static_cast<int32_t>(0x5),
__E_Metropolis = static_cast<int32_t>(0x6),
__E_Mountain = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MoonController_Scenes_Unwrapped () const noexcept {
return static_cast<__MoonController_Scenes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MoonController_Scenes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MoonController_Scenes(int32_t  value__) noexcept;

/// @brief Field Bayou value: I32(1)
static ::GlobalNamespace::MoonController_Scenes const Bayou;

/// @brief Field Beach value: I32(2)
static ::GlobalNamespace::MoonController_Scenes const Beach;

/// @brief Field Canyon value: I32(3)
static ::GlobalNamespace::MoonController_Scenes const Canyon;

/// @brief Field City value: I32(5)
static ::GlobalNamespace::MoonController_Scenes const City;

/// @brief Field Clouds value: I32(4)
static ::GlobalNamespace::MoonController_Scenes const Clouds;

/// @brief Field Forest value: I32(0)
static ::GlobalNamespace::MoonController_Scenes const Forest;

/// @brief Field Metropolis value: I32(6)
static ::GlobalNamespace::MoonController_Scenes const Metropolis;

/// @brief Field Mountain value: I32(7)
static ::GlobalNamespace::MoonController_Scenes const Mountain;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{561};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MoonController_Scenes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MoonController_Scenes) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
