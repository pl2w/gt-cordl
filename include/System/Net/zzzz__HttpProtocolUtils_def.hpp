#pragma once
// IWYU pragma private; include "System/Net/HttpProtocolUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(HttpProtocolUtils)
namespace System {
struct DateTime;
}
// Forward declare root types
namespace System::Net {
class HttpProtocolUtils;
}
// Write type traits
MARK_REF_T(::System::Net::HttpProtocolUtils*);
DEFINE_IL2CPP_CLASS(::System::Net::HttpProtocolUtils*, "System.Net", "HttpProtocolUtils");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.HttpProtocolUtils
class CORDL_TYPE HttpProtocolUtils : public ::System::Object {
public:
// Declarations
static inline ::System::Net::HttpProtocolUtils* New_ctor() ;

/// @brief Method .ctor, addr 0xac5b988, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method date2string, addr 0xac5ba10, size 0xbc, virtual false, abstract: false, final false
static inline ::StringW date2string(::System::DateTime  D) ;

/// @brief Method string2date, addr 0xac5b990, size 0x78, virtual false, abstract: false, final false
static inline ::System::DateTime string2date(::StringW  S) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpProtocolUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpProtocolUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpProtocolUtils(HttpProtocolUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpProtocolUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpProtocolUtils(HttpProtocolUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10537};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::HttpProtocolUtils) == 0x10, "Size mismatch!");

} // namespace end def System::Net
