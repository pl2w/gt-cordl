#pragma once
// IWYU pragma private; include "Unity/Cinemachine/RuntimeUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeUtility)
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
class SphereCollider;
}
// Forward declare root types
namespace Unity::Cinemachine {
class RuntimeUtility;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::RuntimeUtility*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::RuntimeUtility*, "Unity.Cinemachine", "RuntimeUtility");
// Dependencies System.Object, UnityEngine.RaycastHit
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.RuntimeUtility
class CORDL_TYPE RuntimeUtility : public ::System::Object {
public:
// Declarations
/// @brief Field s_HitBuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_HitBuffer, put=setStaticF_s_HitBuffer)) ::ArrayW<::UnityEngine::RaycastHit>  s_HitBuffer;

/// @brief Field s_PenetrationIndexBuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_PenetrationIndexBuffer, put=setStaticF_s_PenetrationIndexBuffer)) ::ArrayW<int32_t>  s_PenetrationIndexBuffer;

/// @brief Field s_ScratchCollider, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ScratchCollider, put=setStaticF_s_ScratchCollider)) ::UnityW<::UnityEngine::SphereCollider>  s_ScratchCollider;

/// @brief Field s_ScratchColliderGameObject, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ScratchColliderGameObject, put=setStaticF_s_ScratchColliderGameObject)) ::UnityW<::UnityEngine::GameObject>  s_ScratchColliderGameObject;

/// @brief Field s_ScratchColliderRefCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ScratchColliderRefCount, put=setStaticF_s_ScratchColliderRefCount)) int32_t  s_ScratchColliderRefCount;

/// @brief Method DestroyObject, addr 0xaeb9cd4, size 0x88, virtual false, abstract: false, final false
static inline void DestroyObject(::UnityEngine::Object*  obj) ;

/// @brief Method DestroyScratchCollider, addr 0xaebab94, size 0x110, virtual false, abstract: false, final false
static inline void DestroyScratchCollider() ;

/// @brief Method GetScratchCollider, addr 0xaeba924, size 0x270, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::SphereCollider> GetScratchCollider() ;

/// @brief Method IsPrefab, addr 0xaeb9d5c, size 0x8, virtual false, abstract: false, final false
static inline bool IsPrefab(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method NormalizeCurve, addr 0xaebaca4, size 0x25c, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* NormalizeCurve(::UnityEngine::AnimationCurve*  curve, bool  normalizeX, bool  normalizeY) ;

/// @brief Method RaycastIgnoreTag, addr 0xaeb9d64, size 0x334, virtual false, abstract: false, final false
static inline bool RaycastIgnoreTag(::UnityEngine::Ray  ray, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  rayLength, int32_t  layerMask, /* [IsReadOnly] */ ::by_ref<::StringW>  ignoreTag) ;

/// @brief Method SphereCastIgnoreTag, addr 0xaeba098, size 0x88c, virtual false, abstract: false, final false
static inline bool SphereCastIgnoreTag(::UnityEngine::Ray  ray, float_t  radius, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  rayLength, int32_t  layerMask, /* [IsReadOnly] */ ::by_ref<::StringW>  ignoreTag) ;

static inline ::ArrayW<::UnityEngine::RaycastHit> getStaticF_s_HitBuffer() ;

static inline ::ArrayW<int32_t> getStaticF_s_PenetrationIndexBuffer() ;

static inline ::UnityW<::UnityEngine::SphereCollider> getStaticF_s_ScratchCollider() ;

static inline ::UnityW<::UnityEngine::GameObject> getStaticF_s_ScratchColliderGameObject() ;

static inline int32_t getStaticF_s_ScratchColliderRefCount() ;

static inline void setStaticF_s_HitBuffer(::ArrayW<::UnityEngine::RaycastHit>  value) ;

static inline void setStaticF_s_PenetrationIndexBuffer(::ArrayW<int32_t>  value) ;

static inline void setStaticF_s_ScratchCollider(::UnityW<::UnityEngine::SphereCollider>  value) ;

static inline void setStaticF_s_ScratchColliderGameObject(::UnityW<::UnityEngine::GameObject>  value) ;

static inline void setStaticF_s_ScratchColliderRefCount(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RuntimeUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RuntimeUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimeUtility(RuntimeUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimeUtility(RuntimeUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22354};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::RuntimeUtility) == 0x10, "Size mismatch!");

} // namespace end def Unity::Cinemachine
