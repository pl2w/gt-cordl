#pragma once
// IWYU pragma private; include "GlobalNamespace/ModIORequestResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ModIORequestResult)
namespace Modio {
class Error;
}
// Forward declare root types
namespace GlobalNamespace {
struct ModIORequestResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModIORequestResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModIORequestResult, "", "ModIORequestResult");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ModIORequestResult
struct CORDL_TYPE ModIORequestResult {
public:
// Declarations
/// @brief Method CreateFailureResult, addr 0x59c75c4, size 0x2c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ModIORequestResult CreateFailureResult(::StringW  inMessage) ;

/// @brief Method CreateFromError, addr 0x59c7654, size 0xcc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ModIORequestResult CreateFromError(::Modio::Error*  error) ;

/// @brief Method CreateSuccessResult, addr 0x59c75f0, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ModIORequestResult CreateSuccessResult() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModIORequestResult() ;

// Ctor Parameters [CppParam { name: "success", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr ModIORequestResult(bool  success, ::StringW  message) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2685};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field success, offset: 0x0, size: 0x1, def value: None
 bool  success;

/// @brief Field message, offset: 0x8, size: 0x8, def value: None
 ::StringW  message;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModIORequestResult, success) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIORequestResult, message) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModIORequestResult) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
