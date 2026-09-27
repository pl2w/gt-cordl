#pragma once
// IWYU pragma private; include "System/Net/ExceptionCheck.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ExceptionCheck)
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Net {
class ExceptionCheck;
}
// Write type traits
MARK_REF_T(::System::Net::ExceptionCheck*);
DEFINE_IL2CPP_CLASS(::System::Net::ExceptionCheck*, "System.Net", "ExceptionCheck");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.ExceptionCheck
class CORDL_TYPE ExceptionCheck : public ::System::Object {
public:
// Declarations
/// @brief Method IsFatal, addr 0xada826c, size 0x78, virtual false, abstract: false, final false
static inline bool IsFatal(::System::Exception*  exception) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExceptionCheck() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExceptionCheck", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ExceptionCheck(ExceptionCheck && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExceptionCheck", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExceptionCheck(ExceptionCheck const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10387};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::ExceptionCheck) == 0x10, "Size mismatch!");

} // namespace end def System::Net
