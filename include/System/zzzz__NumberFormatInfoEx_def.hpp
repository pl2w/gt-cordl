#pragma once
// IWYU pragma private; include "System/NumberFormatInfoEx.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NumberFormatInfoEx)
namespace System::Globalization {
class NumberFormatInfo;
}
// Forward declare root types
namespace System {
class NumberFormatInfoEx;
}
// Write type traits
MARK_REF_T(::System::NumberFormatInfoEx*);
DEFINE_IL2CPP_CLASS(::System::NumberFormatInfoEx*, "System", "NumberFormatInfoEx");
// [Extension]
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.NumberFormatInfoEx
class CORDL_TYPE NumberFormatInfoEx : public ::System::Object {
public:
// Declarations
/// [NullableContext(1)]
/// [Extension]
/// @brief Method HasInvariantNumberSigns, addr 0xb9a7c18, size 0x8c, virtual false, abstract: false, final false
static inline bool HasInvariantNumberSigns(::System::Globalization::NumberFormatInfo*  info) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NumberFormatInfoEx() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NumberFormatInfoEx", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NumberFormatInfoEx(NumberFormatInfoEx && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NumberFormatInfoEx", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NumberFormatInfoEx(NumberFormatInfoEx const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26334};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::NumberFormatInfoEx) == 0x10, "Size mismatch!");

} // namespace end def System
