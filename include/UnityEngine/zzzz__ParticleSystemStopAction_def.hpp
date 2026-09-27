#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemStopAction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystemStopAction)
// Forward declare root types
namespace UnityEngine {
struct ParticleSystemStopAction;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ParticleSystemStopAction);
DEFINE_IL2CPP_CLASS(::UnityEngine::ParticleSystemStopAction, "UnityEngine", "ParticleSystemStopAction");
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystemStopAction
struct CORDL_TYPE ParticleSystemStopAction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ParticleSystemStopAction_Unwrapped
enum struct __ParticleSystemStopAction_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Disable = static_cast<int32_t>(0x1),
__E_Destroy = static_cast<int32_t>(0x2),
__E_Callback = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ParticleSystemStopAction_Unwrapped () const noexcept {
return static_cast<__ParticleSystemStopAction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystemStopAction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ParticleSystemStopAction(int32_t  value__) noexcept;

/// @brief Field Callback value: I32(3)
static ::UnityEngine::ParticleSystemStopAction const Callback;

/// @brief Field Destroy value: I32(2)
static ::UnityEngine::ParticleSystemStopAction const Destroy;

/// @brief Field Disable value: I32(1)
static ::UnityEngine::ParticleSystemStopAction const Disable;

/// @brief Field None value: I32(0)
static ::UnityEngine::ParticleSystemStopAction const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30845};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystemStopAction, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ParticleSystemStopAction) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine
