#pragma once
// IWYU pragma private; include "UnityEngine/PlayerLoop/PreUpdate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(PreUpdate)
namespace GlobalNamespace {
struct PreUpdate_AIUpdate;
}
namespace GlobalNamespace {
struct PreUpdate_CheckTexFieldInput;
}
namespace GlobalNamespace {
struct PreUpdate_IMGUISendQueuedEvents;
}
namespace GlobalNamespace {
struct PreUpdate_InputForUIUpdate;
}
namespace GlobalNamespace {
struct PreUpdate_NewInputUpdate;
}
namespace GlobalNamespace {
struct PreUpdate_Physics2DUpdate;
}
namespace GlobalNamespace {
struct PreUpdate_PhysicsClothUpdate;
}
namespace GlobalNamespace {
struct PreUpdate_PhysicsUpdate;
}
namespace GlobalNamespace {
struct PreUpdate_SendMouseEvents;
}
namespace GlobalNamespace {
struct PreUpdate_UpdateVideo;
}
namespace GlobalNamespace {
struct PreUpdate_WindUpdate;
}
// Forward declare root types
namespace UnityEngine::PlayerLoop {
struct PreUpdate;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PlayerLoop::PreUpdate);
DEFINE_IL2CPP_CLASS(::UnityEngine::PlayerLoop::PreUpdate, "UnityEngine.PlayerLoop", "PreUpdate");
// [MovedFrom("UnityEngine.Experimental.PlayerLoop")]
// [RequiredByNativeCode]
// Dependencies 
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PreUpdate
#pragma pack(push, 0)
struct CORDL_TYPE PreUpdate {
public:
// Declarations
using AIUpdate = ::GlobalNamespace::PreUpdate_AIUpdate;

using CheckTexFieldInput = ::GlobalNamespace::PreUpdate_CheckTexFieldInput;

using IMGUISendQueuedEvents = ::GlobalNamespace::PreUpdate_IMGUISendQueuedEvents;

using InputForUIUpdate = ::GlobalNamespace::PreUpdate_InputForUIUpdate;

using NewInputUpdate = ::GlobalNamespace::PreUpdate_NewInputUpdate;

using Physics2DUpdate = ::GlobalNamespace::PreUpdate_Physics2DUpdate;

using PhysicsClothUpdate = ::GlobalNamespace::PreUpdate_PhysicsClothUpdate;

using PhysicsUpdate = ::GlobalNamespace::PreUpdate_PhysicsUpdate;

using SendMouseEvents = ::GlobalNamespace::PreUpdate_SendMouseEvents;

using UpdateVideo = ::GlobalNamespace::PreUpdate_UpdateVideo;

using WindUpdate = ::GlobalNamespace::PreUpdate_WindUpdate;

// Ctor Parameters []
// @brief default ctor
constexpr PreUpdate() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15304};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::UnityEngine::PlayerLoop::PreUpdate) == 0x1, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
