#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMeshPathStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NavMeshPathStatus)
// Forward declare root types
namespace UnityEngine::AI {
struct NavMeshPathStatus;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AI::NavMeshPathStatus);
DEFINE_IL2CPP_CLASS(::UnityEngine::AI::NavMeshPathStatus, "UnityEngine.AI", "NavMeshPathStatus");
// [MovedFrom("UnityEngine")]
// Dependencies 
namespace UnityEngine::AI {
// Is value type: true
// CS Name: UnityEngine.AI.NavMeshPathStatus
struct CORDL_TYPE NavMeshPathStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NavMeshPathStatus_Unwrapped
enum struct __NavMeshPathStatus_Unwrapped : int32_t {
__E_PathComplete = static_cast<int32_t>(0x0),
__E_PathPartial = static_cast<int32_t>(0x1),
__E_PathInvalid = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NavMeshPathStatus_Unwrapped () const noexcept {
return static_cast<__NavMeshPathStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NavMeshPathStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NavMeshPathStatus(int32_t  value__) noexcept;

/// @brief Field PathComplete value: I32(0)
static ::UnityEngine::AI::NavMeshPathStatus const PathComplete;

/// @brief Field PathInvalid value: I32(2)
static ::UnityEngine::AI::NavMeshPathStatus const PathInvalid;

/// @brief Field PathPartial value: I32(1)
static ::UnityEngine::AI::NavMeshPathStatus const PathPartial;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32109};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AI::NavMeshPathStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AI::NavMeshPathStatus) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::AI
