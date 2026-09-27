#pragma once
// IWYU pragma private; include "BoingKit/BoingManager_UpdateMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BoingManager_UpdateMode)
// Forward declare root types
namespace GlobalNamespace {
struct BoingManager_UpdateMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BoingManager_UpdateMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BoingManager_UpdateMode, "BoingKit", "BoingManager/UpdateMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BoingKit.BoingManager/UpdateMode
struct CORDL_TYPE BoingManager_UpdateMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BoingManager_UpdateMode_Unwrapped
enum struct __BoingManager_UpdateMode_Unwrapped : int32_t {
__E_FixedUpdate = static_cast<int32_t>(0x0),
__E_EarlyUpdate = static_cast<int32_t>(0x1),
__E_LateUpdate = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BoingManager_UpdateMode_Unwrapped () const noexcept {
return static_cast<__BoingManager_UpdateMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BoingManager_UpdateMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BoingManager_UpdateMode(int32_t  value__) noexcept;

/// @brief Field EarlyUpdate value: I32(1)
static ::GlobalNamespace::BoingManager_UpdateMode const EarlyUpdate;

/// @brief Field FixedUpdate value: I32(0)
static ::GlobalNamespace::BoingManager_UpdateMode const FixedUpdate;

/// @brief Field LateUpdate value: I32(2)
static ::GlobalNamespace::BoingManager_UpdateMode const LateUpdate;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5175};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BoingManager_UpdateMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BoingManager_UpdateMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
