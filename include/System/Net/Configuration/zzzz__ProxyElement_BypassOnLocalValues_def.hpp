#pragma once
// IWYU pragma private; include "System/Net/Configuration/ProxyElement_BypassOnLocalValues.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProxyElement_BypassOnLocalValues)
// Forward declare root types
namespace GlobalNamespace {
struct ProxyElement_BypassOnLocalValues;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProxyElement_BypassOnLocalValues);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProxyElement_BypassOnLocalValues, "System.Net.Configuration", "ProxyElement/BypassOnLocalValues");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.Configuration.ProxyElement/BypassOnLocalValues
struct CORDL_TYPE ProxyElement_BypassOnLocalValues {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ProxyElement_BypassOnLocalValues_Unwrapped
enum struct __ProxyElement_BypassOnLocalValues_Unwrapped : int32_t {
__E_False = static_cast<int32_t>(0x0),
__E_True = static_cast<int32_t>(0x1),
__E_Unspecified = static_cast<int32_t>(0xffffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ProxyElement_BypassOnLocalValues_Unwrapped () const noexcept {
return static_cast<__ProxyElement_BypassOnLocalValues_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ProxyElement_BypassOnLocalValues() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ProxyElement_BypassOnLocalValues(int32_t  value__) noexcept;

/// @brief Field False value: I32(0)
static ::GlobalNamespace::ProxyElement_BypassOnLocalValues const False;

/// @brief Field True value: I32(1)
static ::GlobalNamespace::ProxyElement_BypassOnLocalValues const True;

/// @brief Field Unspecified value: I32(-1)
static ::GlobalNamespace::ProxyElement_BypassOnLocalValues const Unspecified;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10987};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProxyElement_BypassOnLocalValues, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProxyElement_BypassOnLocalValues) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
