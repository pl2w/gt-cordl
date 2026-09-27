#pragma once
// IWYU pragma private; include "Fusion/ITimeProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ITimeProvider)
namespace Fusion::Statistics {
class FusionStatisticsManager;
}
namespace Fusion {
struct Instant;
}
namespace Fusion {
struct SimulationRuntimeConfig;
}
namespace Fusion {
struct Tick;
}
namespace Fusion {
class TimeSyncConfiguration;
}
namespace GlobalNamespace {
struct Simulation_TimeFeedback;
}
// Forward declare root types
namespace Fusion {
class ITimeProvider;
}
// Write type traits
MARK_REF_T(::Fusion::ITimeProvider*);
DEFINE_IL2CPP_CLASS(::Fusion::ITimeProvider*, "Fusion", "ITimeProvider");
// Dependencies 
namespace Fusion {
// Is value type: false
// CS Name: Fusion.ITimeProvider
class CORDL_TYPE ITimeProvider {
public:
// Declarations
/// @brief Method Configure, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Configure(::Fusion::SimulationRuntimeConfig  src) ;

/// @brief Method Configure, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Configure(::Fusion::TimeSyncConfiguration*  tsc) ;

/// @brief Method IsRunning, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsRunning() ;

/// @brief Method Log, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Log(::Fusion::Statistics::FusionStatisticsManager*  stats) ;

/// @brief Method Now, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Fusion::Instant Now() ;

/// @brief Method OnFeedbackReceived, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnFeedbackReceived(::GlobalNamespace::Simulation_TimeFeedback  feedback) ;

/// @brief Method OnSnapshotReceived, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnSnapshotReceived(double_t  roundTripTime, ::Fusion::Tick  snapshot) ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Reset(double_t  roundTripTime, ::Fusion::Tick  snapshot) ;

/// @brief Method ResetFeedback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ResetFeedback() ;

/// @brief Method SetPlayerIndex, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetPlayerIndex(int32_t  index) ;

/// @brief Method Snap, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Snap() ;

/// @brief Method StartTrace, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void StartTrace() ;

/// @brief Method StopTrace, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void StopTrace() ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Update(double_t  unscaledDeltaTime) ;

// Ctor Parameters [CppParam { name: "", ty: "ITimeProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITimeProvider(ITimeProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19369};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
