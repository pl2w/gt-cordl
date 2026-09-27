#pragma once
// IWYU pragma private; include "GlobalNamespace/MainCamera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MonoBehaviourStatic_1_def.hpp"
CORDL_MODULE_EXPORT(MainCamera)
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class MainCamera;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MainCamera*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MainCamera*, "", "MainCamera");
// Dependencies MonoBehaviourStatic`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainCamera
class CORDL_TYPE MainCamera : public ::GlobalNamespace::MonoBehaviourStatic_1<::UnityW<::GlobalNamespace::MainCamera>> {
public:
// Declarations
/// @brief Field camera, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_camera, put=__cordl_internal_set_camera)) ::UnityW<::UnityEngine::Camera>  camera;

static inline ::GlobalNamespace::MainCamera* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_camera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_camera() ;

constexpr void __cordl_internal_set_camera(::UnityW<::UnityEngine::Camera>  value) ;

/// @brief Method .ctor, addr 0x5a1dc34, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method op_Implicit, addr 0x5a1dc20, size 0x14, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Camera> op_Implicit___UnityW___UnityEngine__Camera_(::GlobalNamespace::MainCamera*  mc) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MainCamera() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MainCamera", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MainCamera(MainCamera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MainCamera", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MainCamera(MainCamera const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2828};

/// @brief Field camera, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___camera;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MainCamera, ___camera) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MainCamera) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
