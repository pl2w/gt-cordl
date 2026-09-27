#pragma once
// IWYU pragma private; include "Fusion/TimeSyncConfiguration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSyncConfiguration)
namespace GlobalNamespace {
struct TickRate_Resolved;
}
// Forward declare root types
namespace Fusion {
class TimeSyncConfiguration;
}
// Write type traits
MARK_REF_T(::Fusion::TimeSyncConfiguration*);
DEFINE_IL2CPP_CLASS(::Fusion::TimeSyncConfiguration*, "Fusion", "TimeSyncConfiguration");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.TimeSyncConfiguration
class CORDL_TYPE TimeSyncConfiguration : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_MaxInterpSpeedAdjust)) double_t  MaxInterpSpeedAdjust;

 __declspec(property(get=get_MaxInterpSpeedAdjustNormalized)) double_t  MaxInterpSpeedAdjustNormalized;

/// @brief Field MaxLateInputs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_MaxLateInputs, put=__cordl_internal_set_MaxLateInputs)) double_t  MaxLateInputs;

 __declspec(property(get=get_MaxLateInputsNormalized)) double_t  MaxLateInputsNormalized;

/// @brief Field MaxLateSnapshots, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_MaxLateSnapshots, put=__cordl_internal_set_MaxLateSnapshots)) double_t  MaxLateSnapshots;

 __declspec(property(get=get_MaxLateSnapshotsNormalized)) double_t  MaxLateSnapshotsNormalized;

 __declspec(property(get=get_MaxSimSpeedAdjust)) double_t  MaxSimSpeedAdjust;

 __declspec(property(get=get_MaxSimSpeedAdjustNormalized)) double_t  MaxSimSpeedAdjustNormalized;

/// @brief Field RedundantInputs, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_RedundantInputs, put=__cordl_internal_set_RedundantInputs)) int32_t  RedundantInputs;

 __declspec(property(get=get_RedundantInputsNormalized)) int32_t  RedundantInputsNormalized;

/// @brief Field RedundantSnapshots, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_RedundantSnapshots, put=__cordl_internal_set_RedundantSnapshots)) int32_t  RedundantSnapshots;

 __declspec(property(get=get_RedundantSnapshotsNormalized)) int32_t  RedundantSnapshotsNormalized;

/// @brief Field SampleWindowSeconds, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_SampleWindowSeconds, put=__cordl_internal_set_SampleWindowSeconds)) double_t  SampleWindowSeconds;

 __declspec(property(get=get_SampleWindowSecondsNormalized)) double_t  SampleWindowSecondsNormalized;

/// @brief Method GetFromTickrate, addr 0x5ff3454, size 0x234, virtual false, abstract: false, final false
static inline ::Fusion::TimeSyncConfiguration* GetFromTickrate(::GlobalNamespace::TickRate_Resolved  tickrate) ;

static inline ::Fusion::TimeSyncConfiguration* New_ctor() ;

constexpr double_t const& __cordl_internal_get_MaxLateInputs() const;

constexpr double_t& __cordl_internal_get_MaxLateInputs() ;

constexpr double_t const& __cordl_internal_get_MaxLateSnapshots() const;

constexpr double_t& __cordl_internal_get_MaxLateSnapshots() ;

constexpr int32_t const& __cordl_internal_get_RedundantInputs() const;

constexpr int32_t& __cordl_internal_get_RedundantInputs() ;

constexpr int32_t const& __cordl_internal_get_RedundantSnapshots() const;

constexpr int32_t& __cordl_internal_get_RedundantSnapshots() ;

constexpr double_t const& __cordl_internal_get_SampleWindowSeconds() const;

constexpr double_t& __cordl_internal_get_SampleWindowSeconds() ;

constexpr void __cordl_internal_set_MaxLateInputs(double_t  value) ;

constexpr void __cordl_internal_set_MaxLateSnapshots(double_t  value) ;

constexpr void __cordl_internal_set_RedundantInputs(int32_t  value) ;

constexpr void __cordl_internal_set_RedundantSnapshots(int32_t  value) ;

constexpr void __cordl_internal_set_SampleWindowSeconds(double_t  value) ;

/// @brief Method .ctor, addr 0x60022c0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_MaxInterpSpeedAdjust, addr 0x6002588, size 0x8, virtual false, abstract: false, final false
inline double_t get_MaxInterpSpeedAdjust() ;

/// @brief Method get_MaxInterpSpeedAdjustNormalized, addr 0x6002590, size 0x6c, virtual false, abstract: false, final false
inline double_t get_MaxInterpSpeedAdjustNormalized() ;

/// @brief Method get_MaxLateInputsNormalized, addr 0x600234c, size 0x80, virtual false, abstract: false, final false
inline double_t get_MaxLateInputsNormalized() ;

/// @brief Method get_MaxLateSnapshotsNormalized, addr 0x60023cc, size 0x80, virtual false, abstract: false, final false
inline double_t get_MaxLateSnapshotsNormalized() ;

/// @brief Method get_MaxSimSpeedAdjust, addr 0x6002514, size 0x8, virtual false, abstract: false, final false
inline double_t get_MaxSimSpeedAdjust() ;

/// @brief Method get_MaxSimSpeedAdjustNormalized, addr 0x600251c, size 0x6c, virtual false, abstract: false, final false
inline double_t get_MaxSimSpeedAdjustNormalized() ;

/// @brief Method get_RedundantInputsNormalized, addr 0x600244c, size 0x64, virtual false, abstract: false, final false
inline int32_t get_RedundantInputsNormalized() ;

/// @brief Method get_RedundantSnapshotsNormalized, addr 0x60024b0, size 0x64, virtual false, abstract: false, final false
inline int32_t get_RedundantSnapshotsNormalized() ;

/// @brief Method get_SampleWindowSecondsNormalized, addr 0x60022e0, size 0x6c, virtual false, abstract: false, final false
inline double_t get_SampleWindowSecondsNormalized() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeSyncConfiguration() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeSyncConfiguration", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeSyncConfiguration(TimeSyncConfiguration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeSyncConfiguration", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeSyncConfiguration(TimeSyncConfiguration const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19338};

/// [InlineHelp]
/// [Unit((Fusion.Units)2)]
/// [RangeEx(1, 10)]
/// @brief Field SampleWindowSeconds, offset: 0x10, size: 0x8, def value: None
 double_t  ___SampleWindowSeconds;

/// [InlineHelp]
/// [Unit((Fusion.Units)8)]
/// [RangeEx(0.10000000149011612, 10)]
/// @brief Field MaxLateInputs, offset: 0x18, size: 0x8, def value: None
 double_t  ___MaxLateInputs;

/// [InlineHelp]
/// [Unit((Fusion.Units)8)]
/// [RangeEx(0.10000000149011612, 10)]
/// @brief Field MaxLateSnapshots, offset: 0x20, size: 0x8, def value: None
 double_t  ___MaxLateSnapshots;

/// [InlineHelp]
/// [Unit((Fusion.Units)19)]
/// [RangeEx(0, 8)]
/// @brief Field RedundantInputs, offset: 0x28, size: 0x4, def value: None
 int32_t  ___RedundantInputs;

/// [InlineHelp]
/// [Unit((Fusion.Units)19)]
/// [RangeEx(0, 8)]
/// @brief Field RedundantSnapshots, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___RedundantSnapshots;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::TimeSyncConfiguration, ___SampleWindowSeconds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::TimeSyncConfiguration, ___MaxLateInputs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::TimeSyncConfiguration, ___MaxLateSnapshots) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::TimeSyncConfiguration, ___RedundantInputs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::TimeSyncConfiguration, ___RedundantSnapshots) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Fusion::TimeSyncConfiguration) == 0x30, "Size mismatch!");

} // namespace end def Fusion
