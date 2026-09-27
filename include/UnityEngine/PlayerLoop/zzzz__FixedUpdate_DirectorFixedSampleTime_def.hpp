#pragma once
// IWYU pragma private; include "UnityEngine/PlayerLoop/FixedUpdate_DirectorFixedSampleTime.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(FixedUpdate_DirectorFixedSampleTime)
// Forward declare root types
namespace GlobalNamespace {
struct FixedUpdate_DirectorFixedSampleTime;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FixedUpdate_DirectorFixedSampleTime);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FixedUpdate_DirectorFixedSampleTime, "UnityEngine.PlayerLoop", "FixedUpdate/DirectorFixedSampleTime");
// [RequiredByNativeCode]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.FixedUpdate/DirectorFixedSampleTime
#pragma pack(push, 0)
struct CORDL_TYPE FixedUpdate_DirectorFixedSampleTime {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr FixedUpdate_DirectorFixedSampleTime() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15280};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::FixedUpdate_DirectorFixedSampleTime) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
