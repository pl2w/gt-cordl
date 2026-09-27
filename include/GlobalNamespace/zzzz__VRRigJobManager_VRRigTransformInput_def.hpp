#pragma once
// IWYU pragma private; include "GlobalNamespace/VRRigJobManager_VRRigTransformInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(VRRigJobManager_VRRigTransformInput)
// Forward declare root types
namespace GlobalNamespace {
struct VRRigJobManager_VRRigTransformInput;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VRRigJobManager_VRRigTransformInput);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VRRigJobManager_VRRigTransformInput, "", "VRRigJobManager/VRRigTransformInput");
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: VRRigJobManager/VRRigTransformInput
struct CORDL_TYPE VRRigJobManager_VRRigTransformInput {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr VRRigJobManager_VRRigTransformInput() ;

// Ctor Parameters [CppParam { name: "rigPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "rigRotaton", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }]
constexpr VRRigJobManager_VRRigTransformInput(::UnityEngine::Vector3  rigPosition, ::UnityEngine::Quaternion  rigRotaton) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2778};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field rigPosition, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  rigPosition;

/// @brief Field rigRotaton, offset: 0xc, size: 0x10, def value: None
 ::UnityEngine::Quaternion  rigRotaton;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VRRigJobManager_VRRigTransformInput, rigPosition) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigJobManager_VRRigTransformInput, rigRotaton) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VRRigJobManager_VRRigTransformInput) == 0x1c, "Size mismatch!");

} // namespace end def GlobalNamespace
