#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonView_ObservableSearch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonView_ObservableSearch)
// Forward declare root types
namespace GlobalNamespace {
struct PhotonView_ObservableSearch;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PhotonView_ObservableSearch);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PhotonView_ObservableSearch, "Photon.Pun", "PhotonView/ObservableSearch");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Photon.Pun.PhotonView/ObservableSearch
struct CORDL_TYPE PhotonView_ObservableSearch {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PhotonView_ObservableSearch_Unwrapped
enum struct __PhotonView_ObservableSearch_Unwrapped : int32_t {
__E_Manual = static_cast<int32_t>(0x0),
__E_AutoFindActive = static_cast<int32_t>(0x1),
__E_AutoFindAll = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PhotonView_ObservableSearch_Unwrapped () const noexcept {
return static_cast<__PhotonView_ObservableSearch_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PhotonView_ObservableSearch() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PhotonView_ObservableSearch(int32_t  value__) noexcept;

/// @brief Field AutoFindActive value: I32(1)
static ::GlobalNamespace::PhotonView_ObservableSearch const AutoFindActive;

/// @brief Field AutoFindAll value: I32(2)
static ::GlobalNamespace::PhotonView_ObservableSearch const AutoFindAll;

/// @brief Field Manual value: I32(0)
static ::GlobalNamespace::PhotonView_ObservableSearch const Manual;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29709};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PhotonView_ObservableSearch, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PhotonView_ObservableSearch) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
