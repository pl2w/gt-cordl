#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ZipSegmentedStream_RwMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ZipSegmentedStream_RwMode)
// Forward declare root types
namespace GlobalNamespace {
struct ZipSegmentedStream_RwMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ZipSegmentedStream_RwMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ZipSegmentedStream_RwMode, "Pathfinding.Ionic.Zip", "ZipSegmentedStream/RwMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.Ionic.Zip.ZipSegmentedStream/RwMode
struct CORDL_TYPE ZipSegmentedStream_RwMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ZipSegmentedStream_RwMode_Unwrapped
enum struct __ZipSegmentedStream_RwMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_ReadOnly = static_cast<int32_t>(0x1),
__E_Write = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ZipSegmentedStream_RwMode_Unwrapped () const noexcept {
return static_cast<__ZipSegmentedStream_RwMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ZipSegmentedStream_RwMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ZipSegmentedStream_RwMode(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::ZipSegmentedStream_RwMode const None;

/// @brief Field ReadOnly value: I32(1)
static ::GlobalNamespace::ZipSegmentedStream_RwMode const ReadOnly;

/// @brief Field Write value: I32(2)
static ::GlobalNamespace::ZipSegmentedStream_RwMode const Write;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28174};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ZipSegmentedStream_RwMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ZipSegmentedStream_RwMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
