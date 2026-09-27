#pragma once
// IWYU pragma private; include "Drawing/DrawingData_ProcessedBuilderDataContainer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Drawing/zzzz__DrawingData_ProcessedBuilderData_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawingData_ProcessedBuilderDataContainer)
namespace Drawing {
class DrawingData;
}
namespace Drawing {
struct RedrawScope;
}
namespace GlobalNamespace {
struct BuilderData_DrawingData_Meta;
}
namespace GlobalNamespace {
struct DrawingData_Hasher;
}
namespace GlobalNamespace {
struct DrawingData_ProcessedBuilderData;
}
namespace GlobalNamespace {
struct DrawingData_RenderedMeshWithType;
}
namespace GlobalNamespace {
struct ProcessedBuilderData_DrawingData_Type;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
struct DrawingData_ProcessedBuilderDataContainer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer, "Drawing", "DrawingData/ProcessedBuilderDataContainer");
// Dependencies Drawing.DrawingData::ProcessedBuilderData
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.DrawingData/ProcessedBuilderDataContainer
struct CORDL_TYPE DrawingData_ProcessedBuilderDataContainer {
public:
// Declarations
 __declspec(property(get=get_memoryUsage)) int32_t  memoryUsage;

/// @brief Method CollectMeshes, addr 0x55cde84, size 0xd4, virtual false, abstract: false, final false
inline void CollectMeshes(int32_t  versionThreshold, ::System::Collections::Generic::List_1<::GlobalNamespace::DrawingData_RenderedMeshWithType>*  meshes, ::UnityEngine::Camera*  camera, bool  allowGizmos, bool  allowCameraDefault) ;

/// @brief Method Dispose, addr 0x55ce63c, size 0xb0, virtual false, abstract: false, final false
inline void Dispose(::Drawing::DrawingData*  gizmos) ;

/// @brief Method FilterOldPersistentCommands, addr 0x55ccb24, size 0xa0, virtual false, abstract: false, final false
inline void FilterOldPersistentCommands(int32_t  version, int32_t  lastTickVersion, float_t  time, int32_t  sceneModeVersion) ;

/// @brief Method Get, addr 0x55d10e4, size 0x6c, virtual false, abstract: false, final false
inline ::by_ref<::GlobalNamespace::DrawingData_ProcessedBuilderData> Get(int32_t  index) ;

/// @brief Method PoolDynamicMeshes, addr 0x55cdf58, size 0x8c, virtual false, abstract: false, final false
inline void PoolDynamicMeshes(::Drawing::DrawingData*  gizmos) ;

/// @brief Method Release, addr 0x55d2288, size 0x18c, virtual false, abstract: false, final false
inline void Release(::Drawing::DrawingData*  gizmos, int32_t  i) ;

/// @brief Method ReleaseAllWithHash, addr 0x55cc350, size 0x8c, virtual false, abstract: false, final false
inline void ReleaseAllWithHash(::Drawing::DrawingData*  gizmos, ::GlobalNamespace::DrawingData_Hasher  hasher) ;

/// @brief Method ReleaseDataOlderThan, addr 0x55ccbc4, size 0x8c, virtual false, abstract: false, final false
inline void ReleaseDataOlderThan(::Drawing::DrawingData*  gizmos, int32_t  version) ;

/// @brief Method Reserve, addr 0x55d0cb0, size 0x434, virtual false, abstract: false, final false
inline int32_t Reserve(::GlobalNamespace::ProcessedBuilderData_DrawingData_Type  type, ::GlobalNamespace::BuilderData_DrawingData_Meta  meta) ;

/// @brief Method SetCustomScope, addr 0x55cc5d0, size 0x108, virtual false, abstract: false, final false
inline bool SetCustomScope(::GlobalNamespace::DrawingData_Hasher  hasher, ::Drawing::RedrawScope  scope) ;

/// @brief Method SetVersion, addr 0x55cc44c, size 0x104, virtual false, abstract: false, final false
inline bool SetVersion(::GlobalNamespace::DrawingData_Hasher  hasher, int32_t  version) ;

/// @brief Method SetVersion, addr 0x55cc6d8, size 0x64, virtual false, abstract: false, final false
inline bool SetVersion(::Drawing::RedrawScope  scope, int32_t  version) ;

/// @brief Method SubmitMeshes, addr 0x55cdcf0, size 0x194, virtual false, abstract: false, final false
inline void SubmitMeshes(::Drawing::DrawingData*  gizmos, ::UnityEngine::Camera*  camera, int32_t  versionThreshold, bool  allowGizmos, bool  allowCameraDefault) ;

/// @brief Method get_memoryUsage, addr 0x55ccdec, size 0x298, virtual false, abstract: false, final false
inline int32_t get_memoryUsage() ;

// Ctor Parameters []
// @brief default ctor
constexpr DrawingData_ProcessedBuilderDataContainer() ;

// Ctor Parameters [CppParam { name: "data", ty: "::ArrayW<::GlobalNamespace::DrawingData_ProcessedBuilderData>", modifiers: "", def_value: None, comment: None }, CppParam { name: "hash2index", ty: "::System::Collections::Generic::Dictionary_2<uint64_t,::System::Collections::Generic::List_1<int32_t>*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "freeSlots", ty: "::System::Collections::Generic::Stack_1<int32_t>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "freeLists", ty: "::System::Collections::Generic::Stack_1<::System::Collections::Generic::List_1<int32_t>*>*", modifiers: "", def_value: None, comment: None }]
constexpr DrawingData_ProcessedBuilderDataContainer(::ArrayW<::GlobalNamespace::DrawingData_ProcessedBuilderData>  data, ::System::Collections::Generic::Dictionary_2<uint64_t,::System::Collections::Generic::List_1<int32_t>*>*  hash2index, ::System::Collections::Generic::Stack_1<int32_t>*  freeSlots, ::System::Collections::Generic::Stack_1<::System::Collections::Generic::List_1<int32_t>*>*  freeLists) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27744};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field data, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::DrawingData_ProcessedBuilderData>  data;

/// @brief Field hash2index, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<uint64_t,::System::Collections::Generic::List_1<int32_t>*>*  hash2index;

/// @brief Field freeSlots, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<int32_t>*  freeSlots;

/// @brief Field freeLists, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<::System::Collections::Generic::List_1<int32_t>*>*  freeLists;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer, data) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer, hash2index) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer, freeSlots) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer, freeLists) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
