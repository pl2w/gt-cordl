#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_LogLevel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_LogLevel)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_LogLevel;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_LogLevel);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_LogLevel, "", "OVRPlugin/LogLevel");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/LogLevel
struct CORDL_TYPE OVRPlugin_LogLevel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_LogLevel_Unwrapped
enum struct __OVRPlugin_LogLevel_Unwrapped : int32_t {
__E_Debug = static_cast<int32_t>(0x0),
__E_Info = static_cast<int32_t>(0x1),
__E_Error = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_LogLevel_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_LogLevel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_LogLevel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_LogLevel(int32_t  value__) noexcept;

/// @brief Field Debug value: I32(0)
static ::GlobalNamespace::OVRPlugin_LogLevel const Debug;

/// @brief Field Error value: I32(2)
static ::GlobalNamespace::OVRPlugin_LogLevel const Error;

/// @brief Field Info value: I32(1)
static ::GlobalNamespace::OVRPlugin_LogLevel const Info;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12048};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_LogLevel, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_LogLevel) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
