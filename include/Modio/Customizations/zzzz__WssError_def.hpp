#pragma once
// IWYU pragma private; include "Modio/Customizations/WssError.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WssError)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace Modio::Customizations {
struct WssError;
}
// Write type traits
MARK_VAL_T(::Modio::Customizations::WssError);
DEFINE_IL2CPP_CLASS(::Modio::Customizations::WssError, "Modio.Customizations", "WssError");
// Dependencies 
namespace Modio::Customizations {
// Is value type: true
// CS Name: Modio.Customizations.WssError
struct CORDL_TYPE WssError {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr WssError() ;

// Ctor Parameters [CppParam { name: "code", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "error_ref", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "errors", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value: None, comment: None }]
constexpr WssError(int64_t  code, int64_t  error_ref, ::StringW  message, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  errors) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17743};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field code, offset: 0x0, size: 0x8, def value: None
 int64_t  code;

/// @brief Field error_ref, offset: 0x8, size: 0x8, def value: None
 int64_t  error_ref;

/// @brief Field message, offset: 0x10, size: 0x8, def value: None
 ::StringW  message;

/// @brief Field errors, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  errors;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Customizations::WssError, code) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::Customizations::WssError, error_ref) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::Customizations::WssError, message) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Customizations::WssError, errors) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Modio::Customizations::WssError) == 0x20, "Size mismatch!");

} // namespace end def Modio::Customizations
