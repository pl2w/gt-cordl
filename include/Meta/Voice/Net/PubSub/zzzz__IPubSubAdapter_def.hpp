#pragma once
// IWYU pragma private; include "Meta/Voice/Net/PubSub/IPubSubAdapter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPubSubAdapter)
// Forward declare root types
namespace Meta::Voice::Net::PubSub {
class IPubSubAdapter;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Net::PubSub::IPubSubAdapter*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Net::PubSub::IPubSubAdapter*, "Meta.Voice.Net.PubSub", "IPubSubAdapter");
// Dependencies 
namespace Meta::Voice::Net::PubSub {
// Is value type: false
// CS Name: Meta.Voice.Net.PubSub.IPubSubAdapter
class CORDL_TYPE IPubSubAdapter {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "IPubSubAdapter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPubSubAdapter(IPubSubAdapter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25495};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice::Net::PubSub
