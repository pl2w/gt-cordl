#pragma once
// IWYU pragma private; include "Modio/Errors/MetricsError.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/zzzz__Error_def.hpp"
CORDL_MODULE_EXPORT(MetricsError)
namespace Modio::Errors {
struct MetricsErrorCode;
}
// Forward declare root types
namespace Modio::Errors {
class MetricsError;
}
// Write type traits
MARK_REF_T(::Modio::Errors::MetricsError*);
DEFINE_IL2CPP_CLASS(::Modio::Errors::MetricsError*, "Modio.Errors", "MetricsError");
// Dependencies Modio.Error
namespace Modio::Errors {
// Is value type: false
// CS Name: Modio.Errors.MetricsError
class CORDL_TYPE MetricsError : public ::Modio::Error {
public:
// Declarations
 __declspec(property(get=get_Code)) ::Modio::Errors::MetricsErrorCode  Code;

/// @brief Field None, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_None, put=setStaticF_None)) ::Modio::Errors::MetricsError*  None;

static inline ::Modio::Errors::MetricsError* New_ctor(::Modio::Errors::MetricsErrorCode  code) ;

/// @brief Method .ctor, addr 0xa0567fc, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::Modio::Errors::MetricsErrorCode  code) ;

static inline ::Modio::Errors::MetricsError* getStaticF_None() ;

/// @brief Method get_Code, addr 0xa0567f4, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Errors::MetricsErrorCode get_Code() ;

static inline void setStaticF_None(::Modio::Errors::MetricsError*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetricsError() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetricsError", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetricsError(MetricsError && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetricsError", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetricsError(MetricsError const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17699};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Errors::MetricsError) == 0x20, "Size mismatch!");

} // namespace end def Modio::Errors
