#pragma once
// IWYU pragma private; include "Viveport/Internal/IAPCurrency_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(IAPCurrency_t)
// Forward declare root types
namespace Viveport::Internal {
struct IAPCurrency_t;
}
// Write type traits
MARK_VAL_T(::Viveport::Internal::IAPCurrency_t);
DEFINE_IL2CPP_CLASS(::Viveport::Internal::IAPCurrency_t, "Viveport.Internal", "IAPCurrency_t");
// Dependencies 
namespace Viveport::Internal {
// Is value type: true
// CS Name: Viveport.Internal.IAPCurrency_t
struct CORDL_TYPE IAPCurrency_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr IAPCurrency_t() ;

// Ctor Parameters [CppParam { name: "m_pName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_pSymbol", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr IAPCurrency_t(::StringW  m_pName, ::StringW  m_pSymbol) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3803};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_pName, offset: 0x0, size: 0x8, def value: None
 ::StringW  m_pName;

/// @brief Field m_pSymbol, offset: 0x8, size: 0x8, def value: None
 ::StringW  m_pSymbol;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Viveport::Internal::IAPCurrency_t, m_pName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Viveport::Internal::IAPCurrency_t, m_pSymbol) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Viveport::Internal::IAPCurrency_t) == 0x10, "Size mismatch!");

} // namespace end def Viveport::Internal
