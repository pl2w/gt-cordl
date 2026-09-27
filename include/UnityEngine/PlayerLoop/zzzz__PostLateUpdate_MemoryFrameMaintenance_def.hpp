#pragma once
// IWYU pragma private; include "UnityEngine/PlayerLoop/PostLateUpdate_MemoryFrameMaintenance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(PostLateUpdate_MemoryFrameMaintenance)
// Forward declare root types
namespace GlobalNamespace {
struct PostLateUpdate_MemoryFrameMaintenance;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PostLateUpdate_MemoryFrameMaintenance);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PostLateUpdate_MemoryFrameMaintenance, "UnityEngine.PlayerLoop", "PostLateUpdate/MemoryFrameMaintenance");
// [RequiredByNativeCode]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/MemoryFrameMaintenance
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_MemoryFrameMaintenance {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PostLateUpdate_MemoryFrameMaintenance() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15365};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PostLateUpdate_MemoryFrameMaintenance) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
