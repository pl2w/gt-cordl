#pragma once
// IWYU pragma private; include "Oculus/Voice/Core/Bindings/Interfaces/IVoiceSDKLogger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IVoiceSDKLogger)
// Forward declare root types
namespace Oculus::Voice::Core::Bindings::Interfaces {
class IVoiceSDKLogger;
}
// Write type traits
MARK_REF_T(::Oculus::Voice::Core::Bindings::Interfaces::IVoiceSDKLogger*);
DEFINE_IL2CPP_CLASS(::Oculus::Voice::Core::Bindings::Interfaces::IVoiceSDKLogger*, "Oculus.Voice.Core.Bindings.Interfaces", "IVoiceSDKLogger");
// Dependencies 
namespace Oculus::Voice::Core::Bindings::Interfaces {
// Is value type: false
// CS Name: Oculus.Voice.Core.Bindings.Interfaces.IVoiceSDKLogger
class CORDL_TYPE IVoiceSDKLogger {
public:
// Declarations
 __declspec(property(put=set_IsUsingPlatformIntegration)) bool  IsUsingPlatformIntegration;

 __declspec(property(put=set_ShouldLogToConsole)) bool  ShouldLogToConsole;

 __declspec(property(put=set_WitApplication)) ::StringW  WitApplication;

/// @brief Method LogAnnotation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void LogAnnotation(::StringW  annotationKey, ::StringW  annotationValue) ;

/// @brief Method LogFirstTranscriptionTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void LogFirstTranscriptionTime() ;

/// @brief Method LogInteractionEndFailure, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void LogInteractionEndFailure(::StringW  errorMessage) ;

/// @brief Method LogInteractionEndSuccess, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void LogInteractionEndSuccess() ;

/// @brief Method LogInteractionPoint, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void LogInteractionPoint(::StringW  interactionPoint) ;

/// @brief Method LogInteractionStart, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void LogInteractionStart(::StringW  requestId, ::StringW  witApi) ;

/// @brief Method set_IsUsingPlatformIntegration, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_IsUsingPlatformIntegration(bool  value) ;

/// @brief Method set_ShouldLogToConsole, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_ShouldLogToConsole(bool  value) ;

/// @brief Method set_WitApplication, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_WitApplication(::StringW  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IVoiceSDKLogger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IVoiceSDKLogger(IVoiceSDKLogger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32936};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Voice::Core::Bindings::Interfaces
