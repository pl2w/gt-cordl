#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Input/ModioUIInput_ModioAction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModioUIInput_ModioAction)
// Forward declare root types
namespace GlobalNamespace {
struct ModioUIInput_ModioAction;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModioUIInput_ModioAction);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModioUIInput_ModioAction, "Modio.Unity.UI.Input", "ModioUIInput/ModioAction");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.Unity.UI.Input.ModioUIInput/ModioAction
struct CORDL_TYPE ModioUIInput_ModioAction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ModioUIInput_ModioAction_Unwrapped
enum struct __ModioUIInput_ModioAction_Unwrapped : int32_t {
__E_Cancel = static_cast<int32_t>(0x0),
__E_Subscribe = static_cast<int32_t>(0x1),
__E_Report = static_cast<int32_t>(0x2),
__E_Filter = static_cast<int32_t>(0x3),
__E_Sort = static_cast<int32_t>(0x4),
__E_Search = static_cast<int32_t>(0x5),
__E_TabLeft = static_cast<int32_t>(0x6),
__E_TabRight = static_cast<int32_t>(0x7),
__E_BuyTokens = static_cast<int32_t>(0x8),
__E_FilterLeft = static_cast<int32_t>(0x9),
__E_FilterRight = static_cast<int32_t>(0xa),
__E_FilterClear = static_cast<int32_t>(0xb),
__E_MoreOptions = static_cast<int32_t>(0xc),
__E_SearchClear = static_cast<int32_t>(0xd),
__E_SearchPageLeft = static_cast<int32_t>(0xe),
__E_SearchPageRight = static_cast<int32_t>(0xf),
__E_MoreFromThisCreator = static_cast<int32_t>(0x10),
__E_DeveloperMenu = static_cast<int32_t>(0x11),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ModioUIInput_ModioAction_Unwrapped () const noexcept {
return static_cast<__ModioUIInput_ModioAction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ModioUIInput_ModioAction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ModioUIInput_ModioAction(int32_t  value__) noexcept;

/// @brief Field BuyTokens value: I32(8)
static ::GlobalNamespace::ModioUIInput_ModioAction const BuyTokens;

/// @brief Field Cancel value: I32(0)
static ::GlobalNamespace::ModioUIInput_ModioAction const Cancel;

/// @brief Field DeveloperMenu value: I32(17)
static ::GlobalNamespace::ModioUIInput_ModioAction const DeveloperMenu;

/// @brief Field Filter value: I32(3)
static ::GlobalNamespace::ModioUIInput_ModioAction const Filter;

/// @brief Field FilterClear value: I32(11)
static ::GlobalNamespace::ModioUIInput_ModioAction const FilterClear;

/// @brief Field FilterLeft value: I32(9)
static ::GlobalNamespace::ModioUIInput_ModioAction const FilterLeft;

/// @brief Field FilterRight value: I32(10)
static ::GlobalNamespace::ModioUIInput_ModioAction const FilterRight;

/// @brief Field MoreFromThisCreator value: I32(16)
static ::GlobalNamespace::ModioUIInput_ModioAction const MoreFromThisCreator;

/// @brief Field MoreOptions value: I32(12)
static ::GlobalNamespace::ModioUIInput_ModioAction const MoreOptions;

/// @brief Field Report value: I32(2)
static ::GlobalNamespace::ModioUIInput_ModioAction const Report;

/// @brief Field Search value: I32(5)
static ::GlobalNamespace::ModioUIInput_ModioAction const Search;

/// @brief Field SearchClear value: I32(13)
static ::GlobalNamespace::ModioUIInput_ModioAction const SearchClear;

/// @brief Field SearchPageLeft value: I32(14)
static ::GlobalNamespace::ModioUIInput_ModioAction const SearchPageLeft;

/// @brief Field SearchPageRight value: I32(15)
static ::GlobalNamespace::ModioUIInput_ModioAction const SearchPageRight;

/// @brief Field Sort value: I32(4)
static ::GlobalNamespace::ModioUIInput_ModioAction const Sort;

/// @brief Field Subscribe value: I32(1)
static ::GlobalNamespace::ModioUIInput_ModioAction const Subscribe;

/// @brief Field TabLeft value: I32(6)
static ::GlobalNamespace::ModioUIInput_ModioAction const TabLeft;

/// @brief Field TabRight value: I32(7)
static ::GlobalNamespace::ModioUIInput_ModioAction const TabRight;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27125};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModioUIInput_ModioAction, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModioUIInput_ModioAction) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
