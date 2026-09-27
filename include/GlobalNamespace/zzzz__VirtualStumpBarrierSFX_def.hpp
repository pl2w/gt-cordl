#pragma once
// IWYU pragma private; include "GlobalNamespace/VirtualStumpBarrierSFX.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(VirtualStumpBarrierSFX)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class VirtualStumpBarrierSFX;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VirtualStumpBarrierSFX*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VirtualStumpBarrierSFX*, "", "VirtualStumpBarrierSFX");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: VirtualStumpBarrierSFX
class CORDL_TYPE VirtualStumpBarrierSFX : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field PassThroughBarrierSoundClips, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_PassThroughBarrierSoundClips, put=__cordl_internal_set_PassThroughBarrierSoundClips)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  PassThroughBarrierSoundClips;

/// @brief Field barrierAudioSource, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_barrierAudioSource, put=__cordl_internal_set_barrierAudioSource)) ::UnityW<::UnityEngine::AudioSource>  barrierAudioSource;

/// @brief Field trackedGameObjects, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_trackedGameObjects, put=__cordl_internal_set_trackedGameObjects)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,bool>*  trackedGameObjects;

static inline ::GlobalNamespace::VirtualStumpBarrierSFX* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5a0be0c, size 0x21c, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5a0c268, size 0x124, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerStay, addr 0x5a0c144, size 0x124, virtual false, abstract: false, final false
inline void OnTriggerStay(::UnityEngine::Collider*  other) ;

/// @brief Method PlaySFX, addr 0x5a0c028, size 0x11c, virtual false, abstract: false, final false
inline void PlaySFX() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>* const& __cordl_internal_get_PassThroughBarrierSoundClips() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*& __cordl_internal_get_PassThroughBarrierSoundClips() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_barrierAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_barrierAudioSource() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,bool>* const& __cordl_internal_get_trackedGameObjects() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,bool>*& __cordl_internal_get_trackedGameObjects() ;

constexpr void __cordl_internal_set_PassThroughBarrierSoundClips(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  value) ;

constexpr void __cordl_internal_set_barrierAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_trackedGameObjects(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,bool>*  value) ;

/// @brief Method .ctor, addr 0x5a0c38c, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VirtualStumpBarrierSFX() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VirtualStumpBarrierSFX", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VirtualStumpBarrierSFX(VirtualStumpBarrierSFX && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VirtualStumpBarrierSFX", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VirtualStumpBarrierSFX(VirtualStumpBarrierSFX const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2770};

/// [SerializeField]
/// @brief Field barrierAudioSource, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___barrierAudioSource;

/// [FormerlySerializedAs("teleportingPlayerSoundClips")]
/// [SerializeField]
/// @brief Field PassThroughBarrierSoundClips, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  ___PassThroughBarrierSoundClips;

/// @brief Field trackedGameObjects, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,bool>*  ___trackedGameObjects;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VirtualStumpBarrierSFX, ___barrierAudioSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpBarrierSFX, ___PassThroughBarrierSoundClips) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpBarrierSFX, ___trackedGameObjects) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VirtualStumpBarrierSFX) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
