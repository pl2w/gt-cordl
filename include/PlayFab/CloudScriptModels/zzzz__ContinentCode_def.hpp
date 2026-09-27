#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/ContinentCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContinentCode)
// Forward declare root types
namespace PlayFab::CloudScriptModels {
struct ContinentCode;
}
// Write type traits
MARK_VAL_T(::PlayFab::CloudScriptModels::ContinentCode);
DEFINE_IL2CPP_CLASS(::PlayFab::CloudScriptModels::ContinentCode, "PlayFab.CloudScriptModels", "ContinentCode");
// Dependencies 
namespace PlayFab::CloudScriptModels {
// Is value type: true
// CS Name: PlayFab.CloudScriptModels.ContinentCode
struct CORDL_TYPE ContinentCode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ContinentCode_Unwrapped
enum struct __ContinentCode_Unwrapped : int32_t {
__E_AF = static_cast<int32_t>(0x0),
__E_AN = static_cast<int32_t>(0x1),
__E_AS = static_cast<int32_t>(0x2),
__E_EU = static_cast<int32_t>(0x3),
__E_NA = static_cast<int32_t>(0x4),
__E_OC = static_cast<int32_t>(0x5),
__E_SA = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ContinentCode_Unwrapped () const noexcept {
return static_cast<__ContinentCode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ContinentCode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ContinentCode(int32_t  value__) noexcept;

/// @brief Field AF value: I32(0)
static ::PlayFab::CloudScriptModels::ContinentCode const AF;

/// @brief Field AN value: I32(1)
static ::PlayFab::CloudScriptModels::ContinentCode const AN;

/// @brief Field AS value: I32(2)
static ::PlayFab::CloudScriptModels::ContinentCode const AS;

/// @brief Field EU value: I32(3)
static ::PlayFab::CloudScriptModels::ContinentCode const EU;

/// @brief Field NA value: I32(4)
static ::PlayFab::CloudScriptModels::ContinentCode const NA;

/// @brief Field OC value: I32(5)
static ::PlayFab::CloudScriptModels::ContinentCode const OC;

/// @brief Field SA value: I32(6)
static ::PlayFab::CloudScriptModels::ContinentCode const SA;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19872};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::CloudScriptModels::ContinentCode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::PlayFab::CloudScriptModels::ContinentCode) == 0x4, "Size mismatch!");

} // namespace end def PlayFab::CloudScriptModels
