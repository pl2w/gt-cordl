#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/TempMeshAllocatorImpl_ThreadData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(TempMeshAllocatorImpl_ThreadData)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
struct TempMeshAllocatorImpl_ThreadData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TempMeshAllocatorImpl_ThreadData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TempMeshAllocatorImpl_ThreadData, "UnityEngine.UIElements.UIR", "TempMeshAllocatorImpl/ThreadData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.TempMeshAllocatorImpl/ThreadData
struct CORDL_TYPE TempMeshAllocatorImpl_ThreadData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TempMeshAllocatorImpl_ThreadData() ;

// Ctor Parameters [CppParam { name: "allocations", ty: "::System::Collections::Generic::List_1<::System::IntPtr>*", modifiers: "", def_value: None, comment: None }]
constexpr TempMeshAllocatorImpl_ThreadData(::System::Collections::Generic::List_1<::System::IntPtr>*  allocations) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8583};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field allocations, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::IntPtr>*  allocations;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TempMeshAllocatorImpl_ThreadData, allocations) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TempMeshAllocatorImpl_ThreadData) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
