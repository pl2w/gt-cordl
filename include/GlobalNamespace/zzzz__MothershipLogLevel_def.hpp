#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipLogLevel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MothershipLogLevel)
// Forward declare root types
namespace GlobalNamespace {
struct MothershipLogLevel;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MothershipLogLevel);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipLogLevel, "", "MothershipLogLevel");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: MothershipLogLevel
struct CORDL_TYPE MothershipLogLevel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MothershipLogLevel_Unwrapped
enum struct __MothershipLogLevel_Unwrapped : int32_t {
__E_INFO = static_cast<int32_t>(0x0),
__E_WARN = static_cast<int32_t>(0x1),
__E_ERROR = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MothershipLogLevel_Unwrapped () const noexcept {
return static_cast<__MothershipLogLevel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MothershipLogLevel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MothershipLogLevel(int32_t  value__) noexcept;

/// @brief Field ERROR value: I32(2)
static ::GlobalNamespace::MothershipLogLevel const ERROR;

/// @brief Field INFO value: I32(0)
static ::GlobalNamespace::MothershipLogLevel const INFO;

/// @brief Field WARN value: I32(1)
static ::GlobalNamespace::MothershipLogLevel const WARN;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9341};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipLogLevel, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipLogLevel) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
