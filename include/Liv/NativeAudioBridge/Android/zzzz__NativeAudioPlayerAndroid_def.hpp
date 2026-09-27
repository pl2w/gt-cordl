#pragma once
// IWYU pragma private; include "Liv/NativeAudioBridge/Android/NativeAudioPlayerAndroid.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NativeAudioPlayerAndroid)
namespace Liv::NativeAudioBridge {
class INativeAudioPlayer;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
class AndroidJavaObject;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace Liv::NativeAudioBridge::Android {
class NativeAudioPlayerAndroid;
}
// Write type traits
MARK_REF_T(::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid*);
DEFINE_IL2CPP_CLASS(::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid*, "Liv.NativeAudioBridge.Android", "NativeAudioPlayerAndroid");
// Dependencies System.Object
namespace Liv::NativeAudioBridge::Android {
// Is value type: false
// CS Name: Liv.NativeAudioBridge.Android.NativeAudioPlayerAndroid
class CORDL_TYPE NativeAudioPlayerAndroid : public ::System::Object {
public:
// Declarations
/// @brief Field _javaNativeAudioBridgeClass, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__javaNativeAudioBridgeClass, put=__cordl_internal_set__javaNativeAudioBridgeClass)) ::UnityEngine::AndroidJavaObject*  _javaNativeAudioBridgeClass;

/// @brief Convert operator to "::Liv::NativeAudioBridge::INativeAudioPlayer"
constexpr operator  ::Liv::NativeAudioBridge::INativeAudioPlayer*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x9d6fce4, size 0xe4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetJavaNativeAudioBridgeClass, addr 0x9d6f7bc, size 0xf8, virtual false, abstract: false, final false
inline ::UnityEngine::AndroidJavaObject* GetJavaNativeAudioBridgeClass() ;

static inline ::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid* New_ctor() ;

/// @brief Method PlayAudio, addr 0x9d6fb3c, size 0xdc, virtual false, abstract: false, final false
inline void PlayAudio(::StringW  key) ;

/// @brief Method PlayAudioClip, addr 0x9d6fb10, size 0x2c, virtual true, abstract: false, final true
inline void PlayAudioClip(::UnityEngine::AudioClip*  audioClip, float_t  volume) ;

/// @brief Method PreloadAudioClip, addr 0x9d6f8b4, size 0x25c, virtual true, abstract: false, final true
inline void PreloadAudioClip(::UnityEngine::AudioClip*  audioClip, float_t  volume, bool  forceReload) ;

/// @brief Method StopAllAudio, addr 0x9d6fc18, size 0xcc, virtual true, abstract: false, final true
inline void StopAllAudio() ;

constexpr ::UnityEngine::AndroidJavaObject* const& __cordl_internal_get__javaNativeAudioBridgeClass() const;

constexpr ::UnityEngine::AndroidJavaObject*& __cordl_internal_get__javaNativeAudioBridgeClass() ;

constexpr void __cordl_internal_set__javaNativeAudioBridgeClass(::UnityEngine::AndroidJavaObject*  value) ;

/// @brief Method .ctor, addr 0x9d6f550, size 0x26c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Liv::NativeAudioBridge::INativeAudioPlayer"
constexpr ::Liv::NativeAudioBridge::INativeAudioPlayer* i___Liv__NativeAudioBridge__INativeAudioPlayer() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeAudioPlayerAndroid() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeAudioPlayerAndroid", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeAudioPlayerAndroid(NativeAudioPlayerAndroid && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeAudioPlayerAndroid", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeAudioPlayerAndroid(NativeAudioPlayerAndroid const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33093};

/// @brief Field _javaNativeAudioBridgeClass, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::AndroidJavaObject*  ____javaNativeAudioBridgeClass;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid, ____javaNativeAudioBridgeClass) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid) == 0x18, "Size mismatch!");

} // namespace end def Liv::NativeAudioBridge::Android
