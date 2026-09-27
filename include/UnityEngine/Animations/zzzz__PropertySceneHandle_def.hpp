#pragma once
// IWYU pragma private; include "UnityEngine/Animations/PropertySceneHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PropertySceneHandle)
// Forward declare root types
namespace UnityEngine::Animations {
struct PropertySceneHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::PropertySceneHandle);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::PropertySceneHandle, "UnityEngine.Animations", "PropertySceneHandle");
// [MovedFrom("UnityEngine.Experimental.Animations")]
// [NativeHeader("Modules/Animation/Director/AnimationSceneHandles.h")]
// Dependencies 
namespace UnityEngine::Animations {
// Is value type: true
// CS Name: UnityEngine.Animations.PropertySceneHandle
struct CORDL_TYPE PropertySceneHandle {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PropertySceneHandle() ;

// Ctor Parameters [CppParam { name: "valid", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "handleIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PropertySceneHandle(uint32_t  valid, int32_t  handleIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29821};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field valid, offset: 0x0, size: 0x4, def value: None
 uint32_t  valid;

/// @brief Field handleIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  handleIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::PropertySceneHandle, valid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::PropertySceneHandle, handleIndex) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Animations::PropertySceneHandle) == 0x8, "Size mismatch!");

} // namespace end def UnityEngine::Animations
