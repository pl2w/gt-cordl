#pragma once
// IWYU pragma private; include "LitJson/JsonException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ApplicationException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JsonException)
namespace LitJson {
struct ParserToken;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace LitJson {
class JsonException;
}
// Write type traits
MARK_REF_T(::LitJson::JsonException*);
DEFINE_IL2CPP_CLASS(::LitJson::JsonException*, "LitJson", "JsonException");
// Dependencies System.ApplicationException
namespace LitJson {
// Is value type: false
// CS Name: LitJson.JsonException
class CORDL_TYPE JsonException : public ::System::ApplicationException {
public:
// Declarations
static inline ::LitJson::JsonException* New_ctor() ;

static inline ::LitJson::JsonException* New_ctor(int32_t  c) ;

static inline ::LitJson::JsonException* New_ctor(int32_t  c, ::System::Exception*  inner_exception) ;

static inline ::LitJson::JsonException* New_ctor(::StringW  message) ;

static inline ::LitJson::JsonException* New_ctor(::StringW  message, ::System::Exception*  inner_exception) ;

static inline ::LitJson::JsonException* New_ctor(::LitJson::ParserToken  token) ;

static inline ::LitJson::JsonException* New_ctor(::LitJson::ParserToken  token, ::System::Exception*  inner_exception) ;

/// @brief Method .ctor, addr 0x5b5f550, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5b5f698, size 0x88, virtual false, abstract: false, final false
inline void _ctor(int32_t  c) ;

/// @brief Method .ctor, addr 0x5b5f720, size 0x98, virtual false, abstract: false, final false
inline void _ctor(int32_t  c, ::System::Exception*  inner_exception) ;

/// @brief Method .ctor, addr 0x5b5f7b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x5b5f7c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  inner_exception) ;

/// @brief Method .ctor, addr 0x5b5f558, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::LitJson::ParserToken  token) ;

/// @brief Method .ctor, addr 0x5b5f5f4, size 0xa4, virtual false, abstract: false, final false
inline void _ctor(::LitJson::ParserToken  token, ::System::Exception*  inner_exception) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonException(JsonException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonException(JsonException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3821};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::LitJson::JsonException) == 0x90, "Size mismatch!");

} // namespace end def LitJson
