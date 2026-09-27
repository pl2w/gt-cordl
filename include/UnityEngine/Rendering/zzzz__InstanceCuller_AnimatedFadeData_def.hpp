#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceCuller_AnimatedFadeData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceCuller_AnimatedFadeData)
// Forward declare root types
namespace GlobalNamespace {
struct InstanceCuller_AnimatedFadeData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InstanceCuller_AnimatedFadeData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InstanceCuller_AnimatedFadeData, "UnityEngine.Rendering", "InstanceCuller/AnimatedFadeData");
// Dependencies Unity.Jobs.JobHandle
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceCuller/AnimatedFadeData
struct CORDL_TYPE InstanceCuller_AnimatedFadeData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InstanceCuller_AnimatedFadeData() ;

// Ctor Parameters [CppParam { name: "cameraID", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "jobHandle", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: None, comment: None }]
constexpr InstanceCuller_AnimatedFadeData(int32_t  cameraID, ::Unity::Jobs::JobHandle  jobHandle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26578};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field cameraID, offset: 0x0, size: 0x4, def value: None
 int32_t  cameraID;

/// @brief Field jobHandle, offset: 0x8, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  jobHandle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InstanceCuller_AnimatedFadeData, cameraID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstanceCuller_AnimatedFadeData, jobHandle) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InstanceCuller_AnimatedFadeData) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
