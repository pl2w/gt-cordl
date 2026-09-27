#pragma once
// IWYU pragma private; include "Modio/Customizations/WssLoginSuccess.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WssLoginSuccess)
// Forward declare root types
namespace Modio::Customizations {
struct WssLoginSuccess;
}
// Write type traits
MARK_VAL_T(::Modio::Customizations::WssLoginSuccess);
DEFINE_IL2CPP_CLASS(::Modio::Customizations::WssLoginSuccess, "Modio.Customizations", "WssLoginSuccess");
// Dependencies 
namespace Modio::Customizations {
// Is value type: true
// CS Name: Modio.Customizations.WssLoginSuccess
struct CORDL_TYPE WssLoginSuccess {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr WssLoginSuccess() ;

// Ctor Parameters [CppParam { name: "code", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "access_token", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "date_expires", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr WssLoginSuccess(int64_t  code, ::StringW  access_token, int64_t  date_expires) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17745};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field code, offset: 0x0, size: 0x8, def value: None
 int64_t  code;

/// @brief Field access_token, offset: 0x8, size: 0x8, def value: None
 ::StringW  access_token;

/// @brief Field date_expires, offset: 0x10, size: 0x8, def value: None
 int64_t  date_expires;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Customizations::WssLoginSuccess, code) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::Customizations::WssLoginSuccess, access_token) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::Customizations::WssLoginSuccess, date_expires) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Modio::Customizations::WssLoginSuccess) == 0x18, "Size mismatch!");

} // namespace end def Modio::Customizations
