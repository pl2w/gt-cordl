#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Search/SpecialSearchType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpecialSearchType)
// Forward declare root types
namespace Modio::Unity::UI::Search {
struct SpecialSearchType;
}
// Write type traits
MARK_VAL_T(::Modio::Unity::UI::Search::SpecialSearchType);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Search::SpecialSearchType, "Modio.Unity.UI.Search", "SpecialSearchType");
// Dependencies 
namespace Modio::Unity::UI::Search {
// Is value type: true
// CS Name: Modio.Unity.UI.Search.SpecialSearchType
struct CORDL_TYPE SpecialSearchType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SpecialSearchType_Unwrapped
enum struct __SpecialSearchType_Unwrapped : int32_t {
__E_Nothing = static_cast<int32_t>(0x8),
__E_Installed = static_cast<int32_t>(0x5),
__E_Subscribed = static_cast<int32_t>(0x6),
__E_InstalledOrSubscribed = static_cast<int32_t>(0x7),
__E_UserCreations = static_cast<int32_t>(0x9),
__E_Purchased = static_cast<int32_t>(0xa),
__E_SearchForTag = static_cast<int32_t>(0xb),
__E_SearchForUser = static_cast<int32_t>(0xc),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SpecialSearchType_Unwrapped () const noexcept {
return static_cast<__SpecialSearchType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SpecialSearchType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SpecialSearchType(int32_t  value__) noexcept;

/// @brief Field Installed value: I32(5)
static ::Modio::Unity::UI::Search::SpecialSearchType const Installed;

/// @brief Field InstalledOrSubscribed value: I32(7)
static ::Modio::Unity::UI::Search::SpecialSearchType const InstalledOrSubscribed;

/// @brief Field Nothing value: I32(8)
static ::Modio::Unity::UI::Search::SpecialSearchType const Nothing;

/// @brief Field Purchased value: I32(10)
static ::Modio::Unity::UI::Search::SpecialSearchType const Purchased;

/// @brief Field SearchForTag value: I32(11)
static ::Modio::Unity::UI::Search::SpecialSearchType const SearchForTag;

/// @brief Field SearchForUser value: I32(12)
static ::Modio::Unity::UI::Search::SpecialSearchType const SearchForUser;

/// @brief Field Subscribed value: I32(6)
static ::Modio::Unity::UI::Search::SpecialSearchType const Subscribed;

/// @brief Field UserCreations value: I32(9)
static ::Modio::Unity::UI::Search::SpecialSearchType const UserCreations;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27044};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Search::SpecialSearchType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Search::SpecialSearchType) == 0x4, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Search
