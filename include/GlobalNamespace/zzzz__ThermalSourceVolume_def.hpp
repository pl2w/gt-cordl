#pragma once
// IWYU pragma private; include "GlobalNamespace/ThermalSourceVolume.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ThermalSourceVolume)
namespace GlobalNamespace {
class ThermalReceiver;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ThermalSourceVolume;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ThermalSourceVolume*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ThermalSourceVolume*, "", "ThermalSourceVolume");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ThermalSourceVolume
class CORDL_TYPE ThermalSourceVolume : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field celsius, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_celsius, put=__cordl_internal_set_celsius)) float_t  celsius;

/// @brief Field exclusionReceivers, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_exclusionReceivers, put=__cordl_internal_set_exclusionReceivers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThermalReceiver>>*  exclusionReceivers;

/// @brief Field innerRadius, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_innerRadius, put=__cordl_internal_set_innerRadius)) float_t  innerRadius;

/// @brief Field outerRadius, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_outerRadius, put=__cordl_internal_set_outerRadius)) float_t  outerRadius;

static inline ::GlobalNamespace::ThermalSourceVolume* New_ctor() ;

/// @brief Method OnDisable, addr 0x56b0930, size 0x54, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x56b08dc, size 0x54, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr float_t const& __cordl_internal_get_celsius() const;

constexpr float_t& __cordl_internal_get_celsius() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThermalReceiver>>* const& __cordl_internal_get_exclusionReceivers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThermalReceiver>>*& __cordl_internal_get_exclusionReceivers() ;

constexpr float_t const& __cordl_internal_get_innerRadius() const;

constexpr float_t& __cordl_internal_get_innerRadius() ;

constexpr float_t const& __cordl_internal_get_outerRadius() const;

constexpr float_t& __cordl_internal_get_outerRadius() ;

constexpr void __cordl_internal_set_celsius(float_t  value) ;

constexpr void __cordl_internal_set_exclusionReceivers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThermalReceiver>>*  value) ;

constexpr void __cordl_internal_set_innerRadius(float_t  value) ;

constexpr void __cordl_internal_set_outerRadius(float_t  value) ;

/// @brief Method .ctor, addr 0x56b0984, size 0x9c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThermalSourceVolume() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThermalSourceVolume", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ThermalSourceVolume(ThermalSourceVolume && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThermalSourceVolume", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThermalSourceVolume(ThermalSourceVolume const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{938};

/// [Tooltip("Temperature in celsius. Default is 20 which is room temperature.")]
/// @brief Field celsius, offset: 0x20, size: 0x4, def value: None
 float_t  ___celsius;

/// @brief Field innerRadius, offset: 0x24, size: 0x4, def value: None
 float_t  ___innerRadius;

/// @brief Field outerRadius, offset: 0x28, size: 0x4, def value: None
 float_t  ___outerRadius;

/// [Tooltip("Exclude these thermal receivers from being impacted by this source")]
/// @brief Field exclusionReceivers, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThermalReceiver>>*  ___exclusionReceivers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ThermalSourceVolume, ___celsius) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThermalSourceVolume, ___innerRadius) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThermalSourceVolume, ___outerRadius) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThermalSourceVolume, ___exclusionReceivers) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ThermalSourceVolume) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
