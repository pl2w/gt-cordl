#pragma once
// IWYU pragma private; include "BuildSafe/SceneBakeExampleTask.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BuildSafe/zzzz__SceneBakeTask_def.hpp"
CORDL_MODULE_EXPORT(SceneBakeExampleTask)
namespace BuildSafe {
struct SceneBakeMode;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace BuildSafe {
class SceneBakeExampleTask;
}
// Write type traits
MARK_REF_T(::BuildSafe::SceneBakeExampleTask*);
DEFINE_IL2CPP_CLASS(::BuildSafe::SceneBakeExampleTask*, "BuildSafe", "SceneBakeExampleTask");
// Dependencies BuildSafe.SceneBakeTask
namespace BuildSafe {
// Is value type: false
// CS Name: BuildSafe.SceneBakeExampleTask
class CORDL_TYPE SceneBakeExampleTask : public ::BuildSafe::SceneBakeTask {
public:
// Declarations
/// @brief Method DuplicateAndRecolor, addr 0x5c4f280, size 0x158, virtual false, abstract: false, final false
static inline void DuplicateAndRecolor(::UnityEngine::GameObject*  target) ;

static inline ::BuildSafe::SceneBakeExampleTask* New_ctor() ;

/// @brief Method OnSceneBake, addr 0x5c4f24c, size 0x34, virtual true, abstract: false, final false
inline void OnSceneBake(::UnityEngine::SceneManagement::Scene  scene, ::BuildSafe::SceneBakeMode  mode) ;

/// @brief Method .ctor, addr 0x5c4f3d8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SceneBakeExampleTask() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SceneBakeExampleTask", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneBakeExampleTask(SceneBakeExampleTask && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneBakeExampleTask", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneBakeExampleTask(SceneBakeExampleTask const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4257};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BuildSafe::SceneBakeExampleTask) == 0x30, "Size mismatch!");

} // namespace end def BuildSafe
