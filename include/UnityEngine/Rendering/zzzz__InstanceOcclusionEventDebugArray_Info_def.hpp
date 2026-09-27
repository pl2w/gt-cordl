#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceOcclusionEventDebugArray_Info.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__InstanceOcclusionEventType_def.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionTest_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceOcclusionEventDebugArray_Info)
// Forward declare root types
namespace GlobalNamespace {
struct InstanceOcclusionEventDebugArray_Info;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InstanceOcclusionEventDebugArray_Info);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InstanceOcclusionEventDebugArray_Info, "UnityEngine.Rendering", "InstanceOcclusionEventDebugArray/Info");
// Dependencies UnityEngine.Rendering.InstanceOcclusionEventType, UnityEngine.Rendering.OcclusionTest
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceOcclusionEventDebugArray/Info
struct CORDL_TYPE InstanceOcclusionEventDebugArray_Info {
public:
// Declarations
/// @brief Method HasVersion, addr 0xb1f2f9c, size 0x24, virtual false, abstract: false, final false
inline bool HasVersion() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceOcclusionEventDebugArray_Info() ;

// Ctor Parameters [CppParam { name: "viewInstanceID", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "eventType", ty: "::UnityEngine::Rendering::InstanceOcclusionEventType", modifiers: "", def_value: None, comment: None }, CppParam { name: "occluderVersion", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "subviewMask", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "occlusionTest", ty: "::UnityEngine::Rendering::OcclusionTest", modifiers: "", def_value: None, comment: None }]
constexpr InstanceOcclusionEventDebugArray_Info(int32_t  viewInstanceID, ::UnityEngine::Rendering::InstanceOcclusionEventType  eventType, int32_t  occluderVersion, int32_t  subviewMask, ::UnityEngine::Rendering::OcclusionTest  occlusionTest) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26575};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field viewInstanceID, offset: 0x0, size: 0x4, def value: None
 int32_t  viewInstanceID;

/// @brief Field eventType, offset: 0x4, size: 0x4, def value: None
 ::UnityEngine::Rendering::InstanceOcclusionEventType  eventType;

/// @brief Field occluderVersion, offset: 0x8, size: 0x4, def value: None
 int32_t  occluderVersion;

/// @brief Field subviewMask, offset: 0xc, size: 0x4, def value: None
 int32_t  subviewMask;

/// @brief Field occlusionTest, offset: 0x10, size: 0x4, def value: None
 ::UnityEngine::Rendering::OcclusionTest  occlusionTest;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InstanceOcclusionEventDebugArray_Info, viewInstanceID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceOcclusionEventDebugArray_Info, eventType) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceOcclusionEventDebugArray_Info, occluderVersion) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceOcclusionEventDebugArray_Info, subviewMask) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceOcclusionEventDebugArray_Info, occlusionTest) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InstanceOcclusionEventDebugArray_Info) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace
