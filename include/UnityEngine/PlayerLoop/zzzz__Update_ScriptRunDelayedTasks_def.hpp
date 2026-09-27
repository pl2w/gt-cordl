#pragma once
// IWYU pragma private; include "UnityEngine/PlayerLoop/Update_ScriptRunDelayedTasks.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(Update_ScriptRunDelayedTasks)
// Forward declare root types
namespace GlobalNamespace {
struct Update_ScriptRunDelayedTasks;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Update_ScriptRunDelayedTasks);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Update_ScriptRunDelayedTasks, "UnityEngine.PlayerLoop", "Update/ScriptRunDelayedTasks");
// [RequiredByNativeCode]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.Update/ScriptRunDelayedTasks
#pragma pack(push, 0)
struct CORDL_TYPE Update_ScriptRunDelayedTasks {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Update_ScriptRunDelayedTasks() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15308};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Update_ScriptRunDelayedTasks) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
