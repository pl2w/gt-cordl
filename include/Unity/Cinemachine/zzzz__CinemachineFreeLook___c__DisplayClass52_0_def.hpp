#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineFreeLook___c__DisplayClass52_0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CinemachineFreeLook___c__DisplayClass52_0)
namespace Unity::Cinemachine {
class CinemachineFreeLook;
}
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineFreeLook___c__DisplayClass52_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineFreeLook___c__DisplayClass52_0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineFreeLook___c__DisplayClass52_0, "Unity.Cinemachine", "CinemachineFreeLook/<>c__DisplayClass52_0");
// [CompilerGenerated]
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineFreeLook/<>c__DisplayClass52_0
struct CORDL_TYPE CinemachineFreeLook___c__DisplayClass52_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineFreeLook___c__DisplayClass52_0() ;

// Ctor Parameters [CppParam { name: "__4__this", ty: "::UnityW<::Unity::Cinemachine::CinemachineFreeLook>", modifiers: "", def_value: None, comment: None }, CppParam { name: "cameraOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineFreeLook___c__DisplayClass52_0(::UnityW<::Unity::Cinemachine::CinemachineFreeLook>  __4__this, ::UnityEngine::Vector3  cameraOffset) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22409};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <>4__this, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::Unity::Cinemachine::CinemachineFreeLook>  __4__this;

/// @brief Field cameraOffset, offset: 0x8, size: 0xc, def value: None
 ::UnityEngine::Vector3  cameraOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineFreeLook___c__DisplayClass52_0, __4__this) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineFreeLook___c__DisplayClass52_0, cameraOffset) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineFreeLook___c__DisplayClass52_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
