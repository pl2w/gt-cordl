#pragma once
// IWYU pragma private; include "GorillaTag/BoneOffset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/CosmeticSystem/zzzz__GTHardCodedBones_SturdyEBone_def.hpp"
#include "GorillaTag/zzzz__XformOffset_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(BoneOffset)
namespace GlobalNamespace {
struct GTHardCodedBones_EBone;
}
namespace GorillaTag {
struct XformOffset;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag {
struct BoneOffset;
}
// Write type traits
MARK_VAL_T(::GorillaTag::BoneOffset);
DEFINE_IL2CPP_CLASS(::GorillaTag::BoneOffset, "GorillaTag", "BoneOffset");
// Dependencies GorillaTag.CosmeticSystem.GTHardCodedBones::SturdyEBone, GorillaTag.XformOffset
namespace GorillaTag {
// Is value type: true
// CS Name: GorillaTag.BoneOffset
struct CORDL_TYPE BoneOffset {
public:
// Declarations
/// @brief Field Identity, offset 0xffffffff, size 0x48 
 __declspec(property(get=getStaticF_Identity, put=setStaticF_Identity)) ::GorillaTag::BoneOffset  Identity;

 __declspec(property(get=get_pos)) ::UnityEngine::Vector3  pos;

 __declspec(property(get=get_rot)) ::UnityEngine::Quaternion  rot;

 __declspec(property(get=get_scale)) ::UnityEngine::Vector3  scale;

/// @brief Method .ctor, addr 0x5d208fc, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::GTHardCodedBones_EBone  bone) ;

/// @brief Method .ctor, addr 0x5d2099c, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::GTHardCodedBones_EBone  bone, ::GorillaTag::XformOffset  offset) ;

/// @brief Method .ctor, addr 0x5d209f4, size 0xc4, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::GTHardCodedBones_EBone  bone, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method .ctor, addr 0x5d20cc4, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::GTHardCodedBones_EBone  bone, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot, ::UnityEngine::Vector3  scale) ;

/// @brief Method .ctor, addr 0x5d20b5c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::GTHardCodedBones_EBone  bone, ::UnityEngine::Vector3  pos, ::UnityEngine::Vector3  rotAngles) ;

/// @brief Method .ctor, addr 0x5d20e10, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::GTHardCodedBones_EBone  bone, ::UnityEngine::Vector3  pos, ::UnityEngine::Vector3  rotAngles, ::UnityEngine::Vector3  scale) ;

static inline ::GorillaTag::BoneOffset getStaticF_Identity() ;

/// @brief Method get_pos, addr 0x5d2088c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_pos() ;

/// @brief Method get_rot, addr 0x5d20898, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_rot() ;

/// @brief Method get_scale, addr 0x5d208f0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_scale() ;

static inline void setStaticF_Identity(::GorillaTag::BoneOffset  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr BoneOffset() ;

// Ctor Parameters [CppParam { name: "bone", ty: "::GlobalNamespace::GTHardCodedBones_SturdyEBone", modifiers: "", def_value: None, comment: None }, CppParam { name: "offset", ty: "::GorillaTag::XformOffset", modifiers: "", def_value: None, comment: None }]
constexpr BoneOffset(::GlobalNamespace::GTHardCodedBones_SturdyEBone  bone, ::GorillaTag::XformOffset  offset) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4593};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field bone, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::GTHardCodedBones_SturdyEBone  bone;

/// @brief Field offset, offset: 0x10, size: 0x34, def value: None
 ::GorillaTag::XformOffset  offset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::BoneOffset, bone) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::BoneOffset, offset) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::BoneOffset) == 0x48, "Size mismatch!");

} // namespace end def GorillaTag
