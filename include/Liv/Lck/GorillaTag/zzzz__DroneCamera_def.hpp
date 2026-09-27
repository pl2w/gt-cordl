#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/DroneCamera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DroneCamera)
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class DroneCamera;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::DroneCamera*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::DroneCamera*, "Liv.Lck.GorillaTag", "DroneCamera");
// Dependencies System.Object
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.DroneCamera
class CORDL_TYPE DroneCamera : public ::System::Object {
public:
// Declarations
/// @brief Field _camera, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__camera, put=__cordl_internal_set__camera)) ::UnityW<::UnityEngine::Camera>  _camera;

/// @brief Field _smoothness, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__smoothness, put=__cordl_internal_set__smoothness)) float_t  _smoothness;

/// @brief Field _targetFov, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__targetFov, put=__cordl_internal_set__targetFov)) float_t  _targetFov;

static inline ::Liv::Lck::GorillaTag::DroneCamera* New_ctor(::UnityEngine::Camera*  camera) ;

/// @brief Method Run, addr 0x9d15cf0, size 0x110, virtual false, abstract: false, final false
inline void Run() ;

/// @brief Method SetFov, addr 0x9d15ce0, size 0x8, virtual false, abstract: false, final false
inline void SetFov(float_t  fov) ;

/// @brief Method SetSmoothness, addr 0x9d15ce8, size 0x8, virtual false, abstract: false, final false
inline void SetSmoothness(float_t  smoothness) ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__camera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__camera() ;

constexpr float_t const& __cordl_internal_get__smoothness() const;

constexpr float_t& __cordl_internal_get__smoothness() ;

constexpr float_t const& __cordl_internal_get__targetFov() const;

constexpr float_t& __cordl_internal_get__targetFov() ;

constexpr void __cordl_internal_set__camera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set__smoothness(float_t  value) ;

constexpr void __cordl_internal_set__targetFov(float_t  value) ;

/// @brief Method .ctor, addr 0x9d15cb0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Camera*  camera) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DroneCamera() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DroneCamera", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DroneCamera(DroneCamera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DroneCamera", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DroneCamera(DroneCamera const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29591};

/// @brief Field _camera, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____camera;

/// @brief Field _targetFov, offset: 0x18, size: 0x4, def value: None
 float_t  ____targetFov;

/// @brief Field _smoothness, offset: 0x1c, size: 0x4, def value: None
 float_t  ____smoothness;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::DroneCamera, ____camera) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneCamera, ____targetFov) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneCamera, ____smoothness) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::DroneCamera) == 0x20, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
