#pragma once
// IWYU pragma private; include "GlobalNamespace/DevConsole.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaDevButton_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DevConsole)
namespace GlobalNamespace {
class DevConsoleInstance;
}
namespace GlobalNamespace {
class DevConsole_DisplayedLogLine;
}
namespace GlobalNamespace {
class DevConsole_LogEntry;
}
namespace GlobalNamespace {
class DevConsole_MessagePayload;
}
namespace GlobalNamespace {
class DevInspector;
}
namespace GlobalNamespace {
class GorillaDevButton;
}
namespace GlobalNamespace {
class IDebugObject;
}
namespace GlobalNamespace {
class LogEntry_DevConsole___c__DisplayClass10_0;
}
namespace GlobalNamespace {
class MessagePayload_DevConsole_Block;
}
namespace GlobalNamespace {
class MessagePayload_DevConsole_TextBlock;
}
namespace GlobalNamespace {
class MessagePayload_DevConsole___c;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System {
class Type;
}
namespace UnityEngine::UI {
class Text;
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
struct LogType;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class SpriteRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class DevConsole;
}
namespace GlobalNamespace {
class DevConsole_DisplayedLogLine;
}
namespace GlobalNamespace {
class DevConsole_LogEntry;
}
namespace GlobalNamespace {
class DevConsole_MessagePayload;
}
namespace GlobalNamespace {
class LogEntry_DevConsole___c__DisplayClass10_0;
}
namespace GlobalNamespace {
class MessagePayload_DevConsole_Block;
}
namespace GlobalNamespace {
class MessagePayload_DevConsole_TextBlock;
}
namespace GlobalNamespace {
class MessagePayload_DevConsole___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DevConsole*);
MARK_REF_T(::GlobalNamespace::DevConsole_DisplayedLogLine*);
MARK_REF_T(::GlobalNamespace::DevConsole_LogEntry*);
MARK_REF_T(::GlobalNamespace::DevConsole_MessagePayload*);
MARK_REF_T(::GlobalNamespace::LogEntry_DevConsole___c__DisplayClass10_0*);
MARK_REF_T(::GlobalNamespace::MessagePayload_DevConsole_Block*);
MARK_REF_T(::GlobalNamespace::MessagePayload_DevConsole_TextBlock*);
MARK_REF_T(::GlobalNamespace::MessagePayload_DevConsole___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DevConsole*, "", "DevConsole");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DevConsole_DisplayedLogLine*, "", "DevConsole/DisplayedLogLine");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DevConsole_LogEntry*, "", "DevConsole/LogEntry");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DevConsole_MessagePayload*, "", "DevConsole/MessagePayload");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LogEntry_DevConsole___c__DisplayClass10_0*, "", "DevConsole/LogEntry/<>c__DisplayClass10_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MessagePayload_DevConsole_Block*, "", "DevConsole/MessagePayload/Block");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MessagePayload_DevConsole_TextBlock*, "", "DevConsole/MessagePayload/TextBlock");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MessagePayload_DevConsole___c*, "", "DevConsole/MessagePayload/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DevConsole
class CORDL_TYPE DevConsole : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DisplayedLogLine = ::GlobalNamespace::DevConsole_DisplayedLogLine;

using LogEntry = ::GlobalNamespace::DevConsole_LogEntry;

using MessagePayload = ::GlobalNamespace::DevConsole_MessagePayload;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::GlobalNamespace::DevConsole>  _instance;

/// @brief Field _logEntries, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__logEntries, put=__cordl_internal_set__logEntries)) ::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole_LogEntry*>*  _logEntries;

/// @brief Field audioSource, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field canExpand, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_canExpand, put=__cordl_internal_set_canExpand)) bool  canExpand;

/// @brief Field currentLogIndex, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentLogIndex, put=__cordl_internal_set_currentLogIndex)) int32_t  currentLogIndex;

/// @brief Field currentZoomLevel, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentZoomLevel, put=__cordl_internal_set_currentZoomLevel)) float_t  currentZoomLevel;

/// @brief Field disableWhileActive, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_disableWhileActive, put=__cordl_internal_set_disableWhileActive)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  disableWhileActive;

/// @brief Field enableWhileActive, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_enableWhileActive, put=__cordl_internal_set_enableWhileActive)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  enableWhileActive;

/// @brief Field errorSound, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_errorSound, put=__cordl_internal_set_errorSound)) ::UnityW<::UnityEngine::AudioClip>  errorSound;

/// @brief Field expandAmount, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_expandAmount, put=__cordl_internal_set_expandAmount)) int32_t  expandAmount;

/// @brief Field expandedMessageIndex, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_expandedMessageIndex, put=__cordl_internal_set_expandedMessageIndex)) int32_t  expandedMessageIndex;

/// @brief Field instances, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_instances, put=__cordl_internal_set_instances)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::DevConsoleInstance>>*  instances;

/// @brief Field isMuted, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_isMuted, put=__cordl_internal_set_isMuted)) bool  isMuted;

/// @brief Field lineStartHeight, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_lineStartHeight, put=__cordl_internal_set_lineStartHeight)) float_t  lineStartHeight;

/// @brief Field lineStartTextWidth, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_lineStartTextWidth, put=__cordl_internal_set_lineStartTextWidth)) float_t  lineStartTextWidth;

/// @brief Field logLines, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_logLines, put=__cordl_internal_set_logLines)) ::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole_DisplayedLogLine*>*  logLines;

/// @brief Field maxHeight, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxHeight, put=__cordl_internal_set_maxHeight)) float_t  maxHeight;

/// @brief Field targetLogIndex, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_targetLogIndex, put=__cordl_internal_set_targetLogIndex)) int32_t  targetLogIndex;

/// @brief Field textScale, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_textScale, put=__cordl_internal_set_textScale)) double_t  textScale;

/// @brief Field textStartHeight, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_textStartHeight, put=__cordl_internal_set_textStartHeight)) float_t  textStartHeight;

/// @brief Field tracebackScrubbing, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tracebackScrubbing, put=setStaticF_tracebackScrubbing)) ::ArrayW<::StringW>  tracebackScrubbing;

/// @brief Convert operator to "::GlobalNamespace::IDebugObject"
constexpr operator  ::GlobalNamespace::IDebugObject*() noexcept;

static inline ::GlobalNamespace::DevConsole* New_ctor() ;

/// @brief Method OnDestroyDebugObject, addr 0x566e28c, size 0x1b4, virtual true, abstract: false, final true
inline void OnDestroyDebugObject() ;

/// @brief Method OnEnable, addr 0x566e440, size 0x24, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole_LogEntry*>* const& __cordl_internal_get__logEntries() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole_LogEntry*>*& __cordl_internal_get__logEntries() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr bool const& __cordl_internal_get_canExpand() const;

constexpr bool& __cordl_internal_get_canExpand() ;

constexpr int32_t const& __cordl_internal_get_currentLogIndex() const;

constexpr int32_t& __cordl_internal_get_currentLogIndex() ;

constexpr float_t const& __cordl_internal_get_currentZoomLevel() const;

constexpr float_t& __cordl_internal_get_currentZoomLevel() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_disableWhileActive() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_disableWhileActive() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_enableWhileActive() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_enableWhileActive() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_errorSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_errorSound() ;

constexpr int32_t const& __cordl_internal_get_expandAmount() const;

constexpr int32_t& __cordl_internal_get_expandAmount() ;

constexpr int32_t const& __cordl_internal_get_expandedMessageIndex() const;

constexpr int32_t& __cordl_internal_get_expandedMessageIndex() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::DevConsoleInstance>>* const& __cordl_internal_get_instances() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::DevConsoleInstance>>*& __cordl_internal_get_instances() ;

constexpr bool const& __cordl_internal_get_isMuted() const;

constexpr bool& __cordl_internal_get_isMuted() ;

constexpr float_t const& __cordl_internal_get_lineStartHeight() const;

constexpr float_t& __cordl_internal_get_lineStartHeight() ;

constexpr float_t const& __cordl_internal_get_lineStartTextWidth() const;

constexpr float_t& __cordl_internal_get_lineStartTextWidth() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole_DisplayedLogLine*>* const& __cordl_internal_get_logLines() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole_DisplayedLogLine*>*& __cordl_internal_get_logLines() ;

constexpr float_t const& __cordl_internal_get_maxHeight() const;

constexpr float_t& __cordl_internal_get_maxHeight() ;

constexpr int32_t const& __cordl_internal_get_targetLogIndex() const;

constexpr int32_t& __cordl_internal_get_targetLogIndex() ;

constexpr double_t const& __cordl_internal_get_textScale() const;

constexpr double_t& __cordl_internal_get_textScale() ;

constexpr float_t const& __cordl_internal_get_textStartHeight() const;

constexpr float_t& __cordl_internal_get_textStartHeight() ;

constexpr void __cordl_internal_set__logEntries(::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole_LogEntry*>*  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_canExpand(bool  value) ;

constexpr void __cordl_internal_set_currentLogIndex(int32_t  value) ;

constexpr void __cordl_internal_set_currentZoomLevel(float_t  value) ;

constexpr void __cordl_internal_set_disableWhileActive(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_enableWhileActive(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_errorSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_expandAmount(int32_t  value) ;

constexpr void __cordl_internal_set_expandedMessageIndex(int32_t  value) ;

constexpr void __cordl_internal_set_instances(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::DevConsoleInstance>>*  value) ;

constexpr void __cordl_internal_set_isMuted(bool  value) ;

constexpr void __cordl_internal_set_lineStartHeight(float_t  value) ;

constexpr void __cordl_internal_set_lineStartTextWidth(float_t  value) ;

constexpr void __cordl_internal_set_logLines(::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole_DisplayedLogLine*>*  value) ;

constexpr void __cordl_internal_set_maxHeight(float_t  value) ;

constexpr void __cordl_internal_set_targetLogIndex(int32_t  value) ;

constexpr void __cordl_internal_set_textScale(double_t  value) ;

constexpr void __cordl_internal_set_textStartHeight(float_t  value) ;

/// @brief Method .ctor, addr 0x566e464, size 0x10c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::DevConsole> getStaticF__instance() ;

static inline ::ArrayW<::StringW> getStaticF_tracebackScrubbing() ;

/// @brief Method get_instance, addr 0x566e120, size 0x110, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::DevConsole> get_instance() ;

/// @brief Method get_logEntries, addr 0x566e230, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole_LogEntry*>* get_logEntries() ;

/// @brief Convert to "::GlobalNamespace::IDebugObject"
constexpr ::GlobalNamespace::IDebugObject* i___GlobalNamespace__IDebugObject() noexcept;

static inline void setStaticF__instance(::UnityW<::GlobalNamespace::DevConsole>  value) ;

static inline void setStaticF_tracebackScrubbing(::ArrayW<::StringW>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DevConsole() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DevConsole", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DevConsole(DevConsole && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DevConsole", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DevConsole(DevConsole const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{800};

/// @brief Field kLogEntriesCapacityIncrementAmount offset 0xffffffff size 0x4
static constexpr int32_t  kLogEntriesCapacityIncrementAmount{static_cast<int32_t>(0x400)};

/// [SerializeField]
/// @brief Field errorSound, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___errorSound;

/// [SerializeField]
/// @brief Field audioSource, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// [SerializeField]
/// @brief Field maxHeight, offset: 0x30, size: 0x4, def value: None
 float_t  ___maxHeight;

/// [SerializeReference]
/// [SerializeField]
/// @brief Field _logEntries, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole_LogEntry*>*  ____logEntries;

/// @brief Field targetLogIndex, offset: 0x40, size: 0x4, def value: None
 int32_t  ___targetLogIndex;

/// @brief Field currentLogIndex, offset: 0x44, size: 0x4, def value: None
 int32_t  ___currentLogIndex;

/// @brief Field isMuted, offset: 0x48, size: 0x1, def value: None
 bool  ___isMuted;

/// @brief Field currentZoomLevel, offset: 0x4c, size: 0x4, def value: None
 float_t  ___currentZoomLevel;

/// @brief Field disableWhileActive, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___disableWhileActive;

/// @brief Field enableWhileActive, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___enableWhileActive;

/// @brief Field expandAmount, offset: 0x60, size: 0x4, def value: None
 int32_t  ___expandAmount;

/// @brief Field expandedMessageIndex, offset: 0x64, size: 0x4, def value: None
 int32_t  ___expandedMessageIndex;

/// @brief Field canExpand, offset: 0x68, size: 0x1, def value: None
 bool  ___canExpand;

/// @brief Field logLines, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole_DisplayedLogLine*>*  ___logLines;

/// @brief Field lineStartHeight, offset: 0x78, size: 0x4, def value: None
 float_t  ___lineStartHeight;

/// @brief Field textStartHeight, offset: 0x7c, size: 0x4, def value: None
 float_t  ___textStartHeight;

/// @brief Field lineStartTextWidth, offset: 0x80, size: 0x4, def value: None
 float_t  ___lineStartTextWidth;

/// @brief Field textScale, offset: 0x88, size: 0x8, def value: None
 double_t  ___textScale;

/// @brief Field instances, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::DevConsoleInstance>>*  ___instances;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DevConsole, ___errorSound) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsole, ___audioSource) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsole, ___maxHeight) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsole, ____logEntries) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsole, ___targetLogIndex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsole, ___currentLogIndex) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsole, ___isMuted) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsole, ___currentZoomLevel) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsole, ___disableWhileActive) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsole, ___enableWhileActive) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsole, ___expandAmount) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsole, ___expandedMessageIndex) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsole, ___canExpand) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsole, ___logLines) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsole, ___lineStartHeight) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsole, ___textStartHeight) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsole, ___lineStartTextWidth) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsole, ___textScale) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsole, ___instances) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DevConsole) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies DevConsole::MessagePayload::Block, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DevConsole/MessagePayload
class CORDL_TYPE DevConsole_MessagePayload : public ::System::Object {
public:
// Declarations
using Block = ::GlobalNamespace::MessagePayload_DevConsole_Block;

using TextBlock = ::GlobalNamespace::MessagePayload_DevConsole_TextBlock;

using __c = ::GlobalNamespace::MessagePayload_DevConsole___c;

/// @brief Field blocks, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_blocks, put=__cordl_internal_set_blocks)) ::ArrayW<::GlobalNamespace::MessagePayload_DevConsole_Block*>  blocks;

/// @brief Method GeneratePayloads, addr 0x566eb44, size 0x8e8, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole_MessagePayload*>* GeneratePayloads(::StringW  username, ::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole_LogEntry*>*  entries) ;

static inline ::GlobalNamespace::DevConsole_MessagePayload* New_ctor() ;

constexpr ::ArrayW<::GlobalNamespace::MessagePayload_DevConsole_Block*> const& __cordl_internal_get_blocks() const;

constexpr ::ArrayW<::GlobalNamespace::MessagePayload_DevConsole_Block*>& __cordl_internal_get_blocks() ;

constexpr void __cordl_internal_set_blocks(::ArrayW<::GlobalNamespace::MessagePayload_DevConsole_Block*>  value) ;

/// @brief Method .ctor, addr 0x566f504, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DevConsole_MessagePayload() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DevConsole_MessagePayload", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DevConsole_MessagePayload(DevConsole_MessagePayload && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DevConsole_MessagePayload", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DevConsole_MessagePayload(DevConsole_MessagePayload const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{799};

/// @brief Field blocks, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::MessagePayload_DevConsole_Block*>  ___blocks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DevConsole_MessagePayload, ___blocks) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DevConsole_MessagePayload) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DevConsole/MessagePayload/<>c
class CORDL_TYPE MessagePayload_DevConsole___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::MessagePayload_DevConsole___c*  __9;

/// @brief Field <>9__3_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__3_0, put=setStaticF___9__3_0)) ::System::Comparison_1<::GlobalNamespace::DevConsole_LogEntry*>*  __9__3_0;

static inline ::GlobalNamespace::MessagePayload_DevConsole___c* New_ctor() ;

/// @brief Method <GeneratePayloads>b__3_0, addr 0x566f584, size 0x28, virtual false, abstract: false, final false
inline int32_t _GeneratePayloads_b__3_0(::GlobalNamespace::DevConsole_LogEntry*  e1, ::GlobalNamespace::DevConsole_LogEntry*  e2) ;

/// @brief Method .ctor, addr 0x566f57c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::MessagePayload_DevConsole___c* getStaticF___9() ;

static inline ::System::Comparison_1<::GlobalNamespace::DevConsole_LogEntry*>* getStaticF___9__3_0() ;

static inline void setStaticF___9(::GlobalNamespace::MessagePayload_DevConsole___c*  value) ;

static inline void setStaticF___9__3_0(::System::Comparison_1<::GlobalNamespace::DevConsole_LogEntry*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MessagePayload_DevConsole___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MessagePayload_DevConsole___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MessagePayload_DevConsole___c(MessagePayload_DevConsole___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessagePayload_DevConsole___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessagePayload_DevConsole___c(MessagePayload_DevConsole___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{798};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MessagePayload_DevConsole___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DevConsole/MessagePayload/TextBlock
class CORDL_TYPE MessagePayload_DevConsole_TextBlock : public ::System::Object {
public:
// Declarations
/// @brief Field text, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_text, put=__cordl_internal_set_text)) ::StringW  text;

/// @brief Field type, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::StringW  type;

static inline ::GlobalNamespace::MessagePayload_DevConsole_TextBlock* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_text() const;

constexpr ::StringW& __cordl_internal_get_text() ;

constexpr ::StringW const& __cordl_internal_get_type() const;

constexpr ::StringW& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set_text(::StringW  value) ;

constexpr void __cordl_internal_set_type(::StringW  value) ;

/// @brief Method .ctor, addr 0x566f50c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MessagePayload_DevConsole_TextBlock() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MessagePayload_DevConsole_TextBlock", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MessagePayload_DevConsole_TextBlock(MessagePayload_DevConsole_TextBlock && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessagePayload_DevConsole_TextBlock", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessagePayload_DevConsole_TextBlock(MessagePayload_DevConsole_TextBlock const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{797};

/// @brief Field type, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___type;

/// @brief Field text, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___text;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MessagePayload_DevConsole_TextBlock, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MessagePayload_DevConsole_TextBlock, ___text) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MessagePayload_DevConsole_TextBlock) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DevConsole/MessagePayload/Block
class CORDL_TYPE MessagePayload_DevConsole_Block : public ::System::Object {
public:
// Declarations
/// @brief Field text, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_text, put=__cordl_internal_set_text)) ::GlobalNamespace::MessagePayload_DevConsole_TextBlock*  text;

/// @brief Field type, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::StringW  type;

static inline ::GlobalNamespace::MessagePayload_DevConsole_Block* New_ctor(::StringW  markdownText) ;

constexpr ::GlobalNamespace::MessagePayload_DevConsole_TextBlock* const& __cordl_internal_get_text() const;

constexpr ::GlobalNamespace::MessagePayload_DevConsole_TextBlock*& __cordl_internal_get_text() ;

constexpr ::StringW const& __cordl_internal_get_type() const;

constexpr ::StringW& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set_text(::GlobalNamespace::MessagePayload_DevConsole_TextBlock*  value) ;

constexpr void __cordl_internal_set_type(::StringW  value) ;

/// @brief Method .ctor, addr 0x566f42c, size 0xd8, virtual false, abstract: false, final false
inline void _ctor(::StringW  markdownText) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MessagePayload_DevConsole_Block() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MessagePayload_DevConsole_Block", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MessagePayload_DevConsole_Block(MessagePayload_DevConsole_Block && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessagePayload_DevConsole_Block", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessagePayload_DevConsole_Block(MessagePayload_DevConsole_Block const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{796};

/// @brief Field type, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___type;

/// @brief Field text, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::MessagePayload_DevConsole_TextBlock*  ___text;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MessagePayload_DevConsole_Block, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MessagePayload_DevConsole_Block, ___text) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MessagePayload_DevConsole_Block) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies GorillaDevButton, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DevConsole/DisplayedLogLine
class CORDL_TYPE DevConsole_DisplayedLogLine : public ::System::Object {
public:
// Declarations
/// @brief Field <data>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__data_k__BackingField, put=__cordl_internal_set__data_k__BackingField)) ::System::Type*  _data_k__BackingField;

/// @brief Field backdrop, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_backdrop, put=__cordl_internal_set_backdrop)) ::UnityW<::UnityEngine::SpriteRenderer>  backdrop;

/// @brief Field buttons, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttons, put=__cordl_internal_set_buttons)) ::ArrayW<::UnityW<::GlobalNamespace::GorillaDevButton>>  buttons;

 __declspec(property(get=get_data, put=set_data)) ::System::Type*  data;

/// @brief Field expanded, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_expanded, put=__cordl_internal_set_expanded)) bool  expanded;

/// @brief Field forwardButton, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_forwardButton, put=__cordl_internal_set_forwardButton)) ::UnityW<::GlobalNamespace::GorillaDevButton>  forwardButton;

/// @brief Field inspector, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_inspector, put=__cordl_internal_set_inspector)) ::UnityW<::GlobalNamespace::DevInspector>  inspector;

/// @brief Field lineText, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_lineText, put=__cordl_internal_set_lineText)) ::UnityW<::UnityEngine::UI::Text>  lineText;

/// @brief Field maximizeButton, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_maximizeButton, put=__cordl_internal_set_maximizeButton)) ::UnityW<::GlobalNamespace::GorillaDevButton>  maximizeButton;

/// @brief Field targetMessage, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_targetMessage, put=__cordl_internal_set_targetMessage)) int32_t  targetMessage;

/// @brief Field transform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_transform, put=__cordl_internal_set_transform)) ::UnityW<::UnityEngine::RectTransform>  transform;

static inline ::GlobalNamespace::DevConsole_DisplayedLogLine* New_ctor(::UnityEngine::GameObject*  obj) ;

constexpr ::System::Type* const& __cordl_internal_get__data_k__BackingField() const;

constexpr ::System::Type*& __cordl_internal_get__data_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get_backdrop() const;

constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get_backdrop() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaDevButton>> const& __cordl_internal_get_buttons() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaDevButton>>& __cordl_internal_get_buttons() ;

constexpr bool const& __cordl_internal_get_expanded() const;

constexpr bool& __cordl_internal_get_expanded() ;

constexpr ::UnityW<::GlobalNamespace::GorillaDevButton> const& __cordl_internal_get_forwardButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaDevButton>& __cordl_internal_get_forwardButton() ;

constexpr ::UnityW<::GlobalNamespace::DevInspector> const& __cordl_internal_get_inspector() const;

constexpr ::UnityW<::GlobalNamespace::DevInspector>& __cordl_internal_get_inspector() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_lineText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_lineText() ;

constexpr ::UnityW<::GlobalNamespace::GorillaDevButton> const& __cordl_internal_get_maximizeButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaDevButton>& __cordl_internal_get_maximizeButton() ;

constexpr int32_t const& __cordl_internal_get_targetMessage() const;

constexpr int32_t& __cordl_internal_get_targetMessage() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_transform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_transform() ;

constexpr void __cordl_internal_set__data_k__BackingField(::System::Type*  value) ;

constexpr void __cordl_internal_set_backdrop(::UnityW<::UnityEngine::SpriteRenderer>  value) ;

constexpr void __cordl_internal_set_buttons(::ArrayW<::UnityW<::GlobalNamespace::GorillaDevButton>>  value) ;

constexpr void __cordl_internal_set_expanded(bool  value) ;

constexpr void __cordl_internal_set_forwardButton(::UnityW<::GlobalNamespace::GorillaDevButton>  value) ;

constexpr void __cordl_internal_set_inspector(::UnityW<::GlobalNamespace::DevInspector>  value) ;

constexpr void __cordl_internal_set_lineText(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_maximizeButton(::UnityW<::GlobalNamespace::GorillaDevButton>  value) ;

constexpr void __cordl_internal_set_targetMessage(int32_t  value) ;

constexpr void __cordl_internal_set_transform(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0x566e9bc, size 0x188, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::GameObject*  obj) ;

/// [CompilerGenerated]
/// @brief Method get_data, addr 0x566e9ac, size 0x8, virtual false, abstract: false, final false
inline ::System::Type* get_data() ;

/// [CompilerGenerated]
/// @brief Method set_data, addr 0x566e9b4, size 0x8, virtual false, abstract: false, final false
inline void set_data(::System::Type*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DevConsole_DisplayedLogLine() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DevConsole_DisplayedLogLine", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DevConsole_DisplayedLogLine(DevConsole_DisplayedLogLine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DevConsole_DisplayedLogLine", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DevConsole_DisplayedLogLine(DevConsole_DisplayedLogLine const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{795};

/// @brief Field buttons, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::GorillaDevButton>>  ___buttons;

/// @brief Field lineText, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___lineText;

/// @brief Field transform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___transform;

/// @brief Field targetMessage, offset: 0x28, size: 0x4, def value: None
 int32_t  ___targetMessage;

/// @brief Field maximizeButton, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaDevButton>  ___maximizeButton;

/// @brief Field forwardButton, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaDevButton>  ___forwardButton;

/// @brief Field backdrop, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SpriteRenderer>  ___backdrop;

/// @brief Field expanded, offset: 0x48, size: 0x1, def value: None
 bool  ___expanded;

/// @brief Field inspector, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::DevInspector>  ___inspector;

/// [CompilerGenerated]
/// @brief Field <data>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::System::Type*  ____data_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DevConsole_DisplayedLogLine, ___buttons) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsole_DisplayedLogLine, ___lineText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsole_DisplayedLogLine, ___transform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsole_DisplayedLogLine, ___targetMessage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsole_DisplayedLogLine, ___maximizeButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsole_DisplayedLogLine, ___forwardButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsole_DisplayedLogLine, ___backdrop) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsole_DisplayedLogLine, ___expanded) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsole_DisplayedLogLine, ___inspector) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsole_DisplayedLogLine, ____data_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DevConsole_DisplayedLogLine) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object, UnityEngine.LogType
namespace GlobalNamespace {
// Is value type: false
// CS Name: DevConsole/LogEntry
class CORDL_TYPE DevConsole_LogEntry : public ::System::Object {
public:
// Declarations
using __c__DisplayClass10_0 = ::GlobalNamespace::LogEntry_DevConsole___c__DisplayClass10_0;

 __declspec(property(get=get_Message)) ::StringW  Message;

/// @brief Field TotalIndex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_TotalIndex, put=setStaticF_TotalIndex)) int32_t  TotalIndex;

/// @brief Field Trace, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Trace, put=__cordl_internal_set_Trace)) ::StringW  Trace;

/// @brief Field Type, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Type, put=__cordl_internal_set_Type)) ::UnityEngine::LogType  Type;

/// @brief Field _Message, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Message, put=__cordl_internal_set__Message)) ::StringW  _Message;

/// @brief Field filtered, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_filtered, put=__cordl_internal_set_filtered)) bool  filtered;

/// @brief Field forwarded, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_forwarded, put=__cordl_internal_set_forwarded)) bool  forwarded;

/// @brief Field index, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Field repeatCount, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_repeatCount, put=__cordl_internal_set_repeatCount)) int32_t  repeatCount;

static inline ::GlobalNamespace::DevConsole_LogEntry* New_ctor(::StringW  message, ::UnityEngine::LogType  type, ::StringW  trace) ;

constexpr ::StringW const& __cordl_internal_get_Trace() const;

constexpr ::StringW& __cordl_internal_get_Trace() ;

constexpr ::UnityEngine::LogType const& __cordl_internal_get_Type() const;

constexpr ::UnityEngine::LogType& __cordl_internal_get_Type() ;

constexpr ::StringW const& __cordl_internal_get__Message() const;

constexpr ::StringW& __cordl_internal_get__Message() ;

constexpr bool const& __cordl_internal_get_filtered() const;

constexpr bool& __cordl_internal_get_filtered() ;

constexpr bool const& __cordl_internal_get_forwarded() const;

constexpr bool& __cordl_internal_get_forwarded() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr int32_t const& __cordl_internal_get_repeatCount() const;

constexpr int32_t& __cordl_internal_get_repeatCount() ;

constexpr void __cordl_internal_set_Trace(::StringW  value) ;

constexpr void __cordl_internal_set_Type(::UnityEngine::LogType  value) ;

constexpr void __cordl_internal_set__Message(::StringW  value) ;

constexpr void __cordl_internal_set_filtered(bool  value) ;

constexpr void __cordl_internal_set_forwarded(bool  value) ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

constexpr void __cordl_internal_set_repeatCount(int32_t  value) ;

/// @brief Method .ctor, addr 0x566e704, size 0x288, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::UnityEngine::LogType  type, ::StringW  trace) ;

static inline int32_t getStaticF_TotalIndex() ;

/// @brief Method get_Message, addr 0x566e680, size 0x84, virtual false, abstract: false, final false
inline ::StringW get_Message() ;

static inline void setStaticF_TotalIndex(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DevConsole_LogEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DevConsole_LogEntry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DevConsole_LogEntry(DevConsole_LogEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DevConsole_LogEntry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DevConsole_LogEntry(DevConsole_LogEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{794};

/// [SerializeReference]
/// [SerializeField]
/// @brief Field _Message, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Message;

/// [SerializeField]
/// [SerializeReference]
/// @brief Field Type, offset: 0x18, size: 0x4, def value: None
 ::UnityEngine::LogType  ___Type;

/// @brief Field Trace, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Trace;

/// @brief Field forwarded, offset: 0x28, size: 0x1, def value: None
 bool  ___forwarded;

/// @brief Field repeatCount, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___repeatCount;

/// @brief Field filtered, offset: 0x30, size: 0x1, def value: None
 bool  ___filtered;

/// @brief Field index, offset: 0x34, size: 0x4, def value: None
 int32_t  ___index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DevConsole_LogEntry, ____Message) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsole_LogEntry, ___Type) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsole_LogEntry, ___Trace) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsole_LogEntry, ___forwarded) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsole_LogEntry, ___repeatCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsole_LogEntry, ___filtered) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsole_LogEntry, ___index) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DevConsole_LogEntry) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DevConsole/LogEntry/<>c__DisplayClass10_0
class CORDL_TYPE LogEntry_DevConsole___c__DisplayClass10_0 : public ::System::Object {
public:
// Declarations
/// @brief Field line, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_line, put=__cordl_internal_set_line)) ::StringW  line;

static inline ::GlobalNamespace::LogEntry_DevConsole___c__DisplayClass10_0* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_line() const;

constexpr ::StringW& __cordl_internal_get_line() ;

constexpr void __cordl_internal_set_line(::StringW  value) ;

/// @brief Method <.ctor>b__0, addr 0x566e994, size 0x18, virtual false, abstract: false, final false
inline bool __ctor_b__0(::StringW  scrubString) ;

/// @brief Method .ctor, addr 0x566e98c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LogEntry_DevConsole___c__DisplayClass10_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LogEntry_DevConsole___c__DisplayClass10_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LogEntry_DevConsole___c__DisplayClass10_0(LogEntry_DevConsole___c__DisplayClass10_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LogEntry_DevConsole___c__DisplayClass10_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LogEntry_DevConsole___c__DisplayClass10_0(LogEntry_DevConsole___c__DisplayClass10_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{793};

/// @brief Field line, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___line;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LogEntry_DevConsole___c__DisplayClass10_0, ___line) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LogEntry_DevConsole___c__DisplayClass10_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
