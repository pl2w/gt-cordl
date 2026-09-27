#pragma once
// IWYU pragma private; include "UnityEngine/PlayerLoop/PreLateUpdate_AIUpdatePostScript.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(PreLateUpdate_AIUpdatePostScript)
// Forward declare root types
namespace GlobalNamespace {
struct PreLateUpdate_AIUpdatePostScript;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PreLateUpdate_AIUpdatePostScript);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PreLateUpdate_AIUpdatePostScript, "UnityEngine.PlayerLoop", "PreLateUpdate/AIUpdatePostScript");
// [RequiredByNativeCode]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PreLateUpdate/AIUpdatePostScript
#pragma pack(push, 0)
struct CORDL_TYPE PreLateUpdate_AIUpdatePostScript {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PreLateUpdate_AIUpdatePostScript() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15312};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PreLateUpdate_AIUpdatePostScript) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
