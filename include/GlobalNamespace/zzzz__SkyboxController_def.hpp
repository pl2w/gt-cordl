#pragma once
// IWYU pragma private; include "GlobalNamespace/SkyboxController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TimeSince_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SkyboxController)
namespace GlobalNamespace {
class BetterDayNightManager;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class SkyboxController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SkyboxController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SkyboxController*, "", "SkyboxController");
// Dependencies TimeSince, UnityEngine.Material, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SkyboxController
class CORDL_TYPE SkyboxController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _currentSeconds, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentSeconds, put=__cordl_internal_set__currentSeconds)) double_t  _currentSeconds;

/// @brief Field _currentSky, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentSky, put=__cordl_internal_set__currentSky)) ::UnityW<::UnityEngine::Material>  _currentSky;

/// @brief Field _currentTime, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentTime, put=__cordl_internal_set__currentTime)) float_t  _currentTime;

/// @brief Field _dayNightManager, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__dayNightManager, put=__cordl_internal_set__dayNightManager)) ::UnityW<::GlobalNamespace::BetterDayNightManager>  _dayNightManager;

/// @brief Field _nextSky, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__nextSky, put=__cordl_internal_set__nextSky)) ::UnityW<::UnityEngine::Material>  _nextSky;

/// @brief Field _totalSecondsInRange, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__totalSecondsInRange, put=__cordl_internal_set__totalSecondsInRange)) double_t  _totalSecondsInRange;

/// @brief Field lastUpdate, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastUpdate, put=__cordl_internal_set_lastUpdate)) ::GlobalNamespace::TimeSince  lastUpdate;

/// @brief Field lerpValue, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_lerpValue, put=__cordl_internal_set_lerpValue)) float_t  lerpValue;

/// @brief Field skyBack, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_skyBack, put=__cordl_internal_set_skyBack)) ::UnityW<::UnityEngine::MeshRenderer>  skyBack;

/// @brief Field skyFront, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_skyFront, put=__cordl_internal_set_skyFront)) ::UnityW<::UnityEngine::MeshRenderer>  skyFront;

/// @brief Field skyMaterials, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_skyMaterials, put=__cordl_internal_set_skyMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  skyMaterials;

static inline ::GlobalNamespace::SkyboxController* New_ctor() ;

/// @brief Method OnValidate, addr 0x5d08678, size 0x4, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method SetBackToOpaque, addr 0x5d08830, size 0x1b4, virtual false, abstract: false, final false
inline void SetBackToOpaque() ;

/// @brief Method SetFrontToOpaque, addr 0x5d089e4, size 0x1b4, virtual false, abstract: false, final false
inline void SetFrontToOpaque() ;

/// @brief Method SetFrontToTransparent, addr 0x5d0867c, size 0x1b4, virtual false, abstract: false, final false
inline void SetFrontToTransparent() ;

/// @brief Method Start, addr 0x5d080f0, size 0x22c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5d0831c, size 0x3c, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateSky, addr 0x5d08448, size 0x230, virtual false, abstract: false, final false
inline void UpdateSky() ;

/// @brief Method UpdateTime, addr 0x5d08358, size 0xf0, virtual false, abstract: false, final false
inline void UpdateTime() ;

constexpr double_t const& __cordl_internal_get__currentSeconds() const;

constexpr double_t& __cordl_internal_get__currentSeconds() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__currentSky() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__currentSky() ;

constexpr float_t const& __cordl_internal_get__currentTime() const;

constexpr float_t& __cordl_internal_get__currentTime() ;

constexpr ::UnityW<::GlobalNamespace::BetterDayNightManager> const& __cordl_internal_get__dayNightManager() const;

constexpr ::UnityW<::GlobalNamespace::BetterDayNightManager>& __cordl_internal_get__dayNightManager() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__nextSky() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__nextSky() ;

constexpr double_t const& __cordl_internal_get__totalSecondsInRange() const;

constexpr double_t& __cordl_internal_get__totalSecondsInRange() ;

constexpr ::GlobalNamespace::TimeSince const& __cordl_internal_get_lastUpdate() const;

constexpr ::GlobalNamespace::TimeSince& __cordl_internal_get_lastUpdate() ;

constexpr float_t const& __cordl_internal_get_lerpValue() const;

constexpr float_t& __cordl_internal_get_lerpValue() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_skyBack() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_skyBack() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_skyFront() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_skyFront() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_skyMaterials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_skyMaterials() ;

constexpr void __cordl_internal_set__currentSeconds(double_t  value) ;

constexpr void __cordl_internal_set__currentSky(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__currentTime(float_t  value) ;

constexpr void __cordl_internal_set__dayNightManager(::UnityW<::GlobalNamespace::BetterDayNightManager>  value) ;

constexpr void __cordl_internal_set__nextSky(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__totalSecondsInRange(double_t  value) ;

constexpr void __cordl_internal_set_lastUpdate(::GlobalNamespace::TimeSince  value) ;

constexpr void __cordl_internal_set_lerpValue(float_t  value) ;

constexpr void __cordl_internal_set_skyBack(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_skyFront(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_skyMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

/// @brief Method .ctor, addr 0x5d08b98, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SkyboxController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SkyboxController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SkyboxController(SkyboxController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SkyboxController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SkyboxController(SkyboxController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{445};

/// @brief Field skyFront, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___skyFront;

/// @brief Field skyBack, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___skyBack;

/// @brief Field skyMaterials, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ___skyMaterials;

/// [Range(0, 1)]
/// @brief Field lerpValue, offset: 0x38, size: 0x4, def value: None
 float_t  ___lerpValue;

/// @brief Field _currentSky, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____currentSky;

/// @brief Field _nextSky, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____nextSky;

/// @brief Field lastUpdate, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::TimeSince  ___lastUpdate;

/// [Space]
/// @brief Field _dayNightManager, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BetterDayNightManager>  ____dayNightManager;

/// @brief Field _currentSeconds, offset: 0x60, size: 0x8, def value: None
 double_t  ____currentSeconds;

/// @brief Field _totalSecondsInRange, offset: 0x68, size: 0x8, def value: None
 double_t  ____totalSecondsInRange;

/// @brief Field _currentTime, offset: 0x70, size: 0x4, def value: None
 float_t  ____currentTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SkyboxController, ___skyFront) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyboxController, ___skyBack) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyboxController, ___skyMaterials) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyboxController, ___lerpValue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyboxController, ____currentSky) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyboxController, ____nextSky) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyboxController, ___lastUpdate) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyboxController, ____dayNightManager) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyboxController, ____currentSeconds) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyboxController, ____totalSecondsInRange) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyboxController, ____currentTime) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SkyboxController) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
