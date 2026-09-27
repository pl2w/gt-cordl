#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Interfaces/ITTSWebHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ITTSWebHandler)
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace Meta::WitAi::TTS::Data {
class TTSClipData;
}
namespace Meta::WitAi::TTS::Data {
class TTSDiskCacheSettings;
}
namespace Meta::WitAi::TTS::Data {
class TTSVoiceSettings;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Interfaces {
class ITTSWebHandler;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Interfaces::ITTSWebHandler*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Interfaces::ITTSWebHandler*, "Meta.WitAi.TTS.Interfaces", "ITTSWebHandler");
// Dependencies 
namespace Meta::WitAi::TTS::Interfaces {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Interfaces.ITTSWebHandler
class CORDL_TYPE ITTSWebHandler {
public:
// Declarations
/// @brief Method CancelRequests, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool CancelRequests(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method CreateClipData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::WitAi::TTS::Data::TTSClipData* CreateClipData(::StringW  clipId, ::StringW  textToSpeak, ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  voiceSettings, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings) ;

/// @brief Method DecodeTtsFromJson, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool DecodeTtsFromJson(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::by_ref<::StringW>  textToSpeak, ::by_ref<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>  voiceSettings) ;

/// @brief Method GetWebErrors, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW GetWebErrors(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method IsDownloadedToDisk, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* IsDownloadedToDisk(::StringW  diskPath) ;

/// @brief Method RequestDownloadFromWeb, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* RequestDownloadFromWeb(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  diskPath) ;

/// @brief Method RequestStreamFromDisk, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* RequestStreamFromDisk(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  diskPath, ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  onReady) ;

/// @brief Method RequestStreamFromWeb, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* RequestStreamFromWeb(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  onReady) ;

// Ctor Parameters [CppParam { name: "", ty: "ITTSWebHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITTSWebHandler(ITTSWebHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29108};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::TTS::Interfaces
