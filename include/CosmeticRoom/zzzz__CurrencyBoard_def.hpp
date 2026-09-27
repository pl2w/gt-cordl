#pragma once
// IWYU pragma private; include "CosmeticRoom/CurrencyBoard.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CurrencyBoard)
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace CosmeticRoom {
class CurrencyBoard;
}
// Write type traits
MARK_REF_T(::CosmeticRoom::CurrencyBoard*);
DEFINE_IL2CPP_CLASS(::CosmeticRoom::CurrencyBoard*, "CosmeticRoom", "CurrencyBoard");
// Dependencies UnityEngine.MonoBehaviour
namespace CosmeticRoom {
// Is value type: false
// CS Name: CosmeticRoom.CurrencyBoard
class CORDL_TYPE CurrencyBoard : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field currencyBoardTextTMP, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_currencyBoardTextTMP, put=__cordl_internal_set_currencyBoardTextTMP)) ::UnityW<::TMPro::TMP_Text>  currencyBoardTextTMP;

/// @brief Field dailyRocksTextTMP, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_dailyRocksTextTMP, put=__cordl_internal_set_dailyRocksTextTMP)) ::UnityW<::TMPro::TMP_Text>  dailyRocksTextTMP;

static inline ::CosmeticRoom::CurrencyBoard* New_ctor() ;

/// @brief Method OnDisable, addr 0x5c4ba4c, size 0x74, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5c4b9d8, size 0x74, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method UpdateCurrencyBoard, addr 0x5c4bac0, size 0x2d0, virtual false, abstract: false, final false
inline void UpdateCurrencyBoard(bool  checkedDaily, bool  gotDaily, int32_t  currencyBalance, int32_t  secTilTomorrow) ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_currencyBoardTextTMP() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_currencyBoardTextTMP() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_dailyRocksTextTMP() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_dailyRocksTextTMP() ;

constexpr void __cordl_internal_set_currencyBoardTextTMP(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_dailyRocksTextTMP(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x5c4bd90, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurrencyBoard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurrencyBoard", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CurrencyBoard(CurrencyBoard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurrencyBoard", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurrencyBoard(CurrencyBoard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4235};

/// @brief Field dailyRocksTextTMP, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___dailyRocksTextTMP;

/// @brief Field currencyBoardTextTMP, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___currencyBoardTextTMP;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::CosmeticRoom::CurrencyBoard, ___dailyRocksTextTMP) == 0x20, "Offset mismatch!");

static_assert(offsetof(::CosmeticRoom::CurrencyBoard, ___currencyBoardTextTMP) == 0x28, "Offset mismatch!");

static_assert(sizeof(::CosmeticRoom::CurrencyBoard) == 0x30, "Size mismatch!");

} // namespace end def CosmeticRoom
