#pragma once
// IWYU pragma private; include "GlobalNamespace/GTSignal_EmitMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GTSignal_EmitMode)
// Forward declare root types
namespace GlobalNamespace {
struct GTSignal_EmitMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTSignal_EmitMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTSignal_EmitMode, "", "GTSignal/EmitMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GTSignal/EmitMode
struct CORDL_TYPE GTSignal_EmitMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GTSignal_EmitMode_Unwrapped
enum struct __GTSignal_EmitMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0xffffffff),
__E_Others = static_cast<int32_t>(0x0),
__E_Targets = static_cast<int32_t>(0x1),
__E_All = static_cast<int32_t>(0x2),
__E_Host = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GTSignal_EmitMode_Unwrapped () const noexcept {
return static_cast<__GTSignal_EmitMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GTSignal_EmitMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GTSignal_EmitMode(int32_t  value__) noexcept;

/// @brief Field All value: I32(2)
static ::GlobalNamespace::GTSignal_EmitMode const All;

/// @brief Field Host value: I32(3)
static ::GlobalNamespace::GTSignal_EmitMode const Host;

/// @brief Field None value: I32(-1)
static ::GlobalNamespace::GTSignal_EmitMode const None;

/// @brief Field Others value: I32(0)
static ::GlobalNamespace::GTSignal_EmitMode const Others;

/// @brief Field Targets value: I32(1)
static ::GlobalNamespace::GTSignal_EmitMode const Targets;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2287};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTSignal_EmitMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTSignal_EmitMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
