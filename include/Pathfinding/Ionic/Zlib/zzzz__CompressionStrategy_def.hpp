#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zlib/CompressionStrategy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CompressionStrategy)
// Forward declare root types
namespace Pathfinding::Ionic::Zlib {
struct CompressionStrategy;
}
// Write type traits
MARK_VAL_T(::Pathfinding::Ionic::Zlib::CompressionStrategy);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zlib::CompressionStrategy, "Pathfinding.Ionic.Zlib", "CompressionStrategy");
// Dependencies 
namespace Pathfinding::Ionic::Zlib {
// Is value type: true
// CS Name: Pathfinding.Ionic.Zlib.CompressionStrategy
struct CORDL_TYPE CompressionStrategy {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CompressionStrategy_Unwrapped
enum struct __CompressionStrategy_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_Filtered = static_cast<int32_t>(0x1),
__E_HuffmanOnly = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CompressionStrategy_Unwrapped () const noexcept {
return static_cast<__CompressionStrategy_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CompressionStrategy() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CompressionStrategy(int32_t  value__) noexcept;

/// @brief Field Default value: I32(0)
static ::Pathfinding::Ionic::Zlib::CompressionStrategy const Default;

/// @brief Field Filtered value: I32(1)
static ::Pathfinding::Ionic::Zlib::CompressionStrategy const Filtered;

/// @brief Field HuffmanOnly value: I32(2)
static ::Pathfinding::Ionic::Zlib::CompressionStrategy const HuffmanOnly;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28196};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Ionic::Zlib::CompressionStrategy, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Ionic::Zlib::CompressionStrategy) == 0x4, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zlib
