#pragma once
// IWYU pragma private; include "Modio/Extensions/DateTimeExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeExtensions)
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Modio::Extensions {
class DateTimeExtensions;
}
// Write type traits
MARK_REF_T(::Modio::Extensions::DateTimeExtensions*);
DEFINE_IL2CPP_CLASS(::Modio::Extensions::DateTimeExtensions*, "Modio.Extensions", "DateTimeExtensions");
// [Extension]
// Dependencies System.Object
namespace Modio::Extensions {
// Is value type: false
// CS Name: Modio.Extensions.DateTimeExtensions
class CORDL_TYPE DateTimeExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method GetUtcDateTime, addr 0xa054c64, size 0x64, virtual false, abstract: false, final false
static inline ::System::DateTime GetUtcDateTime(int64_t  timeStamp) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DateTimeExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DateTimeExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DateTimeExtensions(DateTimeExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DateTimeExtensions(DateTimeExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17682};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Extensions::DateTimeExtensions) == 0x10, "Size mismatch!");

} // namespace end def Modio::Extensions
