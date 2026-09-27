#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaEyeExpressions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ShaderHashId_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GorillaEyeExpressions)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class ISpeakerLoudness;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaEyeExpressions;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaEyeExpressions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaEyeExpressions*, "", "GorillaEyeExpressions");
// Dependencies ShaderHashId, UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaEyeExpressions
class CORDL_TYPE GorillaEyeExpressions : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field BaseUV, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_BaseUV, put=__cordl_internal_set_BaseUV)) ::UnityEngine::Vector2  BaseUV;

/// @brief Field ScreamUV, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ScreamUV, put=__cordl_internal_set_ScreamUV)) ::UnityEngine::Vector2  ScreamUV;

/// @brief Field _BaseMap_ST, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get__BaseMap_ST, put=__cordl_internal_set__BaseMap_ST)) ::GlobalNamespace::ShaderHashId  _BaseMap_ST;

/// @brief Field deltaTime, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_deltaTime, put=__cordl_internal_set_deltaTime)) float_t  deltaTime;

/// @brief Field loudness, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_loudness, put=__cordl_internal_set_loudness)) ::GlobalNamespace::ISpeakerLoudness*  loudness;

/// @brief Field overrideDuration, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_overrideDuration, put=__cordl_internal_set_overrideDuration)) float_t  overrideDuration;

/// @brief Field overrideUV, offset 0x4c, size 0x8 
 __declspec(property(get=__cordl_internal_get_overrideUV, put=__cordl_internal_set_overrideUV)) ::UnityEngine::Vector2  overrideUV;

/// @brief Field screamDuration, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_screamDuration, put=__cordl_internal_set_screamDuration)) float_t  screamDuration;

/// @brief Field screamVolume, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_screamVolume, put=__cordl_internal_set_screamVolume)) float_t  screamVolume;

/// @brief Field targetFace, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetFace, put=__cordl_internal_set_targetFace)) ::UnityW<::UnityEngine::GameObject>  targetFace;

/// @brief Field timeLastUpdated, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeLastUpdated, put=__cordl_internal_set_timeLastUpdated)) float_t  timeLastUpdated;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method Awake, addr 0x59059a4, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckEyeEffects, addr 0x5905a78, size 0x198, virtual false, abstract: false, final false
inline void CheckEyeEffects() ;

static inline ::GlobalNamespace::GorillaEyeExpressions* New_ctor() ;

/// @brief Method OnDisable, addr 0x5905a30, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x59059fc, size 0x34, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SliceUpdate, addr 0x5905a3c, size 0x3c, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method UpdateEyeExpression, addr 0x5905c10, size 0x78, virtual false, abstract: false, final false
inline void UpdateEyeExpression() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_BaseUV() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_BaseUV() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_ScreamUV() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_ScreamUV() ;

constexpr ::GlobalNamespace::ShaderHashId const& __cordl_internal_get__BaseMap_ST() const;

constexpr ::GlobalNamespace::ShaderHashId& __cordl_internal_get__BaseMap_ST() ;

constexpr float_t const& __cordl_internal_get_deltaTime() const;

constexpr float_t& __cordl_internal_get_deltaTime() ;

constexpr ::GlobalNamespace::ISpeakerLoudness* const& __cordl_internal_get_loudness() const;

constexpr ::GlobalNamespace::ISpeakerLoudness*& __cordl_internal_get_loudness() ;

constexpr float_t const& __cordl_internal_get_overrideDuration() const;

constexpr float_t& __cordl_internal_get_overrideDuration() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_overrideUV() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_overrideUV() ;

constexpr float_t const& __cordl_internal_get_screamDuration() const;

constexpr float_t& __cordl_internal_get_screamDuration() ;

constexpr float_t const& __cordl_internal_get_screamVolume() const;

constexpr float_t& __cordl_internal_get_screamVolume() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_targetFace() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_targetFace() ;

constexpr float_t const& __cordl_internal_get_timeLastUpdated() const;

constexpr float_t& __cordl_internal_get_timeLastUpdated() ;

constexpr void __cordl_internal_set_BaseUV(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_ScreamUV(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__BaseMap_ST(::GlobalNamespace::ShaderHashId  value) ;

constexpr void __cordl_internal_set_deltaTime(float_t  value) ;

constexpr void __cordl_internal_set_loudness(::GlobalNamespace::ISpeakerLoudness*  value) ;

constexpr void __cordl_internal_set_overrideDuration(float_t  value) ;

constexpr void __cordl_internal_set_overrideUV(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_screamDuration(float_t  value) ;

constexpr void __cordl_internal_set_screamVolume(float_t  value) ;

constexpr void __cordl_internal_set_targetFace(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_timeLastUpdated(float_t  value) ;

/// @brief Method .ctor, addr 0x5905c88, size 0xb8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaEyeExpressions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaEyeExpressions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaEyeExpressions(GorillaEyeExpressions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaEyeExpressions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaEyeExpressions(GorillaEyeExpressions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2160};

/// @brief Field targetFace, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___targetFace;

/// [Space]
/// [SerializeField]
/// @brief Field screamVolume, offset: 0x28, size: 0x4, def value: None
 float_t  ___screamVolume;

/// [SerializeField]
/// @brief Field screamDuration, offset: 0x2c, size: 0x4, def value: None
 float_t  ___screamDuration;

/// [SerializeField]
/// @brief Field ScreamUV, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___ScreamUV;

/// @brief Field BaseUV, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___BaseUV;

/// @brief Field loudness, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::ISpeakerLoudness*  ___loudness;

/// @brief Field overrideDuration, offset: 0x48, size: 0x4, def value: None
 float_t  ___overrideDuration;

/// @brief Field overrideUV, offset: 0x4c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___overrideUV;

/// @brief Field timeLastUpdated, offset: 0x54, size: 0x4, def value: None
 float_t  ___timeLastUpdated;

/// @brief Field deltaTime, offset: 0x58, size: 0x4, def value: None
 float_t  ___deltaTime;

/// @brief Field _BaseMap_ST, offset: 0x60, size: 0x10, def value: None
 ::GlobalNamespace::ShaderHashId  ____BaseMap_ST;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaEyeExpressions, ___targetFace) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaEyeExpressions, ___screamVolume) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaEyeExpressions, ___screamDuration) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaEyeExpressions, ___ScreamUV) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaEyeExpressions, ___BaseUV) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaEyeExpressions, ___loudness) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaEyeExpressions, ___overrideDuration) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaEyeExpressions, ___overrideUV) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaEyeExpressions, ___timeLastUpdated) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaEyeExpressions, ___deltaTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaEyeExpressions, ____BaseMap_ST) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaEyeExpressions) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
