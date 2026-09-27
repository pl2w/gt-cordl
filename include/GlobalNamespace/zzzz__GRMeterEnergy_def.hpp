#pragma once
// IWYU pragma private; include "GlobalNamespace/GRMeterEnergy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRMeterEnergy_MeterType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GRMeterEnergy)
namespace GlobalNamespace {
struct GRMeterEnergy_MeterType;
}
namespace GlobalNamespace {
class GRTool;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GRMeterEnergy;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRMeterEnergy*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRMeterEnergy*, "", "GRMeterEnergy");
// Dependencies GRMeterEnergy::MeterType, UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRMeterEnergy
class CORDL_TYPE GRMeterEnergy : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using MeterType = ::GlobalNamespace::GRMeterEnergy_MeterType;

/// @brief Field angularRange, offset 0x3c, size 0x8 
 __declspec(property(get=__cordl_internal_get_angularRange, put=__cordl_internal_set_angularRange)) ::UnityEngine::Vector2  angularRange;

/// @brief Field chargePoint, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_chargePoint, put=__cordl_internal_set_chargePoint)) ::UnityW<::UnityEngine::Transform>  chargePoint;

/// @brief Field meter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_meter, put=__cordl_internal_set_meter)) ::UnityW<::UnityEngine::Transform>  meter;

/// @brief Field meterType, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_meterType, put=__cordl_internal_set_meterType)) ::GlobalNamespace::GRMeterEnergy_MeterType  meterType;

/// @brief Field rotationAxis, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationAxis, put=__cordl_internal_set_rotationAxis)) int32_t  rotationAxis;

/// @brief Field tool, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_tool, put=__cordl_internal_set_tool)) ::UnityW<::GlobalNamespace::GRTool>  tool;

/// @brief Method Awake, addr 0x589ed34, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GRMeterEnergy* New_ctor() ;

/// @brief Method Refresh, addr 0x589ed38, size 0x224, virtual false, abstract: false, final false
inline void Refresh() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_angularRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_angularRange() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_chargePoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_chargePoint() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_meter() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_meter() ;

constexpr ::GlobalNamespace::GRMeterEnergy_MeterType const& __cordl_internal_get_meterType() const;

constexpr ::GlobalNamespace::GRMeterEnergy_MeterType& __cordl_internal_get_meterType() ;

constexpr int32_t const& __cordl_internal_get_rotationAxis() const;

constexpr int32_t& __cordl_internal_get_rotationAxis() ;

constexpr ::UnityW<::GlobalNamespace::GRTool> const& __cordl_internal_get_tool() const;

constexpr ::UnityW<::GlobalNamespace::GRTool>& __cordl_internal_get_tool() ;

constexpr void __cordl_internal_set_angularRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_chargePoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_meter(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_meterType(::GlobalNamespace::GRMeterEnergy_MeterType  value) ;

constexpr void __cordl_internal_set_rotationAxis(int32_t  value) ;

constexpr void __cordl_internal_set_tool(::UnityW<::GlobalNamespace::GRTool>  value) ;

/// @brief Method .ctor, addr 0x589ef5c, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRMeterEnergy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRMeterEnergy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRMeterEnergy(GRMeterEnergy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRMeterEnergy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRMeterEnergy(GRMeterEnergy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1992};

/// @brief Field tool, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRTool>  ___tool;

/// @brief Field meter, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___meter;

/// @brief Field chargePoint, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___chargePoint;

/// @brief Field meterType, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::GRMeterEnergy_MeterType  ___meterType;

/// @brief Field angularRange, offset: 0x3c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___angularRange;

/// [Range(0, 2)]
/// @brief Field rotationAxis, offset: 0x44, size: 0x4, def value: None
 int32_t  ___rotationAxis;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRMeterEnergy, ___tool) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRMeterEnergy, ___meter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRMeterEnergy, ___chargePoint) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRMeterEnergy, ___meterType) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRMeterEnergy, ___angularRange) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRMeterEnergy, ___rotationAxis) == 0x44, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRMeterEnergy) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
