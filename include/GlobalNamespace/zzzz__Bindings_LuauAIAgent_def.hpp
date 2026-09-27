#pragma once
// IWYU pragma private; include "GlobalNamespace/Bindings_LuauAIAgent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Bindings_LuauAIAgent)
// Forward declare root types
namespace GlobalNamespace {
struct Bindings_LuauAIAgent;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Bindings_LuauAIAgent);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Bindings_LuauAIAgent, "", "Bindings/LuauAIAgent");
// [BurstCompile]
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Bindings/LuauAIAgent
struct CORDL_TYPE Bindings_LuauAIAgent {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Bindings_LuauAIAgent() ;

// Ctor Parameters [CppParam { name: "EntityID", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "EntityPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "EntityRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }]
constexpr Bindings_LuauAIAgent(int32_t  EntityID, ::UnityEngine::Vector3  EntityPosition, ::UnityEngine::Quaternion  EntityRotation) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3110};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field EntityID, offset: 0x0, size: 0x4, def value: None
 int32_t  EntityID;

/// @brief Field EntityPosition, offset: 0x4, size: 0xc, def value: None
 ::UnityEngine::Vector3  EntityPosition;

/// @brief Field EntityRotation, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Quaternion  EntityRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Bindings_LuauAIAgent, EntityID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_LuauAIAgent, EntityPosition) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_LuauAIAgent, EntityRotation) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Bindings_LuauAIAgent) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
