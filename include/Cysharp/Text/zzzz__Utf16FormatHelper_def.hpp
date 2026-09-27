#pragma once
// IWYU pragma private; include "Cysharp/Text/Utf16FormatHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Buffers/zzzz__IBufferWriter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Utf16FormatHelper)
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace Cysharp::Text {
class Utf16FormatHelper;
}
// Write type traits
MARK_REF_T(::Cysharp::Text::Utf16FormatHelper*);
DEFINE_IL2CPP_CLASS(::Cysharp::Text::Utf16FormatHelper*, "Cysharp.Text", "Utf16FormatHelper");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Buffers.IBufferWriter`1<T>, System.Object
namespace Cysharp::Text {
// Is value type: false
// CS Name: Cysharp.Text.Utf16FormatHelper
class CORDL_TYPE Utf16FormatHelper : public ::System::Object {
public:
// Declarations
/// @brief Method FormatTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TBufferWriter,typename T>
requires(::cordl_internals::type_constraint<TBufferWriter, ::System::Buffers::IBufferWriter_1<char16_t>*>)
static inline void FormatTo(::by_ref<TBufferWriter>  sb, T  arg, int32_t  width, /* [Nullable(0)] */ ::System::ReadOnlySpan_1<char16_t>  format, ::StringW  argName) ;

/// @brief Method FormatToRightJustify, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TBufferWriter,typename T>
requires(::cordl_internals::type_constraint<TBufferWriter, ::System::Buffers::IBufferWriter_1<char16_t>*>)
static inline void FormatToRightJustify(::by_ref<TBufferWriter>  sb, T  arg, int32_t  width, /* [Nullable(0)] */ ::System::ReadOnlySpan_1<char16_t>  format, ::StringW  argName) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Utf16FormatHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Utf16FormatHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Utf16FormatHelper(Utf16FormatHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Utf16FormatHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Utf16FormatHelper(Utf16FormatHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26341};

/// @brief Field sp offset 0xffffffff size 0x2
static constexpr char16_t  sp{u' '};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Text::Utf16FormatHelper) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Text
