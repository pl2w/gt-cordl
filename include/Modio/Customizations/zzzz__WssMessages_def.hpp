#pragma once
// IWYU pragma private; include "Modio/Customizations/WssMessages.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Customizations/zzzz__WssMessage_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(WssMessages)
namespace Modio::Customizations {
struct WssMessage;
}
// Forward declare root types
namespace Modio::Customizations {
struct WssMessages;
}
// Write type traits
MARK_VAL_T(::Modio::Customizations::WssMessages);
DEFINE_IL2CPP_CLASS(::Modio::Customizations::WssMessages, "Modio.Customizations", "WssMessages");
// Dependencies Modio.Customizations.WssMessage
namespace Modio::Customizations {
// Is value type: true
// CS Name: Modio.Customizations.WssMessages
struct CORDL_TYPE WssMessages {
public:
// Declarations
/// @brief Method .ctor, addr 0xa05e660, size 0x8, virtual false, abstract: false, final false
inline void _ctor(/* [ParamArray] */ ::ArrayW<::Modio::Customizations::WssMessage>  messages) ;

// Ctor Parameters []
// @brief default ctor
constexpr WssMessages() ;

// Ctor Parameters [CppParam { name: "messages", ty: "::ArrayW<::Modio::Customizations::WssMessage>", modifiers: "", def_value: None, comment: None }]
constexpr WssMessages(::ArrayW<::Modio::Customizations::WssMessage>  messages) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17747};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field messages, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::Modio::Customizations::WssMessage>  messages;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Customizations::WssMessages, messages) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::Customizations::WssMessages) == 0x8, "Size mismatch!");

} // namespace end def Modio::Customizations
