#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAcousticGeometry_LoadState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MetaXRAcousticGeometry_LoadState)
// Forward declare root types
namespace GlobalNamespace {
struct MetaXRAcousticGeometry_LoadState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MetaXRAcousticGeometry_LoadState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAcousticGeometry_LoadState, "", "MetaXRAcousticGeometry/LoadState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: MetaXRAcousticGeometry/LoadState
struct CORDL_TYPE MetaXRAcousticGeometry_LoadState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MetaXRAcousticGeometry_LoadState_Unwrapped
enum struct __MetaXRAcousticGeometry_LoadState_Unwrapped : int32_t {
__E_NotLoaded = static_cast<int32_t>(0x0),
__E_Loading = static_cast<int32_t>(0x1),
__E_Interrupted = static_cast<int32_t>(0x2),
__E_Loaded = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MetaXRAcousticGeometry_LoadState_Unwrapped () const noexcept {
return static_cast<__MetaXRAcousticGeometry_LoadState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAcousticGeometry_LoadState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MetaXRAcousticGeometry_LoadState(int32_t  value__) noexcept;

/// @brief Field Interrupted value: I32(2)
static ::GlobalNamespace::MetaXRAcousticGeometry_LoadState const Interrupted;

/// @brief Field Loaded value: I32(3)
static ::GlobalNamespace::MetaXRAcousticGeometry_LoadState const Loaded;

/// @brief Field Loading value: I32(1)
static ::GlobalNamespace::MetaXRAcousticGeometry_LoadState const Loading;

/// @brief Field NotLoaded value: I32(0)
static ::GlobalNamespace::MetaXRAcousticGeometry_LoadState const NotLoaded;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29911};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry_LoadState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetaXRAcousticGeometry_LoadState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
