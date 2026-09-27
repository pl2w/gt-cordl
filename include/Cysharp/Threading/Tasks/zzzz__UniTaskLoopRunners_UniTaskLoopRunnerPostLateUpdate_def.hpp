#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskLoopRunners_UniTaskLoopRunnerPostLateUpdate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(UniTaskLoopRunners_UniTaskLoopRunnerPostLateUpdate)
// Forward declare root types
namespace GlobalNamespace {
struct UniTaskLoopRunners_UniTaskLoopRunnerPostLateUpdate;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UniTaskLoopRunners_UniTaskLoopRunnerPostLateUpdate);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UniTaskLoopRunners_UniTaskLoopRunnerPostLateUpdate, "Cysharp.Threading.Tasks", "UniTaskLoopRunners/UniTaskLoopRunnerPostLateUpdate");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UniTaskLoopRunners/UniTaskLoopRunnerPostLateUpdate
#pragma pack(push, 0)
struct CORDL_TYPE UniTaskLoopRunners_UniTaskLoopRunnerPostLateUpdate {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr UniTaskLoopRunners_UniTaskLoopRunnerPostLateUpdate() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21628};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::UniTaskLoopRunners_UniTaskLoopRunnerPostLateUpdate) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
