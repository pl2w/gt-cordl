#pragma once
// IWYU pragma private; include "GlobalNamespace/DevConsoleInstance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaDevButton_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DevConsoleInstance)
namespace GlobalNamespace {
class DevConsole_DisplayedLogLine;
}
namespace GlobalNamespace {
class GorillaDevButton;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct LogType;
}
// Forward declare root types
namespace GlobalNamespace {
class DevConsoleInstance;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DevConsoleInstance*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DevConsoleInstance*, "", "DevConsoleInstance");
// Dependencies GorillaDevButton, UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DevConsoleInstance
class CORDL_TYPE DevConsoleInstance : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field BottomButton, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_BottomButton, put=__cordl_internal_set_BottomButton)) ::UnityW<::GlobalNamespace::GorillaDevButton>  BottomButton;

/// @brief Field ConsoleLineExample, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_ConsoleLineExample, put=__cordl_internal_set_ConsoleLineExample)) ::UnityW<::UnityEngine::GameObject>  ConsoleLineExample;

/// @brief Field buttons, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttons, put=__cordl_internal_set_buttons)) ::ArrayW<::UnityW<::GlobalNamespace::GorillaDevButton>>  buttons;

/// @brief Field canExpand, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_canExpand, put=__cordl_internal_set_canExpand)) bool  canExpand;

/// @brief Field currentLogIndex, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentLogIndex, put=__cordl_internal_set_currentLogIndex)) int32_t  currentLogIndex;

/// @brief Field disableWhileActive, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_disableWhileActive, put=__cordl_internal_set_disableWhileActive)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  disableWhileActive;

/// @brief Field enableWhileActive, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_enableWhileActive, put=__cordl_internal_set_enableWhileActive)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  enableWhileActive;

/// @brief Field expandAmount, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_expandAmount, put=__cordl_internal_set_expandAmount)) int32_t  expandAmount;

/// @brief Field expandedMessageIndex, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_expandedMessageIndex, put=__cordl_internal_set_expandedMessageIndex)) int32_t  expandedMessageIndex;

/// @brief Field isEnabled, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_isEnabled, put=__cordl_internal_set_isEnabled)) bool  isEnabled;

/// @brief Field lineHeight, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lineHeight, put=__cordl_internal_set_lineHeight)) float_t  lineHeight;

/// @brief Field lineStartHeight, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_lineStartHeight, put=__cordl_internal_set_lineStartHeight)) float_t  lineStartHeight;

/// @brief Field lineStartTextWidth, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_lineStartTextWidth, put=__cordl_internal_set_lineStartTextWidth)) float_t  lineStartTextWidth;

/// @brief Field lineStartZ, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lineStartZ, put=__cordl_internal_set_lineStartZ)) float_t  lineStartZ;

/// @brief Field logLines, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_logLines, put=__cordl_internal_set_logLines)) ::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole_DisplayedLogLine*>*  logLines;

/// @brief Field logTypeButtons, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_logTypeButtons, put=__cordl_internal_set_logTypeButtons)) ::ArrayW<::UnityW<::GlobalNamespace::GorillaDevButton>>  logTypeButtons;

/// @brief Field maxHeight, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxHeight, put=__cordl_internal_set_maxHeight)) float_t  maxHeight;

/// @brief Field selectedLogTypes, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectedLogTypes, put=__cordl_internal_set_selectedLogTypes)) ::System::Collections::Generic::HashSet_1<::UnityEngine::LogType>*  selectedLogTypes;

/// @brief Field targetLogIndex, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_targetLogIndex, put=__cordl_internal_set_targetLogIndex)) int32_t  targetLogIndex;

/// @brief Field textScale, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_textScale, put=__cordl_internal_set_textScale)) double_t  textScale;

/// @brief Field textStartHeight, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_textStartHeight, put=__cordl_internal_set_textStartHeight)) float_t  textStartHeight;

static inline ::GlobalNamespace::DevConsoleInstance* New_ctor() ;

/// @brief Method OnEnable, addr 0x566f728, size 0x24, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::GlobalNamespace::GorillaDevButton> const& __cordl_internal_get_BottomButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaDevButton>& __cordl_internal_get_BottomButton() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_ConsoleLineExample() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_ConsoleLineExample() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaDevButton>> const& __cordl_internal_get_buttons() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaDevButton>>& __cordl_internal_get_buttons() ;

constexpr bool const& __cordl_internal_get_canExpand() const;

constexpr bool& __cordl_internal_get_canExpand() ;

constexpr int32_t const& __cordl_internal_get_currentLogIndex() const;

constexpr int32_t& __cordl_internal_get_currentLogIndex() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_disableWhileActive() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_disableWhileActive() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_enableWhileActive() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_enableWhileActive() ;

constexpr int32_t const& __cordl_internal_get_expandAmount() const;

constexpr int32_t& __cordl_internal_get_expandAmount() ;

constexpr int32_t const& __cordl_internal_get_expandedMessageIndex() const;

constexpr int32_t& __cordl_internal_get_expandedMessageIndex() ;

constexpr bool const& __cordl_internal_get_isEnabled() const;

constexpr bool& __cordl_internal_get_isEnabled() ;

constexpr float_t const& __cordl_internal_get_lineHeight() const;

constexpr float_t& __cordl_internal_get_lineHeight() ;

constexpr float_t const& __cordl_internal_get_lineStartHeight() const;

constexpr float_t& __cordl_internal_get_lineStartHeight() ;

constexpr float_t const& __cordl_internal_get_lineStartTextWidth() const;

constexpr float_t& __cordl_internal_get_lineStartTextWidth() ;

constexpr float_t const& __cordl_internal_get_lineStartZ() const;

constexpr float_t& __cordl_internal_get_lineStartZ() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole_DisplayedLogLine*>* const& __cordl_internal_get_logLines() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole_DisplayedLogLine*>*& __cordl_internal_get_logLines() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaDevButton>> const& __cordl_internal_get_logTypeButtons() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaDevButton>>& __cordl_internal_get_logTypeButtons() ;

constexpr float_t const& __cordl_internal_get_maxHeight() const;

constexpr float_t& __cordl_internal_get_maxHeight() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::LogType>* const& __cordl_internal_get_selectedLogTypes() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::LogType>*& __cordl_internal_get_selectedLogTypes() ;

constexpr int32_t const& __cordl_internal_get_targetLogIndex() const;

constexpr int32_t& __cordl_internal_get_targetLogIndex() ;

constexpr double_t const& __cordl_internal_get_textScale() const;

constexpr double_t& __cordl_internal_get_textScale() ;

constexpr float_t const& __cordl_internal_get_textStartHeight() const;

constexpr float_t& __cordl_internal_get_textStartHeight() ;

constexpr void __cordl_internal_set_BottomButton(::UnityW<::GlobalNamespace::GorillaDevButton>  value) ;

constexpr void __cordl_internal_set_ConsoleLineExample(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_buttons(::ArrayW<::UnityW<::GlobalNamespace::GorillaDevButton>>  value) ;

constexpr void __cordl_internal_set_canExpand(bool  value) ;

constexpr void __cordl_internal_set_currentLogIndex(int32_t  value) ;

constexpr void __cordl_internal_set_disableWhileActive(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_enableWhileActive(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_expandAmount(int32_t  value) ;

constexpr void __cordl_internal_set_expandedMessageIndex(int32_t  value) ;

constexpr void __cordl_internal_set_isEnabled(bool  value) ;

constexpr void __cordl_internal_set_lineHeight(float_t  value) ;

constexpr void __cordl_internal_set_lineStartHeight(float_t  value) ;

constexpr void __cordl_internal_set_lineStartTextWidth(float_t  value) ;

constexpr void __cordl_internal_set_lineStartZ(float_t  value) ;

constexpr void __cordl_internal_set_logLines(::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole_DisplayedLogLine*>*  value) ;

constexpr void __cordl_internal_set_logTypeButtons(::ArrayW<::UnityW<::GlobalNamespace::GorillaDevButton>>  value) ;

constexpr void __cordl_internal_set_maxHeight(float_t  value) ;

constexpr void __cordl_internal_set_selectedLogTypes(::System::Collections::Generic::HashSet_1<::UnityEngine::LogType>*  value) ;

constexpr void __cordl_internal_set_targetLogIndex(int32_t  value) ;

constexpr void __cordl_internal_set_textScale(double_t  value) ;

constexpr void __cordl_internal_set_textStartHeight(float_t  value) ;

/// @brief Method .ctor, addr 0x566f5b8, size 0x170, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DevConsoleInstance() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DevConsoleInstance", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DevConsoleInstance(DevConsoleInstance && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DevConsoleInstance", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DevConsoleInstance(DevConsoleInstance const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{803};

/// @brief Field buttons, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::GorillaDevButton>>  ___buttons;

/// @brief Field disableWhileActive, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___disableWhileActive;

/// @brief Field enableWhileActive, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___enableWhileActive;

/// @brief Field maxHeight, offset: 0x38, size: 0x4, def value: None
 float_t  ___maxHeight;

/// @brief Field lineHeight, offset: 0x3c, size: 0x4, def value: None
 float_t  ___lineHeight;

/// @brief Field targetLogIndex, offset: 0x40, size: 0x4, def value: None
 int32_t  ___targetLogIndex;

/// @brief Field currentLogIndex, offset: 0x44, size: 0x4, def value: None
 int32_t  ___currentLogIndex;

/// @brief Field expandAmount, offset: 0x48, size: 0x4, def value: None
 int32_t  ___expandAmount;

/// @brief Field expandedMessageIndex, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___expandedMessageIndex;

/// @brief Field canExpand, offset: 0x50, size: 0x1, def value: None
 bool  ___canExpand;

/// @brief Field logLines, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole_DisplayedLogLine*>*  ___logLines;

/// @brief Field selectedLogTypes, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityEngine::LogType>*  ___selectedLogTypes;

/// [SerializeField]
/// @brief Field logTypeButtons, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::GorillaDevButton>>  ___logTypeButtons;

/// [SerializeField]
/// @brief Field BottomButton, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaDevButton>  ___BottomButton;

/// @brief Field lineStartHeight, offset: 0x78, size: 0x4, def value: None
 float_t  ___lineStartHeight;

/// @brief Field lineStartZ, offset: 0x7c, size: 0x4, def value: None
 float_t  ___lineStartZ;

/// @brief Field textStartHeight, offset: 0x80, size: 0x4, def value: None
 float_t  ___textStartHeight;

/// @brief Field lineStartTextWidth, offset: 0x84, size: 0x4, def value: None
 float_t  ___lineStartTextWidth;

/// @brief Field textScale, offset: 0x88, size: 0x8, def value: None
 double_t  ___textScale;

/// @brief Field isEnabled, offset: 0x90, size: 0x1, def value: None
 bool  ___isEnabled;

/// [SerializeField]
/// @brief Field ConsoleLineExample, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___ConsoleLineExample;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DevConsoleInstance, ___buttons) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsoleInstance, ___disableWhileActive) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsoleInstance, ___enableWhileActive) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsoleInstance, ___maxHeight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsoleInstance, ___lineHeight) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsoleInstance, ___targetLogIndex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsoleInstance, ___currentLogIndex) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsoleInstance, ___expandAmount) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsoleInstance, ___expandedMessageIndex) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsoleInstance, ___canExpand) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsoleInstance, ___logLines) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsoleInstance, ___selectedLogTypes) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsoleInstance, ___logTypeButtons) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsoleInstance, ___BottomButton) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsoleInstance, ___lineStartHeight) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsoleInstance, ___lineStartZ) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsoleInstance, ___textStartHeight) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsoleInstance, ___lineStartTextWidth) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsoleInstance, ___textScale) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsoleInstance, ___isEnabled) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsoleInstance, ___ConsoleLineExample) == 0x98, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DevConsoleInstance) == 0xa0, "Size mismatch!");

} // namespace end def GlobalNamespace
