#pragma once
// IWYU pragma private; include "Modio/Customizations/WssRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(WssRequest)
namespace Modio::Customizations {
struct WssMessage;
}
// Forward declare root types
namespace Modio::Customizations {
class WssRequest;
}
// Write type traits
MARK_REF_T(::Modio::Customizations::WssRequest*);
DEFINE_IL2CPP_CLASS(::Modio::Customizations::WssRequest*, "Modio.Customizations", "WssRequest");
// Dependencies System.Object
namespace Modio::Customizations {
// Is value type: false
// CS Name: Modio.Customizations.WssRequest
class CORDL_TYPE WssRequest : public ::System::Object {
public:
// Declarations
/// @brief Method DeviceLogin, addr 0xa05b260, size 0xd0, virtual false, abstract: false, final false
static inline ::Modio::Customizations::WssMessage DeviceLogin() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WssRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WssRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WssRequest(WssRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WssRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WssRequest(WssRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17749};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Customizations::WssRequest) == 0x10, "Size mismatch!");

} // namespace end def Modio::Customizations
