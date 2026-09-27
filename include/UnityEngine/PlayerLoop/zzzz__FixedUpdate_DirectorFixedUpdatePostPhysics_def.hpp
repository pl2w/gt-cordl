#pragma once
// IWYU pragma private; include "UnityEngine/PlayerLoop/FixedUpdate_DirectorFixedUpdatePostPhysics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(FixedUpdate_DirectorFixedUpdatePostPhysics)
// Forward declare root types
namespace GlobalNamespace {
struct FixedUpdate_DirectorFixedUpdatePostPhysics;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FixedUpdate_DirectorFixedUpdatePostPhysics);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FixedUpdate_DirectorFixedUpdatePostPhysics, "UnityEngine.PlayerLoop", "FixedUpdate/DirectorFixedUpdatePostPhysics");
// [RequiredByNativeCode]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.FixedUpdate/DirectorFixedUpdatePostPhysics
#pragma pack(push, 0)
struct CORDL_TYPE FixedUpdate_DirectorFixedUpdatePostPhysics {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr FixedUpdate_DirectorFixedUpdatePostPhysics() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15289};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::FixedUpdate_DirectorFixedUpdatePostPhysics) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
