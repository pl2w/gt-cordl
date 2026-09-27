#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ICinemachineTargetGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICinemachineTargetGroup)
namespace UnityEngine {
struct BoundingSphere;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Unity::Cinemachine {
class ICinemachineTargetGroup;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::ICinemachineTargetGroup*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::ICinemachineTargetGroup*, "Unity.Cinemachine", "ICinemachineTargetGroup");
// Dependencies 
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.ICinemachineTargetGroup
class CORDL_TYPE ICinemachineTargetGroup {
public:
// Declarations
 __declspec(property(get=get_BoundingBox)) ::UnityEngine::Bounds  BoundingBox;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_Sphere)) ::UnityEngine::BoundingSphere  Sphere;

 __declspec(property(get=get_Transform)) ::UnityW<::UnityEngine::Transform>  Transform;

/// @brief Method GetViewSpaceAngularBounds, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void GetViewSpaceAngularBounds(::UnityEngine::Matrix4x4  observer, ::by_ref<::UnityEngine::Vector2>  minAngles, ::by_ref<::UnityEngine::Vector2>  maxAngles, ::by_ref<::UnityEngine::Vector2>  zRange) ;

/// @brief Method GetViewSpaceBoundingBox, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Bounds GetViewSpaceBoundingBox(::UnityEngine::Matrix4x4  observer, bool  includeBehind) ;

/// @brief Method get_BoundingBox, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Bounds get_BoundingBox() ;

/// @brief Method get_IsEmpty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsEmpty() ;

/// @brief Method get_IsValid, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsValid() ;

/// @brief Method get_Sphere, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::BoundingSphere get_Sphere() ;

/// @brief Method get_Transform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Transform> get_Transform() ;

// Ctor Parameters [CppParam { name: "", ty: "ICinemachineTargetGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICinemachineTargetGroup(ICinemachineTargetGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22214};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Cinemachine
