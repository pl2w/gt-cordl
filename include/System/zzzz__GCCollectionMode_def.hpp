#pragma once
// IWYU pragma private; include "System/GCCollectionMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GCCollectionMode)
// Forward declare root types
namespace System {
struct GCCollectionMode;
}
// Write type traits
MARK_VAL_T(::System::GCCollectionMode);
DEFINE_IL2CPP_CLASS(::System::GCCollectionMode, "System", "GCCollectionMode");
// Dependencies 
namespace System {
// Is value type: true
// CS Name: System.GCCollectionMode
struct CORDL_TYPE GCCollectionMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GCCollectionMode_Unwrapped
enum struct __GCCollectionMode_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_Forced = static_cast<int32_t>(0x1),
__E_Optimized = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GCCollectionMode_Unwrapped () const noexcept {
return static_cast<__GCCollectionMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GCCollectionMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GCCollectionMode(int32_t  value__) noexcept;

/// @brief Field Default value: I32(0)
static ::System::GCCollectionMode const Default;

/// @brief Field Forced value: I32(1)
static ::System::GCCollectionMode const Forced;

/// @brief Field Optimized value: I32(2)
static ::System::GCCollectionMode const Optimized;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5685};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::GCCollectionMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::GCCollectionMode) == 0x4, "Size mismatch!");

} // namespace end def System
