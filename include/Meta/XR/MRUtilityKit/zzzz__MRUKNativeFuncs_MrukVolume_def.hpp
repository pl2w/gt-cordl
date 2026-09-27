#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKNativeFuncs_MrukVolume.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MRUKNativeFuncs_MrukVolume)
// Forward declare root types
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukVolume;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MRUKNativeFuncs_MrukVolume);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MRUKNativeFuncs_MrukVolume, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/MrukVolume");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/MrukVolume
struct CORDL_TYPE MRUKNativeFuncs_MrukVolume {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_MrukVolume() ;

// Ctor Parameters [CppParam { name: "min", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "max", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr MRUKNativeFuncs_MrukVolume(::UnityEngine::Vector3  min, ::UnityEngine::Vector3  max) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25803};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field min, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  min;

/// @brief Field max, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  max;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukVolume, min) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukVolume, max) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MRUKNativeFuncs_MrukVolume) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
