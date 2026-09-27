#pragma once
// IWYU pragma private; include "GlobalNamespace/LightningDispatcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LightningDispatcher)
namespace GlobalNamespace {
class LightningDispatcher_DispatchLightningEvent;
}
namespace GlobalNamespace {
class LightningStrike;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class LightningDispatcher;
}
namespace GlobalNamespace {
class LightningDispatcher_DispatchLightningEvent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LightningDispatcher*);
MARK_REF_T(::GlobalNamespace::LightningDispatcher_DispatchLightningEvent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightningDispatcher*, "", "LightningDispatcher");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightningDispatcher_DispatchLightningEvent*, "", "LightningDispatcher/DispatchLightningEvent");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightningDispatcher
class CORDL_TYPE LightningDispatcher : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DispatchLightningEvent = ::GlobalNamespace::LightningDispatcher_DispatchLightningEvent;

/// @brief Field RequestLightningStrike, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RequestLightningStrike, put=setStaticF_RequestLightningStrike)) ::GlobalNamespace::LightningDispatcher_DispatchLightningEvent*  RequestLightningStrike;

/// @brief Field beamWidthCM, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_beamWidthCM, put=__cordl_internal_set_beamWidthCM)) float_t  beamWidthCM;

/// @brief Field colorOverLifetime, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_colorOverLifetime, put=__cordl_internal_set_colorOverLifetime)) ::UnityEngine::Gradient*  colorOverLifetime;

/// @brief Field maxDuration, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDuration, put=__cordl_internal_set_maxDuration)) float_t  maxDuration;

/// @brief Field minDuration, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_minDuration, put=__cordl_internal_set_minDuration)) float_t  minDuration;

/// @brief Field soundVolumeMultiplier, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_soundVolumeMultiplier, put=__cordl_internal_set_soundVolumeMultiplier)) float_t  soundVolumeMultiplier;

/// @brief Method DispatchLightning, addr 0x5b2e410, size 0x224, virtual false, abstract: false, final false
inline void DispatchLightning(::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2) ;

static inline ::GlobalNamespace::LightningDispatcher* New_ctor() ;

constexpr float_t const& __cordl_internal_get_beamWidthCM() const;

constexpr float_t& __cordl_internal_get_beamWidthCM() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_colorOverLifetime() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_colorOverLifetime() ;

constexpr float_t const& __cordl_internal_get_maxDuration() const;

constexpr float_t& __cordl_internal_get_maxDuration() ;

constexpr float_t const& __cordl_internal_get_minDuration() const;

constexpr float_t& __cordl_internal_get_minDuration() ;

constexpr float_t const& __cordl_internal_get_soundVolumeMultiplier() const;

constexpr float_t& __cordl_internal_get_soundVolumeMultiplier() ;

constexpr void __cordl_internal_set_beamWidthCM(float_t  value) ;

constexpr void __cordl_internal_set_colorOverLifetime(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_maxDuration(float_t  value) ;

constexpr void __cordl_internal_set_minDuration(float_t  value) ;

constexpr void __cordl_internal_set_soundVolumeMultiplier(float_t  value) ;

/// @brief Method .ctor, addr 0x5b2e908, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_RequestLightningStrike, addr 0x5b2e2a0, size 0xb8, virtual false, abstract: false, final false
static inline void add_RequestLightningStrike(::GlobalNamespace::LightningDispatcher_DispatchLightningEvent*  value) ;

static inline ::GlobalNamespace::LightningDispatcher_DispatchLightningEvent* getStaticF_RequestLightningStrike() ;

/// [CompilerGenerated]
/// @brief Method remove_RequestLightningStrike, addr 0x5b2e358, size 0xb8, virtual false, abstract: false, final false
static inline void remove_RequestLightningStrike(::GlobalNamespace::LightningDispatcher_DispatchLightningEvent*  value) ;

static inline void setStaticF_RequestLightningStrike(::GlobalNamespace::LightningDispatcher_DispatchLightningEvent*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightningDispatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightningDispatcher", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LightningDispatcher(LightningDispatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightningDispatcher", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightningDispatcher(LightningDispatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3648};

/// [SerializeField]
/// @brief Field beamWidthCM, offset: 0x20, size: 0x4, def value: None
 float_t  ___beamWidthCM;

/// [SerializeField]
/// @brief Field soundVolumeMultiplier, offset: 0x24, size: 0x4, def value: None
 float_t  ___soundVolumeMultiplier;

/// [SerializeField]
/// @brief Field minDuration, offset: 0x28, size: 0x4, def value: None
 float_t  ___minDuration;

/// [SerializeField]
/// @brief Field maxDuration, offset: 0x2c, size: 0x4, def value: None
 float_t  ___maxDuration;

/// [SerializeField]
/// @brief Field colorOverLifetime, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___colorOverLifetime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightningDispatcher, ___beamWidthCM) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightningDispatcher, ___soundVolumeMultiplier) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightningDispatcher, ___minDuration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightningDispatcher, ___maxDuration) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightningDispatcher, ___colorOverLifetime) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightningDispatcher) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightningDispatcher/DispatchLightningEvent
class CORDL_TYPE LightningDispatcher_DispatchLightningEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5b2e9d0, size 0xa8, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5b2ea78, size 0xc, virtual true, abstract: false, final false
inline ::UnityW<::GlobalNamespace::LightningStrike> EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5b2e9bc, size 0x14, virtual true, abstract: false, final false
inline ::UnityW<::GlobalNamespace::LightningStrike> Invoke(::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2) ;

static inline ::GlobalNamespace::LightningDispatcher_DispatchLightningEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5b2e91c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightningDispatcher_DispatchLightningEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightningDispatcher_DispatchLightningEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LightningDispatcher_DispatchLightningEvent(LightningDispatcher_DispatchLightningEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightningDispatcher_DispatchLightningEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightningDispatcher_DispatchLightningEvent(LightningDispatcher_DispatchLightningEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3647};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::LightningDispatcher_DispatchLightningEvent) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
