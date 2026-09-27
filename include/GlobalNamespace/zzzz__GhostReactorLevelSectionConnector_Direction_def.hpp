#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorLevelSectionConnector_Direction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GhostReactorLevelSectionConnector_Direction)
// Forward declare root types
namespace GlobalNamespace {
struct GhostReactorLevelSectionConnector_Direction;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GhostReactorLevelSectionConnector_Direction);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostReactorLevelSectionConnector_Direction, "", "GhostReactorLevelSectionConnector/Direction");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GhostReactorLevelSectionConnector/Direction
struct CORDL_TYPE GhostReactorLevelSectionConnector_Direction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GhostReactorLevelSectionConnector_Direction_Unwrapped
enum struct __GhostReactorLevelSectionConnector_Direction_Unwrapped : int32_t {
__E_Down = static_cast<int32_t>(0xffffffff),
__E_Forward = static_cast<int32_t>(0x0),
__E_Up = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GhostReactorLevelSectionConnector_Direction_Unwrapped () const noexcept {
return static_cast<__GhostReactorLevelSectionConnector_Direction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GhostReactorLevelSectionConnector_Direction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GhostReactorLevelSectionConnector_Direction(int32_t  value__) noexcept;

/// @brief Field Down value: I32(-1)
static ::GlobalNamespace::GhostReactorLevelSectionConnector_Direction const Down;

/// @brief Field Forward value: I32(0)
static ::GlobalNamespace::GhostReactorLevelSectionConnector_Direction const Forward;

/// @brief Field Up value: I32(1)
static ::GlobalNamespace::GhostReactorLevelSectionConnector_Direction const Up;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1818};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostReactorLevelSectionConnector_Direction, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostReactorLevelSectionConnector_Direction) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
