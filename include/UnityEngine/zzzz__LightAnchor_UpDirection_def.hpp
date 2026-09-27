#pragma once
// IWYU pragma private; include "UnityEngine/LightAnchor_UpDirection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightAnchor_UpDirection)
// Forward declare root types
namespace GlobalNamespace {
struct LightAnchor_UpDirection;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LightAnchor_UpDirection);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightAnchor_UpDirection, "UnityEngine", "LightAnchor/UpDirection");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.LightAnchor/UpDirection
struct CORDL_TYPE LightAnchor_UpDirection {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LightAnchor_UpDirection_Unwrapped
enum struct __LightAnchor_UpDirection_Unwrapped : int32_t {
__E_World = static_cast<int32_t>(0x0),
__E_Local = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LightAnchor_UpDirection_Unwrapped () const noexcept {
return static_cast<__LightAnchor_UpDirection_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LightAnchor_UpDirection() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LightAnchor_UpDirection(int32_t  value__) noexcept;

/// @brief Field Local value: I32(1)
static ::GlobalNamespace::LightAnchor_UpDirection const Local;

/// @brief Field World value: I32(0)
static ::GlobalNamespace::LightAnchor_UpDirection const World;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16563};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightAnchor_UpDirection, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightAnchor_UpDirection) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
