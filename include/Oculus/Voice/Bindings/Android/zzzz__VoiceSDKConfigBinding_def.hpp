#pragma once
// IWYU pragma private; include "Oculus/Voice/Bindings/Android/VoiceSDKConfigBinding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(VoiceSDKConfigBinding)
namespace Meta::WitAi::Configuration {
class WitRuntimeConfiguration;
}
namespace UnityEngine {
class AndroidJavaObject;
}
// Forward declare root types
namespace Oculus::Voice::Bindings::Android {
class VoiceSDKConfigBinding;
}
// Write type traits
MARK_REF_T(::Oculus::Voice::Bindings::Android::VoiceSDKConfigBinding*);
DEFINE_IL2CPP_CLASS(::Oculus::Voice::Bindings::Android::VoiceSDKConfigBinding*, "Oculus.Voice.Bindings.Android", "VoiceSDKConfigBinding");
// Dependencies System.Object
namespace Oculus::Voice::Bindings::Android {
// Is value type: false
// CS Name: Oculus.Voice.Bindings.Android.VoiceSDKConfigBinding
class CORDL_TYPE VoiceSDKConfigBinding : public ::System::Object {
public:
// Declarations
/// @brief Field configuration, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_configuration, put=__cordl_internal_set_configuration)) ::Meta::WitAi::Configuration::WitRuntimeConfiguration*  configuration;

static inline ::Oculus::Voice::Bindings::Android::VoiceSDKConfigBinding* New_ctor(::Meta::WitAi::Configuration::WitRuntimeConfiguration*  config) ;

/// @brief Method ToJavaObject, addr 0xb94bce8, size 0x470, virtual false, abstract: false, final false
inline ::UnityEngine::AndroidJavaObject* ToJavaObject() ;

constexpr ::Meta::WitAi::Configuration::WitRuntimeConfiguration* const& __cordl_internal_get_configuration() const;

constexpr ::Meta::WitAi::Configuration::WitRuntimeConfiguration*& __cordl_internal_get_configuration() ;

constexpr void __cordl_internal_set_configuration(::Meta::WitAi::Configuration::WitRuntimeConfiguration*  value) ;

/// @brief Method .ctor, addr 0xb94bcb8, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Meta::WitAi::Configuration::WitRuntimeConfiguration*  config) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceSDKConfigBinding() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceSDKConfigBinding", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceSDKConfigBinding(VoiceSDKConfigBinding && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceSDKConfigBinding", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceSDKConfigBinding(VoiceSDKConfigBinding const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31700};

/// @brief Field configuration, offset: 0x10, size: 0x8, def value: None
 ::Meta::WitAi::Configuration::WitRuntimeConfiguration*  ___configuration;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Voice::Bindings::Android::VoiceSDKConfigBinding, ___configuration) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Oculus::Voice::Bindings::Android::VoiceSDKConfigBinding) == 0x18, "Size mismatch!");

} // namespace end def Oculus::Voice::Bindings::Android
