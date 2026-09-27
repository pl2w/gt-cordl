#pragma once
// IWYU pragma private; include "Modio/Customizations/WssMessage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(WssMessage)
namespace Newtonsoft::Json::Linq {
class JToken;
}
// Forward declare root types
namespace Modio::Customizations {
struct WssMessage;
}
// Write type traits
MARK_VAL_T(::Modio::Customizations::WssMessage);
DEFINE_IL2CPP_CLASS(::Modio::Customizations::WssMessage, "Modio.Customizations", "WssMessage");
// Dependencies 
namespace Modio::Customizations {
// Is value type: true
// CS Name: Modio.Customizations.WssMessage
struct CORDL_TYPE WssMessage {
public:
// Declarations
/// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOutput>
requires(::cordl_internals::value_type_constraint<TOutput> && ::cordl_internals::default_constructor_constraint<TOutput>)
inline bool TryGetValue(::by_ref<TOutput>  output) ;

// Ctor Parameters []
// @brief default ctor
constexpr WssMessage() ;

// Ctor Parameters [CppParam { name: "operation", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "context", ty: "::Newtonsoft::Json::Linq::JToken*", modifiers: "", def_value: None, comment: None }]
constexpr WssMessage(::StringW  operation, ::Newtonsoft::Json::Linq::JToken*  context) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17746};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field operation, offset: 0x0, size: 0x8, def value: None
 ::StringW  operation;

/// @brief Field context, offset: 0x8, size: 0x8, def value: None
 ::Newtonsoft::Json::Linq::JToken*  context;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Customizations::WssMessage, operation) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::Customizations::WssMessage, context) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Modio::Customizations::WssMessage) == 0x10, "Size mismatch!");

} // namespace end def Modio::Customizations
