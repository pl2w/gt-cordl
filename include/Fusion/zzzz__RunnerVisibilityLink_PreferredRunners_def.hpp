#pragma once
// IWYU pragma private; include "Fusion/RunnerVisibilityLink_PreferredRunners.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RunnerVisibilityLink_PreferredRunners)
// Forward declare root types
namespace GlobalNamespace {
struct RunnerVisibilityLink_PreferredRunners;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RunnerVisibilityLink_PreferredRunners);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RunnerVisibilityLink_PreferredRunners, "Fusion", "RunnerVisibilityLink/PreferredRunners");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.RunnerVisibilityLink/PreferredRunners
struct CORDL_TYPE RunnerVisibilityLink_PreferredRunners {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RunnerVisibilityLink_PreferredRunners_Unwrapped
enum struct __RunnerVisibilityLink_PreferredRunners_Unwrapped : int32_t {
__E_Auto = static_cast<int32_t>(0x0),
__E_Server = static_cast<int32_t>(0x1),
__E_Client = static_cast<int32_t>(0x2),
__E_InputAuthority = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RunnerVisibilityLink_PreferredRunners_Unwrapped () const noexcept {
return static_cast<__RunnerVisibilityLink_PreferredRunners_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RunnerVisibilityLink_PreferredRunners() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RunnerVisibilityLink_PreferredRunners(int32_t  value__) noexcept;

/// @brief Field Auto value: I32(0)
static ::GlobalNamespace::RunnerVisibilityLink_PreferredRunners const Auto;

/// @brief Field Client value: I32(2)
static ::GlobalNamespace::RunnerVisibilityLink_PreferredRunners const Client;

/// @brief Field InputAuthority value: I32(3)
static ::GlobalNamespace::RunnerVisibilityLink_PreferredRunners const InputAuthority;

/// @brief Field Server value: I32(1)
static ::GlobalNamespace::RunnerVisibilityLink_PreferredRunners const Server;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23485};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RunnerVisibilityLink_PreferredRunners, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RunnerVisibilityLink_PreferredRunners) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
