#pragma once
// IWYU pragma private; include "Liv/Lck/LckCamera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LckCamera)
namespace Liv::Lck {
class ILckCamera;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace Liv::Lck {
class LckCamera;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckCamera*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckCamera*, "Liv.Lck", "LckCamera");
// [RequireComponent(typeof(UnityEngine.Camera))]
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckCamera
class CORDL_TYPE LckCamera : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CameraId)) ::StringW  CameraId;

/// @brief Field _camera, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__camera, put=__cordl_internal_set__camera)) ::UnityW<::UnityEngine::Camera>  _camera;

/// @brief Field _cameraId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraId, put=__cordl_internal_set__cameraId)) ::StringW  _cameraId;

/// @brief Convert operator to "::Liv::Lck::ILckCamera"
constexpr operator  ::Liv::Lck::ILckCamera*() noexcept;

/// @brief Method ActivateCamera, addr 0x9ce0c20, size 0x44, virtual true, abstract: false, final true
inline void ActivateCamera(::UnityEngine::RenderTexture*  renderTexture) ;

/// @brief Method Awake, addr 0x9ce02b8, size 0x1c0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DeactivateCamera, addr 0x9ce0c64, size 0x38, virtual true, abstract: false, final true
inline void DeactivateCamera() ;

/// @brief Method GetCameraComponent, addr 0x9ce0c9c, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Camera> GetCameraComponent() ;

static inline ::Liv::Lck::LckCamera* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9ce0824, size 0x54, virtual false, abstract: false, final false
inline void OnDestroy() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__camera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__camera() ;

constexpr ::StringW const& __cordl_internal_get__cameraId() const;

constexpr ::StringW& __cordl_internal_get__cameraId() ;

constexpr void __cordl_internal_set__camera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set__cameraId(::StringW  value) ;

/// @brief Method .ctor, addr 0x9ce0ca4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CameraId, addr 0x9ce02b0, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_CameraId() ;

/// @brief Convert to "::Liv::Lck::ILckCamera"
constexpr ::Liv::Lck::ILckCamera* i___Liv__Lck__ILckCamera() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCamera() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCamera", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCamera(LckCamera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCamera", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCamera(LckCamera const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24697};

/// [SerializeField]
/// @brief Field _camera, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____camera;

/// [SerializeField]
/// @brief Field _cameraId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____cameraId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckCamera, ____camera) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckCamera, ____cameraId) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckCamera) == 0x30, "Size mismatch!");

} // namespace end def Liv::Lck
