#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ZipEntryTimestamp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ZipEntryTimestamp)
// Forward declare root types
namespace Pathfinding::Ionic::Zip {
struct ZipEntryTimestamp;
}
// Write type traits
MARK_VAL_T(::Pathfinding::Ionic::Zip::ZipEntryTimestamp);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zip::ZipEntryTimestamp, "Pathfinding.Ionic.Zip", "ZipEntryTimestamp");
// [Flags]
// Dependencies 
namespace Pathfinding::Ionic::Zip {
// Is value type: true
// CS Name: Pathfinding.Ionic.Zip.ZipEntryTimestamp
struct CORDL_TYPE ZipEntryTimestamp {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ZipEntryTimestamp_Unwrapped
enum struct __ZipEntryTimestamp_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_DOS = static_cast<int32_t>(0x1),
__E_Windows = static_cast<int32_t>(0x2),
__E_Unix = static_cast<int32_t>(0x4),
__E_InfoZip1 = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ZipEntryTimestamp_Unwrapped () const noexcept {
return static_cast<__ZipEntryTimestamp_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ZipEntryTimestamp() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ZipEntryTimestamp(int32_t  value__) noexcept;

/// @brief Field DOS value: I32(1)
static ::Pathfinding::Ionic::Zip::ZipEntryTimestamp const DOS;

/// @brief Field InfoZip1 value: I32(8)
static ::Pathfinding::Ionic::Zip::ZipEntryTimestamp const InfoZip1;

/// @brief Field None value: I32(0)
static ::Pathfinding::Ionic::Zip::ZipEntryTimestamp const None;

/// @brief Field Unix value: I32(4)
static ::Pathfinding::Ionic::Zip::ZipEntryTimestamp const Unix;

/// @brief Field Windows value: I32(2)
static ::Pathfinding::Ionic::Zip::ZipEntryTimestamp const Windows;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28162};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntryTimestamp, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Ionic::Zip::ZipEntryTimestamp) == 0x4, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zip
