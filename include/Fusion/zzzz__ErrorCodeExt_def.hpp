#pragma once
// IWYU pragma private; include "Fusion/ErrorCodeExt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ErrorCodeExt)
namespace Fusion {
struct ShutdownReason;
}
// Forward declare root types
namespace Fusion {
class ErrorCodeExt;
}
// Write type traits
MARK_REF_T(::Fusion::ErrorCodeExt*);
DEFINE_IL2CPP_CLASS(::Fusion::ErrorCodeExt*, "Fusion", "ErrorCodeExt");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.ErrorCodeExt
class CORDL_TYPE ErrorCodeExt : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertToShutdownReason, addr 0x5f719f0, size 0x150, virtual false, abstract: false, final false
static inline ::Fusion::ShutdownReason ConvertToShutdownReason(int16_t  errorCode) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ErrorCodeExt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ErrorCodeExt", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ErrorCodeExt(ErrorCodeExt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ErrorCodeExt", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ErrorCodeExt(ErrorCodeExt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18857};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::ErrorCodeExt) == 0x10, "Size mismatch!");

} // namespace end def Fusion
