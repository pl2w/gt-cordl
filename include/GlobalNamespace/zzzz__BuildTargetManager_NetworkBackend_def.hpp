#pragma once
// IWYU pragma private; include "GlobalNamespace/BuildTargetManager_NetworkBackend.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuildTargetManager_NetworkBackend)
// Forward declare root types
namespace GlobalNamespace {
struct BuildTargetManager_NetworkBackend;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuildTargetManager_NetworkBackend);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuildTargetManager_NetworkBackend, "", "BuildTargetManager/NetworkBackend");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BuildTargetManager/NetworkBackend
struct CORDL_TYPE BuildTargetManager_NetworkBackend {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BuildTargetManager_NetworkBackend_Unwrapped
enum struct __BuildTargetManager_NetworkBackend_Unwrapped : int32_t {
__E_Pun = static_cast<int32_t>(0x0),
__E_Fusion = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BuildTargetManager_NetworkBackend_Unwrapped () const noexcept {
return static_cast<__BuildTargetManager_NetworkBackend_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BuildTargetManager_NetworkBackend() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BuildTargetManager_NetworkBackend(int32_t  value__) noexcept;

/// @brief Field Fusion value: I32(1)
static ::GlobalNamespace::BuildTargetManager_NetworkBackend const Fusion;

/// @brief Field Pun value: I32(0)
static ::GlobalNamespace::BuildTargetManager_NetworkBackend const Pun;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3434};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuildTargetManager_NetworkBackend, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuildTargetManager_NetworkBackend) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
