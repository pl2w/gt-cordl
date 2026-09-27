#pragma once
// IWYU pragma private; include "GlobalNamespace/LivCameraDockPreviewSync.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LivCameraDockPreviewSync)
namespace Docking {
class LivCameraDock;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class LivCameraDockPreviewSync;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LivCameraDockPreviewSync*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LivCameraDockPreviewSync*, "", "LivCameraDockPreviewSync");
// [ExecuteAlways]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LivCameraDockPreviewSync
class CORDL_TYPE LivCameraDockPreviewSync : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _lastCameraFOV, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastCameraFOV, put=__cordl_internal_set__lastCameraFOV)) float_t  _lastCameraFOV;

/// @brief Field _lastDockFOV, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastDockFOV, put=__cordl_internal_set__lastDockFOV)) float_t  _lastDockFOV;

/// @brief Field dock, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_dock, put=__cordl_internal_set_dock)) ::UnityW<::Docking::LivCameraDock>  dock;

/// @brief Field parentCamera, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentCamera, put=__cordl_internal_set_parentCamera)) ::UnityW<::UnityEngine::Camera>  parentCamera;

static inline ::GlobalNamespace::LivCameraDockPreviewSync* New_ctor() ;

constexpr float_t const& __cordl_internal_get__lastCameraFOV() const;

constexpr float_t& __cordl_internal_get__lastCameraFOV() ;

constexpr float_t const& __cordl_internal_get__lastDockFOV() const;

constexpr float_t& __cordl_internal_get__lastDockFOV() ;

constexpr ::UnityW<::Docking::LivCameraDock> const& __cordl_internal_get_dock() const;

constexpr ::UnityW<::Docking::LivCameraDock>& __cordl_internal_get_dock() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_parentCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_parentCamera() ;

constexpr void __cordl_internal_set__lastCameraFOV(float_t  value) ;

constexpr void __cordl_internal_set__lastDockFOV(float_t  value) ;

constexpr void __cordl_internal_set_dock(::UnityW<::Docking::LivCameraDock>  value) ;

constexpr void __cordl_internal_set_parentCamera(::UnityW<::UnityEngine::Camera>  value) ;

/// @brief Method .ctor, addr 0x56d1ef4, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LivCameraDockPreviewSync() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LivCameraDockPreviewSync", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LivCameraDockPreviewSync(LivCameraDockPreviewSync && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LivCameraDockPreviewSync", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LivCameraDockPreviewSync(LivCameraDockPreviewSync const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1058};

/// @brief Field dock, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Docking::LivCameraDock>  ___dock;

/// @brief Field parentCamera, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___parentCamera;

/// @brief Field _lastCameraFOV, offset: 0x30, size: 0x4, def value: None
 float_t  ____lastCameraFOV;

/// @brief Field _lastDockFOV, offset: 0x34, size: 0x4, def value: None
 float_t  ____lastDockFOV;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LivCameraDockPreviewSync, ___dock) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LivCameraDockPreviewSync, ___parentCamera) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LivCameraDockPreviewSync, ____lastCameraFOV) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LivCameraDockPreviewSync, ____lastDockFOV) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LivCameraDockPreviewSync) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
