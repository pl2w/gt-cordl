#pragma once
// IWYU pragma private; include "System/Net/RangeValidationHelpers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RangeValidationHelpers)
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace System::Net {
class RangeValidationHelpers;
}
// Write type traits
MARK_REF_T(::System::Net::RangeValidationHelpers*);
DEFINE_IL2CPP_CLASS(::System::Net::RangeValidationHelpers*, "System.Net", "RangeValidationHelpers");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.RangeValidationHelpers
class CORDL_TYPE RangeValidationHelpers : public ::System::Object {
public:
// Declarations
/// @brief Method ValidateRange, addr 0xadace20, size 0x10, virtual false, abstract: false, final false
static inline bool ValidateRange(int32_t  actual, int32_t  fromAllowed, int32_t  toAllowed) ;

/// @brief Method ValidateSegment, addr 0xadace30, size 0x14c, virtual false, abstract: false, final false
static inline void ValidateSegment(::System::ArraySegment_1<uint8_t>  segment) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RangeValidationHelpers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RangeValidationHelpers", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RangeValidationHelpers(RangeValidationHelpers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RangeValidationHelpers", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RangeValidationHelpers(RangeValidationHelpers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10395};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::RangeValidationHelpers) == 0x10, "Size mismatch!");

} // namespace end def System::Net
