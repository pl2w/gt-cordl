#pragma once
// IWYU pragma private; include "GlobalNamespace/GTFirstPersonCamera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GTFirstPersonCamera)
namespace System {
class Action;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class GTFirstPersonCamera;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GTFirstPersonCamera*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTFirstPersonCamera*, "", "GTFirstPersonCamera");
// [DefaultExecutionOrder(-2147483648)]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GTFirstPersonCamera
class CORDL_TYPE GTFirstPersonCamera : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnPreRenderEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnPreRenderEvent, put=setStaticF_OnPreRenderEvent)) ::System::Action*  OnPreRenderEvent;

/// @brief Field <camera>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__camera_k__BackingField, put=setStaticF__camera_k__BackingField)) ::UnityW<::UnityEngine::Camera>  _camera_k__BackingField;

/// @brief Method Awake, addr 0x5693fc4, size 0x19c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GTFirstPersonCamera* New_ctor() ;

/// @brief Method _OnPreRender, addr 0x5694160, size 0xd8, virtual false, abstract: false, final false
inline void _OnPreRender(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  cam) ;

/// @brief Method .ctor, addr 0x5694238, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action* getStaticF_OnPreRenderEvent() ;

static inline ::UnityW<::UnityEngine::Camera> getStaticF__camera_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_camera, addr 0x5693f24, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Camera> get_camera() ;

static inline void setStaticF_OnPreRenderEvent(::System::Action*  value) ;

static inline void setStaticF__camera_k__BackingField(::UnityW<::UnityEngine::Camera>  value) ;

/// [CompilerGenerated]
/// @brief Method set_camera, addr 0x5693f6c, size 0x58, virtual false, abstract: false, final false
static inline void set_camera(::UnityEngine::Camera*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTFirstPersonCamera() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTFirstPersonCamera", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTFirstPersonCamera(GTFirstPersonCamera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTFirstPersonCamera", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTFirstPersonCamera(GTFirstPersonCamera const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{890};

/// @brief Field preErr offset 0xffffffff size 0x8
static constexpr ::ConstString  preErr{u"[GTFirstPersonCamera]  ERROR!!!  "};

/// @brief Field preLog offset 0xffffffff size 0x8
static constexpr ::ConstString  preLog{u"[GTFirstPersonCamera]  "};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GTFirstPersonCamera) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
