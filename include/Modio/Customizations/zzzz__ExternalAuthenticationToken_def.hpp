#pragma once
// IWYU pragma private; include "Modio/Customizations/ExternalAuthenticationToken.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ExternalAuthenticationToken)
namespace Modio::Customizations {
struct WssLoginSuccess;
}
namespace Modio {
class Error;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class Action;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Modio::Customizations {
struct ExternalAuthenticationToken;
}
// Write type traits
MARK_VAL_T(::Modio::Customizations::ExternalAuthenticationToken);
DEFINE_IL2CPP_CLASS(::Modio::Customizations::ExternalAuthenticationToken, "Modio.Customizations", "ExternalAuthenticationToken");
// Dependencies System.DateTime
namespace Modio::Customizations {
// Is value type: true
// CS Name: Modio.Customizations.ExternalAuthenticationToken
struct CORDL_TYPE ExternalAuthenticationToken {
public:
// Declarations
 __declspec(property(get=get_cancel, put=set_cancel)) ::System::Action*  cancel;

/// @brief Method Cancel, addr 0xa059cd4, size 0x34, virtual false, abstract: false, final false
inline void Cancel() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_cancel, addr 0xa059d08, size 0x8, virtual false, abstract: false, final false
inline ::System::Action* get_cancel() ;

/// [CompilerGenerated]
/// @brief Method set_cancel, addr 0xa059d10, size 0x8, virtual false, abstract: false, final false
inline void set_cancel(::System::Action*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ExternalAuthenticationToken() ;

// Ctor Parameters [CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "autoUrl", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "code", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Customizations::WssLoginSuccess>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "expiryTime", ty: "::System::DateTime", modifiers: "", def_value: None, comment: None }, CppParam { name: "_cancel_k__BackingField", ty: "::System::Action*", modifiers: "", def_value: None, comment: None }]
constexpr ExternalAuthenticationToken(::StringW  url, ::StringW  autoUrl, ::StringW  code, ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Customizations::WssLoginSuccess>>*  task, ::System::DateTime  expiryTime, ::System::Action*  _cancel_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17727};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field url, offset: 0x0, size: 0x8, def value: None
 ::StringW  url;

/// @brief Field autoUrl, offset: 0x8, size: 0x8, def value: None
 ::StringW  autoUrl;

/// @brief Field code, offset: 0x10, size: 0x8, def value: None
 ::StringW  code;

/// @brief Field task, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Customizations::WssLoginSuccess>>*  task;

/// @brief Field expiryTime, offset: 0x20, size: 0x8, def value: None
 ::System::DateTime  expiryTime;

/// [CompilerGenerated]
/// @brief Field <cancel>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::System::Action*  _cancel_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Customizations::ExternalAuthenticationToken, url) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::Customizations::ExternalAuthenticationToken, autoUrl) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::Customizations::ExternalAuthenticationToken, code) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Customizations::ExternalAuthenticationToken, task) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Customizations::ExternalAuthenticationToken, expiryTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Customizations::ExternalAuthenticationToken, _cancel_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Modio::Customizations::ExternalAuthenticationToken) == 0x30, "Size mismatch!");

} // namespace end def Modio::Customizations
