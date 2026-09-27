#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaSceneTransform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(GorillaSceneTransform)
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaSceneTransform;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaSceneTransform*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaSceneTransform*, "", "GorillaSceneTransform");
// Dependencies System.Object, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaSceneTransform
class CORDL_TYPE GorillaSceneTransform : public ::System::Object {
public:
// Declarations
/// @brief Field sceneCollider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_sceneCollider, put=__cordl_internal_set_sceneCollider)) ::UnityW<::UnityEngine::Collider>  sceneCollider;

/// @brief Field scenePosition, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_scenePosition, put=__cordl_internal_set_scenePosition)) ::UnityEngine::Vector3  scenePosition;

/// @brief Field sceneRotation, offset 0x1c, size 0xc 
 __declspec(property(get=__cordl_internal_get_sceneRotation, put=__cordl_internal_set_sceneRotation)) ::UnityEngine::Vector3  sceneRotation;

static inline ::GlobalNamespace::GorillaSceneTransform* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_sceneCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_sceneCollider() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_scenePosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_scenePosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_sceneRotation() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_sceneRotation() ;

constexpr void __cordl_internal_set_sceneCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_scenePosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_sceneRotation(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x579de84, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaSceneTransform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaSceneTransform", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaSceneTransform(GorillaSceneTransform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaSceneTransform", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaSceneTransform(GorillaSceneTransform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1507};

/// @brief Field scenePosition, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___scenePosition;

/// @brief Field sceneRotation, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___sceneRotation;

/// @brief Field sceneCollider, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___sceneCollider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaSceneTransform, ___scenePosition) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSceneTransform, ___sceneRotation) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSceneTransform, ___sceneCollider) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaSceneTransform) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
