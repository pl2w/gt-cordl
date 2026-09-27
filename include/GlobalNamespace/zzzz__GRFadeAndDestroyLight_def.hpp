#pragma once
// IWYU pragma private; include "GlobalNamespace/GRFadeAndDestroyLight.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GRFadeAndDestroyLight)
namespace GlobalNamespace {
class GameLight;
}
// Forward declare root types
namespace GlobalNamespace {
class GRFadeAndDestroyLight;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRFadeAndDestroyLight*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRFadeAndDestroyLight*, "", "GRFadeAndDestroyLight");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRFadeAndDestroyLight
class CORDL_TYPE GRFadeAndDestroyLight : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field TimeToFade, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_TimeToFade, put=__cordl_internal_set_TimeToFade)) float_t  TimeToFade;

/// @brief Field fadeRate, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_fadeRate, put=__cordl_internal_set_fadeRate)) float_t  fadeRate;

/// @brief Field gameLight, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameLight, put=__cordl_internal_set_gameLight)) ::UnityW<::GlobalNamespace::GameLight>  gameLight;

/// @brief Field timeSinceLastUpdate, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeSinceLastUpdate, put=__cordl_internal_set_timeSinceLastUpdate)) float_t  timeSinceLastUpdate;

/// @brief Field timeSlice, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeSlice, put=__cordl_internal_set_timeSlice)) float_t  timeSlice;

static inline ::GlobalNamespace::GRFadeAndDestroyLight* New_ctor() ;

/// @brief Method OnDisable, addr 0x589a904, size 0x4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x589a900, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0x589a864, size 0x9c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x589a908, size 0xb0, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_TimeToFade() const;

constexpr float_t& __cordl_internal_get_TimeToFade() ;

constexpr float_t const& __cordl_internal_get_fadeRate() const;

constexpr float_t& __cordl_internal_get_fadeRate() ;

constexpr ::UnityW<::GlobalNamespace::GameLight> const& __cordl_internal_get_gameLight() const;

constexpr ::UnityW<::GlobalNamespace::GameLight>& __cordl_internal_get_gameLight() ;

constexpr float_t const& __cordl_internal_get_timeSinceLastUpdate() const;

constexpr float_t& __cordl_internal_get_timeSinceLastUpdate() ;

constexpr float_t const& __cordl_internal_get_timeSlice() const;

constexpr float_t& __cordl_internal_get_timeSlice() ;

constexpr void __cordl_internal_set_TimeToFade(float_t  value) ;

constexpr void __cordl_internal_set_fadeRate(float_t  value) ;

constexpr void __cordl_internal_set_gameLight(::UnityW<::GlobalNamespace::GameLight>  value) ;

constexpr void __cordl_internal_set_timeSinceLastUpdate(float_t  value) ;

constexpr void __cordl_internal_set_timeSlice(float_t  value) ;

/// @brief Method .ctor, addr 0x589a9b8, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRFadeAndDestroyLight() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRFadeAndDestroyLight", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRFadeAndDestroyLight(GRFadeAndDestroyLight && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRFadeAndDestroyLight", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRFadeAndDestroyLight(GRFadeAndDestroyLight const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1974};

/// @brief Field TimeToFade, offset: 0x20, size: 0x4, def value: None
 float_t  ___TimeToFade;

/// @brief Field fadeRate, offset: 0x24, size: 0x4, def value: None
 float_t  ___fadeRate;

/// @brief Field gameLight, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameLight>  ___gameLight;

/// @brief Field timeSlice, offset: 0x30, size: 0x4, def value: None
 float_t  ___timeSlice;

/// @brief Field timeSinceLastUpdate, offset: 0x34, size: 0x4, def value: None
 float_t  ___timeSinceLastUpdate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRFadeAndDestroyLight, ___TimeToFade) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRFadeAndDestroyLight, ___fadeRate) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRFadeAndDestroyLight, ___gameLight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRFadeAndDestroyLight, ___timeSlice) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRFadeAndDestroyLight, ___timeSinceLastUpdate) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRFadeAndDestroyLight) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
