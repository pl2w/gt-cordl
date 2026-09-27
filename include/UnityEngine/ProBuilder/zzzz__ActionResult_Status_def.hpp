#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/ActionResult_Status.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ActionResult_Status)
// Forward declare root types
namespace GlobalNamespace {
struct ActionResult_Status;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ActionResult_Status);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ActionResult_Status, "UnityEngine.ProBuilder", "ActionResult/Status");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ProBuilder.ActionResult/Status
struct CORDL_TYPE ActionResult_Status {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ActionResult_Status_Unwrapped
enum struct __ActionResult_Status_Unwrapped : int32_t {
__E_Success = static_cast<int32_t>(0x0),
__E_Failure = static_cast<int32_t>(0x1),
__E_Canceled = static_cast<int32_t>(0x2),
__E_NoChange = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ActionResult_Status_Unwrapped () const noexcept {
return static_cast<__ActionResult_Status_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ActionResult_Status() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ActionResult_Status(int32_t  value__) noexcept;

/// @brief Field Canceled value: I32(2)
static ::GlobalNamespace::ActionResult_Status const Canceled;

/// @brief Field Failure value: I32(1)
static ::GlobalNamespace::ActionResult_Status const Failure;

/// @brief Field NoChange value: I32(3)
static ::GlobalNamespace::ActionResult_Status const NoChange;

/// @brief Field Success value: I32(0)
static ::GlobalNamespace::ActionResult_Status const Success;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24178};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ActionResult_Status, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ActionResult_Status) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
