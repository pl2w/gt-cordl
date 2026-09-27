#pragma once
// IWYU pragma private; include "UnityEngine/PlayerLoop/EarlyUpdate_ResetFrameStatsAfterPresent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(EarlyUpdate_ResetFrameStatsAfterPresent)
// Forward declare root types
namespace GlobalNamespace {
struct EarlyUpdate_ResetFrameStatsAfterPresent;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EarlyUpdate_ResetFrameStatsAfterPresent);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EarlyUpdate_ResetFrameStatsAfterPresent, "UnityEngine.PlayerLoop", "EarlyUpdate/ResetFrameStatsAfterPresent");
// [RequiredByNativeCode]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.EarlyUpdate/ResetFrameStatsAfterPresent
#pragma pack(push, 0)
struct CORDL_TYPE EarlyUpdate_ResetFrameStatsAfterPresent {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr EarlyUpdate_ResetFrameStatsAfterPresent() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15255};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::EarlyUpdate_ResetFrameStatsAfterPresent) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
