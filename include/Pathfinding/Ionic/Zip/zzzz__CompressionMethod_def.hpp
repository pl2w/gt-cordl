#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/CompressionMethod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CompressionMethod)
// Forward declare root types
namespace Pathfinding::Ionic::Zip {
struct CompressionMethod;
}
// Write type traits
MARK_VAL_T(::Pathfinding::Ionic::Zip::CompressionMethod);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zip::CompressionMethod, "Pathfinding.Ionic.Zip", "CompressionMethod");
// Dependencies 
namespace Pathfinding::Ionic::Zip {
// Is value type: true
// CS Name: Pathfinding.Ionic.Zip.CompressionMethod
struct CORDL_TYPE CompressionMethod {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CompressionMethod_Unwrapped
enum struct __CompressionMethod_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Deflate = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CompressionMethod_Unwrapped () const noexcept {
return static_cast<__CompressionMethod_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CompressionMethod() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CompressionMethod(int32_t  value__) noexcept;

/// @brief Field Deflate value: I32(8)
static ::Pathfinding::Ionic::Zip::CompressionMethod const Deflate;

/// @brief Field None value: I32(0)
static ::Pathfinding::Ionic::Zip::CompressionMethod const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28163};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Ionic::Zip::CompressionMethod, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Ionic::Zip::CompressionMethod) == 0x4, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zip
