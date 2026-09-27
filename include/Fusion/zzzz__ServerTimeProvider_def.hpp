#pragma once
// IWYU pragma private; include "Fusion/ServerTimeProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__ServerTimeProviderSettings_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ServerTimeProvider)
namespace Fusion::Statistics {
class FusionStatisticsManager;
}
namespace Fusion {
class ITimeProvider;
}
namespace Fusion {
struct Instant;
}
namespace Fusion {
struct ServerTimeProviderSettings;
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
class ServerTimeProvider;
}
// Write type traits
MARK_REF_T(::Fusion::ServerTimeProvider*);
DEFINE_IL2CPP_CLASS(::Fusion::ServerTimeProvider*, "Fusion", "ServerTimeProvider");
// Dependencies Fusion.ServerTimeProviderSettings, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.ServerTimeProvider
class CORDL_TYPE ServerTimeProvider : public ::System::Object {
public:
// Declarations
/// @brief Field _settings, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__settings, put=__cordl_internal_set__settings)) ::Fusion::ServerTimeProviderSettings  _settings;

/// @brief Field _time, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__time, put=__cordl_internal_set__time)) double_t  _time;

/// @brief Convert operator to "::Fusion::ITimeProvider"
constexpr operator  ::Fusion::ITimeProvider*() noexcept;

/// @brief Method Fusion.ITimeProvider.Configure, addr 0x600b190, size 0x20, virtual true, abstract: false, final true
inline void Fusion_ITimeProvider_Configure(::Fusion::SimulationRuntimeConfig  src) ;

/// @brief Method Fusion.ITimeProvider.Configure, addr 0x600b1b0, size 0x4, virtual true, abstract: false, final true
inline void Fusion_ITimeProvider_Configure(::Fusion::TimeSyncConfiguration*  tsc) ;

/// @brief Method Fusion.ITimeProvider.IsRunning, addr 0x600b188, size 0x8, virtual true, abstract: false, final true
inline bool Fusion_ITimeProvider_IsRunning() ;

/// @brief Method Fusion.ITimeProvider.Log, addr 0x600b1f8, size 0x4, virtual true, abstract: false, final true
inline void Fusion_ITimeProvider_Log(::Fusion::Statistics::FusionStatisticsManager*  stats) ;

/// @brief Method Fusion.ITimeProvider.Now, addr 0x600b1e8, size 0x10, virtual true, abstract: false, final true
inline ::Fusion::Instant Fusion_ITimeProvider_Now() ;

/// @brief Method Fusion.ITimeProvider.OnFeedbackReceived, addr 0x600b1e0, size 0x4, virtual true, abstract: false, final true
inline void Fusion_ITimeProvider_OnFeedbackReceived(::GlobalNamespace::Simulation_TimeFeedback  feedback) ;

/// @brief Method Fusion.ITimeProvider.OnSnapshotReceived, addr 0x600b1dc, size 0x4, virtual true, abstract: false, final true
inline void Fusion_ITimeProvider_OnSnapshotReceived(double_t  roundTripTime, ::Fusion::Tick  snapshot) ;

/// @brief Method Fusion.ITimeProvider.Reset, addr 0x600b1b4, size 0x14, virtual true, abstract: false, final true
inline void Fusion_ITimeProvider_Reset(double_t  roundTripTime, ::Fusion::Tick  snapshot) ;

/// @brief Method Fusion.ITimeProvider.ResetFeedback, addr 0x600b1e4, size 0x4, virtual true, abstract: false, final true
inline void Fusion_ITimeProvider_ResetFeedback() ;

/// @brief Method Fusion.ITimeProvider.SetPlayerIndex, addr 0x600b1fc, size 0x4, virtual true, abstract: false, final true
inline void Fusion_ITimeProvider_SetPlayerIndex(int32_t  index) ;

/// @brief Method Fusion.ITimeProvider.Snap, addr 0x600b1c8, size 0x4, virtual true, abstract: false, final true
inline void Fusion_ITimeProvider_Snap() ;

/// @brief Method Fusion.ITimeProvider.StartTrace, addr 0x600b200, size 0x4, virtual true, abstract: false, final true
inline void Fusion_ITimeProvider_StartTrace() ;

/// @brief Method Fusion.ITimeProvider.StopTrace, addr 0x600b204, size 0x4, virtual true, abstract: false, final true
inline void Fusion_ITimeProvider_StopTrace() ;

/// @brief Method Fusion.ITimeProvider.Update, addr 0x600b1cc, size 0x10, virtual true, abstract: false, final true
inline void Fusion_ITimeProvider_Update(double_t  unscaledDeltaTime) ;

static inline ::Fusion::ServerTimeProvider* New_ctor() ;

static inline ::Fusion::ServerTimeProvider* New_ctor(::Fusion::ServerTimeProviderSettings  settings) ;

/// @brief Method Reset, addr 0x600b164, size 0x14, virtual false, abstract: false, final false
inline void Reset(::Fusion::Tick  snapshot) ;

/// @brief Method Update, addr 0x600b178, size 0x10, virtual false, abstract: false, final false
inline void Update(double_t  unscaledDeltaTime) ;

constexpr ::Fusion::ServerTimeProviderSettings const& __cordl_internal_get__settings() const;

constexpr ::Fusion::ServerTimeProviderSettings& __cordl_internal_get__settings() ;

constexpr double_t const& __cordl_internal_get__time() const;

constexpr double_t& __cordl_internal_get__time() ;

constexpr void __cordl_internal_set__settings(::Fusion::ServerTimeProviderSettings  value) ;

constexpr void __cordl_internal_set__time(double_t  value) ;

/// @brief Method .ctor, addr 0x600b11c, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x600b13c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Fusion::ServerTimeProviderSettings  settings) ;

/// @brief Convert to "::Fusion::ITimeProvider"
constexpr ::Fusion::ITimeProvider* i___Fusion__ITimeProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ServerTimeProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ServerTimeProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ServerTimeProvider(ServerTimeProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServerTimeProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServerTimeProvider(ServerTimeProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19371};

/// @brief Field _settings, offset: 0x10, size: 0x8, def value: None
 ::Fusion::ServerTimeProviderSettings  ____settings;

/// @brief Field _time, offset: 0x18, size: 0x8, def value: None
 double_t  ____time;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::ServerTimeProvider, ____settings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::ServerTimeProvider, ____time) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::ServerTimeProvider) == 0x20, "Size mismatch!");

} // namespace end def Fusion
