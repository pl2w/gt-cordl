#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTask`1_CombinedTaskDataWithCompletedTaskId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRTask`1_CombinedTaskData_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRTask`1_CombinedTaskDataWithCompletedTaskId)
// Forward declare root types
namespace GlobalNamespace {
template<typename TResult>
struct OVRTask_1_CombinedTaskDataWithCompletedTaskId;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::OVRTask_1_CombinedTaskDataWithCompletedTaskId);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::OVRTask_1_CombinedTaskDataWithCompletedTaskId, "", "OVRTask`1/CombinedTaskDataWithCompletedTaskId");
// Dependencies OVRTask`1::CombinedTaskData<TResult>, System.Guid
namespace GlobalNamespace {
// cpp template
template<typename TResult>
// Is value type: true
// CS Name: OVRTask`1/CombinedTaskDataWithCompletedTaskId<TResult>
struct CORDL_TYPE OVRTask_1_CombinedTaskDataWithCompletedTaskId {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRTask_1_CombinedTaskDataWithCompletedTaskId() ;

// Ctor Parameters [CppParam { name: "CompletedTaskId", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }, CppParam { name: "CombinedData", ty: "::GlobalNamespace::OVRTask_1_CombinedTaskData<TResult>", modifiers: "", def_value: None, comment: None }]
constexpr OVRTask_1_CombinedTaskDataWithCompletedTaskId(::System::Guid  CompletedTaskId, ::GlobalNamespace::OVRTask_1_CombinedTaskData<TResult>  CombinedData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12581};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field CompletedTaskId, offset: 0x0, size: 0x10, def value: None
 ::System::Guid  CompletedTaskId;

/// @brief Field CombinedData, offset: 0x10, size: 0x30, def value: None
 ::GlobalNamespace::OVRTask_1_CombinedTaskData<TResult>  CombinedData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
