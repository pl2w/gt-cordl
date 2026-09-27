#pragma once
// IWYU pragma private; include "System/Net/Http/MultipartFormDataContent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Http/zzzz__MultipartContent_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MultipartFormDataContent)
namespace System::Net::Http {
class HttpContent;
}
// Forward declare root types
namespace System::Net::Http {
class MultipartFormDataContent;
}
// Write type traits
MARK_REF_T(::System::Net::Http::MultipartFormDataContent*);
DEFINE_IL2CPP_CLASS(::System::Net::Http::MultipartFormDataContent*, "System.Net.Http", "MultipartFormDataContent");
// Dependencies System.Net.Http.MultipartContent
namespace System::Net::Http {
// Is value type: false
// CS Name: System.Net.Http.MultipartFormDataContent
class CORDL_TYPE MultipartFormDataContent : public ::System::Net::Http::MultipartContent {
public:
// Declarations
/// @brief Method Add, addr 0xa9e4ba0, size 0x20, virtual true, abstract: false, final false
inline void Add(::System::Net::Http::HttpContent*  content) ;

/// @brief Method Add, addr 0xa9e4c98, size 0x84, virtual false, abstract: false, final false
inline void Add(::System::Net::Http::HttpContent*  content, ::StringW  name) ;

/// @brief Method Add, addr 0xa9e4d1c, size 0xb8, virtual false, abstract: false, final false
inline void Add(::System::Net::Http::HttpContent*  content, ::StringW  name, ::StringW  fileName) ;

/// @brief Method AddContentDisposition, addr 0xa9e4bc0, size 0xd8, virtual false, abstract: false, final false
inline void AddContentDisposition(::System::Net::Http::HttpContent*  content, ::StringW  name, ::StringW  fileName) ;

static inline ::System::Net::Http::MultipartFormDataContent* New_ctor() ;

/// @brief Method .ctor, addr 0xa9e4b58, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MultipartFormDataContent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MultipartFormDataContent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MultipartFormDataContent(MultipartFormDataContent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultipartFormDataContent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultipartFormDataContent(MultipartFormDataContent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30731};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Http::MultipartFormDataContent) == 0x40, "Size mismatch!");

} // namespace end def System::Net::Http
