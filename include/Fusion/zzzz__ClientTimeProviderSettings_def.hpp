#pragma once
// IWYU pragma private; include "Fusion/ClientTimeProviderSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ClientTimeProviderSettings)
// Forward declare root types
namespace Fusion {
struct ClientTimeProviderSettings;
}
// Write type traits
MARK_VAL_T(::Fusion::ClientTimeProviderSettings);
DEFINE_IL2CPP_CLASS(::Fusion::ClientTimeProviderSettings, "Fusion", "ClientTimeProviderSettings");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.ClientTimeProviderSettings
struct CORDL_TYPE ClientTimeProviderSettings {
public:
// Declarations
/// @brief Method Default, addr 0x600674c, size 0x148, virtual false, abstract: false, final false
static inline ::Fusion::ClientTimeProviderSettings Default() ;

// Ctor Parameters []
// @brief default ctor
constexpr ClientTimeProviderSettings() ;

// Ctor Parameters [CppParam { name: "TimeScaleOffsetMax", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SampleWindowSeconds", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "OutgoingQuantile", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "IncomingQuantile", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "OutgoingRedundancy", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "IncomingRedundancy", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "OutgoingSendRate", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "IncomingSendRate", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "OutgoingSendDelta", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "IncomingSendDelta", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PredictionMax", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "InputDelayMin", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "InputDelayMax", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ClientTickRate", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ClientSimDeltaTime", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ServerTickRate", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ServerSimDeltaTime", ty: "double_t", modifiers: "", def_value: None, comment: None }]
constexpr ClientTimeProviderSettings(double_t  TimeScaleOffsetMax, double_t  SampleWindowSeconds, double_t  OutgoingQuantile, double_t  IncomingQuantile, double_t  OutgoingRedundancy, double_t  IncomingRedundancy, int32_t  OutgoingSendRate, int32_t  IncomingSendRate, double_t  OutgoingSendDelta, double_t  IncomingSendDelta, double_t  PredictionMax, double_t  InputDelayMin, double_t  InputDelayMax, int32_t  ClientTickRate, double_t  ClientSimDeltaTime, int32_t  ServerTickRate, double_t  ServerSimDeltaTime) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19360};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// @brief Field TimeScaleOffsetMax, offset: 0x0, size: 0x8, def value: None
 double_t  TimeScaleOffsetMax;

/// @brief Field SampleWindowSeconds, offset: 0x8, size: 0x8, def value: None
 double_t  SampleWindowSeconds;

/// @brief Field OutgoingQuantile, offset: 0x10, size: 0x8, def value: None
 double_t  OutgoingQuantile;

/// @brief Field IncomingQuantile, offset: 0x18, size: 0x8, def value: None
 double_t  IncomingQuantile;

/// @brief Field OutgoingRedundancy, offset: 0x20, size: 0x8, def value: None
 double_t  OutgoingRedundancy;

/// @brief Field IncomingRedundancy, offset: 0x28, size: 0x8, def value: None
 double_t  IncomingRedundancy;

/// @brief Field OutgoingSendRate, offset: 0x30, size: 0x4, def value: None
 int32_t  OutgoingSendRate;

/// @brief Field IncomingSendRate, offset: 0x34, size: 0x4, def value: None
 int32_t  IncomingSendRate;

/// @brief Field OutgoingSendDelta, offset: 0x38, size: 0x8, def value: None
 double_t  OutgoingSendDelta;

/// @brief Field IncomingSendDelta, offset: 0x40, size: 0x8, def value: None
 double_t  IncomingSendDelta;

/// @brief Field PredictionMax, offset: 0x48, size: 0x8, def value: None
 double_t  PredictionMax;

/// @brief Field InputDelayMin, offset: 0x50, size: 0x8, def value: None
 double_t  InputDelayMin;

/// @brief Field InputDelayMax, offset: 0x58, size: 0x8, def value: None
 double_t  InputDelayMax;

/// @brief Field ClientTickRate, offset: 0x60, size: 0x4, def value: None
 int32_t  ClientTickRate;

/// @brief Field ClientSimDeltaTime, offset: 0x68, size: 0x8, def value: None
 double_t  ClientSimDeltaTime;

/// @brief Field ServerTickRate, offset: 0x70, size: 0x4, def value: None
 int32_t  ServerTickRate;

/// @brief Field ServerSimDeltaTime, offset: 0x78, size: 0x8, def value: None
 double_t  ServerSimDeltaTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::ClientTimeProviderSettings, TimeScaleOffsetMax) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProviderSettings, SampleWindowSeconds) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProviderSettings, OutgoingQuantile) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProviderSettings, IncomingQuantile) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProviderSettings, OutgoingRedundancy) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProviderSettings, IncomingRedundancy) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProviderSettings, OutgoingSendRate) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProviderSettings, IncomingSendRate) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProviderSettings, OutgoingSendDelta) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProviderSettings, IncomingSendDelta) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProviderSettings, PredictionMax) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProviderSettings, InputDelayMin) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProviderSettings, InputDelayMax) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProviderSettings, ClientTickRate) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProviderSettings, ClientSimDeltaTime) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProviderSettings, ServerTickRate) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Fusion::ClientTimeProviderSettings, ServerSimDeltaTime) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Fusion::ClientTimeProviderSettings) == 0x80, "Size mismatch!");

} // namespace end def Fusion
