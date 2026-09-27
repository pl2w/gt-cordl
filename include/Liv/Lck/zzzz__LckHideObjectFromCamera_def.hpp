#pragma once
// IWYU pragma private; include "Liv/Lck/LckHideObjectFromCamera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LckHideObjectFromCamera)
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Liv::Lck {
class LckHideObjectFromCamera;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckHideObjectFromCamera*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckHideObjectFromCamera*, "Liv.Lck", "LckHideObjectFromCamera");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckHideObjectFromCamera
class CORDL_TYPE LckHideObjectFromCamera : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _dirty, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__dirty, put=__cordl_internal_set__dirty)) bool  _dirty;

/// @brief Field _hiddenLayer, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__hiddenLayer, put=__cordl_internal_set__hiddenLayer)) int32_t  _hiddenLayer;

/// @brief Field _hiddenLayerName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__hiddenLayerName, put=__cordl_internal_set__hiddenLayerName)) ::StringW  _hiddenLayerName;

/// @brief Field _originalLayer, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__originalLayer, put=__cordl_internal_set__originalLayer)) int32_t  _originalLayer;

/// @brief Field _targetCamera, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetCamera, put=__cordl_internal_set__targetCamera)) ::UnityW<::UnityEngine::Camera>  _targetCamera;

/// @brief Method BeginCameraRendering, addr 0x9cee780, size 0x98, virtual false, abstract: false, final false
inline void BeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  scriptableRenderContext, ::UnityEngine::Camera*  cameraBeingRendered) ;

/// @brief Method EndCameraRendering, addr 0x9cee6bc, size 0x90, virtual false, abstract: false, final false
inline void EndCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  arg1, ::UnityEngine::Camera*  cameraBeingRendered) ;

/// @brief Method FrameCleanup, addr 0x9cee74c, size 0x34, virtual false, abstract: false, final false
inline void FrameCleanup() ;

/// @brief Method HideCanvases, addr 0x9cee300, size 0x3bc, virtual false, abstract: false, final false
inline void HideCanvases(::UnityEngine::Transform*  parent) ;

static inline ::Liv::Lck::LckHideObjectFromCamera* New_ctor() ;

/// @brief Method OnDisable, addr 0x9ceebb4, size 0xbc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9cee1fc, size 0x104, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetLayerRecursively, addr 0x9cee818, size 0x39c, virtual false, abstract: false, final false
inline void SetLayerRecursively(::UnityEngine::GameObject*  obj, int32_t  newLayer) ;

constexpr bool const& __cordl_internal_get__dirty() const;

constexpr bool& __cordl_internal_get__dirty() ;

constexpr int32_t const& __cordl_internal_get__hiddenLayer() const;

constexpr int32_t& __cordl_internal_get__hiddenLayer() ;

constexpr ::StringW const& __cordl_internal_get__hiddenLayerName() const;

constexpr ::StringW& __cordl_internal_get__hiddenLayerName() ;

constexpr int32_t const& __cordl_internal_get__originalLayer() const;

constexpr int32_t& __cordl_internal_get__originalLayer() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__targetCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__targetCamera() ;

constexpr void __cordl_internal_set__dirty(bool  value) ;

constexpr void __cordl_internal_set__hiddenLayer(int32_t  value) ;

constexpr void __cordl_internal_set__hiddenLayerName(::StringW  value) ;

constexpr void __cordl_internal_set__originalLayer(int32_t  value) ;

constexpr void __cordl_internal_set__targetCamera(::UnityW<::UnityEngine::Camera>  value) ;

/// @brief Method .ctor, addr 0x9ceec70, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckHideObjectFromCamera() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckHideObjectFromCamera", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckHideObjectFromCamera(LckHideObjectFromCamera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckHideObjectFromCamera", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckHideObjectFromCamera(LckHideObjectFromCamera const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24771};

/// [SerializeField]
/// @brief Field _targetCamera, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____targetCamera;

/// [SerializeField]
/// @brief Field _hiddenLayerName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____hiddenLayerName;

/// @brief Field _hiddenLayer, offset: 0x30, size: 0x4, def value: None
 int32_t  ____hiddenLayer;

/// @brief Field _originalLayer, offset: 0x34, size: 0x4, def value: None
 int32_t  ____originalLayer;

/// @brief Field _dirty, offset: 0x38, size: 0x1, def value: None
 bool  ____dirty;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckHideObjectFromCamera, ____targetCamera) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckHideObjectFromCamera, ____hiddenLayerName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckHideObjectFromCamera, ____hiddenLayer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckHideObjectFromCamera, ____originalLayer) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckHideObjectFromCamera, ____dirty) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckHideObjectFromCamera) == 0x40, "Size mismatch!");

} // namespace end def Liv::Lck
