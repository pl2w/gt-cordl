#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/GlowBugsInJar.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GlowBugsInJar)
namespace GlobalNamespace {
class CallLimiter;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
class RubberDuckEvents;
}
namespace GlobalNamespace {
class TransferrableObject;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class GlowBugsInJar;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::GlowBugsInJar*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::GlowBugsInJar*, "GorillaTag.Cosmetics", "GlowBugsInJar");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Renderer
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.GlowBugsInJar
class CORDL_TYPE GlowBugsInJar : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field EmissionColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_EmissionColor, put=setStaticF_EmissionColor)) int32_t  EmissionColor;

/// @brief Field _events, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::UnityW<::GlobalNamespace::RubberDuckEvents>  _events;

/// @brief Field callLimiter, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_callLimiter, put=__cordl_internal_set_callLimiter)) ::GlobalNamespace::CallLimiter*  callLimiter;

/// @brief Field currentGlowAmount, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentGlowAmount, put=__cordl_internal_set_currentGlowAmount)) float_t  currentGlowAmount;

/// @brief Field glowDecreaseStepAmount, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_glowDecreaseStepAmount, put=__cordl_internal_set_glowDecreaseStepAmount)) float_t  glowDecreaseStepAmount;

/// @brief Field glowIncreaseStepAmount, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_glowIncreaseStepAmount, put=__cordl_internal_set_glowIncreaseStepAmount)) float_t  glowIncreaseStepAmount;

/// @brief Field glowUpdateInterval, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_glowUpdateInterval, put=__cordl_internal_set_glowUpdateInterval)) float_t  glowUpdateInterval;

/// @brief Field renderers, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderers, put=__cordl_internal_set_renderers)) ::ArrayW<::UnityW<::UnityEngine::Renderer>>  renderers;

/// @brief Field shaderProperty, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_shaderProperty, put=__cordl_internal_set_shaderProperty)) ::StringW  shaderProperty;

/// @brief Field shakeStarted, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_shakeStarted, put=__cordl_internal_set_shakeStarted)) bool  shakeStarted;

/// @brief Field shakeTimer, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_shakeTimer, put=__cordl_internal_set_shakeTimer)) float_t  shakeTimer;

/// @brief Field transferrableObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_transferrableObject, put=__cordl_internal_set_transferrableObject)) ::UnityW<::GlobalNamespace::TransferrableObject>  transferrableObject;

/// @brief Method HandleOnShakeEnd, addr 0x5d98560, size 0x194, virtual false, abstract: false, final false
inline void HandleOnShakeEnd() ;

/// @brief Method HandleOnShakeStart, addr 0x5d983c4, size 0x19c, virtual false, abstract: false, final false
inline void HandleOnShakeStart() ;

static inline ::GorillaTag::Cosmetics::GlowBugsInJar* New_ctor() ;

/// @brief Method OnDisable, addr 0x5d98134, size 0x138, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d97dbc, size 0x29c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnShakeEvent, addr 0x5d9826c, size 0x13c, virtual false, abstract: false, final false
inline void OnShakeEvent(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method ShakeEndLocal, addr 0x5d983b8, size 0xc, virtual false, abstract: false, final false
inline void ShakeEndLocal() ;

/// @brief Method ShakeStartLocal, addr 0x5d983a8, size 0x10, virtual false, abstract: false, final false
inline void ShakeStartLocal() ;

/// @brief Method Update, addr 0x5d986f4, size 0x78, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateGlow, addr 0x5d98058, size 0xdc, virtual false, abstract: false, final false
inline void UpdateGlow(float_t  value) ;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& __cordl_internal_get__events() const;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& __cordl_internal_get__events() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_callLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_callLimiter() ;

constexpr float_t const& __cordl_internal_get_currentGlowAmount() const;

constexpr float_t& __cordl_internal_get_currentGlowAmount() ;

constexpr float_t const& __cordl_internal_get_glowDecreaseStepAmount() const;

constexpr float_t& __cordl_internal_get_glowDecreaseStepAmount() ;

constexpr float_t const& __cordl_internal_get_glowIncreaseStepAmount() const;

constexpr float_t& __cordl_internal_get_glowIncreaseStepAmount() ;

constexpr float_t const& __cordl_internal_get_glowUpdateInterval() const;

constexpr float_t& __cordl_internal_get_glowUpdateInterval() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& __cordl_internal_get_renderers() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& __cordl_internal_get_renderers() ;

constexpr ::StringW const& __cordl_internal_get_shaderProperty() const;

constexpr ::StringW& __cordl_internal_get_shaderProperty() ;

constexpr bool const& __cordl_internal_get_shakeStarted() const;

constexpr bool& __cordl_internal_get_shakeStarted() ;

constexpr float_t const& __cordl_internal_get_shakeTimer() const;

constexpr float_t& __cordl_internal_get_shakeTimer() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& __cordl_internal_get_transferrableObject() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& __cordl_internal_get_transferrableObject() ;

constexpr void __cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value) ;

constexpr void __cordl_internal_set_callLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_currentGlowAmount(float_t  value) ;

constexpr void __cordl_internal_set_glowDecreaseStepAmount(float_t  value) ;

constexpr void __cordl_internal_set_glowIncreaseStepAmount(float_t  value) ;

constexpr void __cordl_internal_set_glowUpdateInterval(float_t  value) ;

constexpr void __cordl_internal_set_renderers(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value) ;

constexpr void __cordl_internal_set_shaderProperty(::StringW  value) ;

constexpr void __cordl_internal_set_shakeStarted(bool  value) ;

constexpr void __cordl_internal_set_shakeTimer(float_t  value) ;

constexpr void __cordl_internal_set_transferrableObject(::UnityW<::GlobalNamespace::TransferrableObject>  value) ;

/// @brief Method .ctor, addr 0x5d9876c, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_EmissionColor() ;

static inline void setStaticF_EmissionColor(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GlowBugsInJar() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GlowBugsInJar", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GlowBugsInJar(GlowBugsInJar && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GlowBugsInJar", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GlowBugsInJar(GlowBugsInJar const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4941};

/// [SerializeField]
/// @brief Field transferrableObject, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableObject>  ___transferrableObject;

/// [Space]
/// [Tooltip("Time interval - every X seconds update the glow value")]
/// [SerializeField]
/// @brief Field glowUpdateInterval, offset: 0x28, size: 0x4, def value: None
 float_t  ___glowUpdateInterval;

/// [Tooltip("step increment - increase the glow value one step for N amount")]
/// [SerializeField]
/// @brief Field glowIncreaseStepAmount, offset: 0x2c, size: 0x4, def value: None
 float_t  ___glowIncreaseStepAmount;

/// [Tooltip("step decrement - decrease the glow value one step for N amount")]
/// [SerializeField]
/// @brief Field glowDecreaseStepAmount, offset: 0x30, size: 0x4, def value: None
 float_t  ___glowDecreaseStepAmount;

/// [Space]
/// [SerializeField]
/// @brief Field shaderProperty, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___shaderProperty;

/// [SerializeField]
/// @brief Field renderers, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Renderer>>  ___renderers;

/// @brief Field shakeStarted, offset: 0x48, size: 0x1, def value: None
 bool  ___shakeStarted;

/// @brief Field currentGlowAmount, offset: 0x4c, size: 0x4, def value: None
 float_t  ___currentGlowAmount;

/// @brief Field shakeTimer, offset: 0x50, size: 0x4, def value: None
 float_t  ___shakeTimer;

/// @brief Field _events, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RubberDuckEvents>  ____events;

/// @brief Field callLimiter, offset: 0x60, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___callLimiter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::GlowBugsInJar, ___transferrableObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::GlowBugsInJar, ___glowUpdateInterval) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::GlowBugsInJar, ___glowIncreaseStepAmount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::GlowBugsInJar, ___glowDecreaseStepAmount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::GlowBugsInJar, ___shaderProperty) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::GlowBugsInJar, ___renderers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::GlowBugsInJar, ___shakeStarted) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::GlowBugsInJar, ___currentGlowAmount) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::GlowBugsInJar, ___shakeTimer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::GlowBugsInJar, ____events) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::GlowBugsInJar, ___callLimiter) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::GlowBugsInJar) == 0x68, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
