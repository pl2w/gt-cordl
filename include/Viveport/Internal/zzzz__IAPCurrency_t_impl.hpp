#pragma once
// IWYU pragma private; include "Viveport/Internal/IAPCurrency_t.hpp"
#include "Viveport/Internal/zzzz__IAPCurrency_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_pName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_pSymbol", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Viveport::Internal::IAPCurrency_t::IAPCurrency_t(::StringW  m_pName, ::StringW  m_pSymbol) noexcept  {
this->m_pName = m_pName;
this->m_pSymbol = m_pSymbol;
}
// Ctor Parameters []
constexpr ::Viveport::Internal::IAPCurrency_t::IAPCurrency_t()   {
}
