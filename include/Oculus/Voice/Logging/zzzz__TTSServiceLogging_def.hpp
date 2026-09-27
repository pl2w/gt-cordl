#pragma once
// IWYU pragma private; include "Oculus/Voice/Logging/TTSServiceLogging.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TTSServiceLogging)
namespace GlobalNamespace {
struct TTSServiceLogging_TTSServiceRequestLog;
}
namespace Meta::WitAi::TTS::Data {
class TTSClipData;
}
namespace Meta::WitAi::TTS {
class TTSService;
}
namespace Oculus::Voice::Core::Bindings::Interfaces {
class IVoiceSDKLogger;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace Oculus::Voice::Logging {
class TTSServiceLogging;
}
// Write type traits
MARK_REF_T(::Oculus::Voice::Logging::TTSServiceLogging*);
DEFINE_IL2CPP_CLASS(::Oculus::Voice::Logging::TTSServiceLogging*, "Oculus.Voice.Logging", "TTSServiceLogging");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Voice::Logging {
// Is value type: false
// CS Name: Oculus.Voice.Logging.TTSServiceLogging
class CORDL_TYPE TTSServiceLogging : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using TTSServiceRequestLog = ::GlobalNamespace::TTSServiceLogging_TTSServiceRequestLog;

/// @brief Field EnableConsoleLogging, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_EnableConsoleLogging, put=__cordl_internal_set_EnableConsoleLogging)) bool  EnableConsoleLogging;

 __declspec(property(get=get_Service, put=set_Service)) ::UnityW<::Meta::WitAi::TTS::TTSService>  Service;

/// @brief Field <Service>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Service_k__BackingField, put=__cordl_internal_set__Service_k__BackingField)) ::UnityW<::Meta::WitAi::TTS::TTSService>  _Service_k__BackingField;

/// @brief Field _initialized, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__initialized, put=setStaticF__initialized)) bool  _initialized;

/// @brief Field _requests, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__requests, put=__cordl_internal_set__requests)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::TTSServiceLogging_TTSServiceRequestLog>*  _requests;

/// @brief Field _voiceSDKLoggerImpl, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__voiceSDKLoggerImpl, put=__cordl_internal_set__voiceSDKLoggerImpl)) ::Oculus::Voice::Core::Bindings::Interfaces::IVoiceSDKLogger*  _voiceSDKLoggerImpl;

/// @brief Method Awake, addr 0xb949f60, size 0x70, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetRequestData, addr 0xb94b030, size 0x98, virtual false, abstract: false, final false
inline ::GlobalNamespace::TTSServiceLogging_TTSServiceRequestLog GetRequestData(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// [RuntimeInitializeOnLoadMethod]
/// @brief Method Init, addr 0xb94b194, size 0xac, virtual false, abstract: false, final false
static inline void Init() ;

/// @brief Method InitLogger, addr 0xb949fd0, size 0x220, virtual false, abstract: false, final false
inline void InitLogger() ;

/// @brief Method LogAnnotate, addr 0xb94b120, size 0x74, virtual false, abstract: false, final false
inline void LogAnnotate(::GlobalNamespace::TTSServiceLogging_TTSServiceRequestLog  requestData, ::StringW  key, ::StringW  value) ;

/// @brief Method LogComplete, addr 0xb94aad0, size 0x434, virtual false, abstract: false, final false
inline void LogComplete(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  error) ;

/// @brief Method LogStart, addr 0xb94a890, size 0x1e8, virtual false, abstract: false, final false
inline void LogStart(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method LogTimestamp, addr 0xb94af7c, size 0x38, virtual false, abstract: false, final false
inline void LogTimestamp(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  key) ;

/// @brief Method LogTimestamp, addr 0xb94b0c8, size 0x58, virtual false, abstract: false, final false
inline void LogTimestamp(::GlobalNamespace::TTSServiceLogging_TTSServiceRequestLog  requestData, ::StringW  key) ;

static inline ::Oculus::Voice::Logging::TTSServiceLogging* New_ctor() ;

/// @brief Method OnDisable, addr 0xb94a580, size 0x30c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb94a1f0, size 0x390, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnRequestBegin, addr 0xb94a88c, size 0x4, virtual false, abstract: false, final false
inline void OnRequestBegin(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method OnRequestCancel, addr 0xb94aa78, size 0x58, virtual false, abstract: false, final false
inline void OnRequestCancel(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method OnRequestComplete, addr 0xb94b028, size 0x8, virtual false, abstract: false, final false
inline void OnRequestComplete(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method OnRequestError, addr 0xb94af04, size 0x4, virtual false, abstract: false, final false
inline void OnRequestError(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  error) ;

/// @brief Method OnRequestFirstResponse, addr 0xb94af08, size 0x74, virtual false, abstract: false, final false
inline void OnRequestFirstResponse(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method OnRequestReady, addr 0xb94afb4, size 0x74, virtual false, abstract: false, final false
inline void OnRequestReady(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method OnServiceStart, addr 0xb94b240, size 0xec, virtual false, abstract: false, final false
static inline void OnServiceStart(::Meta::WitAi::TTS::TTSService*  service) ;

constexpr bool const& __cordl_internal_get_EnableConsoleLogging() const;

constexpr bool& __cordl_internal_get_EnableConsoleLogging() ;

constexpr ::UnityW<::Meta::WitAi::TTS::TTSService> const& __cordl_internal_get__Service_k__BackingField() const;

constexpr ::UnityW<::Meta::WitAi::TTS::TTSService>& __cordl_internal_get__Service_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::TTSServiceLogging_TTSServiceRequestLog>* const& __cordl_internal_get__requests() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::TTSServiceLogging_TTSServiceRequestLog>*& __cordl_internal_get__requests() ;

constexpr ::Oculus::Voice::Core::Bindings::Interfaces::IVoiceSDKLogger* const& __cordl_internal_get__voiceSDKLoggerImpl() const;

constexpr ::Oculus::Voice::Core::Bindings::Interfaces::IVoiceSDKLogger*& __cordl_internal_get__voiceSDKLoggerImpl() ;

constexpr void __cordl_internal_set_EnableConsoleLogging(bool  value) ;

constexpr void __cordl_internal_set__Service_k__BackingField(::UnityW<::Meta::WitAi::TTS::TTSService>  value) ;

constexpr void __cordl_internal_set__requests(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::TTSServiceLogging_TTSServiceRequestLog>*  value) ;

constexpr void __cordl_internal_set__voiceSDKLoggerImpl(::Oculus::Voice::Core::Bindings::Interfaces::IVoiceSDKLogger*  value) ;

/// @brief Method .ctor, addr 0xb94b32c, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF__initialized() ;

/// [CompilerGenerated]
/// @brief Method get_Service, addr 0xb949f50, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Meta::WitAi::TTS::TTSService> get_Service() ;

static inline void setStaticF__initialized(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Service, addr 0xb949f58, size 0x8, virtual false, abstract: false, final false
inline void set_Service(::Meta::WitAi::TTS::TTSService*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSServiceLogging() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSServiceLogging", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSServiceLogging(TTSServiceLogging && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSServiceLogging", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSServiceLogging(TTSServiceLogging const& ) = delete;

/// @brief Field TTS_ERROR_ANNOTATION offset 0xffffffff size 0x8
static constexpr ::ConstString  TTS_ERROR_ANNOTATION{u"ttsError"};

/// @brief Field TTS_FILESTREAM_ANNOTATION offset 0xffffffff size 0x8
static constexpr ::ConstString  TTS_FILESTREAM_ANNOTATION{u"ttsFileStream"};

/// @brief Field TTS_FILETYPE_ANNOTATION offset 0xffffffff size 0x8
static constexpr ::ConstString  TTS_FILETYPE_ANNOTATION{u"ttsFileType"};

/// @brief Field TTS_FINISH_TIME_ANNOTATION offset 0xffffffff size 0x8
static constexpr ::ConstString  TTS_FINISH_TIME_ANNOTATION{u"ttsFinishedTime"};

/// @brief Field TTS_FIRST_TIME_ANNOTATION offset 0xffffffff size 0x8
static constexpr ::ConstString  TTS_FIRST_TIME_ANNOTATION{u"ttsFirstResponseTime"};

/// @brief Field TTS_READY_TIME_ANNOTATION offset 0xffffffff size 0x8
static constexpr ::ConstString  TTS_READY_TIME_ANNOTATION{u"ttsReadyTime"};

/// @brief Field TTS_START_TIME_ANNOTATION offset 0xffffffff size 0x8
static constexpr ::ConstString  TTS_START_TIME_ANNOTATION{u"ttsStartTime"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31697};

/// @brief Field EnableConsoleLogging, offset: 0x20, size: 0x1, def value: None
 bool  ___EnableConsoleLogging;

/// [CompilerGenerated]
/// @brief Field <Service>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::TTSService>  ____Service_k__BackingField;

/// @brief Field _voiceSDKLoggerImpl, offset: 0x30, size: 0x8, def value: None
 ::Oculus::Voice::Core::Bindings::Interfaces::IVoiceSDKLogger*  ____voiceSDKLoggerImpl;

/// @brief Field _requests, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::TTSServiceLogging_TTSServiceRequestLog>*  ____requests;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Voice::Logging::TTSServiceLogging, ___EnableConsoleLogging) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Voice::Logging::TTSServiceLogging, ____Service_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Voice::Logging::TTSServiceLogging, ____voiceSDKLoggerImpl) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Voice::Logging::TTSServiceLogging, ____requests) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Oculus::Voice::Logging::TTSServiceLogging) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Voice::Logging
