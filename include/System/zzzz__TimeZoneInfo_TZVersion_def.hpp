#pragma once
// IWYU pragma private; include "System/TimeZoneInfo_TZVersion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeZoneInfo_TZVersion)
// Forward declare root types
namespace GlobalNamespace {
struct TimeZoneInfo_TZVersion;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TimeZoneInfo_TZVersion);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TimeZoneInfo_TZVersion, "System", "TimeZoneInfo/TZVersion");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.TimeZoneInfo/TZVersion
struct CORDL_TYPE TimeZoneInfo_TZVersion {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __TimeZoneInfo_TZVersion_Unwrapped
enum struct __TimeZoneInfo_TZVersion_Unwrapped : uint8_t {
__E_V1 = static_cast<uint8_t>(0x0u),
__E_V2 = static_cast<uint8_t>(0x1u),
__E_V3 = static_cast<uint8_t>(0x2u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TimeZoneInfo_TZVersion_Unwrapped () const noexcept {
return static_cast<__TimeZoneInfo_TZVersion_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TimeZoneInfo_TZVersion() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr TimeZoneInfo_TZVersion(uint8_t  value__) noexcept;

/// @brief Field V1 value: U8(0)
static ::GlobalNamespace::TimeZoneInfo_TZVersion const V1;

/// @brief Field V2 value: U8(1)
static ::GlobalNamespace::TimeZoneInfo_TZVersion const V2;

/// @brief Field V3 value: U8(2)
static ::GlobalNamespace::TimeZoneInfo_TZVersion const V3;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5417};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimeZoneInfo_TZVersion, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TimeZoneInfo_TZVersion) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
