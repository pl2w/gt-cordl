#pragma once
// IWYU pragma private; include "Cysharp/Text/Utf8FormatHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Buffers/zzzz__IBufferWriter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Utf8FormatHelper)
namespace System::Buffers {
struct StandardFormat;
}
// Forward declare root types
namespace Cysharp::Text {
class Utf8FormatHelper;
}
// Write type traits
MARK_REF_T(::Cysharp::Text::Utf8FormatHelper*);
DEFINE_IL2CPP_CLASS(::Cysharp::Text::Utf8FormatHelper*, "Cysharp.Text", "Utf8FormatHelper");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Buffers.IBufferWriter`1<T>, System.Object
namespace Cysharp::Text {
// Is value type: false
// CS Name: Cysharp.Text.Utf8FormatHelper
class CORDL_TYPE Utf8FormatHelper : public ::System::Object {
public:
// Declarations
/// @brief Method FormatTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TBufferWriter,typename T>
requires(::cordl_internals::type_constraint<TBufferWriter, ::System::Buffers::IBufferWriter_1<uint8_t>*>)
static inline void FormatTo(::by_ref<TBufferWriter>  sb, T  arg, int32_t  width, ::System::Buffers::StandardFormat  format, ::StringW  argName) ;

/// @brief Method FormatToRightJustify, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TBufferWriter,typename T>
requires(::cordl_internals::type_constraint<TBufferWriter, ::System::Buffers::IBufferWriter_1<uint8_t>*>)
static inline void FormatToRightJustify(::by_ref<TBufferWriter>  sb, T  arg, int32_t  width, ::System::Buffers::StandardFormat  format, ::StringW  argName) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Utf8FormatHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Utf8FormatHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Utf8FormatHelper(Utf8FormatHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Utf8FormatHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Utf8FormatHelper(Utf8FormatHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26342};

/// @brief Field sp offset 0xffffffff size 0x1
static constexpr uint8_t  sp{static_cast<uint8_t>(0x20u)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Text::Utf8FormatHelper) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Text
