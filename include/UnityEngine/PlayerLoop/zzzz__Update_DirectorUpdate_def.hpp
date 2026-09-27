#pragma once
// IWYU pragma private; include "UnityEngine/PlayerLoop/Update_DirectorUpdate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(Update_DirectorUpdate)
// Forward declare root types
namespace GlobalNamespace {
struct Update_DirectorUpdate;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Update_DirectorUpdate);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Update_DirectorUpdate, "UnityEngine.PlayerLoop", "Update/DirectorUpdate");
// [RequiredByNativeCode]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.Update/DirectorUpdate
#pragma pack(push, 0)
struct CORDL_TYPE Update_DirectorUpdate {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Update_DirectorUpdate() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15306};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Update_DirectorUpdate) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
