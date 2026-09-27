#pragma once
// IWYU pragma private; include "Oculus/Voice/Bindings/Android/VoiceSDKBinding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Voice/Core/Bindings/Android/zzzz__BaseServiceBinding_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VoiceSDKBinding)
namespace Meta::WitAi::Configuration {
class WitRequestOptions;
}
namespace Meta::WitAi::Configuration {
class WitRuntimeConfiguration;
}
namespace Oculus::Voice::Bindings::Android {
class VoiceSDKListenerBinding;
}
namespace UnityEngine {
class AndroidJavaObject;
}
// Forward declare root types
namespace Oculus::Voice::Bindings::Android {
class VoiceSDKBinding;
}
// Write type traits
MARK_REF_T(::Oculus::Voice::Bindings::Android::VoiceSDKBinding*);
DEFINE_IL2CPP_CLASS(::Oculus::Voice::Bindings::Android::VoiceSDKBinding*, "Oculus.Voice.Bindings.Android", "VoiceSDKBinding");
// Dependencies Oculus.Voice.Core.Bindings.Android.BaseServiceBinding
namespace Oculus::Voice::Bindings::Android {
// Is value type: false
// CS Name: Oculus.Voice.Bindings.Android.VoiceSDKBinding
class CORDL_TYPE VoiceSDKBinding : public ::Oculus::Voice::Core::Bindings::Android::BaseServiceBinding {
public:
// Declarations
 __declspec(property(get=get_Active)) bool  Active;

 __declspec(property(get=get_IsRequestActive)) bool  IsRequestActive;

 __declspec(property(get=get_MicActive)) bool  MicActive;

 __declspec(property(get=get_PlatformSupportsWit)) bool  PlatformSupportsWit;

/// @brief Method Activate, addr 0xb94b838, size 0xe4, virtual false, abstract: false, final false
inline void Activate(::Meta::WitAi::Configuration::WitRequestOptions*  options) ;

/// @brief Method Activate, addr 0xb94b71c, size 0x11c, virtual false, abstract: false, final false
inline void Activate(::StringW  text, ::Meta::WitAi::Configuration::WitRequestOptions*  options) ;

/// @brief Method ActivateImmediately, addr 0xb94b91c, size 0xe4, virtual false, abstract: false, final false
inline void ActivateImmediately(::Meta::WitAi::Configuration::WitRequestOptions*  options) ;

/// @brief Method Connect, addr 0xb94c228, size 0xd8, virtual false, abstract: false, final false
inline void Connect() ;

/// @brief Method Deactivate, addr 0xb94ba00, size 0xd0, virtual false, abstract: false, final false
inline void Deactivate(::StringW  requestID) ;

/// @brief Method DeactivateAndAbortRequest, addr 0xb94bad0, size 0xd0, virtual false, abstract: false, final false
inline void DeactivateAndAbortRequest(::StringW  requestID) ;

/// @brief [Preserve]
static inline ::Oculus::Voice::Bindings::Android::VoiceSDKBinding* New_ctor(::UnityEngine::AndroidJavaObject*  sdkInstance) ;

/// @brief Method SetListener, addr 0xb94c158, size 0xd0, virtual false, abstract: false, final false
inline void SetListener(::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*  listener) ;

/// @brief Method SetRuntimeConfiguration, addr 0xb94bba0, size 0x118, virtual false, abstract: false, final false
inline void SetRuntimeConfiguration(::Meta::WitAi::Configuration::WitRuntimeConfiguration*  configuration) ;

/// [Preserve]
/// @brief Method .ctor, addr 0xb94b3b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::AndroidJavaObject*  sdkInstance) ;

/// @brief Method get_Active, addr 0xb94b3bc, size 0xd8, virtual false, abstract: false, final false
inline bool get_Active() ;

/// @brief Method get_IsRequestActive, addr 0xb94b494, size 0xd8, virtual false, abstract: false, final false
inline bool get_IsRequestActive() ;

/// @brief Method get_MicActive, addr 0xb94b56c, size 0xd8, virtual false, abstract: false, final false
inline bool get_MicActive() ;

/// @brief Method get_PlatformSupportsWit, addr 0xb94b644, size 0xd8, virtual false, abstract: false, final false
inline bool get_PlatformSupportsWit() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceSDKBinding() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceSDKBinding", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceSDKBinding(VoiceSDKBinding && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceSDKBinding", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceSDKBinding(VoiceSDKBinding const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31699};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Voice::Bindings::Android::VoiceSDKBinding) == 0x18, "Size mismatch!");

} // namespace end def Oculus::Voice::Bindings::Android
