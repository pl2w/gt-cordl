#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/PostProcessPass___c__DisplayClass91_0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PostProcessPass___c__DisplayClass91_0)
namespace UnityEngine::Rendering::Universal {
class PostProcessPass;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
// Forward declare root types
namespace GlobalNamespace {
struct PostProcessPass___c__DisplayClass91_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PostProcessPass___c__DisplayClass91_0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PostProcessPass___c__DisplayClass91_0, "UnityEngine.Rendering.Universal", "PostProcessPass/<>c__DisplayClass91_0");
// [CompilerGenerated]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.PostProcessPass/<>c__DisplayClass91_0
struct CORDL_TYPE PostProcessPass___c__DisplayClass91_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PostProcessPass___c__DisplayClass91_0() ;

// Ctor Parameters [CppParam { name: "source", ty: "::UnityEngine::Rendering::RTHandle*", modifiers: "", def_value: None, comment: None }, CppParam { name: "destination", ty: "::UnityEngine::Rendering::RTHandle*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityEngine::Rendering::Universal::PostProcessPass*", modifiers: "", def_value: None, comment: None }, CppParam { name: "amountOfPassesRemaining", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "cmd", ty: "::UnityEngine::Rendering::CommandBuffer*", modifiers: "", def_value: None, comment: None }]
constexpr PostProcessPass___c__DisplayClass91_0(::UnityEngine::Rendering::RTHandle*  source, ::UnityEngine::Rendering::RTHandle*  destination, ::UnityEngine::Rendering::Universal::PostProcessPass*  __4__this, int32_t  amountOfPassesRemaining, ::UnityEngine::Rendering::CommandBuffer*  cmd) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18512};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field source, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  source;

/// @brief Field destination, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  destination;

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::PostProcessPass*  __4__this;

/// @brief Field amountOfPassesRemaining, offset: 0x18, size: 0x4, def value: None
 int32_t  amountOfPassesRemaining;

/// @brief Field cmd, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Rendering::CommandBuffer*  cmd;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PostProcessPass___c__DisplayClass91_0, source) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PostProcessPass___c__DisplayClass91_0, destination) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PostProcessPass___c__DisplayClass91_0, __4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PostProcessPass___c__DisplayClass91_0, amountOfPassesRemaining) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PostProcessPass___c__DisplayClass91_0, cmd) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PostProcessPass___c__DisplayClass91_0) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
