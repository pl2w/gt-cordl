#pragma once
// IWYU pragma private; include "GlobalNamespace/StringFormatter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StringFormatter)
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace GlobalNamespace {
class StringFormatter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::StringFormatter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StringFormatter*, "", "StringFormatter");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: StringFormatter
class CORDL_TYPE StringFormatter : public ::System::Object {
public:
// Declarations
/// @brief Field builder, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_builder, put=setStaticF_builder)) ::System::Text::StringBuilder*  builder;

/// @brief Field indices, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_indices, put=__cordl_internal_set_indices)) ::ArrayW<int32_t>  indices;

/// @brief Field spans, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_spans, put=__cordl_internal_set_spans)) ::ArrayW<::StringW>  spans;

/// @brief Method Format, addr 0x56ae12c, size 0x14c, virtual false, abstract: false, final false
inline ::StringW Format(::StringW  term1) ;

/// @brief Method Format, addr 0x56ae3e4, size 0x194, virtual false, abstract: false, final false
inline ::StringW Format(::StringW  term1, ::StringW  term2) ;

/// @brief Method Format, addr 0x56ae578, size 0x1e8, virtual false, abstract: false, final false
inline ::StringW Format(::StringW  term1, ::StringW  term2, ::StringW  term3) ;

/// @brief Method Format, addr 0x56ae278, size 0x16c, virtual false, abstract: false, final false
inline ::StringW Format(::System::Func_1<::StringW>*  term1) ;

/// @brief Method Format, addr 0x56ae760, size 0x1dc, virtual false, abstract: false, final false
inline ::StringW Format(::System::Func_1<::StringW>*  term1, ::System::Func_1<::StringW>*  term2) ;

/// @brief Method Format, addr 0x56ae93c, size 0x218, virtual false, abstract: false, final false
inline ::StringW Format(::System::Func_1<::StringW>*  term1, ::System::Func_1<::StringW>*  term2, ::System::Func_1<::StringW>*  term3) ;

/// @brief Method Format, addr 0x56aeb54, size 0x24c, virtual false, abstract: false, final false
inline ::StringW Format(::System::Func_1<::StringW>*  term1, ::System::Func_1<::StringW>*  term2, ::System::Func_1<::StringW>*  term3, ::System::Func_1<::StringW>*  term4) ;

/// @brief Method Format, addr 0x56aeda0, size 0x188, virtual false, abstract: false, final false
inline ::StringW Format(/* [ParamArray] */ ::ArrayW<::StringW>  terms) ;

/// @brief Method Format, addr 0x56aef28, size 0x1ac, virtual false, abstract: false, final false
inline ::StringW Format(/* [ParamArray] */ ::ArrayW<::System::Func_1<::StringW>*>  terms) ;

static inline ::GlobalNamespace::StringFormatter* New_ctor(::ArrayW<::StringW>  spans, ::ArrayW<int32_t>  indices) ;

/// @brief Method Parse, addr 0x56af0d4, size 0x2fc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::StringFormatter* Parse(::StringW  input) ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_indices() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_indices() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_spans() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_spans() ;

constexpr void __cordl_internal_set_indices(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_spans(::ArrayW<::StringW>  value) ;

/// @brief Method .ctor, addr 0x56ae0e8, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::StringW>  spans, ::ArrayW<int32_t>  indices) ;

static inline ::System::Text::StringBuilder* getStaticF_builder() ;

static inline void setStaticF_builder(::System::Text::StringBuilder*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringFormatter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringFormatter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StringFormatter(StringFormatter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringFormatter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringFormatter(StringFormatter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{933};

/// @brief Field spans, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___spans;

/// @brief Field indices, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___indices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StringFormatter, ___spans) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StringFormatter, ___indices) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StringFormatter) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
