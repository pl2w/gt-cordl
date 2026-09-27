#pragma once
// IWYU pragma private; include "System/Globalization/HebrewNumber_HebrewValue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__HebrewNumber_HebrewToken_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HebrewNumber_HebrewValue)
namespace GlobalNamespace {
struct HebrewNumber_HebrewToken;
}
// Forward declare root types
namespace GlobalNamespace {
struct HebrewNumber_HebrewValue;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HebrewNumber_HebrewValue);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HebrewNumber_HebrewValue, "System.Globalization", "HebrewNumber/HebrewValue");
// Dependencies System.Globalization.HebrewNumber::HebrewToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Globalization.HebrewNumber/HebrewValue
struct CORDL_TYPE HebrewNumber_HebrewValue {
public:
// Declarations
/// @brief Method .ctor, addr 0xa2362c8, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::HebrewNumber_HebrewToken  token, int16_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr HebrewNumber_HebrewValue() ;

// Ctor Parameters [CppParam { name: "token", ty: "::GlobalNamespace::HebrewNumber_HebrewToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "value", ty: "int16_t", modifiers: "", def_value: None, comment: None }]
constexpr HebrewNumber_HebrewValue(::GlobalNamespace::HebrewNumber_HebrewToken  token, int16_t  value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6727};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field token, offset: 0x0, size: 0x2, def value: None
 ::GlobalNamespace::HebrewNumber_HebrewToken  token;

/// @brief Field value, offset: 0x2, size: 0x2, def value: None
 int16_t  value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HebrewNumber_HebrewValue, token) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HebrewNumber_HebrewValue, value) == 0x2, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HebrewNumber_HebrewValue) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
