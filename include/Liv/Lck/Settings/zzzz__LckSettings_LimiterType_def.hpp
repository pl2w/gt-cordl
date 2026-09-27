#pragma once
// IWYU pragma private; include "Liv/Lck/Settings/LckSettings_LimiterType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckSettings_LimiterType)
// Forward declare root types
namespace GlobalNamespace {
struct LckSettings_LimiterType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckSettings_LimiterType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckSettings_LimiterType, "Liv.Lck.Settings", "LckSettings/LimiterType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.Settings.LckSettings/LimiterType
struct CORDL_TYPE LckSettings_LimiterType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LckSettings_LimiterType_Unwrapped
enum struct __LckSettings_LimiterType_Unwrapped : int32_t {
__E_SoftClip = static_cast<int32_t>(0x0),
__E_None = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LckSettings_LimiterType_Unwrapped () const noexcept {
return static_cast<__LckSettings_LimiterType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LckSettings_LimiterType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LckSettings_LimiterType(int32_t  value__) noexcept;

/// @brief Field None value: I32(1)
static ::GlobalNamespace::LckSettings_LimiterType const None;

/// @brief Field SoftClip value: I32(0)
static ::GlobalNamespace::LckSettings_LimiterType const SoftClip;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24866};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckSettings_LimiterType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckSettings_LimiterType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
