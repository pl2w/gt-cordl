#pragma once
// IWYU pragma private; include "Fusion/InterpolatedErrorCorrectionSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(InterpolatedErrorCorrectionSettings)
// Forward declare root types
namespace Fusion {
class InterpolatedErrorCorrectionSettings;
}
// Write type traits
MARK_REF_T(::Fusion::InterpolatedErrorCorrectionSettings*);
DEFINE_IL2CPP_CLASS(::Fusion::InterpolatedErrorCorrectionSettings*, "Fusion", "InterpolatedErrorCorrectionSettings");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.InterpolatedErrorCorrectionSettings
class CORDL_TYPE InterpolatedErrorCorrectionSettings : public ::System::Object {
public:
// Declarations
/// @brief Field MaxRate, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxRate, put=__cordl_internal_set_MaxRate)) float_t  MaxRate;

/// @brief Field MinRate, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_MinRate, put=__cordl_internal_set_MinRate)) float_t  MinRate;

/// @brief Field PosBlendEnd, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_PosBlendEnd, put=__cordl_internal_set_PosBlendEnd)) float_t  PosBlendEnd;

/// @brief Field PosBlendStart, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_PosBlendStart, put=__cordl_internal_set_PosBlendStart)) float_t  PosBlendStart;

/// @brief Field PosMinCorrection, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_PosMinCorrection, put=__cordl_internal_set_PosMinCorrection)) float_t  PosMinCorrection;

/// @brief Field PosTeleportDistance, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_PosTeleportDistance, put=__cordl_internal_set_PosTeleportDistance)) float_t  PosTeleportDistance;

/// @brief Field RotBlendEnd, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_RotBlendEnd, put=__cordl_internal_set_RotBlendEnd)) float_t  RotBlendEnd;

/// @brief Field RotBlendStart, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_RotBlendStart, put=__cordl_internal_set_RotBlendStart)) float_t  RotBlendStart;

/// @brief Field RotTeleportRadians, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_RotTeleportRadians, put=__cordl_internal_set_RotTeleportRadians)) float_t  RotTeleportRadians;

static inline ::Fusion::InterpolatedErrorCorrectionSettings* New_ctor() ;

constexpr float_t const& __cordl_internal_get_MaxRate() const;

constexpr float_t& __cordl_internal_get_MaxRate() ;

constexpr float_t const& __cordl_internal_get_MinRate() const;

constexpr float_t& __cordl_internal_get_MinRate() ;

constexpr float_t const& __cordl_internal_get_PosBlendEnd() const;

constexpr float_t& __cordl_internal_get_PosBlendEnd() ;

constexpr float_t const& __cordl_internal_get_PosBlendStart() const;

constexpr float_t& __cordl_internal_get_PosBlendStart() ;

constexpr float_t const& __cordl_internal_get_PosMinCorrection() const;

constexpr float_t& __cordl_internal_get_PosMinCorrection() ;

constexpr float_t const& __cordl_internal_get_PosTeleportDistance() const;

constexpr float_t& __cordl_internal_get_PosTeleportDistance() ;

constexpr float_t const& __cordl_internal_get_RotBlendEnd() const;

constexpr float_t& __cordl_internal_get_RotBlendEnd() ;

constexpr float_t const& __cordl_internal_get_RotBlendStart() const;

constexpr float_t& __cordl_internal_get_RotBlendStart() ;

constexpr float_t const& __cordl_internal_get_RotTeleportRadians() const;

constexpr float_t& __cordl_internal_get_RotTeleportRadians() ;

constexpr void __cordl_internal_set_MaxRate(float_t  value) ;

constexpr void __cordl_internal_set_MinRate(float_t  value) ;

constexpr void __cordl_internal_set_PosBlendEnd(float_t  value) ;

constexpr void __cordl_internal_set_PosBlendStart(float_t  value) ;

constexpr void __cordl_internal_set_PosMinCorrection(float_t  value) ;

constexpr void __cordl_internal_set_PosTeleportDistance(float_t  value) ;

constexpr void __cordl_internal_set_RotBlendEnd(float_t  value) ;

constexpr void __cordl_internal_set_RotBlendStart(float_t  value) ;

constexpr void __cordl_internal_set_RotTeleportRadians(float_t  value) ;

/// @brief Method .ctor, addr 0x5fa06c0, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InterpolatedErrorCorrectionSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InterpolatedErrorCorrectionSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InterpolatedErrorCorrectionSettings(InterpolatedErrorCorrectionSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InterpolatedErrorCorrectionSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InterpolatedErrorCorrectionSettings(InterpolatedErrorCorrectionSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19052};

/// [InlineHelp]
/// @brief Field MinRate, offset: 0x10, size: 0x4, def value: None
 float_t  ___MinRate;

/// [InlineHelp]
/// @brief Field MaxRate, offset: 0x14, size: 0x4, def value: None
 float_t  ___MaxRate;

/// [InlineHelp]
/// [Header("Position Error")]
/// @brief Field PosBlendStart, offset: 0x18, size: 0x4, def value: None
 float_t  ___PosBlendStart;

/// [InlineHelp]
/// @brief Field PosBlendEnd, offset: 0x1c, size: 0x4, def value: None
 float_t  ___PosBlendEnd;

/// [InlineHelp]
/// @brief Field PosMinCorrection, offset: 0x20, size: 0x4, def value: None
 float_t  ___PosMinCorrection;

/// [InlineHelp]
/// @brief Field PosTeleportDistance, offset: 0x24, size: 0x4, def value: None
 float_t  ___PosTeleportDistance;

/// [InlineHelp]
/// [Header("Rotation Error")]
/// @brief Field RotBlendStart, offset: 0x28, size: 0x4, def value: None
 float_t  ___RotBlendStart;

/// [InlineHelp]
/// @brief Field RotBlendEnd, offset: 0x2c, size: 0x4, def value: None
 float_t  ___RotBlendEnd;

/// [InlineHelp]
/// @brief Field RotTeleportRadians, offset: 0x30, size: 0x4, def value: None
 float_t  ___RotTeleportRadians;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::InterpolatedErrorCorrectionSettings, ___MinRate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::InterpolatedErrorCorrectionSettings, ___MaxRate) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Fusion::InterpolatedErrorCorrectionSettings, ___PosBlendStart) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::InterpolatedErrorCorrectionSettings, ___PosBlendEnd) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Fusion::InterpolatedErrorCorrectionSettings, ___PosMinCorrection) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::InterpolatedErrorCorrectionSettings, ___PosTeleportDistance) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Fusion::InterpolatedErrorCorrectionSettings, ___RotBlendStart) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::InterpolatedErrorCorrectionSettings, ___RotBlendEnd) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Fusion::InterpolatedErrorCorrectionSettings, ___RotTeleportRadians) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Fusion::InterpolatedErrorCorrectionSettings) == 0x38, "Size mismatch!");

} // namespace end def Fusion
