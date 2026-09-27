#pragma once
// IWYU pragma private; include "GlobalNamespace/ThermalReceiver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ThermalReceiver)
namespace GlobalNamespace {
class ThermalSourceVolume;
}
namespace GorillaTag::Cosmetics {
class ContinuousPropertyArray;
}
namespace GorillaTag {
class IDynamicFloat;
}
namespace GorillaTag {
class IResettableItem;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class ThermalReceiver;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ThermalReceiver*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ThermalReceiver*, "", "ThermalReceiver");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ThermalReceiver
class CORDL_TYPE ThermalReceiver : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Farenheit)) float_t  Farenheit;

/// @brief Field OnAboveThreshold, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnAboveThreshold, put=__cordl_internal_set_OnAboveThreshold)) ::UnityEngine::Events::UnityEvent*  OnAboveThreshold;

/// @brief Field OnBelowThreshold, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnBelowThreshold, put=__cordl_internal_set_OnBelowThreshold)) ::UnityEngine::Events::UnityEvent*  OnBelowThreshold;

/// @brief Field celsius, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_celsius, put=__cordl_internal_set_celsius)) float_t  celsius;

/// @brief Field conductivity, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_conductivity, put=__cordl_internal_set_conductivity)) float_t  conductivity;

/// @brief Field continuousProperties, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_continuousProperties, put=__cordl_internal_set_continuousProperties)) ::GorillaTag::Cosmetics::ContinuousPropertyArray*  continuousProperties;

/// @brief Field defaultCelsius, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultCelsius, put=__cordl_internal_set_defaultCelsius)) float_t  defaultCelsius;

/// @brief Field exclusionSources, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_exclusionSources, put=__cordl_internal_set_exclusionSources)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThermalSourceVolume>>*  exclusionSources;

 __declspec(property(get=get_floatValue)) float_t  floatValue;

/// @brief Field radius, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_radius, put=__cordl_internal_set_radius)) float_t  radius;

/// @brief Field temperatureThreshold, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_temperatureThreshold, put=__cordl_internal_set_temperatureThreshold)) float_t  temperatureThreshold;

/// @brief Field wasAboveThreshold, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasAboveThreshold, put=__cordl_internal_set_wasAboveThreshold)) bool  wasAboveThreshold;

/// @brief Convert operator to "::GorillaTag::IDynamicFloat"
constexpr operator  ::GorillaTag::IDynamicFloat*() noexcept;

/// @brief Convert operator to "::GorillaTag::IResettableItem"
constexpr operator  ::GorillaTag::IResettableItem*() noexcept;

/// @brief Method Awake, addr 0x56b0780, size 0x10, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::ThermalReceiver* New_ctor() ;

/// @brief Method OnDisable, addr 0x56b07e4, size 0x58, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x56b0790, size 0x54, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ResetToDefaultState, addr 0x56b083c, size 0xc, virtual true, abstract: false, final true
inline void ResetToDefaultState() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnAboveThreshold() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnAboveThreshold() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnBelowThreshold() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnBelowThreshold() ;

constexpr float_t const& __cordl_internal_get_celsius() const;

constexpr float_t& __cordl_internal_get_celsius() ;

constexpr float_t const& __cordl_internal_get_conductivity() const;

constexpr float_t& __cordl_internal_get_conductivity() ;

constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray* const& __cordl_internal_get_continuousProperties() const;

constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray*& __cordl_internal_get_continuousProperties() ;

constexpr float_t const& __cordl_internal_get_defaultCelsius() const;

constexpr float_t& __cordl_internal_get_defaultCelsius() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThermalSourceVolume>>* const& __cordl_internal_get_exclusionSources() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThermalSourceVolume>>*& __cordl_internal_get_exclusionSources() ;

constexpr float_t const& __cordl_internal_get_radius() const;

constexpr float_t& __cordl_internal_get_radius() ;

constexpr float_t const& __cordl_internal_get_temperatureThreshold() const;

constexpr float_t& __cordl_internal_get_temperatureThreshold() ;

constexpr bool const& __cordl_internal_get_wasAboveThreshold() const;

constexpr bool& __cordl_internal_get_wasAboveThreshold() ;

constexpr void __cordl_internal_set_OnAboveThreshold(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnBelowThreshold(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_celsius(float_t  value) ;

constexpr void __cordl_internal_set_conductivity(float_t  value) ;

constexpr void __cordl_internal_set_continuousProperties(::GorillaTag::Cosmetics::ContinuousPropertyArray*  value) ;

constexpr void __cordl_internal_set_defaultCelsius(float_t  value) ;

constexpr void __cordl_internal_set_exclusionSources(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThermalSourceVolume>>*  value) ;

constexpr void __cordl_internal_set_radius(float_t  value) ;

constexpr void __cordl_internal_set_temperatureThreshold(float_t  value) ;

constexpr void __cordl_internal_set_wasAboveThreshold(bool  value) ;

/// @brief Method .ctor, addr 0x56b0848, size 0x94, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Farenheit, addr 0x56b075c, size 0x1c, virtual false, abstract: false, final false
inline float_t get_Farenheit() ;

/// @brief Method get_floatValue, addr 0x56b0778, size 0x8, virtual true, abstract: false, final true
inline float_t get_floatValue() ;

/// @brief Convert to "::GorillaTag::IDynamicFloat"
constexpr ::GorillaTag::IDynamicFloat* i___GorillaTag__IDynamicFloat() noexcept;

/// @brief Convert to "::GorillaTag::IResettableItem"
constexpr ::GorillaTag::IResettableItem* i___GorillaTag__IResettableItem() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThermalReceiver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThermalReceiver", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ThermalReceiver(ThermalReceiver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThermalReceiver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThermalReceiver(ThermalReceiver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{937};

/// @brief Field radius, offset: 0x20, size: 0x4, def value: None
 float_t  ___radius;

/// [Tooltip("How fast the temperature should change overtime. 1.0 would be instantly.")]
/// @brief Field conductivity, offset: 0x24, size: 0x4, def value: None
 float_t  ___conductivity;

/// @brief Field continuousProperties, offset: 0x28, size: 0x8, def value: None
 ::GorillaTag::Cosmetics::ContinuousPropertyArray*  ___continuousProperties;

/// [Tooltip("Optional: Fire events if temperature goes below or above this threshold - Celsius")]
/// @brief Field temperatureThreshold, offset: 0x30, size: 0x4, def value: None
 float_t  ___temperatureThreshold;

/// [Tooltip("Exclude these thermal sources from impacting this receiver")]
/// @brief Field exclusionSources, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThermalSourceVolume>>*  ___exclusionSources;

/// [Space]
/// @brief Field OnAboveThreshold, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnAboveThreshold;

/// @brief Field OnBelowThreshold, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnBelowThreshold;

/// [DebugOption]
/// @brief Field celsius, offset: 0x50, size: 0x4, def value: None
 float_t  ___celsius;

/// @brief Field wasAboveThreshold, offset: 0x54, size: 0x1, def value: None
 bool  ___wasAboveThreshold;

/// @brief Field defaultCelsius, offset: 0x58, size: 0x4, def value: None
 float_t  ___defaultCelsius;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ThermalReceiver, ___radius) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThermalReceiver, ___conductivity) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThermalReceiver, ___continuousProperties) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThermalReceiver, ___temperatureThreshold) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThermalReceiver, ___exclusionSources) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThermalReceiver, ___OnAboveThreshold) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThermalReceiver, ___OnBelowThreshold) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThermalReceiver, ___celsius) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThermalReceiver, ___wasAboveThreshold) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThermalReceiver, ___defaultCelsius) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ThermalReceiver) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
