#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticSystem/GTHardCodedBones_SturdyEBone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/CosmeticSystem/zzzz__GTHardCodedBones_EBone_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GTHardCodedBones_SturdyEBone)
namespace GlobalNamespace {
struct GTHardCodedBones_EBone;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace GlobalNamespace {
struct GTHardCodedBones_SturdyEBone;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTHardCodedBones_SturdyEBone);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTHardCodedBones_SturdyEBone, "GorillaTag.CosmeticSystem", "GTHardCodedBones/SturdyEBone");
// Dependencies GorillaTag.CosmeticSystem.GTHardCodedBones::EBone
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.CosmeticSystem.GTHardCodedBones/SturdyEBone
struct CORDL_TYPE GTHardCodedBones_SturdyEBone {
public:
// Declarations
 __declspec(property(get=get_Bone, put=set_Bone)) ::GlobalNamespace::GTHardCodedBones_EBone  Bone;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() ;

/// @brief Method ToString, addr 0x5d4c9f8, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0x5d4ca04, size 0xe8, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0x5d4ca00, size 0x4, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() ;

/// @brief Method .ctor, addr 0x5d4c908, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::GTHardCodedBones_EBone  bone) ;

/// @brief Method .ctor, addr 0x5d4c918, size 0xa8, virtual false, abstract: false, final false
inline void _ctor(::StringW  boneName) ;

/// @brief Method get_Bone, addr 0x5d4c80c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GTHardCodedBones_EBone get_Bone() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() ;

/// @brief Method op_Explicit, addr 0x5d4c9f4, size 0x4, virtual false, abstract: false, final false
static inline int32_t op_Explicit_int32_t(::GlobalNamespace::GTHardCodedBones_SturdyEBone  sturdyBone) ;

/// @brief Method op_Implicit, addr 0x5d4c9c0, size 0x4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GTHardCodedBones_EBone op_Implicit___GlobalNamespace__GTHardCodedBones_EBone(::GlobalNamespace::GTHardCodedBones_SturdyEBone  sturdyBone) ;

/// @brief Method op_Implicit, addr 0x5d4c9c4, size 0x30, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GTHardCodedBones_SturdyEBone op_Implicit___GlobalNamespace__GTHardCodedBones_SturdyEBone(::GlobalNamespace::GTHardCodedBones_EBone  bone) ;

/// @brief Method set_Bone, addr 0x5d4c814, size 0xf4, virtual false, abstract: false, final false
inline void set_Bone(::GlobalNamespace::GTHardCodedBones_EBone  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr GTHardCodedBones_SturdyEBone() ;

// Ctor Parameters [CppParam { name: "_bone", ty: "::GlobalNamespace::GTHardCodedBones_EBone", modifiers: "", def_value: None, comment: None }, CppParam { name: "_boneName", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr GTHardCodedBones_SturdyEBone(::GlobalNamespace::GTHardCodedBones_EBone  _bone, ::StringW  _boneName) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4760};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [SerializeField]
/// @brief Field _bone, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::GTHardCodedBones_EBone  _bone;

/// [SerializeField]
/// @brief Field _boneName, offset: 0x8, size: 0x8, def value: None
 ::StringW  _boneName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTHardCodedBones_SturdyEBone, _bone) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTHardCodedBones_SturdyEBone, _boneName) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTHardCodedBones_SturdyEBone) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
