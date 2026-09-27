#pragma once
// IWYU pragma private; include "Fusion/NetworkRunner_BuildTypes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkRunner_BuildTypes)
// Forward declare root types
namespace GlobalNamespace {
struct NetworkRunner_BuildTypes;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkRunner_BuildTypes);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkRunner_BuildTypes, "Fusion", "NetworkRunner/BuildTypes");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.NetworkRunner/BuildTypes
struct CORDL_TYPE NetworkRunner_BuildTypes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetworkRunner_BuildTypes_Unwrapped
enum struct __NetworkRunner_BuildTypes_Unwrapped : int32_t {
__E_Debug = static_cast<int32_t>(0x0),
__E_Release = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkRunner_BuildTypes_Unwrapped () const noexcept {
return static_cast<__NetworkRunner_BuildTypes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetworkRunner_BuildTypes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkRunner_BuildTypes(int32_t  value__) noexcept;

/// @brief Field Debug value: I32(0)
static ::GlobalNamespace::NetworkRunner_BuildTypes const Debug;

/// @brief Field Release value: I32(1)
static ::GlobalNamespace::NetworkRunner_BuildTypes const Release;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19200};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkRunner_BuildTypes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkRunner_BuildTypes) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
