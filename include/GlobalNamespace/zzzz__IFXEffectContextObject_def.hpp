#pragma once
// IWYU pragma private; include "GlobalNamespace/IFXEffectContextObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IFXEffectContextObject)
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
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class IFXEffectContextObject;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IFXEffectContextObject*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IFXEffectContextObject*, "", "IFXEffectContextObject");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IFXEffectContextObject
class CORDL_TYPE IFXEffectContextObject {
public:
// Declarations
 __declspec(property(get=get_Pitch)) float_t  Pitch;

 __declspec(property(get=get_Position)) ::UnityEngine::Vector3  Position;

 __declspec(property(get=get_PrefabPoolIds)) ::System::Collections::Generic::List_1<int32_t>*  PrefabPoolIds;

 __declspec(property(get=get_Rotation)) ::UnityEngine::Quaternion  Rotation;

 __declspec(property(get=get_Sound)) ::UnityW<::UnityEngine::AudioClip>  Sound;

 __declspec(property(get=get_SoundSource)) ::UnityW<::UnityEngine::AudioSource>  SoundSource;

 __declspec(property(get=get_Volume)) float_t  Volume;

/// @brief Method OnPlaySoundFX, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnPlaySoundFX(::UnityEngine::AudioSource*  audioSource) ;

/// @brief Method OnPlayVisualFX, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnPlayVisualFX(int32_t  effectID, ::UnityEngine::GameObject*  effect) ;

/// @brief Method OnTriggerActions, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnTriggerActions() ;

/// @brief Method get_Pitch, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_Pitch() ;

/// @brief Method get_Position, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 get_Position() ;

/// @brief Method get_PrefabPoolIds, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::List_1<int32_t>* get_PrefabPoolIds() ;

/// @brief Method get_Rotation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Quaternion get_Rotation() ;

/// @brief Method get_Sound, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::AudioClip> get_Sound() ;

/// @brief Method get_SoundSource, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::AudioSource> get_SoundSource() ;

/// @brief Method get_Volume, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_Volume() ;

// Ctor Parameters [CppParam { name: "", ty: "IFXEffectContextObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IFXEffectContextObject(IFXEffectContextObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3365};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
