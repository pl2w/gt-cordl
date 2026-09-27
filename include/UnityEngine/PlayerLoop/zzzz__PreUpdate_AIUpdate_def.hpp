#pragma once
// IWYU pragma private; include "UnityEngine/PlayerLoop/PreUpdate_AIUpdate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(PreUpdate_AIUpdate)
// Forward declare root types
namespace GlobalNamespace {
struct PreUpdate_AIUpdate;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PreUpdate_AIUpdate);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PreUpdate_AIUpdate, "UnityEngine.PlayerLoop", "PreUpdate/AIUpdate");
// [RequiredByNativeCode]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PreUpdate/AIUpdate
#pragma pack(push, 0)
struct CORDL_TYPE PreUpdate_AIUpdate {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PreUpdate_AIUpdate() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15299};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PreUpdate_AIUpdate) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
