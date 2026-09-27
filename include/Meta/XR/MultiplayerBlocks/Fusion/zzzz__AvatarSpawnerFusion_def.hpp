#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Fusion/AvatarSpawnerFusion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__AvatarStreamLOD_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarSpawnerFusion)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Fusion {
class AvatarSpawnerFusion;
}
// Write type traits
MARK_REF_T(::Meta::XR::MultiplayerBlocks::Fusion::AvatarSpawnerFusion*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Fusion::AvatarSpawnerFusion*, "Meta.XR.MultiplayerBlocks.Fusion", "AvatarSpawnerFusion");
// Dependencies Meta.XR.MultiplayerBlocks.Shared.AvatarStreamLOD, UnityEngine.MonoBehaviour
namespace Meta::XR::MultiplayerBlocks::Fusion {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Fusion.AvatarSpawnerFusion
class CORDL_TYPE AvatarSpawnerFusion : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field avatarBehavior, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_avatarBehavior, put=__cordl_internal_set_avatarBehavior)) ::UnityW<::UnityEngine::GameObject>  avatarBehavior;

/// @brief Field avatarBehaviorSdk28Plus, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_avatarBehaviorSdk28Plus, put=__cordl_internal_set_avatarBehaviorSdk28Plus)) ::UnityW<::UnityEngine::GameObject>  avatarBehaviorSdk28Plus;

/// @brief Field avatarStreamLOD, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_avatarStreamLOD, put=__cordl_internal_set_avatarStreamLOD)) ::Meta::XR::MultiplayerBlocks::Shared::AvatarStreamLOD  avatarStreamLOD;

/// @brief Field avatarUpdateIntervalInSec, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_avatarUpdateIntervalInSec, put=__cordl_internal_set_avatarUpdateIntervalInSec)) float_t  avatarUpdateIntervalInSec;

/// @brief Field loadAvatarWhenConnected, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_loadAvatarWhenConnected, put=__cordl_internal_set_loadAvatarWhenConnected)) bool  loadAvatarWhenConnected;

/// @brief Field preloadedSampleAvatarSize, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_preloadedSampleAvatarSize, put=__cordl_internal_set_preloadedSampleAvatarSize)) int32_t  preloadedSampleAvatarSize;

static inline ::Meta::XR::MultiplayerBlocks::Fusion::AvatarSpawnerFusion* New_ctor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_avatarBehavior() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_avatarBehavior() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_avatarBehaviorSdk28Plus() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_avatarBehaviorSdk28Plus() ;

constexpr ::Meta::XR::MultiplayerBlocks::Shared::AvatarStreamLOD const& __cordl_internal_get_avatarStreamLOD() const;

constexpr ::Meta::XR::MultiplayerBlocks::Shared::AvatarStreamLOD& __cordl_internal_get_avatarStreamLOD() ;

constexpr float_t const& __cordl_internal_get_avatarUpdateIntervalInSec() const;

constexpr float_t& __cordl_internal_get_avatarUpdateIntervalInSec() ;

constexpr bool const& __cordl_internal_get_loadAvatarWhenConnected() const;

constexpr bool& __cordl_internal_get_loadAvatarWhenConnected() ;

constexpr int32_t const& __cordl_internal_get_preloadedSampleAvatarSize() const;

constexpr int32_t& __cordl_internal_get_preloadedSampleAvatarSize() ;

constexpr void __cordl_internal_set_avatarBehavior(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_avatarBehaviorSdk28Plus(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_avatarStreamLOD(::Meta::XR::MultiplayerBlocks::Shared::AvatarStreamLOD  value) ;

constexpr void __cordl_internal_set_avatarUpdateIntervalInSec(float_t  value) ;

constexpr void __cordl_internal_set_loadAvatarWhenConnected(bool  value) ;

constexpr void __cordl_internal_set_preloadedSampleAvatarSize(int32_t  value) ;

/// @brief Method .ctor, addr 0x9f5d788, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AvatarSpawnerFusion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AvatarSpawnerFusion", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AvatarSpawnerFusion(AvatarSpawnerFusion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AvatarSpawnerFusion", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AvatarSpawnerFusion(AvatarSpawnerFusion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31175};

/// [Tooltip("Control when you want to load the avatar.")]
/// [SerializeField]
/// @brief Field loadAvatarWhenConnected, offset: 0x20, size: 0x1, def value: None
 bool  ___loadAvatarWhenConnected;

/// [SerializeField]
/// @brief Field avatarBehavior, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___avatarBehavior;

/// [SerializeField]
/// @brief Field avatarBehaviorSdk28Plus, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___avatarBehaviorSdk28Plus;

/// [Tooltip("Specify the number of preset avatars available in the project. The maximum size depends on the SDK version.")]
/// [SerializeField]
/// @brief Field preloadedSampleAvatarSize, offset: 0x38, size: 0x4, def value: None
 int32_t  ___preloadedSampleAvatarSize;

/// [Tooltip("Adjust the level of detail used when streaming the avatars.")]
/// [SerializeField]
/// @brief Field avatarStreamLOD, offset: 0x3c, size: 0x4, def value: None
 ::Meta::XR::MultiplayerBlocks::Shared::AvatarStreamLOD  ___avatarStreamLOD;

/// [Tooltip("Adjust the update interval used when streaming the avatars.")]
/// [SerializeField]
/// @brief Field avatarUpdateIntervalInSec, offset: 0x40, size: 0x4, def value: None
 float_t  ___avatarUpdateIntervalInSec;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::AvatarSpawnerFusion, ___loadAvatarWhenConnected) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::AvatarSpawnerFusion, ___avatarBehavior) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::AvatarSpawnerFusion, ___avatarBehaviorSdk28Plus) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::AvatarSpawnerFusion, ___preloadedSampleAvatarSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::AvatarSpawnerFusion, ___avatarStreamLOD) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::AvatarSpawnerFusion, ___avatarUpdateIntervalInSec) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Fusion::AvatarSpawnerFusion) == 0x48, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Fusion
