#pragma once
// IWYU pragma private; include "System/Net/IWebProxyFinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IWebProxyFinder)
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class IWebProxyFinder;
}
// Write type traits
MARK_REF_T(::System::Net::IWebProxyFinder*);
DEFINE_IL2CPP_CLASS(::System::Net::IWebProxyFinder*, "System.Net", "IWebProxyFinder");
// Dependencies 
namespace System::Net {
// Is value type: false
// CS Name: System.Net.IWebProxyFinder
class CORDL_TYPE IWebProxyFinder {
public:
// Declarations
 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Abort, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Abort() ;

/// @brief Method GetProxies, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetProxies(::System::Uri*  destination, ::by_ref<::System::Collections::Generic::IList_1<::StringW>*>  proxyList) ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Reset() ;

/// @brief Method get_IsValid, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsValid() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IWebProxyFinder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWebProxyFinder(IWebProxyFinder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10506};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
