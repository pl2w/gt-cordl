#pragma once
// IWYU pragma private; include "System/Net/IWebProxyScript.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IWebProxyScript)
namespace System {
class Type;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class IWebProxyScript;
}
// Write type traits
MARK_REF_T(::System::Net::IWebProxyScript*);
DEFINE_IL2CPP_CLASS(::System::Net::IWebProxyScript*, "System.Net", "IWebProxyScript");
// Dependencies 
namespace System::Net {
// Is value type: false
// CS Name: System.Net.IWebProxyScript
class CORDL_TYPE IWebProxyScript {
public:
// Declarations
/// @brief Method Close, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Close() ;

/// @brief Method Load, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Load(::System::Uri*  scriptLocation, ::StringW  script, ::System::Type*  helperType) ;

/// @brief Method Run, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW Run(::StringW  url, ::StringW  host) ;

// Ctor Parameters [CppParam { name: "", ty: "IWebProxyScript", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWebProxyScript(IWebProxyScript const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10702};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
