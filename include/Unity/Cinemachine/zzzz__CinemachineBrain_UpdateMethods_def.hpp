#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineBrain_UpdateMethods.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineBrain_UpdateMethods)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineBrain_UpdateMethods;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineBrain_UpdateMethods);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineBrain_UpdateMethods, "Unity.Cinemachine", "CinemachineBrain/UpdateMethods");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineBrain/UpdateMethods
struct CORDL_TYPE CinemachineBrain_UpdateMethods {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CinemachineBrain_UpdateMethods_Unwrapped
enum struct __CinemachineBrain_UpdateMethods_Unwrapped : int32_t {
__E_FixedUpdate = static_cast<int32_t>(0x0),
__E_LateUpdate = static_cast<int32_t>(0x1),
__E_SmartUpdate = static_cast<int32_t>(0x2),
__E_ManualUpdate = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CinemachineBrain_UpdateMethods_Unwrapped () const noexcept {
return static_cast<__CinemachineBrain_UpdateMethods_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineBrain_UpdateMethods() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineBrain_UpdateMethods(int32_t  value__) noexcept;

/// @brief Field FixedUpdate value: I32(0)
static ::GlobalNamespace::CinemachineBrain_UpdateMethods const FixedUpdate;

/// @brief Field LateUpdate value: I32(1)
static ::GlobalNamespace::CinemachineBrain_UpdateMethods const LateUpdate;

/// @brief Field ManualUpdate value: I32(3)
static ::GlobalNamespace::CinemachineBrain_UpdateMethods const ManualUpdate;

/// @brief Field SmartUpdate value: I32(2)
static ::GlobalNamespace::CinemachineBrain_UpdateMethods const SmartUpdate;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22140};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineBrain_UpdateMethods, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineBrain_UpdateMethods) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
