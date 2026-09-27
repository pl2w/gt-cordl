#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UITKTextJobSystem_GenerateTextJobData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "UnityEngine/UIElements/zzzz__TempMeshAllocator_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UITKTextJobSystem_GenerateTextJobData)
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace GlobalNamespace {
struct UITKTextJobSystem_GenerateTextJobData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UITKTextJobSystem_GenerateTextJobData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UITKTextJobSystem_GenerateTextJobData, "UnityEngine.UIElements", "UITKTextJobSystem/GenerateTextJobData");
// Dependencies System.Runtime.InteropServices.GCHandle, UnityEngine.UIElements.TempMeshAllocator
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.UITKTextJobSystem/GenerateTextJobData
struct CORDL_TYPE UITKTextJobSystem_GenerateTextJobData {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0xb7a867c, size 0x22c, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr UITKTextJobSystem_GenerateTextJobData() ;

// Ctor Parameters [CppParam { name: "managedJobDataHandle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "alloc", ty: "::UnityEngine::UIElements::TempMeshAllocator", modifiers: "", def_value: None, comment: None }]
constexpr UITKTextJobSystem_GenerateTextJobData(::System::Runtime::InteropServices::GCHandle  managedJobDataHandle, ::UnityEngine::UIElements::TempMeshAllocator  alloc) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8313};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field managedJobDataHandle, offset: 0x0, size: 0x8, def value: None
 ::System::Runtime::InteropServices::GCHandle  managedJobDataHandle;

/// [ReadOnly]
/// @brief Field alloc, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::UIElements::TempMeshAllocator  alloc;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UITKTextJobSystem_GenerateTextJobData, managedJobDataHandle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UITKTextJobSystem_GenerateTextJobData, alloc) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UITKTextJobSystem_GenerateTextJobData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
