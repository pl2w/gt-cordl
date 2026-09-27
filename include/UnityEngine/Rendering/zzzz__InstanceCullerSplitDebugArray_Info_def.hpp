#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceCullerSplitDebugArray_Info.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__BatchCullingViewType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceCullerSplitDebugArray_Info)
// Forward declare root types
namespace GlobalNamespace {
struct InstanceCullerSplitDebugArray_Info;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InstanceCullerSplitDebugArray_Info);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InstanceCullerSplitDebugArray_Info, "UnityEngine.Rendering", "InstanceCullerSplitDebugArray/Info");
// Dependencies UnityEngine.Rendering.BatchCullingViewType
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceCullerSplitDebugArray/Info
struct CORDL_TYPE InstanceCullerSplitDebugArray_Info {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InstanceCullerSplitDebugArray_Info() ;

// Ctor Parameters [CppParam { name: "viewType", ty: "::UnityEngine::Rendering::BatchCullingViewType", modifiers: "", def_value: None, comment: None }, CppParam { name: "viewInstanceID", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "splitIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InstanceCullerSplitDebugArray_Info(::UnityEngine::Rendering::BatchCullingViewType  viewType, int32_t  viewInstanceID, int32_t  splitIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26573};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field viewType, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::Rendering::BatchCullingViewType  viewType;

/// @brief Field viewInstanceID, offset: 0x4, size: 0x4, def value: None
 int32_t  viewInstanceID;

/// @brief Field splitIndex, offset: 0x8, size: 0x4, def value: None
 int32_t  splitIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InstanceCullerSplitDebugArray_Info, viewType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceCullerSplitDebugArray_Info, viewInstanceID) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceCullerSplitDebugArray_Info, splitIndex) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InstanceCullerSplitDebugArray_Info) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
