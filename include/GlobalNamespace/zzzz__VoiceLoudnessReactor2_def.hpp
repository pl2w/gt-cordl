#pragma once
// IWYU pragma private; include "GlobalNamespace/VoiceLoudnessReactor2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VoiceLoudnessReactor2)
namespace GlobalNamespace {
class GorillaSpeakerLoudness;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GorillaTag::Cosmetics {
class ContinuousPropertyArray;
}
namespace GorillaTag {
class IDynamicFloat;
}
// Forward declare root types
namespace GlobalNamespace {
class VoiceLoudnessReactor2;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VoiceLoudnessReactor2*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VoiceLoudnessReactor2*, "", "VoiceLoudnessReactor2");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: VoiceLoudnessReactor2
class CORDL_TYPE VoiceLoudnessReactor2 : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=GorillaTag_IDynamicFloat_get_floatValue)) float_t  GorillaTag_IDynamicFloat_floatValue;

 __declspec(property(get=get_Loudness)) float_t  Loudness;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field continuousProperties, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_continuousProperties, put=__cordl_internal_set_continuousProperties)) ::GorillaTag::Cosmetics::ContinuousPropertyArray*  continuousProperties;

/// @brief Field gsl, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_gsl, put=__cordl_internal_set_gsl)) ::UnityW<::GlobalNamespace::GorillaSpeakerLoudness>  gsl;

/// @brief Field sensitivity, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_sensitivity, put=__cordl_internal_set_sensitivity)) float_t  sensitivity;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Convert operator to "::GorillaTag::IDynamicFloat"
constexpr operator  ::GorillaTag::IDynamicFloat*() noexcept;

/// @brief Method GorillaTag.IDynamicFloat.get_floatValue, addr 0x5795d60, size 0x20, virtual true, abstract: false, final true
inline float_t GorillaTag_IDynamicFloat_get_floatValue() ;

static inline ::GlobalNamespace::VoiceLoudnessReactor2* New_ctor() ;

/// @brief Method OnDisable, addr 0x5795f64, size 0x6c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5795d80, size 0x1e4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Tick, addr 0x5795fe0, size 0x34, virtual true, abstract: false, final true
inline void Tick() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray* const& __cordl_internal_get_continuousProperties() const;

constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray*& __cordl_internal_get_continuousProperties() ;

constexpr ::UnityW<::GlobalNamespace::GorillaSpeakerLoudness> const& __cordl_internal_get_gsl() const;

constexpr ::UnityW<::GlobalNamespace::GorillaSpeakerLoudness>& __cordl_internal_get_gsl() ;

constexpr float_t const& __cordl_internal_get_sensitivity() const;

constexpr float_t& __cordl_internal_get_sensitivity() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_continuousProperties(::GorillaTag::Cosmetics::ContinuousPropertyArray*  value) ;

constexpr void __cordl_internal_set_gsl(::UnityW<::GlobalNamespace::GorillaSpeakerLoudness>  value) ;

constexpr void __cordl_internal_set_sensitivity(float_t  value) ;

/// @brief Method .ctor, addr 0x5796014, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Loudness, addr 0x5795d40, size 0x20, virtual false, abstract: false, final false
inline float_t get_Loudness() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x5795fd0, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// @brief Convert to "::GorillaTag::IDynamicFloat"
constexpr ::GorillaTag::IDynamicFloat* i___GorillaTag__IDynamicFloat() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x5795fd8, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceLoudnessReactor2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceLoudnessReactor2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceLoudnessReactor2(VoiceLoudnessReactor2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceLoudnessReactor2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceLoudnessReactor2(VoiceLoudnessReactor2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1459};

/// [Tooltip("Multiply the microphone input by this value. A good default is 15.")]
/// @brief Field sensitivity, offset: 0x20, size: 0x4, def value: None
 float_t  ___sensitivity;

/// @brief Field continuousProperties, offset: 0x28, size: 0x8, def value: None
 ::GorillaTag::Cosmetics::ContinuousPropertyArray*  ___continuousProperties;

/// @brief Field gsl, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaSpeakerLoudness>  ___gsl;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x38, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactor2, ___sensitivity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactor2, ___continuousProperties) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactor2, ___gsl) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactor2, ____TickRunning_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VoiceLoudnessReactor2) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
