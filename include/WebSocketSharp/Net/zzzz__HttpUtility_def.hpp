#pragma once
// IWYU pragma private; include "WebSocketSharp/Net/HttpUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpUtility)
namespace System::Text {
class Encoding;
}
namespace System {
class Object;
}
// Forward declare root types
namespace WebSocketSharp::Net {
class HttpUtility;
}
// Write type traits
MARK_REF_T(::WebSocketSharp::Net::HttpUtility*);
DEFINE_IL2CPP_CLASS(::WebSocketSharp::Net::HttpUtility*, "WebSocketSharp.Net", "HttpUtility");
// Dependencies System.Object
namespace WebSocketSharp::Net {
// Is value type: false
// CS Name: WebSocketSharp.Net.HttpUtility
class CORDL_TYPE HttpUtility : public ::System::Object {
public:
// Declarations
/// @brief Field _hexChars, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__hexChars, put=setStaticF__hexChars)) ::ArrayW<char16_t>  _hexChars;

/// @brief Field _sync, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__sync, put=setStaticF__sync)) ::System::Object*  _sync;

/// @brief Method GetEncoding, addr 0xb982918, size 0x3dc, virtual false, abstract: false, final false
static inline ::System::Text::Encoding* GetEncoding(::StringW  contentType) ;

/// @brief Method UrlDecode, addr 0xb9861ec, size 0x11c, virtual false, abstract: false, final false
static inline ::StringW UrlDecode(::StringW  s, ::System::Text::Encoding*  encoding) ;

/// @brief Method getNumber, addr 0xb986ae4, size 0x100, virtual false, abstract: false, final false
static inline int32_t getNumber(::ArrayW<uint8_t>  bytes, int32_t  offset, int32_t  count) ;

/// @brief Method getNumber, addr 0xb986ab0, size 0x34, virtual false, abstract: false, final false
static inline int32_t getNumber(char16_t  c) ;

static inline ::ArrayW<char16_t> getStaticF__hexChars() ;

static inline ::System::Object* getStaticF__sync() ;

static inline void setStaticF__hexChars(::ArrayW<char16_t>  value) ;

static inline void setStaticF__sync(::System::Object*  value) ;

/// @brief Method urlDecodeToBytes, addr 0xb986be4, size 0x2b8, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> urlDecodeToBytes(::ArrayW<uint8_t>  bytes, int32_t  offset, int32_t  count) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpUtility(HttpUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpUtility(HttpUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30361};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WebSocketSharp::Net::HttpUtility) == 0x10, "Size mismatch!");

} // namespace end def WebSocketSharp::Net
