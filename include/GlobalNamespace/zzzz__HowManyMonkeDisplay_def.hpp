#pragma once
// IWYU pragma private; include "GlobalNamespace/HowManyMonkeDisplay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HowManyMonkeDisplay)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class HowManyMonkeDisplay;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HowManyMonkeDisplay*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HowManyMonkeDisplay*, "", "HowManyMonkeDisplay");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HowManyMonkeDisplay
class CORDL_TYPE HowManyMonkeDisplay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field checkTime, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_checkTime, put=__cordl_internal_set_checkTime)) float_t  checkTime;

/// @brief Field currValue, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currValue, put=__cordl_internal_set_currValue)) int32_t  currValue;

/// @brief Field nextValue, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextValue, put=__cordl_internal_set_nextValue)) int32_t  nextValue;

/// @brief Field observable, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_observable, put=__cordl_internal_set_observable)) bool  observable;

/// @brief Field observableActive, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_observableActive, put=__cordl_internal_set_observableActive)) ::UnityW<::UnityEngine::GameObject>  observableActive;

/// @brief Field observableDistance, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_observableDistance, put=__cordl_internal_set_observableDistance)) float_t  observableDistance;

/// @brief Field particleSystem, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_particleSystem, put=__cordl_internal_set_particleSystem)) ::UnityW<::UnityEngine::ParticleSystem>  particleSystem;

/// @brief Field particleSystemRateToCount, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_particleSystemRateToCount, put=__cordl_internal_set_particleSystemRateToCount)) ::UnityEngine::AnimationCurve*  particleSystemRateToCount;

/// @brief Field text, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_text, put=__cordl_internal_set_text)) ::UnityW<::TMPro::TMP_Text>  text;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method HowManyMonke_OnCheck, addr 0x56c19b0, size 0x24, virtual false, abstract: false, final false
inline void HowManyMonke_OnCheck(int32_t  thisMany) ;

static inline ::GlobalNamespace::HowManyMonkeDisplay* New_ctor() ;

/// @brief Method OnDestroy, addr 0x56c188c, size 0x124, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x56c1758, size 0x134, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x56c16a0, size 0xb8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SliceUpdate, addr 0x56c19d4, size 0x3d0, virtual true, abstract: false, final true
inline void SliceUpdate() ;

constexpr float_t const& __cordl_internal_get_checkTime() const;

constexpr float_t& __cordl_internal_get_checkTime() ;

constexpr int32_t const& __cordl_internal_get_currValue() const;

constexpr int32_t& __cordl_internal_get_currValue() ;

constexpr int32_t const& __cordl_internal_get_nextValue() const;

constexpr int32_t& __cordl_internal_get_nextValue() ;

constexpr bool const& __cordl_internal_get_observable() const;

constexpr bool& __cordl_internal_get_observable() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_observableActive() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_observableActive() ;

constexpr float_t const& __cordl_internal_get_observableDistance() const;

constexpr float_t& __cordl_internal_get_observableDistance() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_particleSystem() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_particleSystem() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_particleSystemRateToCount() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_particleSystemRateToCount() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_text() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_text() ;

constexpr void __cordl_internal_set_checkTime(float_t  value) ;

constexpr void __cordl_internal_set_currValue(int32_t  value) ;

constexpr void __cordl_internal_set_nextValue(int32_t  value) ;

constexpr void __cordl_internal_set_observable(bool  value) ;

constexpr void __cordl_internal_set_observableActive(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_observableDistance(float_t  value) ;

constexpr void __cordl_internal_set_particleSystem(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_particleSystemRateToCount(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_text(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x56c1da4, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HowManyMonkeDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HowManyMonkeDisplay", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HowManyMonkeDisplay(HowManyMonkeDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HowManyMonkeDisplay", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HowManyMonkeDisplay(HowManyMonkeDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1001};

/// [SerializeField]
/// @brief Field text, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___text;

/// [SerializeField]
/// @brief Field observableDistance, offset: 0x28, size: 0x4, def value: None
 float_t  ___observableDistance;

/// [SerializeField]
/// @brief Field observableActive, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___observableActive;

/// [SerializeField]
/// @brief Field particleSystem, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___particleSystem;

/// [SerializeField]
/// @brief Field particleSystemRateToCount, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___particleSystemRateToCount;

/// @brief Field observable, offset: 0x48, size: 0x1, def value: None
 bool  ___observable;

/// @brief Field currValue, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___currValue;

/// @brief Field nextValue, offset: 0x50, size: 0x4, def value: None
 int32_t  ___nextValue;

/// @brief Field checkTime, offset: 0x54, size: 0x4, def value: None
 float_t  ___checkTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HowManyMonkeDisplay, ___text) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HowManyMonkeDisplay, ___observableDistance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HowManyMonkeDisplay, ___observableActive) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HowManyMonkeDisplay, ___particleSystem) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HowManyMonkeDisplay, ___particleSystemRateToCount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HowManyMonkeDisplay, ___observable) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HowManyMonkeDisplay, ___currValue) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HowManyMonkeDisplay, ___nextValue) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HowManyMonkeDisplay, ___checkTime) == 0x54, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HowManyMonkeDisplay) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
