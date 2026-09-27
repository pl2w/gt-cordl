#pragma once
// IWYU pragma private; include "Fusion/Topologies.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Topologies)
// Forward declare root types
namespace Fusion {
struct Topologies;
}
// Write type traits
MARK_VAL_T(::Fusion::Topologies);
DEFINE_IL2CPP_CLASS(::Fusion::Topologies, "Fusion", "Topologies");
// [Flags]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.Topologies
struct CORDL_TYPE Topologies {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Topologies_Unwrapped
enum struct __Topologies_Unwrapped : int32_t {
__E_ClientServer = static_cast<int32_t>(0x1),
__E_Shared = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Topologies_Unwrapped () const noexcept {
return static_cast<__Topologies_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Topologies() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Topologies(int32_t  value__) noexcept;

/// @brief Field ClientServer value: I32(1)
static ::Fusion::Topologies const ClientServer;

/// @brief Field Shared value: I32(2)
static ::Fusion::Topologies const Shared;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19329};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Topologies, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::Topologies) == 0x4, "Size mismatch!");

} // namespace end def Fusion
