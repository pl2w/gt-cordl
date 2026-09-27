#pragma once
// IWYU pragma private; include "WebSocketSharp/Net/HttpVersion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HttpVersion)
namespace System {
class Version;
}
// Forward declare root types
namespace WebSocketSharp::Net {
class HttpVersion;
}
// Write type traits
MARK_REF_T(::WebSocketSharp::Net::HttpVersion*);
DEFINE_IL2CPP_CLASS(::WebSocketSharp::Net::HttpVersion*, "WebSocketSharp.Net", "HttpVersion");
// Dependencies System.Object
namespace WebSocketSharp::Net {
// Is value type: false
// CS Name: WebSocketSharp.Net.HttpVersion
class CORDL_TYPE HttpVersion : public ::System::Object {
public:
// Declarations
/// @brief Field Version10, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Version10, put=setStaticF_Version10)) ::System::Version*  Version10;

/// @brief Field Version11, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Version11, put=setStaticF_Version11)) ::System::Version*  Version11;

static inline ::System::Version* getStaticF_Version10() ;

static inline ::System::Version* getStaticF_Version11() ;

static inline void setStaticF_Version10(::System::Version*  value) ;

static inline void setStaticF_Version11(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpVersion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpVersion", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpVersion(HttpVersion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpVersion", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpVersion(HttpVersion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30363};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WebSocketSharp::Net::HttpVersion) == 0x10, "Size mismatch!");

} // namespace end def WebSocketSharp::Net
