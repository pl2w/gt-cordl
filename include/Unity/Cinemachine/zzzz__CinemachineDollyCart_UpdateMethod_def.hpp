#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineDollyCart_UpdateMethod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineDollyCart_UpdateMethod)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineDollyCart_UpdateMethod;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineDollyCart_UpdateMethod);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineDollyCart_UpdateMethod, "Unity.Cinemachine", "CinemachineDollyCart/UpdateMethod");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineDollyCart/UpdateMethod
struct CORDL_TYPE CinemachineDollyCart_UpdateMethod {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CinemachineDollyCart_UpdateMethod_Unwrapped
enum struct __CinemachineDollyCart_UpdateMethod_Unwrapped : int32_t {
__E_Update = static_cast<int32_t>(0x0),
__E_FixedUpdate = static_cast<int32_t>(0x1),
__E_LateUpdate = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CinemachineDollyCart_UpdateMethod_Unwrapped () const noexcept {
return static_cast<__CinemachineDollyCart_UpdateMethod_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineDollyCart_UpdateMethod() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineDollyCart_UpdateMethod(int32_t  value__) noexcept;

/// @brief Field FixedUpdate value: I32(1)
static ::GlobalNamespace::CinemachineDollyCart_UpdateMethod const FixedUpdate;

/// @brief Field LateUpdate value: I32(2)
static ::GlobalNamespace::CinemachineDollyCart_UpdateMethod const LateUpdate;

/// @brief Field Update value: I32(0)
static ::GlobalNamespace::CinemachineDollyCart_UpdateMethod const Update;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22399};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineDollyCart_UpdateMethod, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineDollyCart_UpdateMethod) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
