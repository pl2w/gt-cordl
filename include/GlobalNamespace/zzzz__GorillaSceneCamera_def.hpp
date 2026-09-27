#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaSceneCamera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaSceneTransform_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaSceneCamera)
// Forward declare root types
namespace GlobalNamespace {
class GorillaSceneCamera;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaSceneCamera*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaSceneCamera*, "", "GorillaSceneCamera");
// Dependencies GorillaSceneTransform, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaSceneCamera
class CORDL_TYPE GorillaSceneCamera : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field sceneTransforms, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sceneTransforms, put=__cordl_internal_set_sceneTransforms)) ::ArrayW<::GlobalNamespace::GorillaSceneTransform*>  sceneTransforms;

static inline ::GlobalNamespace::GorillaSceneCamera* New_ctor() ;

/// @brief Method SetSceneCamera, addr 0x579d6dc, size 0xa0, virtual false, abstract: false, final false
inline void SetSceneCamera(int32_t  sceneIndex) ;

constexpr ::ArrayW<::GlobalNamespace::GorillaSceneTransform*> const& __cordl_internal_get_sceneTransforms() const;

constexpr ::ArrayW<::GlobalNamespace::GorillaSceneTransform*>& __cordl_internal_get_sceneTransforms() ;

constexpr void __cordl_internal_set_sceneTransforms(::ArrayW<::GlobalNamespace::GorillaSceneTransform*>  value) ;

/// @brief Method .ctor, addr 0x579de8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaSceneCamera() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaSceneCamera", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaSceneCamera(GorillaSceneCamera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaSceneCamera", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaSceneCamera(GorillaSceneCamera const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1508};

/// @brief Field sceneTransforms, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GorillaSceneTransform*>  ___sceneTransforms;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaSceneCamera, ___sceneTransforms) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaSceneCamera) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
