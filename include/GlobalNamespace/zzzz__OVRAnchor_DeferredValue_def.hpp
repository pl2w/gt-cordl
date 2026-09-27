#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor_DeferredValue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRAnchor_DeferredValue)
// Forward declare root types
namespace GlobalNamespace {
struct OVRAnchor_DeferredValue;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRAnchor_DeferredValue);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRAnchor_DeferredValue, "", "OVRAnchor/DeferredValue");
// Dependencies OVRTask`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/DeferredValue
struct CORDL_TYPE OVRAnchor_DeferredValue {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRAnchor_DeferredValue() ;

// Ctor Parameters [CppParam { name: "Task", ty: "::GlobalNamespace::OVRTask_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "EnabledDesired", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Timeout", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "StartTime", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRAnchor_DeferredValue(::GlobalNamespace::OVRTask_1<bool>  Task, bool  EnabledDesired, uint64_t  RequestId, double_t  Timeout, float_t  StartTime) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11812};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field Task, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1<bool>  Task;

/// @brief Field EnabledDesired, offset: 0x10, size: 0x1, def value: None
 bool  EnabledDesired;

/// @brief Field RequestId, offset: 0x18, size: 0x8, def value: None
 uint64_t  RequestId;

/// @brief Field Timeout, offset: 0x20, size: 0x8, def value: None
 double_t  Timeout;

/// @brief Field StartTime, offset: 0x28, size: 0x4, def value: None
 float_t  StartTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRAnchor_DeferredValue, Task) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor_DeferredValue, EnabledDesired) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor_DeferredValue, RequestId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor_DeferredValue, Timeout) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor_DeferredValue, StartTime) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRAnchor_DeferredValue) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
