#pragma once
// IWYU pragma private; include "GlobalNamespace/BuildTargetManager_BuildTowards.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuildTargetManager_BuildTowards)
// Forward declare root types
namespace GlobalNamespace {
struct BuildTargetManager_BuildTowards;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuildTargetManager_BuildTowards);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuildTargetManager_BuildTowards, "", "BuildTargetManager/BuildTowards");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BuildTargetManager/BuildTowards
struct CORDL_TYPE BuildTargetManager_BuildTowards {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BuildTargetManager_BuildTowards_Unwrapped
enum struct __BuildTargetManager_BuildTowards_Unwrapped : int32_t {
__E_Steam = static_cast<int32_t>(0x0),
__E_OculusPC = static_cast<int32_t>(0x1),
__E_Quest = static_cast<int32_t>(0x2),
__E_Viveport = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BuildTargetManager_BuildTowards_Unwrapped () const noexcept {
return static_cast<__BuildTargetManager_BuildTowards_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BuildTargetManager_BuildTowards() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BuildTargetManager_BuildTowards(int32_t  value__) noexcept;

/// @brief Field OculusPC value: I32(1)
static ::GlobalNamespace::BuildTargetManager_BuildTowards const OculusPC;

/// @brief Field Quest value: I32(2)
static ::GlobalNamespace::BuildTargetManager_BuildTowards const Quest;

/// @brief Field Steam value: I32(0)
static ::GlobalNamespace::BuildTargetManager_BuildTowards const Steam;

/// @brief Field Viveport value: I32(3)
static ::GlobalNamespace::BuildTargetManager_BuildTowards const Viveport;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3433};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuildTargetManager_BuildTowards, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuildTargetManager_BuildTowards) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
