#pragma once
// IWYU pragma private; include "Modio/ModioServicePriority.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModioServicePriority)
// Forward declare root types
namespace Modio {
struct ModioServicePriority;
}
// Write type traits
MARK_VAL_T(::Modio::ModioServicePriority);
DEFINE_IL2CPP_CLASS(::Modio::ModioServicePriority, "Modio", "ModioServicePriority");
// Dependencies 
namespace Modio {
// Is value type: true
// CS Name: Modio.ModioServicePriority
struct CORDL_TYPE ModioServicePriority {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ModioServicePriority_Unwrapped
enum struct __ModioServicePriority_Unwrapped : int32_t {
__E_Fallback = static_cast<int32_t>(0x0),
__E_Default = static_cast<int32_t>(0xa),
__E_EngineImplementation = static_cast<int32_t>(0x14),
__E_PlatformProvided = static_cast<int32_t>(0x1e),
__E_DeveloperOverride = static_cast<int32_t>(0x28),
__E_UnitTestOverride = static_cast<int32_t>(0x64),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ModioServicePriority_Unwrapped () const noexcept {
return static_cast<__ModioServicePriority_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ModioServicePriority() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ModioServicePriority(int32_t  value__) noexcept;

/// @brief Field Default value: I32(10)
static ::Modio::ModioServicePriority const Default;

/// @brief Field DeveloperOverride value: I32(40)
static ::Modio::ModioServicePriority const DeveloperOverride;

/// @brief Field EngineImplementation value: I32(20)
static ::Modio::ModioServicePriority const EngineImplementation;

/// @brief Field Fallback value: I32(0)
static ::Modio::ModioServicePriority const Fallback;

/// @brief Field PlatformProvided value: I32(30)
static ::Modio::ModioServicePriority const PlatformProvided;

/// @brief Field UnitTestOverride value: I32(100)
static ::Modio::ModioServicePriority const UnitTestOverride;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17499};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::ModioServicePriority, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::ModioServicePriority) == 0x4, "Size mismatch!");

} // namespace end def Modio
