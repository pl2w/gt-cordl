#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Debugger/TTSDebugger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TTSDebugger)
namespace Meta::Voice::Logging {
class IVLogger;
}
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace Meta::WitAi::TTS::Data {
class TTSClipData;
}
namespace Meta::WitAi::TTS::Debugger {
class TTSDebugger_TTSDebuggerFileStream;
}
namespace Meta::WitAi::TTS {
class TTSService;
}
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class ConcurrentDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::IO {
class FileStream;
}
namespace System::Text::RegularExpressions {
class Regex;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Debugger {
class TTSDebugger;
}
namespace Meta::WitAi::TTS::Debugger {
class TTSDebugger_TTSDebuggerFileStream;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Debugger::TTSDebugger*);
MARK_REF_T(::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Debugger::TTSDebugger*, "Meta.WitAi.TTS.Debugger", "TTSDebugger");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream*, "Meta.WitAi.TTS.Debugger", "TTSDebugger/TTSDebuggerFileStream");
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::WitAi::TTS::Debugger {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Debugger.TTSDebugger
class CORDL_TYPE TTSDebugger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using TTSDebuggerFileStream = ::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream;

 __declspec(property(get=get_Logger)) ::Meta::Voice::Logging::IVLogger*  Logger;

/// @brief Field <Logger>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Logger_k__BackingField, put=__cordl_internal_set__Logger_k__BackingField)) ::Meta::Voice::Logging::IVLogger*  _Logger_k__BackingField;

/// @brief Field _fileCleanupRegex, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__fileCleanupRegex, put=setStaticF__fileCleanupRegex)) ::System::Text::RegularExpressions::Regex*  _fileCleanupRegex;

/// @brief Field _outputDirectory, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__outputDirectory, put=__cordl_internal_set__outputDirectory)) ::StringW  _outputDirectory;

/// @brief Field _service, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__service, put=__cordl_internal_set__service)) ::UnityW<::Meta::WitAi::TTS::TTSService>  _service;

/// @brief Field _streams, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__streams, put=__cordl_internal_set__streams)) ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream*>*  _streams;

/// @brief Method GetClipName, addr 0x9e66c90, size 0x1c, virtual false, abstract: false, final false
inline ::StringW GetClipName(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

static inline ::Meta::WitAi::TTS::Debugger::TTSDebugger* New_ctor() ;

/// @brief Method OnDisable, addr 0x9e66c88, size 0x8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9e66a64, size 0xb0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnStreamBegin, addr 0x9e66cac, size 0x780, virtual false, abstract: false, final false
inline void OnStreamBegin(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method OnStreamComplete, addr 0x9e67604, size 0x994, virtual false, abstract: false, final false
inline void OnStreamComplete(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method Reset, addr 0x9e66870, size 0xb0, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetListeners, addr 0x9e66b14, size 0x174, virtual false, abstract: false, final false
inline void SetListeners(bool  add) ;

/// @brief Method SetupRegex, addr 0x9e66920, size 0x144, virtual false, abstract: false, final false
static inline void SetupRegex() ;

constexpr ::Meta::Voice::Logging::IVLogger* const& __cordl_internal_get__Logger_k__BackingField() const;

constexpr ::Meta::Voice::Logging::IVLogger*& __cordl_internal_get__Logger_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__outputDirectory() const;

constexpr ::StringW& __cordl_internal_get__outputDirectory() ;

constexpr ::UnityW<::Meta::WitAi::TTS::TTSService> const& __cordl_internal_get__service() const;

constexpr ::UnityW<::Meta::WitAi::TTS::TTSService>& __cordl_internal_get__service() ;

constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream*>* const& __cordl_internal_get__streams() const;

constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream*>*& __cordl_internal_get__streams() ;

constexpr void __cordl_internal_set__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value) ;

constexpr void __cordl_internal_set__outputDirectory(::StringW  value) ;

constexpr void __cordl_internal_set__service(::UnityW<::Meta::WitAi::TTS::TTSService>  value) ;

constexpr void __cordl_internal_set__streams(::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream*>*  value) ;

/// @brief Method .ctor, addr 0x9e680c4, size 0x198, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Text::RegularExpressions::Regex* getStaticF__fileCleanupRegex() ;

/// [CompilerGenerated]
/// @brief Method get_Logger, addr 0x9e66868, size 0x8, virtual true, abstract: false, final true
inline ::Meta::Voice::Logging::IVLogger* get_Logger() ;

static inline void setStaticF__fileCleanupRegex(::System::Text::RegularExpressions::Regex*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSDebugger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSDebugger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSDebugger(TTSDebugger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSDebugger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSDebugger(TTSDebugger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29184};

/// [Tooltip("The TTS service that will generate tts output files")]
/// [SerializeField]
/// @brief Field _service, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::TTSService>  ____service;

/// [Tooltip("The location within the Assets directory that will output all tts files")]
/// [SerializeField]
/// @brief Field _outputDirectory, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____outputDirectory;

/// [CompilerGenerated]
/// @brief Field <Logger>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Meta::Voice::Logging::IVLogger*  ____Logger_k__BackingField;

/// @brief Field _streams, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream*>*  ____streams;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Debugger::TTSDebugger, ____service) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Debugger::TTSDebugger, ____outputDirectory) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Debugger::TTSDebugger, ____Logger_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Debugger::TTSDebugger, ____streams) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Debugger::TTSDebugger) == 0x40, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Debugger
// Dependencies System.Object
namespace Meta::WitAi::TTS::Debugger {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Debugger.TTSDebugger/TTSDebuggerFileStream
class CORDL_TYPE TTSDebugger_TTSDebuggerFileStream : public ::System::Object {
public:
// Declarations
/// @brief Field EventNodes, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_EventNodes, put=__cordl_internal_set_EventNodes)) ::System::Collections::Generic::List_1<::Meta::WitAi::Json::WitResponseNode*>*  EventNodes;

/// @brief Field FilePath, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_FilePath, put=__cordl_internal_set_FilePath)) ::StringW  FilePath;

/// @brief Field _audioStream, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioStream, put=__cordl_internal_set__audioStream)) ::System::IO::FileStream*  _audioStream;

/// @brief Method AddEvent, addr 0x9e68380, size 0xac, virtual false, abstract: false, final false
inline void AddEvent(::Meta::WitAi::Json::WitResponseNode*  ttsEvent) ;

/// @brief Method AddSamples, addr 0x9e6825c, size 0x124, virtual false, abstract: false, final false
inline void AddSamples(::ArrayW<float_t>  samples, int32_t  offset, int32_t  length) ;

/// @brief Method Dispose, addr 0x9e68048, size 0x7c, virtual false, abstract: false, final false
inline void Dispose() ;

static inline ::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream* New_ctor(::StringW  filePath) ;

constexpr ::System::Collections::Generic::List_1<::Meta::WitAi::Json::WitResponseNode*>* const& __cordl_internal_get_EventNodes() const;

constexpr ::System::Collections::Generic::List_1<::Meta::WitAi::Json::WitResponseNode*>*& __cordl_internal_get_EventNodes() ;

constexpr ::StringW const& __cordl_internal_get_FilePath() const;

constexpr ::StringW& __cordl_internal_get_FilePath() ;

constexpr ::System::IO::FileStream* const& __cordl_internal_get__audioStream() const;

constexpr ::System::IO::FileStream*& __cordl_internal_get__audioStream() ;

constexpr void __cordl_internal_set_EventNodes(::System::Collections::Generic::List_1<::Meta::WitAi::Json::WitResponseNode*>*  value) ;

constexpr void __cordl_internal_set_FilePath(::StringW  value) ;

constexpr void __cordl_internal_set__audioStream(::System::IO::FileStream*  value) ;

/// @brief Method .ctor, addr 0x9e6742c, size 0x128, virtual false, abstract: false, final false
inline void _ctor(::StringW  filePath) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSDebugger_TTSDebuggerFileStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSDebugger_TTSDebuggerFileStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSDebugger_TTSDebuggerFileStream(TTSDebugger_TTSDebuggerFileStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSDebugger_TTSDebuggerFileStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSDebugger_TTSDebuggerFileStream(TTSDebugger_TTSDebuggerFileStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29183};

/// @brief Field FilePath, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___FilePath;

/// @brief Field EventNodes, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Meta::WitAi::Json::WitResponseNode*>*  ___EventNodes;

/// @brief Field _audioStream, offset: 0x20, size: 0x8, def value: None
 ::System::IO::FileStream*  ____audioStream;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream, ___FilePath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream, ___EventNodes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream, ____audioStream) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Debugger
