#pragma once
// IWYU pragma private; include "System/Net/ChainPolicyType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ChainPolicyType)
// Forward declare root types
namespace System::Net {
struct ChainPolicyType;
}
// Write type traits
MARK_VAL_T(::System::Net::ChainPolicyType);
DEFINE_IL2CPP_CLASS(::System::Net::ChainPolicyType, "System.Net", "ChainPolicyType");
// Dependencies 
namespace System::Net {
// Is value type: true
// CS Name: System.Net.ChainPolicyType
struct CORDL_TYPE ChainPolicyType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ChainPolicyType_Unwrapped
enum struct __ChainPolicyType_Unwrapped : int32_t {
__E_Base = static_cast<int32_t>(0x1),
__E_Authenticode = static_cast<int32_t>(0x2),
__E_Authenticode_TS = static_cast<int32_t>(0x3),
__E_SSL = static_cast<int32_t>(0x4),
__E_BasicConstraints = static_cast<int32_t>(0x5),
__E_NtAuth = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ChainPolicyType_Unwrapped () const noexcept {
return static_cast<__ChainPolicyType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ChainPolicyType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ChainPolicyType(int32_t  value__) noexcept;

/// @brief Field Authenticode value: I32(2)
static ::System::Net::ChainPolicyType const Authenticode;

/// @brief Field Authenticode_TS value: I32(3)
static ::System::Net::ChainPolicyType const Authenticode_TS;

/// @brief Field Base value: I32(1)
static ::System::Net::ChainPolicyType const Base;

/// @brief Field BasicConstraints value: I32(5)
static ::System::Net::ChainPolicyType const BasicConstraints;

/// @brief Field NtAuth value: I32(6)
static ::System::Net::ChainPolicyType const NtAuth;

/// @brief Field SSL value: I32(4)
static ::System::Net::ChainPolicyType const SSL;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10522};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::ChainPolicyType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Net::ChainPolicyType) == 0x4, "Size mismatch!");

} // namespace end def System::Net
