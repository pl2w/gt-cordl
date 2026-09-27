#pragma once
// IWYU pragma private; include "Oculus/Voice/Core/Utilities/DateTimeUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeUtility)
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Oculus::Voice::Core::Utilities {
class DateTimeUtility;
}
// Write type traits
MARK_REF_T(::Oculus::Voice::Core::Utilities::DateTimeUtility*);
DEFINE_IL2CPP_CLASS(::Oculus::Voice::Core::Utilities::DateTimeUtility*, "Oculus.Voice.Core.Utilities", "DateTimeUtility");
// Dependencies System.Object
namespace Oculus::Voice::Core::Utilities {
// Is value type: false
// CS Name: Oculus.Voice.Core.Utilities.DateTimeUtility
class CORDL_TYPE DateTimeUtility : public ::System::Object {
public:
// Declarations
/// @brief Method get_ElapsedMilliseconds, addr 0x5e302b8, size 0x84, virtual false, abstract: false, final false
static inline int64_t get_ElapsedMilliseconds() ;

/// @brief Method get_UtcNow, addr 0x5e30268, size 0x50, virtual false, abstract: false, final false
static inline ::System::DateTime get_UtcNow() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DateTimeUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DateTimeUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DateTimeUtility(DateTimeUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DateTimeUtility(DateTimeUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32935};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Voice::Core::Utilities::DateTimeUtility) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Voice::Core::Utilities
