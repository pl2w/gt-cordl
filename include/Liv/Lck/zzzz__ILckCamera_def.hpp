#pragma once
// IWYU pragma private; include "Liv/Lck/ILckCamera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ILckCamera)
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace Liv::Lck {
class ILckCamera;
}
// Write type traits
MARK_REF_T(::Liv::Lck::ILckCamera*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::ILckCamera*, "Liv.Lck", "ILckCamera");
// Dependencies 
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.ILckCamera
class CORDL_TYPE ILckCamera {
public:
// Declarations
 __declspec(property(get=get_CameraId)) ::StringW  CameraId;

/// @brief Method ActivateCamera, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ActivateCamera(::UnityEngine::RenderTexture*  renderTexture) ;

/// @brief Method DeactivateCamera, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void DeactivateCamera() ;

/// @brief Method GetCameraComponent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Camera> GetCameraComponent() ;

/// @brief Method get_CameraId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_CameraId() ;

// Ctor Parameters [CppParam { name: "", ty: "ILckCamera", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckCamera(ILckCamera const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24680};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck
