#pragma once
// IWYU pragma private; include "GlobalNamespace/ClockController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ClockController)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class ClockController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ClockController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ClockController*, "", "ClockController");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ClockController
class CORDL_TYPE ClockController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field MaxAngleDeflection, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxAngleDeflection, put=__cordl_internal_set_MaxAngleDeflection)) float_t  MaxAngleDeflection;

/// @brief Field Pendulum, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Pendulum, put=__cordl_internal_set_Pendulum)) ::UnityW<::UnityEngine::Transform>  Pendulum;

/// @brief Field SpeedOfPendulum, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_SpeedOfPendulum, put=__cordl_internal_set_SpeedOfPendulum)) float_t  SpeedOfPendulum;

static inline ::GlobalNamespace::ClockController* New_ctor() ;

constexpr float_t const& __cordl_internal_get_MaxAngleDeflection() const;

constexpr float_t& __cordl_internal_get_MaxAngleDeflection() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_Pendulum() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_Pendulum() ;

constexpr float_t const& __cordl_internal_get_SpeedOfPendulum() const;

constexpr float_t& __cordl_internal_get_SpeedOfPendulum() ;

constexpr void __cordl_internal_set_MaxAngleDeflection(float_t  value) ;

constexpr void __cordl_internal_set_Pendulum(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_SpeedOfPendulum(float_t  value) ;

/// @brief Method .ctor, addr 0x5bffcb8, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClockController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClockController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ClockController(ClockController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClockController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClockController(ClockController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{414};

/// @brief Field Pendulum, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___Pendulum;

/// @brief Field MaxAngleDeflection, offset: 0x28, size: 0x4, def value: None
 float_t  ___MaxAngleDeflection;

/// @brief Field SpeedOfPendulum, offset: 0x2c, size: 0x4, def value: None
 float_t  ___SpeedOfPendulum;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ClockController, ___Pendulum) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClockController, ___MaxAngleDeflection) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClockController, ___SpeedOfPendulum) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ClockController) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
