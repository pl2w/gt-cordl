#pragma once
// IWYU pragma private; include "GorillaTag/XformOffset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(XformOffset)
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag {
struct XformOffset;
}
// Write type traits
MARK_VAL_T(::GorillaTag::XformOffset);
DEFINE_IL2CPP_CLASS(::GorillaTag::XformOffset, "GorillaTag", "XformOffset");
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace GorillaTag {
// Is value type: true
// CS Name: GorillaTag.XformOffset
struct CORDL_TYPE XformOffset {
public:
// Declarations
/// @brief Field Identity, offset 0xffffffff, size 0x34 
 __declspec(property(get=getStaticF_Identity, put=setStaticF_Identity)) ::GorillaTag::XformOffset  Identity;

/// @brief [Tooltip("The rotation of the offset relative to the parent bone.")]
 __declspec(property(get=get_rot, put=set_rot)) ::UnityEngine::Quaternion  rot;

/// @brief Method Approx, addr 0x5d213e4, size 0x11c, virtual false, abstract: false, final false
inline bool Approx(::GorillaTag::XformOffset  other) ;

/// @brief Method .ctor, addr 0x5d211bc, size 0x228, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Matrix4x4  matrix) ;

/// @brief Method .ctor, addr 0x5d21040, size 0x17c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Transform*  parentXform, ::UnityEngine::Transform*  childXform) ;

/// @brief Method .ctor, addr 0x5d20ab8, size 0xa4, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method .ctor, addr 0x5d20d94, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot, ::UnityEngine::Vector3  scale) ;

/// @brief Method .ctor, addr 0x5d20c10, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  pos, ::UnityEngine::Vector3  rot) ;

/// @brief Method .ctor, addr 0x5d20ec4, size 0x84, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  pos, ::UnityEngine::Vector3  rot, ::UnityEngine::Vector3  scale) ;

static inline ::GorillaTag::XformOffset getStaticF_Identity() ;

/// @brief Method get_rot, addr 0x5d21028, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_rot() ;

static inline void setStaticF_Identity(::GorillaTag::XformOffset  value) ;

/// @brief Method set_rot, addr 0x5d21034, size 0xc, virtual false, abstract: false, final false
inline void set_rot(::UnityEngine::Quaternion  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr XformOffset() ;

// Ctor Parameters [CppParam { name: "pos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "_rotQuat", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "_rotEulerAngles", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "scale", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr XformOffset(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  _rotQuat, ::UnityEngine::Vector3  _rotEulerAngles, ::UnityEngine::Vector3  scale) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4596};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x34};

/// [Tooltip("The position of the offset relative to the parent bone.")]
/// @brief Field pos, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  pos;

/// [FormerlySerializedAs("_edRotQuat")]
/// [FormerlySerializedAs("rot")]
/// [HideInInspector]
/// [SerializeField]
/// @brief Field _rotQuat, offset: 0xc, size: 0x10, def value: None
 ::UnityEngine::Quaternion  _rotQuat;

/// [FormerlySerializedAs("_edRotEulerAngles")]
/// [FormerlySerializedAs("_edRotEuler")]
/// [HideInInspector]
/// [SerializeField]
/// @brief Field _rotEulerAngles, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  _rotEulerAngles;

/// [Tooltip("The scale of the offset relative to the parent bone.")]
/// @brief Field scale, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  scale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::XformOffset, pos) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::XformOffset, _rotQuat) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::XformOffset, _rotEulerAngles) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::XformOffset, scale) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::XformOffset) == 0x34, "Size mismatch!");

} // namespace end def GorillaTag
