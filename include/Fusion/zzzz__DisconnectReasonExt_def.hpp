#pragma once
// IWYU pragma private; include "Fusion/DisconnectReasonExt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DisconnectReasonExt)
namespace Fusion::Protocol {
struct DisconnectReason;
}
namespace Fusion {
struct ShutdownReason;
}
// Forward declare root types
namespace Fusion {
class DisconnectReasonExt;
}
// Write type traits
MARK_REF_T(::Fusion::DisconnectReasonExt*);
DEFINE_IL2CPP_CLASS(::Fusion::DisconnectReasonExt*, "Fusion", "DisconnectReasonExt");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.DisconnectReasonExt
class CORDL_TYPE DisconnectReasonExt : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertToShutdownReason, addr 0x5f70f90, size 0x2c, virtual false, abstract: false, final false
static inline ::Fusion::ShutdownReason ConvertToShutdownReason(::Fusion::Protocol::DisconnectReason  disconnectCause) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DisconnectReasonExt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DisconnectReasonExt", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DisconnectReasonExt(DisconnectReasonExt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DisconnectReasonExt", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DisconnectReasonExt(DisconnectReasonExt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18856};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::DisconnectReasonExt) == 0x10, "Size mismatch!");

} // namespace end def Fusion
