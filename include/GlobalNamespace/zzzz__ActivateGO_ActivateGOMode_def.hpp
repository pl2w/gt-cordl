#pragma once
// IWYU pragma private; include "GlobalNamespace/ActivateGO_ActivateGOMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ActivateGO_ActivateGOMode)
// Forward declare root types
namespace GlobalNamespace {
struct ActivateGO_ActivateGOMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ActivateGO_ActivateGOMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ActivateGO_ActivateGOMode, "", "ActivateGO/ActivateGOMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ActivateGO/ActivateGOMode
struct CORDL_TYPE ActivateGO_ActivateGOMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ActivateGO_ActivateGOMode_Unwrapped
enum struct __ActivateGO_ActivateGOMode_Unwrapped : int32_t {
__E_EnableRenderers = static_cast<int32_t>(0x0),
__E_ActivateGameObjects = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ActivateGO_ActivateGOMode_Unwrapped () const noexcept {
return static_cast<__ActivateGO_ActivateGOMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ActivateGO_ActivateGOMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ActivateGO_ActivateGOMode(int32_t  value__) noexcept;

/// @brief Field ActivateGameObjects value: I32(1)
static ::GlobalNamespace::ActivateGO_ActivateGOMode const ActivateGameObjects;

/// @brief Field EnableRenderers value: I32(0)
static ::GlobalNamespace::ActivateGO_ActivateGOMode const EnableRenderers;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ActivateGO_ActivateGOMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ActivateGO_ActivateGOMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
