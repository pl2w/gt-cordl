#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ZipOption.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ZipOption)
// Forward declare root types
namespace Pathfinding::Ionic::Zip {
struct ZipOption;
}
// Write type traits
MARK_VAL_T(::Pathfinding::Ionic::Zip::ZipOption);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zip::ZipOption, "Pathfinding.Ionic.Zip", "ZipOption");
// Dependencies 
namespace Pathfinding::Ionic::Zip {
// Is value type: true
// CS Name: Pathfinding.Ionic.Zip.ZipOption
struct CORDL_TYPE ZipOption {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ZipOption_Unwrapped
enum struct __ZipOption_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_Never = static_cast<int32_t>(0x0),
__E_AsNecessary = static_cast<int32_t>(0x1),
__E_Always = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ZipOption_Unwrapped () const noexcept {
return static_cast<__ZipOption_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ZipOption() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ZipOption(int32_t  value__) noexcept;

/// @brief Field Always value: I32(2)
static ::Pathfinding::Ionic::Zip::ZipOption const Always;

/// @brief Field AsNecessary value: I32(1)
static ::Pathfinding::Ionic::Zip::ZipOption const AsNecessary;

/// @brief Field Default value: I32(0)
static ::Pathfinding::Ionic::Zip::ZipOption const Default;

/// @brief Field Never value: I32(0)
static ::Pathfinding::Ionic::Zip::ZipOption const Never;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28170};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipOption, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Ionic::Zip::ZipOption) == 0x4, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zip
