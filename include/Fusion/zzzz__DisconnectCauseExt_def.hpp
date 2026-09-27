#pragma once
// IWYU pragma private; include "Fusion/DisconnectCauseExt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DisconnectCauseExt)
namespace Fusion::Photon::Realtime {
struct DisconnectCause;
}
namespace Fusion {
struct ShutdownReason;
}
// Forward declare root types
namespace Fusion {
class DisconnectCauseExt;
}
// Write type traits
MARK_REF_T(::Fusion::DisconnectCauseExt*);
DEFINE_IL2CPP_CLASS(::Fusion::DisconnectCauseExt*, "Fusion", "DisconnectCauseExt");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.DisconnectCauseExt
class CORDL_TYPE DisconnectCauseExt : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertToShutdownReason, addr 0x5f70c48, size 0x24, virtual false, abstract: false, final false
static inline ::Fusion::ShutdownReason ConvertToShutdownReason(::Fusion::Photon::Realtime::DisconnectCause  disconnectCause) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DisconnectCauseExt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DisconnectCauseExt", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DisconnectCauseExt(DisconnectCauseExt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DisconnectCauseExt", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DisconnectCauseExt(DisconnectCauseExt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18855};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::DisconnectCauseExt) == 0x10, "Size mismatch!");

} // namespace end def Fusion
