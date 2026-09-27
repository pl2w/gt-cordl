#pragma once
// IWYU pragma private; include "Oculus/Voice/Core/Bindings/Android/PlatformLogger/VoiceSDKConsoleLoggerImpl.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VoiceSDKConsoleLoggerImpl)
namespace Oculus::Voice::Core::Bindings::Interfaces {
class IVoiceSDKLogger;
}
// Forward declare root types
namespace Oculus::Voice::Core::Bindings::Android::PlatformLogger {
class VoiceSDKConsoleLoggerImpl;
}
// Write type traits
MARK_REF_T(::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKConsoleLoggerImpl*);
DEFINE_IL2CPP_CLASS(::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKConsoleLoggerImpl*, "Oculus.Voice.Core.Bindings.Android.PlatformLogger", "VoiceSDKConsoleLoggerImpl");
// Dependencies System.Object
namespace Oculus::Voice::Core::Bindings::Android::PlatformLogger {
// Is value type: false
// CS Name: Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKConsoleLoggerImpl
class CORDL_TYPE VoiceSDKConsoleLoggerImpl : public ::System::Object {
public:
// Declarations
 __declspec(property(put=set_IsUsingPlatformIntegration)) bool  IsUsingPlatformIntegration;

 __declspec(property(get=get_PackageName)) ::StringW  PackageName;

 __declspec(property(get=get_ShouldLogToConsole, put=set_ShouldLogToConsole)) bool  ShouldLogToConsole;

/// @brief Field TAG, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TAG, put=setStaticF_TAG)) ::StringW  TAG;

 __declspec(property(get=get_WitApplication, put=set_WitApplication)) ::StringW  WitApplication;

/// @brief Field <IsUsingPlatformIntegration>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsUsingPlatformIntegration_k__BackingField, put=__cordl_internal_set__IsUsingPlatformIntegration_k__BackingField)) bool  _IsUsingPlatformIntegration_k__BackingField;

/// @brief Field <PackageName>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__PackageName_k__BackingField, put=__cordl_internal_set__PackageName_k__BackingField)) ::StringW  _PackageName_k__BackingField;

/// @brief Field <ShouldLogToConsole>k__BackingField, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__ShouldLogToConsole_k__BackingField, put=__cordl_internal_set__ShouldLogToConsole_k__BackingField)) bool  _ShouldLogToConsole_k__BackingField;

/// @brief Field <WitApplication>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__WitApplication_k__BackingField, put=__cordl_internal_set__WitApplication_k__BackingField)) ::StringW  _WitApplication_k__BackingField;

/// @brief Field loggedFirstTranscriptionTime, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_loggedFirstTranscriptionTime, put=__cordl_internal_set_loggedFirstTranscriptionTime)) bool  loggedFirstTranscriptionTime;

/// @brief Convert operator to "::Oculus::Voice::Core::Bindings::Interfaces::IVoiceSDKLogger"
constexpr operator  ::Oculus::Voice::Core::Bindings::Interfaces::IVoiceSDKLogger*() noexcept;

/// @brief Method LogAnnotation, addr 0x5e310a4, size 0x1b4, virtual true, abstract: false, final true
inline void LogAnnotation(::StringW  annotationKey, ::StringW  annotationValue) ;

/// @brief Method LogFirstTranscriptionTime, addr 0x5e31258, size 0x64, virtual true, abstract: false, final true
inline void LogFirstTranscriptionTime() ;

/// @brief Method LogInteractionEndFailure, addr 0x5e30d84, size 0x128, virtual true, abstract: false, final true
inline void LogInteractionEndFailure(::StringW  errorMessage) ;

/// @brief Method LogInteractionEndSuccess, addr 0x5e30c6c, size 0x118, virtual true, abstract: false, final true
inline void LogInteractionEndSuccess() ;

/// @brief Method LogInteractionPoint, addr 0x5e30eac, size 0x1f8, virtual true, abstract: false, final true
inline void LogInteractionPoint(::StringW  interactionPoint) ;

/// @brief Method LogInteractionStart, addr 0x5e30a84, size 0x1e8, virtual true, abstract: false, final true
inline void LogInteractionStart(::StringW  requestId, ::StringW  witApi) ;

static inline ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKConsoleLoggerImpl* New_ctor() ;

constexpr bool const& __cordl_internal_get__IsUsingPlatformIntegration_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsUsingPlatformIntegration_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__PackageName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__PackageName_k__BackingField() ;

constexpr bool const& __cordl_internal_get__ShouldLogToConsole_k__BackingField() const;

constexpr bool& __cordl_internal_get__ShouldLogToConsole_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__WitApplication_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__WitApplication_k__BackingField() ;

constexpr bool const& __cordl_internal_get_loggedFirstTranscriptionTime() const;

constexpr bool& __cordl_internal_get_loggedFirstTranscriptionTime() ;

constexpr void __cordl_internal_set__IsUsingPlatformIntegration_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__PackageName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__ShouldLogToConsole_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__WitApplication_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set_loggedFirstTranscriptionTime(bool  value) ;

/// @brief Method .ctor, addr 0x5e30a58, size 0x2c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_TAG() ;

/// [CompilerGenerated]
/// @brief Method get_PackageName, addr 0x5e30a40, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_PackageName() ;

/// [CompilerGenerated]
/// @brief Method get_ShouldLogToConsole, addr 0x5e30a48, size 0x8, virtual true, abstract: false, final true
inline bool get_ShouldLogToConsole() ;

/// [CompilerGenerated]
/// @brief Method get_WitApplication, addr 0x5e30a30, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_WitApplication() ;

/// @brief Convert to "::Oculus::Voice::Core::Bindings::Interfaces::IVoiceSDKLogger"
constexpr ::Oculus::Voice::Core::Bindings::Interfaces::IVoiceSDKLogger* i___Oculus__Voice__Core__Bindings__Interfaces__IVoiceSDKLogger() noexcept;

static inline void setStaticF_TAG(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsUsingPlatformIntegration, addr 0x5e30a28, size 0x8, virtual true, abstract: false, final true
inline void set_IsUsingPlatformIntegration(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_ShouldLogToConsole, addr 0x5e30a50, size 0x8, virtual true, abstract: false, final true
inline void set_ShouldLogToConsole(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_WitApplication, addr 0x5e30a38, size 0x8, virtual true, abstract: false, final true
inline void set_WitApplication(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceSDKConsoleLoggerImpl() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceSDKConsoleLoggerImpl", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceSDKConsoleLoggerImpl(VoiceSDKConsoleLoggerImpl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceSDKConsoleLoggerImpl", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceSDKConsoleLoggerImpl(VoiceSDKConsoleLoggerImpl const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32940};

/// [CompilerGenerated]
/// @brief Field <IsUsingPlatformIntegration>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____IsUsingPlatformIntegration_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <WitApplication>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____WitApplication_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <PackageName>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____PackageName_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ShouldLogToConsole>k__BackingField, offset: 0x28, size: 0x1, def value: None
 bool  ____ShouldLogToConsole_k__BackingField;

/// @brief Field loggedFirstTranscriptionTime, offset: 0x29, size: 0x1, def value: None
 bool  ___loggedFirstTranscriptionTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKConsoleLoggerImpl, ____IsUsingPlatformIntegration_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKConsoleLoggerImpl, ____WitApplication_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKConsoleLoggerImpl, ____PackageName_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKConsoleLoggerImpl, ____ShouldLogToConsole_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKConsoleLoggerImpl, ___loggedFirstTranscriptionTime) == 0x29, "Offset mismatch!");

static_assert(sizeof(::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKConsoleLoggerImpl) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Voice::Core::Bindings::Android::PlatformLogger
