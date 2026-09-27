#pragma once
// IWYU pragma private; include "Fusion/SimulationMessageInternal_SetAreaOfInterest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SimulationMessageInternal_SetAreaOfInterest)
// Forward declare root types
namespace Fusion {
struct SimulationMessageInternal_SetAreaOfInterest;
}
// Write type traits
MARK_VAL_T(::Fusion::SimulationMessageInternal_SetAreaOfInterest);
DEFINE_IL2CPP_CLASS(::Fusion::SimulationMessageInternal_SetAreaOfInterest, "Fusion", "SimulationMessageInternal_SetAreaOfInterest");
// Dependencies UnityEngine.Vector3
namespace Fusion {
// Is value type: true
// CS Name: Fusion.SimulationMessageInternal_SetAreaOfInterest
struct CORDL_TYPE SimulationMessageInternal_SetAreaOfInterest {
public:
// Declarations
/// @brief Field Center, offset 0x0, size 0xc 
 __declspec(property(get=__cordl_internal_get_Center, put=__cordl_internal_set_Center)) ::UnityEngine::Vector3  Center;

/// @brief Field Radius, offset 0xc, size 0x4 
 __declspec(property(get=__cordl_internal_get_Radius, put=__cordl_internal_set_Radius)) float_t  Radius;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Center() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_Center() ;

constexpr float_t const& __cordl_internal_get_Radius() const;

constexpr float_t& __cordl_internal_get_Radius() ;

constexpr void __cordl_internal_set_Center(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_Radius(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SimulationMessageInternal_SetAreaOfInterest() ;

// Ctor Parameters [CppParam { name: "Center", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Radius", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr SimulationMessageInternal_SetAreaOfInterest(::UnityEngine::Vector3  Center, float_t  Radius) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Center_padding[0x0];
/// @brief Field Center, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___Center;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Center_padding_forAlignment[0x0];
/// @brief Field Center, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___Center_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ___Radius_padding[0xc];
/// @brief Field Radius, offset: 0xc, size: 0x4, def value: None
 float_t  ___Radius;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ___Radius_padding_forAlignment[0xc];
/// @brief Field Radius, offset: 0xc, size: 0x4, def value: None
 float_t  ___Radius_forAlignment;
};
};
public:

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x10)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19352};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::SimulationMessageInternal_SetAreaOfInterest) == 0x10, "Size mismatch!");

} // namespace end def Fusion
