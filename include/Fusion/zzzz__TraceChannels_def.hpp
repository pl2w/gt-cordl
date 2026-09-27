#pragma once
// IWYU pragma private; include "Fusion/TraceChannels.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TraceChannels)
// Forward declare root types
namespace Fusion {
struct TraceChannels;
}
// Write type traits
MARK_VAL_T(::Fusion::TraceChannels);
DEFINE_IL2CPP_CLASS(::Fusion::TraceChannels, "Fusion", "TraceChannels");
// [Flags]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.TraceChannels
struct CORDL_TYPE TraceChannels {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TraceChannels_Unwrapped
enum struct __TraceChannels_Unwrapped : int32_t {
__E_Global = static_cast<int32_t>(0x1),
__E_Stun = static_cast<int32_t>(0x2),
__E_Object = static_cast<int32_t>(0x4),
__E_Network = static_cast<int32_t>(0x8),
__E_Prefab = static_cast<int32_t>(0x10),
__E_SceneInfo = static_cast<int32_t>(0x20),
__E_SceneManager = static_cast<int32_t>(0x40),
__E_SimulationMessage = static_cast<int32_t>(0x80),
__E_HostMigration = static_cast<int32_t>(0x100),
__E_Encryption = static_cast<int32_t>(0x200),
__E_DummyTraffic = static_cast<int32_t>(0x400),
__E_Realtime = static_cast<int32_t>(0x800),
__E_MemoryTrack = static_cast<int32_t>(0x1000),
__E_Snapshots = static_cast<int32_t>(0x2000),
__E_Time = static_cast<int32_t>(0x4000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TraceChannels_Unwrapped () const noexcept {
return static_cast<__TraceChannels_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TraceChannels() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TraceChannels(int32_t  value__) noexcept;

/// @brief Field DummyTraffic value: I32(1024)
static ::Fusion::TraceChannels const DummyTraffic;

/// @brief Field Encryption value: I32(512)
static ::Fusion::TraceChannels const Encryption;

/// @brief Field Global value: I32(1)
static ::Fusion::TraceChannels const Global;

/// @brief Field HostMigration value: I32(256)
static ::Fusion::TraceChannels const HostMigration;

/// @brief Field MemoryTrack value: I32(4096)
static ::Fusion::TraceChannels const MemoryTrack;

/// @brief Field Network value: I32(8)
static ::Fusion::TraceChannels const Network;

/// @brief Field Object value: I32(4)
static ::Fusion::TraceChannels const Object;

/// @brief Field Prefab value: I32(16)
static ::Fusion::TraceChannels const Prefab;

/// @brief Field Realtime value: I32(2048)
static ::Fusion::TraceChannels const Realtime;

/// @brief Field SceneInfo value: I32(32)
static ::Fusion::TraceChannels const SceneInfo;

/// @brief Field SceneManager value: I32(64)
static ::Fusion::TraceChannels const SceneManager;

/// @brief Field SimulationMessage value: I32(128)
static ::Fusion::TraceChannels const SimulationMessage;

/// @brief Field Snapshots value: I32(8192)
static ::Fusion::TraceChannels const Snapshots;

/// @brief Field Stun value: I32(2)
static ::Fusion::TraceChannels const Stun;

/// @brief Field Time value: I32(16384)
static ::Fusion::TraceChannels const Time;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32733};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::TraceChannels, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::TraceChannels) == 0x4, "Size mismatch!");

} // namespace end def Fusion
