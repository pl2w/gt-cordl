#pragma once
// IWYU pragma private; include "System/Net/GlobalProxySelection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GlobalProxySelection)
namespace System::Net {
class IWebProxy;
}
// Forward declare root types
namespace System::Net {
class GlobalProxySelection;
}
// Write type traits
MARK_REF_T(::System::Net::GlobalProxySelection*);
DEFINE_IL2CPP_CLASS(::System::Net::GlobalProxySelection*, "System.Net", "GlobalProxySelection");
// [Obsolete("This class has been deprecated. Please use WebRequest.DefaultWebProxy instead to access and set the global default proxy. Use \'null\' instead of GetEmptyWebProxy. https://go.microsoft.com/fwlink/?linkid=14202")]
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.GlobalProxySelection
class CORDL_TYPE GlobalProxySelection : public ::System::Object {
public:
// Declarations
/// @brief Method GetEmptyWebProxy, addr 0xac57688, size 0x54, virtual false, abstract: false, final false
static inline ::System::Net::IWebProxy* GetEmptyWebProxy() ;

static inline ::System::Net::GlobalProxySelection* New_ctor() ;

/// @brief Method .ctor, addr 0xac57734, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Select, addr 0xac575e0, size 0xa8, virtual false, abstract: false, final false
static inline ::System::Net::IWebProxy* get_Select() ;

/// @brief Method set_Select, addr 0xac576dc, size 0x58, virtual false, abstract: false, final false
static inline void set_Select(::System::Net::IWebProxy*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GlobalProxySelection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GlobalProxySelection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GlobalProxySelection(GlobalProxySelection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GlobalProxySelection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GlobalProxySelection(GlobalProxySelection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10494};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::GlobalProxySelection) == 0x10, "Size mismatch!");

} // namespace end def System::Net
