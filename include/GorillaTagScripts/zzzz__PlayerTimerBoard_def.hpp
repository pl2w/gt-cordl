#pragma once
// IWYU pragma private; include "GorillaTagScripts/PlayerTimerBoard.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerTimerBoard)
namespace GorillaTagScripts {
class PlayerTimerBoardLine;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GorillaTagScripts {
class PlayerTimerBoard;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::PlayerTimerBoard*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::PlayerTimerBoard*, "GorillaTagScripts", "PlayerTimerBoard");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.PlayerTimerBoard
class CORDL_TYPE PlayerTimerBoard : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsDirty, put=set_IsDirty)) bool  IsDirty;

/// @brief Field <IsDirty>k__BackingField, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsDirty_k__BackingField, put=__cordl_internal_set__IsDirty_k__BackingField)) bool  _IsDirty_k__BackingField;

/// @brief Field isInitialized, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_isInitialized, put=__cordl_internal_set_isInitialized)) bool  isInitialized;

/// @brief Field lineHeight, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lineHeight, put=__cordl_internal_set_lineHeight)) int32_t  lineHeight;

/// @brief Field lines, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_lines, put=__cordl_internal_set_lines)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::PlayerTimerBoardLine>>*  lines;

/// @brief Field linesParent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_linesParent, put=__cordl_internal_set_linesParent)) ::UnityW<::UnityEngine::GameObject>  linesParent;

/// @brief Field notInRoomText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_notInRoomText, put=__cordl_internal_set_notInRoomText)) ::UnityW<::TMPro::TextMeshPro>  notInRoomText;

/// @brief Field playerColumn, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerColumn, put=__cordl_internal_set_playerColumn)) ::UnityW<::TMPro::TextMeshPro>  playerColumn;

/// @brief Field startingYValue, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_startingYValue, put=__cordl_internal_set_startingYValue)) int32_t  startingYValue;

/// @brief Field stringBuilder, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_stringBuilder, put=__cordl_internal_set_stringBuilder)) ::System::Text::StringBuilder*  stringBuilder;

/// @brief Field stringBuilderTime, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_stringBuilderTime, put=__cordl_internal_set_stringBuilderTime)) ::System::Text::StringBuilder*  stringBuilderTime;

/// @brief Field timeColumn, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeColumn, put=__cordl_internal_set_timeColumn)) ::UnityW<::TMPro::TextMeshPro>  timeColumn;

static inline ::GorillaTagScripts::PlayerTimerBoard* New_ctor() ;

/// @brief Method OnDisable, addr 0x5bcfd34, size 0x138, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5bcfb4c, size 0xac, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RedrawPlayerLines, addr 0x5bd0044, size 0x6c8, virtual false, abstract: false, final false
inline void RedrawPlayerLines() ;

/// @brief Method SetSleepState, addr 0x5bcfeec, size 0xb4, virtual false, abstract: false, final false
inline void SetSleepState(bool  awake) ;

/// @brief Method SortLines, addr 0x5bcffa0, size 0xa4, virtual false, abstract: false, final false
inline void SortLines() ;

/// @brief Method Start, addr 0x5bcfa74, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TryInit, addr 0x5bcfa78, size 0xd4, virtual false, abstract: false, final false
inline void TryInit() ;

constexpr bool const& __cordl_internal_get__IsDirty_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsDirty_k__BackingField() ;

constexpr bool const& __cordl_internal_get_isInitialized() const;

constexpr bool& __cordl_internal_get_isInitialized() ;

constexpr int32_t const& __cordl_internal_get_lineHeight() const;

constexpr int32_t& __cordl_internal_get_lineHeight() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::PlayerTimerBoardLine>>* const& __cordl_internal_get_lines() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::PlayerTimerBoardLine>>*& __cordl_internal_get_lines() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_linesParent() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_linesParent() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_notInRoomText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_notInRoomText() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_playerColumn() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_playerColumn() ;

constexpr int32_t const& __cordl_internal_get_startingYValue() const;

constexpr int32_t& __cordl_internal_get_startingYValue() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_stringBuilder() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get_stringBuilder() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_stringBuilderTime() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get_stringBuilderTime() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_timeColumn() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_timeColumn() ;

constexpr void __cordl_internal_set__IsDirty_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_isInitialized(bool  value) ;

constexpr void __cordl_internal_set_lineHeight(int32_t  value) ;

constexpr void __cordl_internal_set_lines(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::PlayerTimerBoardLine>>*  value) ;

constexpr void __cordl_internal_set_linesParent(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_notInRoomText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_playerColumn(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_startingYValue(int32_t  value) ;

constexpr void __cordl_internal_set_stringBuilder(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set_stringBuilderTime(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set_timeColumn(::UnityW<::TMPro::TextMeshPro>  value) ;

/// @brief Method .ctor, addr 0x5bd070c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_IsDirty, addr 0x5bcfa64, size 0x8, virtual false, abstract: false, final false
inline bool get_IsDirty() ;

/// [CompilerGenerated]
/// @brief Method set_IsDirty, addr 0x5bcfa6c, size 0x8, virtual false, abstract: false, final false
inline void set_IsDirty(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerTimerBoard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerTimerBoard", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerTimerBoard(PlayerTimerBoard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerTimerBoard", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerTimerBoard(PlayerTimerBoard const& ) = delete;

/// @brief Field MONKE_BLOCKS_TIMER_BOARD_COLUMN_PLAYER_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MONKE_BLOCKS_TIMER_BOARD_COLUMN_PLAYER_KEY{u"MONKE_BLOCKS_TIMER_BOARD_COLUMN_PLAYER"};

/// @brief Field MONKE_BLOCKS_TIMER_BOARD_COLUMN_TIMES_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MONKE_BLOCKS_TIMER_BOARD_COLUMN_TIMES_KEY{u"MONKE_BLOCKS_TIMER_BOARD_COLUMN_TIMES"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4002};

/// [SerializeField]
/// @brief Field linesParent, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___linesParent;

/// @brief Field lines, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::PlayerTimerBoardLine>>*  ___lines;

/// @brief Field notInRoomText, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___notInRoomText;

/// @brief Field playerColumn, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___playerColumn;

/// @brief Field timeColumn, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___timeColumn;

/// [SerializeField]
/// @brief Field startingYValue, offset: 0x48, size: 0x4, def value: None
 int32_t  ___startingYValue;

/// [SerializeField]
/// @brief Field lineHeight, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___lineHeight;

/// @brief Field stringBuilder, offset: 0x50, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ___stringBuilder;

/// @brief Field stringBuilderTime, offset: 0x58, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ___stringBuilderTime;

/// @brief Field isInitialized, offset: 0x60, size: 0x1, def value: None
 bool  ___isInitialized;

/// [CompilerGenerated]
/// @brief Field <IsDirty>k__BackingField, offset: 0x61, size: 0x1, def value: None
 bool  ____IsDirty_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::PlayerTimerBoard, ___linesParent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::PlayerTimerBoard, ___lines) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::PlayerTimerBoard, ___notInRoomText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::PlayerTimerBoard, ___playerColumn) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::PlayerTimerBoard, ___timeColumn) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::PlayerTimerBoard, ___startingYValue) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::PlayerTimerBoard, ___lineHeight) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::PlayerTimerBoard, ___stringBuilder) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::PlayerTimerBoard, ___stringBuilderTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::PlayerTimerBoard, ___isInitialized) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::PlayerTimerBoard, ____IsDirty_k__BackingField) == 0x61, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::PlayerTimerBoard) == 0x68, "Size mismatch!");

} // namespace end def GorillaTagScripts
