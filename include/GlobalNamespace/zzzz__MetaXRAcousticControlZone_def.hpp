#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAcousticControlZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MetaXRAcousticControlZone)
namespace GlobalNamespace {
class MetaXRAcousticControlZone_State;
}
namespace Meta::XR::Acoustics {
class Spectrum;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MetaXRAcousticControlZone;
}
namespace GlobalNamespace {
class MetaXRAcousticControlZone_State;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MetaXRAcousticControlZone*);
MARK_REF_T(::GlobalNamespace::MetaXRAcousticControlZone_State*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAcousticControlZone*, "", "MetaXRAcousticControlZone");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAcousticControlZone_State*, "", "MetaXRAcousticControlZone/State");
// Dependencies System.IntPtr, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAcousticControlZone
class CORDL_TYPE MetaXRAcousticControlZone : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using State = ::GlobalNamespace::MetaXRAcousticControlZone_State;

 __declspec(property(get=get_FadeDistance, put=set_FadeDistance)) float_t  FadeDistance;

 __declspec(property(get=get_NativeBoxSize)) ::UnityEngine::Vector3  NativeBoxSize;

 __declspec(property(get=get_NativeFadeDistance)) ::UnityEngine::Vector3  NativeFadeDistance;

 __declspec(property(get=get_ReverbLevel, put=set_ReverbLevel)) ::Meta::XR::Acoustics::Spectrum*  ReverbLevel;

 __declspec(property(get=get_Rt60, put=set_Rt60)) ::Meta::XR::Acoustics::Spectrum*  Rt60;

 __declspec(property(get=get_ZoneColor, put=set_ZoneColor)) ::UnityEngine::Color  ZoneColor;

/// @brief Field _controlHandle, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__controlHandle, put=__cordl_internal_set__controlHandle)) ::System::IntPtr  _controlHandle;

/// @brief Field _state, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__state, put=__cordl_internal_set__state)) ::GlobalNamespace::MetaXRAcousticControlZone_State*  _state;

 __declspec(property(get=get_state)) ::GlobalNamespace::MetaXRAcousticControlZone_State*  state;

/// @brief Method ApplyProperties, addr 0x9e9f890, size 0x41c, virtual false, abstract: false, final false
inline void ApplyProperties() ;

/// @brief Method ApplyTransform, addr 0x9e9f064, size 0x258, virtual false, abstract: false, final false
inline void ApplyTransform() ;

/// @brief Method Clone, addr 0x9e9f3a8, size 0x14, virtual false, abstract: false, final false
inline void Clone(::GlobalNamespace::MetaXRAcousticControlZone_State*  other) ;

/// @brief Method DestroyInternal, addr 0x9e9fcb0, size 0xc0, virtual false, abstract: false, final false
inline void DestroyInternal() ;

/// @brief Method LateUpdate, addr 0x9e9ff00, size 0x5c, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::MetaXRAcousticControlZone* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9e9fcac, size 0x4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x9e9fe38, size 0xc8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9e9fd70, size 0xc8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0x9e9f6e0, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartInternal, addr 0x9e9f6e4, size 0x134, virtual false, abstract: false, final false
inline void StartInternal() ;

constexpr ::System::IntPtr const& __cordl_internal_get__controlHandle() const;

constexpr ::System::IntPtr& __cordl_internal_get__controlHandle() ;

constexpr ::GlobalNamespace::MetaXRAcousticControlZone_State* const& __cordl_internal_get__state() const;

constexpr ::GlobalNamespace::MetaXRAcousticControlZone_State*& __cordl_internal_get__state() ;

constexpr void __cordl_internal_set__controlHandle(::System::IntPtr  value) ;

constexpr void __cordl_internal_set__state(::GlobalNamespace::MetaXRAcousticControlZone_State*  value) ;

/// @brief Method .ctor, addr 0x9e9f418, size 0x21c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_FadeDistance, addr 0x9e9f034, size 0x18, virtual false, abstract: false, final false
inline float_t get_FadeDistance() ;

/// @brief Method get_NativeBoxSize, addr 0x9e9f364, size 0x44, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_NativeBoxSize() ;

/// @brief Method get_NativeFadeDistance, addr 0x9e9f2bc, size 0xa8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_NativeFadeDistance() ;

/// @brief Method get_ReverbLevel, addr 0x9e9f004, size 0x18, virtual false, abstract: false, final false
inline ::Meta::XR::Acoustics::Spectrum* get_ReverbLevel() ;

/// @brief Method get_Rt60, addr 0x9e9efd4, size 0x18, virtual false, abstract: false, final false
inline ::Meta::XR::Acoustics::Spectrum* get_Rt60() ;

/// @brief Method get_ZoneColor, addr 0x9e9ef9c, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_ZoneColor() ;

/// @brief Method get_state, addr 0x9e9ef94, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::MetaXRAcousticControlZone_State* get_state() ;

/// @brief Method set_FadeDistance, addr 0x9e9f04c, size 0x18, virtual false, abstract: false, final false
inline void set_FadeDistance(float_t  value) ;

/// @brief Method set_ReverbLevel, addr 0x9e9f01c, size 0x18, virtual false, abstract: false, final false
inline void set_ReverbLevel(::Meta::XR::Acoustics::Spectrum*  value) ;

/// @brief Method set_Rt60, addr 0x9e9efec, size 0x18, virtual false, abstract: false, final false
inline void set_Rt60(::Meta::XR::Acoustics::Spectrum*  value) ;

/// @brief Method set_ZoneColor, addr 0x9e9efb8, size 0x1c, virtual false, abstract: false, final false
inline void set_ZoneColor(::UnityEngine::Color  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAcousticControlZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticControlZone", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetaXRAcousticControlZone(MetaXRAcousticControlZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticControlZone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaXRAcousticControlZone(MetaXRAcousticControlZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29910};

/// [SerializeField]
/// @brief Field _state, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::MetaXRAcousticControlZone_State*  ____state;

/// @brief Field _controlHandle, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  ____controlHandle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetaXRAcousticControlZone, ____state) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticControlZone, ____controlHandle) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetaXRAcousticControlZone) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAcousticControlZone/State
class CORDL_TYPE MetaXRAcousticControlZone_State : public ::System::Object {
public:
// Declarations
/// @brief Field color, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_color, put=__cordl_internal_set_color)) ::UnityEngine::Color  color;

/// @brief Field fadeDistance, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_fadeDistance, put=__cordl_internal_set_fadeDistance)) float_t  fadeDistance;

/// @brief Field reverbLevel, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_reverbLevel, put=__cordl_internal_set_reverbLevel)) ::Meta::XR::Acoustics::Spectrum*  reverbLevel;

/// @brief Field rt60, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_rt60, put=__cordl_internal_set_rt60)) ::Meta::XR::Acoustics::Spectrum*  rt60;

/// @brief Method Clone, addr 0x9e9f3bc, size 0x5c, virtual false, abstract: false, final false
inline void Clone(::GlobalNamespace::MetaXRAcousticControlZone_State*  other) ;

static inline ::GlobalNamespace::MetaXRAcousticControlZone_State* New_ctor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_color() ;

constexpr float_t const& __cordl_internal_get_fadeDistance() const;

constexpr float_t& __cordl_internal_get_fadeDistance() ;

constexpr ::Meta::XR::Acoustics::Spectrum* const& __cordl_internal_get_reverbLevel() const;

constexpr ::Meta::XR::Acoustics::Spectrum*& __cordl_internal_get_reverbLevel() ;

constexpr ::Meta::XR::Acoustics::Spectrum* const& __cordl_internal_get_rt60() const;

constexpr ::Meta::XR::Acoustics::Spectrum*& __cordl_internal_get_rt60() ;

constexpr void __cordl_internal_set_color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_fadeDistance(float_t  value) ;

constexpr void __cordl_internal_set_reverbLevel(::Meta::XR::Acoustics::Spectrum*  value) ;

constexpr void __cordl_internal_set_rt60(::Meta::XR::Acoustics::Spectrum*  value) ;

/// @brief Method .ctor, addr 0x9e9f634, size 0xac, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAcousticControlZone_State() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticControlZone_State", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetaXRAcousticControlZone_State(MetaXRAcousticControlZone_State && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticControlZone_State", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaXRAcousticControlZone_State(MetaXRAcousticControlZone_State const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29909};

/// [SerializeField]
/// @brief Field color, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Color  ___color;

/// [SerializeField]
/// @brief Field rt60, offset: 0x20, size: 0x8, def value: None
 ::Meta::XR::Acoustics::Spectrum*  ___rt60;

/// [SerializeField]
/// @brief Field reverbLevel, offset: 0x28, size: 0x8, def value: None
 ::Meta::XR::Acoustics::Spectrum*  ___reverbLevel;

/// [SerializeField]
/// @brief Field fadeDistance, offset: 0x30, size: 0x4, def value: None
 float_t  ___fadeDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetaXRAcousticControlZone_State, ___color) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticControlZone_State, ___rt60) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticControlZone_State, ___reverbLevel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticControlZone_State, ___fadeDistance) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetaXRAcousticControlZone_State) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
