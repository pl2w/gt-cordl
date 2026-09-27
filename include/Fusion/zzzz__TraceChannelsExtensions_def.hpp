#pragma once
// IWYU pragma private; include "Fusion/TraceChannelsExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TraceChannelsExtensions)
namespace Fusion {
struct TraceChannels;
}
// Forward declare root types
namespace Fusion {
class TraceChannelsExtensions;
}
// Write type traits
MARK_REF_T(::Fusion::TraceChannelsExtensions*);
DEFINE_IL2CPP_CLASS(::Fusion::TraceChannelsExtensions*, "Fusion", "TraceChannelsExtensions");
// [Extension]
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.TraceChannelsExtensions
class CORDL_TYPE TraceChannelsExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method AddChannelsFromDefines, addr 0x60e110c, size 0x4, virtual false, abstract: false, final false
static inline ::Fusion::TraceChannels AddChannelsFromDefines(::Fusion::TraceChannels  traceChannels) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TraceChannelsExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TraceChannelsExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TraceChannelsExtensions(TraceChannelsExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TraceChannelsExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TraceChannelsExtensions(TraceChannelsExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23426};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::TraceChannelsExtensions) == 0x10, "Size mismatch!");

} // namespace end def Fusion
