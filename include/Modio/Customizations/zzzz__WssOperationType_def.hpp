#pragma once
// IWYU pragma private; include "Modio/Customizations/WssOperationType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WssOperationType)
// Forward declare root types
namespace Modio::Customizations {
class WssOperationType;
}
// Write type traits
MARK_REF_T(::Modio::Customizations::WssOperationType*);
DEFINE_IL2CPP_CLASS(::Modio::Customizations::WssOperationType*, "Modio.Customizations", "WssOperationType");
// Dependencies System.Object
namespace Modio::Customizations {
// Is value type: false
// CS Name: Modio.Customizations.WssOperationType
class CORDL_TYPE WssOperationType : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr WssOperationType() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WssOperationType", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WssOperationType(WssOperationType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WssOperationType", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WssOperationType(WssOperationType const& ) = delete;

/// @brief Field Wss_AccessToken offset 0xffffffff size 0x8
static constexpr ::ConstString  Wss_AccessToken{u"login_success"};

/// @brief Field Wss_DeviceLogin offset 0xffffffff size 0x8
static constexpr ::ConstString  Wss_DeviceLogin{u"device_login"};

/// @brief Field Wss_Example offset 0xffffffff size 0x8
static constexpr ::ConstString  Wss_Example{u"example"};

/// @brief Field Wss_FailedOperation offset 0xffffffff size 0x8
static constexpr ::ConstString  Wss_FailedOperation{u"failed_operation"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17748};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Customizations::WssOperationType) == 0x10, "Size mismatch!");

} // namespace end def Modio::Customizations
