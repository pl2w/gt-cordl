#pragma once
// IWYU pragma private; include "Fusion/NetworkSimulationConfiguration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Sockets/zzzz__NetConfigSimulationOscillator_WaveShape_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NetworkSimulationConfiguration)
namespace Fusion::Sockets {
struct NetConfigSimulation;
}
// Forward declare root types
namespace Fusion {
class NetworkSimulationConfiguration;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkSimulationConfiguration*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkSimulationConfiguration*, "Fusion", "NetworkSimulationConfiguration");
// Dependencies Fusion.Sockets.NetConfigSimulationOscillator::WaveShape, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkSimulationConfiguration
class CORDL_TYPE NetworkSimulationConfiguration : public ::System::Object {
public:
// Declarations
/// @brief Field AdditionalJitter, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_AdditionalJitter, put=__cordl_internal_set_AdditionalJitter)) double_t  AdditionalJitter;

/// @brief Field AdditionalLoss, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_AdditionalLoss, put=__cordl_internal_set_AdditionalLoss)) double_t  AdditionalLoss;

/// @brief Field DelayMax, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_DelayMax, put=__cordl_internal_set_DelayMax)) double_t  DelayMax;

/// @brief Field DelayMin, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_DelayMin, put=__cordl_internal_set_DelayMin)) double_t  DelayMin;

/// @brief Field DelayPeriod, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_DelayPeriod, put=__cordl_internal_set_DelayPeriod)) double_t  DelayPeriod;

/// @brief Field DelayShape, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_DelayShape, put=__cordl_internal_set_DelayShape)) ::GlobalNamespace::NetConfigSimulationOscillator_WaveShape  DelayShape;

/// @brief Field DelayThreshold, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_DelayThreshold, put=__cordl_internal_set_DelayThreshold)) double_t  DelayThreshold;

/// @brief Field Enabled, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_Enabled, put=__cordl_internal_set_Enabled)) bool  Enabled;

/// @brief Field LossChanceMax, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_LossChanceMax, put=__cordl_internal_set_LossChanceMax)) double_t  LossChanceMax;

/// @brief Field LossChanceMin, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_LossChanceMin, put=__cordl_internal_set_LossChanceMin)) double_t  LossChanceMin;

/// @brief Field LossChancePeriod, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_LossChancePeriod, put=__cordl_internal_set_LossChancePeriod)) double_t  LossChancePeriod;

/// @brief Field LossChanceShape, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_LossChanceShape, put=__cordl_internal_set_LossChanceShape)) ::GlobalNamespace::NetConfigSimulationOscillator_WaveShape  LossChanceShape;

/// @brief Field LossChanceThreshold, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_LossChanceThreshold, put=__cordl_internal_set_LossChanceThreshold)) double_t  LossChanceThreshold;

/// @brief Method Clone, addr 0x6001fe4, size 0x80, virtual false, abstract: false, final false
inline ::Fusion::NetworkSimulationConfiguration* Clone() ;

/// @brief Method Create, addr 0x6002064, size 0x218, virtual false, abstract: false, final false
inline ::Fusion::Sockets::NetConfigSimulation Create() ;

static inline ::Fusion::NetworkSimulationConfiguration* New_ctor() ;

constexpr double_t const& __cordl_internal_get_AdditionalJitter() const;

constexpr double_t& __cordl_internal_get_AdditionalJitter() ;

constexpr double_t const& __cordl_internal_get_AdditionalLoss() const;

constexpr double_t& __cordl_internal_get_AdditionalLoss() ;

constexpr double_t const& __cordl_internal_get_DelayMax() const;

constexpr double_t& __cordl_internal_get_DelayMax() ;

constexpr double_t const& __cordl_internal_get_DelayMin() const;

constexpr double_t& __cordl_internal_get_DelayMin() ;

constexpr double_t const& __cordl_internal_get_DelayPeriod() const;

constexpr double_t& __cordl_internal_get_DelayPeriod() ;

constexpr ::GlobalNamespace::NetConfigSimulationOscillator_WaveShape const& __cordl_internal_get_DelayShape() const;

constexpr ::GlobalNamespace::NetConfigSimulationOscillator_WaveShape& __cordl_internal_get_DelayShape() ;

constexpr double_t const& __cordl_internal_get_DelayThreshold() const;

constexpr double_t& __cordl_internal_get_DelayThreshold() ;

constexpr bool const& __cordl_internal_get_Enabled() const;

constexpr bool& __cordl_internal_get_Enabled() ;

constexpr double_t const& __cordl_internal_get_LossChanceMax() const;

constexpr double_t& __cordl_internal_get_LossChanceMax() ;

constexpr double_t const& __cordl_internal_get_LossChanceMin() const;

constexpr double_t& __cordl_internal_get_LossChanceMin() ;

constexpr double_t const& __cordl_internal_get_LossChancePeriod() const;

constexpr double_t& __cordl_internal_get_LossChancePeriod() ;

constexpr ::GlobalNamespace::NetConfigSimulationOscillator_WaveShape const& __cordl_internal_get_LossChanceShape() const;

constexpr ::GlobalNamespace::NetConfigSimulationOscillator_WaveShape& __cordl_internal_get_LossChanceShape() ;

constexpr double_t const& __cordl_internal_get_LossChanceThreshold() const;

constexpr double_t& __cordl_internal_get_LossChanceThreshold() ;

constexpr void __cordl_internal_set_AdditionalJitter(double_t  value) ;

constexpr void __cordl_internal_set_AdditionalLoss(double_t  value) ;

constexpr void __cordl_internal_set_DelayMax(double_t  value) ;

constexpr void __cordl_internal_set_DelayMin(double_t  value) ;

constexpr void __cordl_internal_set_DelayPeriod(double_t  value) ;

constexpr void __cordl_internal_set_DelayShape(::GlobalNamespace::NetConfigSimulationOscillator_WaveShape  value) ;

constexpr void __cordl_internal_set_DelayThreshold(double_t  value) ;

constexpr void __cordl_internal_set_Enabled(bool  value) ;

constexpr void __cordl_internal_set_LossChanceMax(double_t  value) ;

constexpr void __cordl_internal_set_LossChanceMin(double_t  value) ;

constexpr void __cordl_internal_set_LossChancePeriod(double_t  value) ;

constexpr void __cordl_internal_set_LossChanceShape(::GlobalNamespace::NetConfigSimulationOscillator_WaveShape  value) ;

constexpr void __cordl_internal_set_LossChanceThreshold(double_t  value) ;

/// @brief Method .ctor, addr 0x600227c, size 0x44, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkSimulationConfiguration() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkSimulationConfiguration", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkSimulationConfiguration(NetworkSimulationConfiguration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkSimulationConfiguration", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkSimulationConfiguration(NetworkSimulationConfiguration const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19337};

/// [InlineHelp]
/// @brief Field Enabled, offset: 0x10, size: 0x1, def value: None
 bool  ___Enabled;

/// [InlineHelp]
/// [DrawIf("Enabled", Hide = true)]
/// @brief Field DelayShape, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::NetConfigSimulationOscillator_WaveShape  ___DelayShape;

/// [InlineHelp]
/// [DrawIf("Enabled", Hide = true)]
/// [Unit((Fusion.Units)2)]
/// [RangeEx(0, 0.5)]
/// @brief Field DelayMin, offset: 0x18, size: 0x8, def value: None
 double_t  ___DelayMin;

/// [InlineHelp]
/// [DrawIf("Enabled", Hide = true)]
/// [Unit((Fusion.Units)2)]
/// [RangeEx(0, 0.5)]
/// @brief Field DelayMax, offset: 0x20, size: 0x8, def value: None
 double_t  ___DelayMax;

/// [InlineHelp]
/// [DrawIf("Enabled", Hide = true)]
/// [Unit((Fusion.Units)2)]
/// [RangeEx(0, 10)]
/// @brief Field DelayPeriod, offset: 0x28, size: 0x8, def value: None
 double_t  ___DelayPeriod;

/// [InlineHelp]
/// [DrawIf("Enabled", Hide = true)]
/// [Unit((Fusion.Units)2)]
/// [RangeEx(0, 1)]
/// @brief Field DelayThreshold, offset: 0x30, size: 0x8, def value: None
 double_t  ___DelayThreshold;

/// [InlineHelp]
/// [DrawIf("Enabled", Hide = true)]
/// [Unit((Fusion.Units)2)]
/// [RangeEx(0, 1)]
/// @brief Field AdditionalJitter, offset: 0x38, size: 0x8, def value: None
 double_t  ___AdditionalJitter;

/// [InlineHelp]
/// [DrawIf("Enabled", Hide = true)]
/// [Space]
/// @brief Field LossChanceShape, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::NetConfigSimulationOscillator_WaveShape  ___LossChanceShape;

/// [InlineHelp]
/// [DrawIf("Enabled", Hide = true)]
/// [Unit((Fusion.Units)9)]
/// [RangeEx(0, 1)]
/// @brief Field LossChanceMin, offset: 0x48, size: 0x8, def value: None
 double_t  ___LossChanceMin;

/// [InlineHelp]
/// [DrawIf("Enabled", Hide = true)]
/// [Unit((Fusion.Units)9)]
/// [RangeEx(0, 1)]
/// @brief Field LossChanceMax, offset: 0x50, size: 0x8, def value: None
 double_t  ___LossChanceMax;

/// [InlineHelp]
/// [DrawIf("Enabled", Hide = true)]
/// [Unit((Fusion.Units)9)]
/// [RangeEx(0, 1)]
/// @brief Field LossChanceThreshold, offset: 0x58, size: 0x8, def value: None
 double_t  ___LossChanceThreshold;

/// [InlineHelp]
/// [DrawIf("Enabled", Hide = true)]
/// [Unit((Fusion.Units)2)]
/// [RangeEx(0, 10)]
/// @brief Field LossChancePeriod, offset: 0x60, size: 0x8, def value: None
 double_t  ___LossChancePeriod;

/// [InlineHelp]
/// [DrawIf("Enabled", Hide = true)]
/// [Unit((Fusion.Units)9)]
/// [RangeEx(0, 1)]
/// @brief Field AdditionalLoss, offset: 0x68, size: 0x8, def value: None
 double_t  ___AdditionalLoss;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkSimulationConfiguration, ___Enabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSimulationConfiguration, ___DelayShape) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSimulationConfiguration, ___DelayMin) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSimulationConfiguration, ___DelayMax) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSimulationConfiguration, ___DelayPeriod) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSimulationConfiguration, ___DelayThreshold) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSimulationConfiguration, ___AdditionalJitter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSimulationConfiguration, ___LossChanceShape) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSimulationConfiguration, ___LossChanceMin) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSimulationConfiguration, ___LossChanceMax) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSimulationConfiguration, ___LossChanceThreshold) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSimulationConfiguration, ___LossChancePeriod) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSimulationConfiguration, ___AdditionalLoss) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkSimulationConfiguration) == 0x70, "Size mismatch!");

} // namespace end def Fusion
