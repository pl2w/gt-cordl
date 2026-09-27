#pragma once
// IWYU pragma private; include "System/Net/CookieTokenizer_RecognizedAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__CookieToken_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CookieTokenizer_RecognizedAttribute)
namespace System::Net {
struct CookieToken;
}
// Forward declare root types
namespace GlobalNamespace {
struct CookieTokenizer_RecognizedAttribute;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CookieTokenizer_RecognizedAttribute);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CookieTokenizer_RecognizedAttribute, "System.Net", "CookieTokenizer/RecognizedAttribute");
// Dependencies System.Net.CookieToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.CookieTokenizer/RecognizedAttribute
struct CORDL_TYPE CookieTokenizer_RecognizedAttribute {
public:
// Declarations
 __declspec(property(get=get_Token)) ::System::Net::CookieToken  Token;

/// @brief Method IsEqualTo, addr 0xac7b0d0, size 0x24, virtual false, abstract: false, final false
inline bool IsEqualTo(::StringW  value) ;

/// @brief Method .ctor, addr 0xac7b0a0, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::System::Net::CookieToken  token) ;

/// @brief Method get_Token, addr 0xac7b0c8, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::CookieToken get_Token() ;

// Ctor Parameters []
// @brief default ctor
constexpr CookieTokenizer_RecognizedAttribute() ;

// Ctor Parameters [CppParam { name: "m_name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_token", ty: "::System::Net::CookieToken", modifiers: "", def_value: None, comment: None }]
constexpr CookieTokenizer_RecognizedAttribute(::StringW  m_name, ::System::Net::CookieToken  m_token) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10620};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_name, offset: 0x0, size: 0x8, def value: None
 ::StringW  m_name;

/// @brief Field m_token, offset: 0x8, size: 0x4, def value: None
 ::System::Net::CookieToken  m_token;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CookieTokenizer_RecognizedAttribute, m_name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CookieTokenizer_RecognizedAttribute, m_token) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CookieTokenizer_RecognizedAttribute) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
