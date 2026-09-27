#pragma once
// IWYU pragma private; include "Oculus/Voice/Core/Bindings/Android/PlatformLogger/VoiceSDKPlatformLoggerImpl.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Voice/Core/Bindings/Android/zzzz__BaseAndroidConnectionImpl_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VoiceSDKPlatformLoggerImpl)
namespace Oculus::Voice::Core::Bindings::Android::PlatformLogger {
class VoiceSDKConsoleLoggerImpl;
}
namespace Oculus::Voice::Core::Bindings::Android::PlatformLogger {
class VoiceSDKLoggerBinding;
}
namespace Oculus::Voice::Core::Bindings::Interfaces {
class IVoiceSDKLogger;
}
// Forward declare root types
namespace Oculus::Voice::Core::Bindings::Android::PlatformLogger {
class VoiceSDKPlatformLoggerImpl;
}
// Write type traits
MARK_REF_T(::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl*);
DEFINE_IL2CPP_CLASS(::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl*, "Oculus.Voice.Core.Bindings.Android.PlatformLogger", "VoiceSDKPlatformLoggerImpl");
// Dependencies Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<T>
namespace Oculus::Voice::Core::Bindings::Android::PlatformLogger {
// Is value type: false
// CS Name: Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKPlatformLoggerImpl
class CORDL_TYPE VoiceSDKPlatformLoggerImpl : public ::Oculus::Voice::Core::Bindings::Android::BaseAndroidConnectionImpl_1<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*> {
public:
// Declarations
 __declspec(property(get=get_IsUsingPlatformIntegration, put=set_IsUsingPlatformIntegration)) bool  IsUsingPlatformIntegration;

 __declspec(property(get=get_PackageName)) ::StringW  PackageName;

 __declspec(property(put=set_ShouldLogToConsole)) bool  ShouldLogToConsole;

 __declspec(property(get=get_WitApplication, put=set_WitApplication)) ::StringW  WitApplication;

/// @brief Field <IsUsingPlatformIntegration>k__BackingField, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsUsingPlatformIntegration_k__BackingField, put=__cordl_internal_set__IsUsingPlatformIntegration_k__BackingField)) bool  _IsUsingPlatformIntegration_k__BackingField;

/// @brief Field <PackageName>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__PackageName_k__BackingField, put=__cordl_internal_set__PackageName_k__BackingField)) ::StringW  _PackageName_k__BackingField;

/// @brief Field <WitApplication>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__WitApplication_k__BackingField, put=__cordl_internal_set__WitApplication_k__BackingField)) ::StringW  _WitApplication_k__BackingField;

/// @brief Field consoleLoggerImpl, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_consoleLoggerImpl, put=__cordl_internal_set_consoleLoggerImpl)) ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKConsoleLoggerImpl*  consoleLoggerImpl;

/// @brief Field loggedFirstTranscriptionTime, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_loggedFirstTranscriptionTime, put=__cordl_internal_set_loggedFirstTranscriptionTime)) bool  loggedFirstTranscriptionTime;

/// @brief Convert operator to "::Oculus::Voice::Core::Bindings::Interfaces::IVoiceSDKLogger"
constexpr operator  ::Oculus::Voice::Core::Bindings::Interfaces::IVoiceSDKLogger*() noexcept;

/// @brief Method Connect, addr 0x5e31bb4, size 0xb8, virtual true, abstract: false, final false
inline void Connect(::StringW  version) ;

/// @brief Method Disconnect, addr 0x5e31c6c, size 0x8c, virtual true, abstract: false, final false
inline void Disconnect() ;

/// @brief Method LogAnnotation, addr 0x5e31e50, size 0x4c, virtual true, abstract: false, final true
inline void LogAnnotation(::StringW  annotationKey, ::StringW  annotationValue) ;

/// @brief Method LogFirstTranscriptionTime, addr 0x5e31fa8, size 0x64, virtual true, abstract: false, final true
inline void LogFirstTranscriptionTime() ;

/// @brief Method LogInteractionEndFailure, addr 0x5e31ef0, size 0x5c, virtual true, abstract: false, final true
inline void LogInteractionEndFailure(::StringW  errorMessage) ;

/// @brief Method LogInteractionEndSuccess, addr 0x5e31e9c, size 0x54, virtual true, abstract: false, final true
inline void LogInteractionEndSuccess() ;

/// @brief Method LogInteractionPoint, addr 0x5e31f4c, size 0x5c, virtual true, abstract: false, final true
inline void LogInteractionPoint(::StringW  interactionPoint) ;

/// @brief Method LogInteractionStart, addr 0x5e31cf8, size 0x158, virtual true, abstract: false, final true
inline void LogInteractionStart(::StringW  requestId, ::StringW  witApi) ;

static inline ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl* New_ctor() ;

constexpr bool const& __cordl_internal_get__IsUsingPlatformIntegration_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsUsingPlatformIntegration_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__PackageName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__PackageName_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__WitApplication_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__WitApplication_k__BackingField() ;

constexpr ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKConsoleLoggerImpl* const& __cordl_internal_get_consoleLoggerImpl() const;

constexpr ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKConsoleLoggerImpl*& __cordl_internal_get_consoleLoggerImpl() ;

constexpr bool const& __cordl_internal_get_loggedFirstTranscriptionTime() const;

constexpr bool& __cordl_internal_get_loggedFirstTranscriptionTime() ;

constexpr void __cordl_internal_set__IsUsingPlatformIntegration_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__PackageName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__WitApplication_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set_consoleLoggerImpl(::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKConsoleLoggerImpl*  value) ;

constexpr void __cordl_internal_set_loggedFirstTranscriptionTime(bool  value) ;

/// @brief Method .ctor, addr 0x5e31ad4, size 0xe0, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_IsUsingPlatformIntegration, addr 0x5e31a90, size 0x8, virtual true, abstract: false, final true
inline bool get_IsUsingPlatformIntegration() ;

/// [CompilerGenerated]
/// @brief Method get_PackageName, addr 0x5e31ab0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_PackageName() ;

/// [CompilerGenerated]
/// @brief Method get_WitApplication, addr 0x5e31aa0, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_WitApplication() ;

/// @brief Convert to "::Oculus::Voice::Core::Bindings::Interfaces::IVoiceSDKLogger"
constexpr ::Oculus::Voice::Core::Bindings::Interfaces::IVoiceSDKLogger* i___Oculus__Voice__Core__Bindings__Interfaces__IVoiceSDKLogger() noexcept;

/// [CompilerGenerated]
/// @brief Method set_IsUsingPlatformIntegration, addr 0x5e31a98, size 0x8, virtual true, abstract: false, final true
inline void set_IsUsingPlatformIntegration(bool  value) ;

/// @brief Method set_ShouldLogToConsole, addr 0x5e31ab8, size 0x1c, virtual true, abstract: false, final true
inline void set_ShouldLogToConsole(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_WitApplication, addr 0x5e31aa8, size 0x8, virtual true, abstract: false, final true
inline void set_WitApplication(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceSDKPlatformLoggerImpl() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceSDKPlatformLoggerImpl", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceSDKPlatformLoggerImpl(VoiceSDKPlatformLoggerImpl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceSDKPlatformLoggerImpl", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceSDKPlatformLoggerImpl(VoiceSDKPlatformLoggerImpl const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32944};

/// [CompilerGenerated]
/// @brief Field <IsUsingPlatformIntegration>k__BackingField, offset: 0x28, size: 0x1, def value: None
 bool  ____IsUsingPlatformIntegration_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <WitApplication>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____WitApplication_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <PackageName>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____PackageName_k__BackingField;

/// @brief Field consoleLoggerImpl, offset: 0x40, size: 0x8, def value: None
 ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKConsoleLoggerImpl*  ___consoleLoggerImpl;

/// @brief Field loggedFirstTranscriptionTime, offset: 0x48, size: 0x1, def value: None
 bool  ___loggedFirstTranscriptionTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl, ____IsUsingPlatformIntegration_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl, ____WitApplication_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl, ____PackageName_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl, ___consoleLoggerImpl) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl, ___loggedFirstTranscriptionTime) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl) == 0x50, "Size mismatch!");

} // namespace end def Oculus::Voice::Core::Bindings::Android::PlatformLogger
