#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zlib/DeflateFlavor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DeflateFlavor)
// Forward declare root types
namespace Pathfinding::Ionic::Zlib {
struct DeflateFlavor;
}
// Write type traits
MARK_VAL_T(::Pathfinding::Ionic::Zlib::DeflateFlavor);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zlib::DeflateFlavor, "Pathfinding.Ionic.Zlib", "DeflateFlavor");
// Dependencies 
namespace Pathfinding::Ionic::Zlib {
// Is value type: true
// CS Name: Pathfinding.Ionic.Zlib.DeflateFlavor
struct CORDL_TYPE DeflateFlavor {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DeflateFlavor_Unwrapped
enum struct __DeflateFlavor_Unwrapped : int32_t {
__E_Store = static_cast<int32_t>(0x0),
__E_Fast = static_cast<int32_t>(0x1),
__E_Slow = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DeflateFlavor_Unwrapped () const noexcept {
return static_cast<__DeflateFlavor_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DeflateFlavor() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DeflateFlavor(int32_t  value__) noexcept;

/// @brief Field Fast value: I32(1)
static ::Pathfinding::Ionic::Zlib::DeflateFlavor const Fast;

/// @brief Field Slow value: I32(2)
static ::Pathfinding::Ionic::Zlib::DeflateFlavor const Slow;

/// @brief Field Store value: I32(0)
static ::Pathfinding::Ionic::Zlib::DeflateFlavor const Store;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28177};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateFlavor, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Ionic::Zlib::DeflateFlavor) == 0x4, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zlib
