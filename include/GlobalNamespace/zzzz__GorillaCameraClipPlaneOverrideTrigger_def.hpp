#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaCameraClipPlaneOverrideTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaTriggerBox_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GorillaCameraClipPlaneOverrideTrigger)
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaCameraClipPlaneOverrideTrigger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaCameraClipPlaneOverrideTrigger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaCameraClipPlaneOverrideTrigger*, "", "GorillaCameraClipPlaneOverrideTrigger");
// Dependencies GorillaTriggerBox
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaCameraClipPlaneOverrideTrigger
class CORDL_TYPE GorillaCameraClipPlaneOverrideTrigger : public ::GlobalNamespace::GorillaTriggerBox {
public:
// Declarations
/// @brief Field clipPlaneFarDistanceOverride, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_clipPlaneFarDistanceOverride, put=__cordl_internal_set_clipPlaneFarDistanceOverride)) float_t  clipPlaneFarDistanceOverride;

/// @brief Field mainCamera, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainCamera, put=__cordl_internal_set_mainCamera)) ::UnityW<::UnityEngine::Camera>  mainCamera;

/// @brief Method Awake, addr 0x579d334, size 0x24, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GorillaCameraClipPlaneOverrideTrigger* New_ctor() ;

/// @brief Method OnBoxTriggered, addr 0x579d358, size 0x20, virtual true, abstract: false, final false
inline void OnBoxTriggered() ;

constexpr float_t const& __cordl_internal_get_clipPlaneFarDistanceOverride() const;

constexpr float_t& __cordl_internal_get_clipPlaneFarDistanceOverride() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_mainCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_mainCamera() ;

constexpr void __cordl_internal_set_clipPlaneFarDistanceOverride(float_t  value) ;

constexpr void __cordl_internal_set_mainCamera(::UnityW<::UnityEngine::Camera>  value) ;

/// @brief Method .ctor, addr 0x579d378, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaCameraClipPlaneOverrideTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaCameraClipPlaneOverrideTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaCameraClipPlaneOverrideTrigger(GorillaCameraClipPlaneOverrideTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaCameraClipPlaneOverrideTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaCameraClipPlaneOverrideTrigger(GorillaCameraClipPlaneOverrideTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1497};

/// @brief Field mainCamera, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___mainCamera;

/// @brief Field clipPlaneFarDistanceOverride, offset: 0x28, size: 0x4, def value: None
 float_t  ___clipPlaneFarDistanceOverride;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaCameraClipPlaneOverrideTrigger, ___mainCamera) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaCameraClipPlaneOverrideTrigger, ___clipPlaneFarDistanceOverride) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaCameraClipPlaneOverrideTrigger) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
