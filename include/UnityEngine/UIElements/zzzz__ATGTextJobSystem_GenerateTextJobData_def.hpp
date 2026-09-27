#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ATGTextJobSystem_GenerateTextJobData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ATGTextJobSystem_GenerateTextJobData)
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace GlobalNamespace {
struct ATGTextJobSystem_GenerateTextJobData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ATGTextJobSystem_GenerateTextJobData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ATGTextJobSystem_GenerateTextJobData, "UnityEngine.UIElements", "ATGTextJobSystem/GenerateTextJobData");
// Dependencies System.Runtime.InteropServices.GCHandle
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.ATGTextJobSystem/GenerateTextJobData
struct CORDL_TYPE ATGTextJobSystem_GenerateTextJobData {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0xb798d3c, size 0x1e4, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr ATGTextJobSystem_GenerateTextJobData() ;

// Ctor Parameters [CppParam { name: "managedJobDataHandle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None, comment: None }]
constexpr ATGTextJobSystem_GenerateTextJobData(::System::Runtime::InteropServices::GCHandle  managedJobDataHandle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8296};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field managedJobDataHandle, offset: 0x0, size: 0x8, def value: None
 ::System::Runtime::InteropServices::GCHandle  managedJobDataHandle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ATGTextJobSystem_GenerateTextJobData, managedJobDataHandle) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ATGTextJobSystem_GenerateTextJobData) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
