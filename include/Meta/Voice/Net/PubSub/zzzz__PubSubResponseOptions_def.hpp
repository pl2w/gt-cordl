#pragma once
// IWYU pragma private; include "Meta/Voice/Net/PubSub/PubSubResponseOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(PubSubResponseOptions)
// Forward declare root types
namespace Meta::Voice::Net::PubSub {
struct PubSubResponseOptions;
}
// Write type traits
MARK_VAL_T(::Meta::Voice::Net::PubSub::PubSubResponseOptions);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Net::PubSub::PubSubResponseOptions, "Meta.Voice.Net.PubSub", "PubSubResponseOptions");
// Dependencies 
namespace Meta::Voice::Net::PubSub {
// Is value type: true
// CS Name: Meta.Voice.Net.PubSub.PubSubResponseOptions
struct CORDL_TYPE PubSubResponseOptions {
public:
// Declarations
/// @brief Method Equals, addr 0x9e6b0f0, size 0x2c, virtual false, abstract: false, final false
inline bool Equals(::Meta::Voice::Net::PubSub::PubSubResponseOptions  other) ;

// Ctor Parameters []
// @brief default ctor
constexpr PubSubResponseOptions() ;

// Ctor Parameters [CppParam { name: "transcriptionResponses", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "composerResponses", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr PubSubResponseOptions(bool  transcriptionResponses, bool  composerResponses) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25499};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// [Header("Responses returned from audio interactions.")]
/// @brief Field transcriptionResponses, offset: 0x0, size: 0x1, def value: None
 bool  transcriptionResponses;

/// [Header("Responses returned from composer results.")]
/// @brief Field composerResponses, offset: 0x1, size: 0x1, def value: None
 bool  composerResponses;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Net::PubSub::PubSubResponseOptions, transcriptionResponses) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::PubSub::PubSubResponseOptions, composerResponses) == 0x1, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Net::PubSub::PubSubResponseOptions) == 0x2, "Size mismatch!");

} // namespace end def Meta::Voice::Net::PubSub
