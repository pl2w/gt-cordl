#pragma once
// IWYU pragma private; include "UnityEngine/PlayerLoop/FixedUpdate_XRFixedUpdate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(FixedUpdate_XRFixedUpdate)
// Forward declare root types
namespace GlobalNamespace {
struct FixedUpdate_XRFixedUpdate;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FixedUpdate_XRFixedUpdate);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FixedUpdate_XRFixedUpdate, "UnityEngine.PlayerLoop", "FixedUpdate/XRFixedUpdate");
// [RequiredByNativeCode]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.FixedUpdate/XRFixedUpdate
#pragma pack(push, 0)
struct CORDL_TYPE FixedUpdate_XRFixedUpdate {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr FixedUpdate_XRFixedUpdate() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15285};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::FixedUpdate_XRFixedUpdate) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
