#pragma once
// IWYU pragma private; include "Liv/Lck/DependencyInjection/LckDiServiceRegistration_ServiceLifetime.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckDiServiceRegistration_ServiceLifetime)
// Forward declare root types
namespace GlobalNamespace {
struct LckDiServiceRegistration_ServiceLifetime;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckDiServiceRegistration_ServiceLifetime);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckDiServiceRegistration_ServiceLifetime, "Liv.Lck.DependencyInjection", "LckDiServiceRegistration/ServiceLifetime");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.DependencyInjection.LckDiServiceRegistration/ServiceLifetime
struct CORDL_TYPE LckDiServiceRegistration_ServiceLifetime {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LckDiServiceRegistration_ServiceLifetime_Unwrapped
enum struct __LckDiServiceRegistration_ServiceLifetime_Unwrapped : int32_t {
__E_Transient = static_cast<int32_t>(0x0),
__E_Singleton = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LckDiServiceRegistration_ServiceLifetime_Unwrapped () const noexcept {
return static_cast<__LckDiServiceRegistration_ServiceLifetime_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LckDiServiceRegistration_ServiceLifetime() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LckDiServiceRegistration_ServiceLifetime(int32_t  value__) noexcept;

/// @brief Field Singleton value: I32(1)
static ::GlobalNamespace::LckDiServiceRegistration_ServiceLifetime const Singleton;

/// @brief Field Transient value: I32(0)
static ::GlobalNamespace::LckDiServiceRegistration_ServiceLifetime const Transient;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24813};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckDiServiceRegistration_ServiceLifetime, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckDiServiceRegistration_ServiceLifetime) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
