#pragma once
// IWYU pragma private; include "GlobalNamespace/TargetPlatform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TargetPlatform)
// Forward declare root types
namespace GlobalNamespace {
struct TargetPlatform;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TargetPlatform);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TargetPlatform, "", "TargetPlatform");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: TargetPlatform
struct CORDL_TYPE TargetPlatform {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TargetPlatform_Unwrapped
enum struct __TargetPlatform_Unwrapped : int32_t {
__E_META = static_cast<int32_t>(0x0),
__E_SONY = static_cast<int32_t>(0x1),
__E_STEAM = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TargetPlatform_Unwrapped () const noexcept {
return static_cast<__TargetPlatform_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TargetPlatform() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TargetPlatform(int32_t  value__) noexcept;

/// @brief Field META value: I32(0)
static ::GlobalNamespace::TargetPlatform const META;

/// @brief Field SONY value: I32(1)
static ::GlobalNamespace::TargetPlatform const SONY;

/// @brief Field STEAM value: I32(2)
static ::GlobalNamespace::TargetPlatform const STEAM;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2870};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TargetPlatform, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TargetPlatform) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
