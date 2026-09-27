#pragma once
// IWYU pragma private; include "Cysharp/Text/Utf16PreparedFormat_16.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Text/zzzz__Utf16FormatSegment_def.hpp"
#include "System/Buffers/zzzz__IBufferWriter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Utf16PreparedFormat_16)
// Forward declare root types
namespace Cysharp::Text {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15,typename T16>
class Utf16PreparedFormat_16;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Text::Utf16PreparedFormat_16);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Text::Utf16PreparedFormat_16, "Cysharp.Text", "Utf16PreparedFormat`16");
// [NullableContext(2)]
// [Nullable(0)]
// Dependencies Cysharp.Text.Utf16FormatSegment, System.Buffers.IBufferWriter`1<T>, System.Object
namespace Cysharp::Text {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15,typename T16>
// Is value type: false
// CS Name: Cysharp.Text.Utf16PreparedFormat`16<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,T16>
class CORDL_TYPE Utf16PreparedFormat_16 : public ::System::Object {
public:
// Declarations
/// @brief [Nullable(1)]
 __declspec(property(get=get_FormatString)) ::StringW  FormatString;

 __declspec(property(get=get_MinSize)) int32_t  MinSize;

/// @brief Field <FormatString>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__FormatString_k__BackingField, put=__cordl_internal_set__FormatString_k__BackingField)) ::StringW  _FormatString_k__BackingField;

/// @brief Field <MinSize>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__MinSize_k__BackingField, put=__cordl_internal_set__MinSize_k__BackingField)) int32_t  _MinSize_k__BackingField;

/// @brief Field segments, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_segments, put=__cordl_internal_set_segments)) ::ArrayW<::Cysharp::Text::Utf16FormatSegment>  segments;

/// [NullableContext(1)]
/// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::StringW Format(T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, T11  arg11, T12  arg12, T13  arg13, T14  arg14, T15  arg15, T16  arg16) ;

/// [NullableContext(1)]
/// @brief Method FormatTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TBufferWriter>
requires(::cordl_internals::type_constraint<TBufferWriter, ::System::Buffers::IBufferWriter_1<char16_t>*>)
inline void FormatTo(::by_ref<TBufferWriter>  sb, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, T11  arg11, T12  arg12, T13  arg13, T14  arg14, T15  arg15, T16  arg16) ;

/// @brief [NullableContext(1)]
static inline ::Cysharp::Text::Utf16PreparedFormat_16<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,T16>* New_ctor(::StringW  format) ;

constexpr ::StringW const& __cordl_internal_get__FormatString_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__FormatString_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__MinSize_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__MinSize_k__BackingField() ;

constexpr ::ArrayW<::Cysharp::Text::Utf16FormatSegment> const& __cordl_internal_get_segments() const;

constexpr ::ArrayW<::Cysharp::Text::Utf16FormatSegment>& __cordl_internal_get_segments() ;

constexpr void __cordl_internal_set__FormatString_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__MinSize_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_segments(::ArrayW<::Cysharp::Text::Utf16FormatSegment>  value) ;

/// [NullableContext(1)]
/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::StringW  format) ;

/// [NullableContext(1)]
/// [CompilerGenerated]
/// @brief Method get_FormatString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::StringW get_FormatString() ;

/// [CompilerGenerated]
/// @brief Method get_MinSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_MinSize() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Utf16PreparedFormat_16() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Utf16PreparedFormat_16", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Utf16PreparedFormat_16(Utf16PreparedFormat_16 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Utf16PreparedFormat_16", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Utf16PreparedFormat_16(Utf16PreparedFormat_16 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26363};

/// [Nullable(1)]
/// [CompilerGenerated]
/// @brief Field <FormatString>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____FormatString_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MinSize>k__BackingField, offset: 0x18, size: 0x4, def value: None
 int32_t  ____MinSize_k__BackingField;

/// [Nullable(1)]
/// @brief Field segments, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::Cysharp::Text::Utf16FormatSegment>  ___segments;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Text
