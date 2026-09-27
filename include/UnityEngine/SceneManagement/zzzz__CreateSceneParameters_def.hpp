#pragma once
// IWYU pragma private; include "UnityEngine/SceneManagement/CreateSceneParameters.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/SceneManagement/zzzz__LocalPhysicsMode_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CreateSceneParameters)
namespace UnityEngine::SceneManagement {
struct LocalPhysicsMode;
}
// Forward declare root types
namespace UnityEngine::SceneManagement {
struct CreateSceneParameters;
}
// Write type traits
MARK_VAL_T(::UnityEngine::SceneManagement::CreateSceneParameters);
DEFINE_IL2CPP_CLASS(::UnityEngine::SceneManagement::CreateSceneParameters, "UnityEngine.SceneManagement", "CreateSceneParameters");
// Dependencies UnityEngine.SceneManagement.LocalPhysicsMode
namespace UnityEngine::SceneManagement {
// Is value type: true
// CS Name: UnityEngine.SceneManagement.CreateSceneParameters
struct CORDL_TYPE CreateSceneParameters {
public:
// Declarations
/// @brief Method .ctor, addr 0xb5fddac, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::SceneManagement::LocalPhysicsMode  physicsMode) ;

// Ctor Parameters []
// @brief default ctor
constexpr CreateSceneParameters() ;

// Ctor Parameters [CppParam { name: "m_LocalPhysicsMode", ty: "::UnityEngine::SceneManagement::LocalPhysicsMode", modifiers: "", def_value: None, comment: None }]
constexpr CreateSceneParameters(::UnityEngine::SceneManagement::LocalPhysicsMode  m_LocalPhysicsMode) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15226};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// [SerializeField]
/// @brief Field m_LocalPhysicsMode, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::SceneManagement::LocalPhysicsMode  m_LocalPhysicsMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::SceneManagement::CreateSceneParameters, m_LocalPhysicsMode) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::SceneManagement::CreateSceneParameters) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::SceneManagement
