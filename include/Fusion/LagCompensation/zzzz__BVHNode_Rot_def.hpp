#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/BVHNode_Rot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BVHNode_Rot)
// Forward declare root types
namespace GlobalNamespace {
struct BVHNode_Rot;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BVHNode_Rot);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BVHNode_Rot, "Fusion.LagCompensation", "BVHNode/Rot");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.LagCompensation.BVHNode/Rot
struct CORDL_TYPE BVHNode_Rot {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BVHNode_Rot_Unwrapped
enum struct __BVHNode_Rot_Unwrapped : int32_t {
__E_NONE = static_cast<int32_t>(0x0),
__E_L_RL = static_cast<int32_t>(0x1),
__E_L_RR = static_cast<int32_t>(0x2),
__E_R_LL = static_cast<int32_t>(0x3),
__E_R_LR = static_cast<int32_t>(0x4),
__E_LL_RR = static_cast<int32_t>(0x5),
__E_LL_RL = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BVHNode_Rot_Unwrapped () const noexcept {
return static_cast<__BVHNode_Rot_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BVHNode_Rot() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BVHNode_Rot(int32_t  value__) noexcept;

/// @brief Field LL_RL value: I32(6)
static ::GlobalNamespace::BVHNode_Rot const LL_RL;

/// @brief Field LL_RR value: I32(5)
static ::GlobalNamespace::BVHNode_Rot const LL_RR;

/// @brief Field L_RL value: I32(1)
static ::GlobalNamespace::BVHNode_Rot const L_RL;

/// @brief Field L_RR value: I32(2)
static ::GlobalNamespace::BVHNode_Rot const L_RR;

/// @brief Field NONE value: I32(0)
static ::GlobalNamespace::BVHNode_Rot const NONE;

/// @brief Field R_LL value: I32(3)
static ::GlobalNamespace::BVHNode_Rot const R_LL;

/// @brief Field R_LR value: I32(4)
static ::GlobalNamespace::BVHNode_Rot const R_LR;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19388};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BVHNode_Rot, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BVHNode_Rot) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
