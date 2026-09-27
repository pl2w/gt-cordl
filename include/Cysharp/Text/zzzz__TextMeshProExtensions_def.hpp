#pragma once
// IWYU pragma private; include "Cysharp/Text/TextMeshProExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TextMeshProExtensions)
namespace Cysharp::Text {
struct Utf16ValueStringBuilder;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace Cysharp::Text {
class TextMeshProExtensions;
}
// Write type traits
MARK_REF_T(::Cysharp::Text::TextMeshProExtensions*);
DEFINE_IL2CPP_CLASS(::Cysharp::Text::TextMeshProExtensions*, "Cysharp.Text", "TextMeshProExtensions");
// [NullableContext(1)]
// [Nullable(0)]
// [Extension]
// Dependencies System.Object
namespace Cysharp::Text {
// Is value type: false
// CS Name: Cysharp.Text.TextMeshProExtensions
class CORDL_TYPE TextMeshProExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method SetText, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void SetText(::TMPro::TMP_Text*  text, T  arg0) ;

/// [Extension]
/// @brief Method SetText, addr 0xb9bdac4, size 0xd0, virtual false, abstract: false, final false
static inline void SetText(::TMPro::TMP_Text*  text, ::Cysharp::Text::Utf16ValueStringBuilder  stringBuilder) ;

/// [Extension]
/// @brief Method SetTextFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T0>
static inline void SetTextFormat(::TMPro::TMP_Text*  text, ::StringW  format, T0  arg0) ;

/// [Extension]
/// @brief Method SetTextFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T0,typename T1>
static inline void SetTextFormat(::TMPro::TMP_Text*  text, ::StringW  format, T0  arg0, T1  arg1) ;

/// [Extension]
/// @brief Method SetTextFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T0,typename T1,typename T2>
static inline void SetTextFormat(::TMPro::TMP_Text*  text, ::StringW  format, T0  arg0, T1  arg1, T2  arg2) ;

/// [Extension]
/// @brief Method SetTextFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T0,typename T1,typename T2,typename T3>
static inline void SetTextFormat(::TMPro::TMP_Text*  text, ::StringW  format, T0  arg0, T1  arg1, T2  arg2, T3  arg3) ;

/// [Extension]
/// @brief Method SetTextFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T0,typename T1,typename T2,typename T3,typename T4>
static inline void SetTextFormat(::TMPro::TMP_Text*  text, ::StringW  format, T0  arg0, T1  arg1, T2  arg2, T3  arg3, T4  arg4) ;

/// [Extension]
/// @brief Method SetTextFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5>
static inline void SetTextFormat(::TMPro::TMP_Text*  text, ::StringW  format, T0  arg0, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5) ;

/// [Extension]
/// @brief Method SetTextFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
static inline void SetTextFormat(::TMPro::TMP_Text*  text, ::StringW  format, T0  arg0, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6) ;

/// [Extension]
/// @brief Method SetTextFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
static inline void SetTextFormat(::TMPro::TMP_Text*  text, ::StringW  format, T0  arg0, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7) ;

/// [Extension]
/// @brief Method SetTextFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8>
static inline void SetTextFormat(::TMPro::TMP_Text*  text, ::StringW  format, T0  arg0, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8) ;

/// [Extension]
/// @brief Method SetTextFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9>
static inline void SetTextFormat(::TMPro::TMP_Text*  text, ::StringW  format, T0  arg0, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9) ;

/// [Extension]
/// @brief Method SetTextFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10>
static inline void SetTextFormat(::TMPro::TMP_Text*  text, ::StringW  format, T0  arg0, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10) ;

/// [Extension]
/// @brief Method SetTextFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11>
static inline void SetTextFormat(::TMPro::TMP_Text*  text, ::StringW  format, T0  arg0, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, T11  arg11) ;

/// [Extension]
/// @brief Method SetTextFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12>
static inline void SetTextFormat(::TMPro::TMP_Text*  text, ::StringW  format, T0  arg0, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, T11  arg11, T12  arg12) ;

/// [Extension]
/// @brief Method SetTextFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13>
static inline void SetTextFormat(::TMPro::TMP_Text*  text, ::StringW  format, T0  arg0, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, T11  arg11, T12  arg12, T13  arg13) ;

/// [Extension]
/// @brief Method SetTextFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14>
static inline void SetTextFormat(::TMPro::TMP_Text*  text, ::StringW  format, T0  arg0, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, T11  arg11, T12  arg12, T13  arg13, T14  arg14) ;

/// [Extension]
/// @brief Method SetTextFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15>
static inline void SetTextFormat(::TMPro::TMP_Text*  text, ::StringW  format, T0  arg0, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, T11  arg11, T12  arg12, T13  arg13, T14  arg14, T15  arg15) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextMeshProExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextMeshProExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TextMeshProExtensions(TextMeshProExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextMeshProExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextMeshProExtensions(TextMeshProExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26395};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Text::TextMeshProExtensions) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Text
