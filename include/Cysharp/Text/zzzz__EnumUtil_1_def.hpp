#pragma once
// IWYU pragma private; include "Cysharp/Text/EnumUtil_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnumUtil_1)
namespace System::Buffers {
struct StandardFormat;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace Cysharp::Text {
template<typename T>
class EnumUtil_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Text::EnumUtil_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Text::EnumUtil_1, "Cysharp.Text", "EnumUtil`1");
// Dependencies System.Object
namespace Cysharp::Text {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Text.EnumUtil`1<T>
class CORDL_TYPE EnumUtil_1 : public ::System::Object {
public:
// Declarations
/// @brief Field names, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_names, put=setStaticF_names)) ::System::Collections::Generic::Dictionary_2<T,::StringW>*  names;

/// @brief Field utf8names, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_utf8names, put=setStaticF_utf8names)) ::System::Collections::Generic::Dictionary_2<T,::ArrayW<uint8_t>>*  utf8names;

/// @brief Method TryFormatUtf16, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool TryFormatUtf16(/* [Nullable(1)] */ T  value, ::System::Span_1<char16_t>  dest, ::by_ref<int32_t>  written, ::System::ReadOnlySpan_1<char16_t>  _) ;

/// @brief Method TryFormatUtf8, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool TryFormatUtf8(/* [Nullable(1)] */ T  value, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  _) ;

static inline ::System::Collections::Generic::Dictionary_2<T,::StringW>* getStaticF_names() ;

static inline ::System::Collections::Generic::Dictionary_2<T,::ArrayW<uint8_t>>* getStaticF_utf8names() ;

static inline void setStaticF_names(::System::Collections::Generic::Dictionary_2<T,::StringW>*  value) ;

static inline void setStaticF_utf8names(::System::Collections::Generic::Dictionary_2<T,::ArrayW<uint8_t>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumUtil_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumUtil_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumUtil_1(EnumUtil_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumUtil_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumUtil_1(EnumUtil_1 const& ) = delete;

/// @brief Field InvalidName offset 0xffffffff size 0x8
static constexpr ::ConstString  InvalidName{u"$"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26338};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Text
