#pragma once
// IWYU pragma private; include "POpusCodec/OpusException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "POpusCodec/Enums/zzzz__OpusStatusCode_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(OpusException)
namespace POpusCodec::Enums {
struct OpusStatusCode;
}
// Forward declare root types
namespace POpusCodec {
class OpusException;
}
// Write type traits
MARK_REF_T(::POpusCodec::OpusException*);
DEFINE_IL2CPP_CLASS(::POpusCodec::OpusException*, "POpusCodec", "OpusException");
// Dependencies POpusCodec.Enums.OpusStatusCode, System.Exception
namespace POpusCodec {
// Is value type: false
// CS Name: POpusCodec.OpusException
class CORDL_TYPE OpusException : public ::System::Exception {
public:
// Declarations
 __declspec(property(get=get_StatusCode)) ::POpusCodec::Enums::OpusStatusCode  StatusCode;

/// @brief Field _statusCode, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__statusCode, put=__cordl_internal_set__statusCode)) ::POpusCodec::Enums::OpusStatusCode  _statusCode;

static inline ::POpusCodec::OpusException* New_ctor(::POpusCodec::Enums::OpusStatusCode  statusCode, ::StringW  message) ;

constexpr ::POpusCodec::Enums::OpusStatusCode const& __cordl_internal_get__statusCode() const;

constexpr ::POpusCodec::Enums::OpusStatusCode& __cordl_internal_get__statusCode() ;

constexpr void __cordl_internal_set__statusCode(::POpusCodec::Enums::OpusStatusCode  value) ;

/// @brief Method .ctor, addr 0xa743028, size 0x104, virtual false, abstract: false, final false
inline void _ctor(::POpusCodec::Enums::OpusStatusCode  statusCode, ::StringW  message) ;

/// @brief Method get_StatusCode, addr 0xa7437a8, size 0x8, virtual false, abstract: false, final false
inline ::POpusCodec::Enums::OpusStatusCode get_StatusCode() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpusException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpusException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OpusException(OpusException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpusException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpusException(OpusException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28365};

/// @brief Field _statusCode, offset: 0x8c, size: 0x4, def value: None
 ::POpusCodec::Enums::OpusStatusCode  ____statusCode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::POpusCodec::OpusException, ____statusCode) == 0x8c, "Offset mismatch!");

static_assert(sizeof(::POpusCodec::OpusException) == 0x90, "Size mismatch!");

} // namespace end def POpusCodec
