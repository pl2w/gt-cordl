#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/Async/DisconnectException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Photon/Realtime/zzzz__DisconnectCause_def.hpp"
#include "System/zzzz__Exception_def.hpp"
CORDL_MODULE_EXPORT(DisconnectException)
namespace Fusion::Photon::Realtime {
struct DisconnectCause;
}
// Forward declare root types
namespace Fusion::Photon::Realtime::Async {
class DisconnectException;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::Async::DisconnectException*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::Async::DisconnectException*, "Fusion.Photon.Realtime.Async", "DisconnectException");
// Dependencies Fusion.Photon.Realtime.DisconnectCause, System.Exception
namespace Fusion::Photon::Realtime::Async {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.Async.DisconnectException
class CORDL_TYPE DisconnectException : public ::System::Exception {
public:
// Declarations
/// @brief Field Cause, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Cause, put=__cordl_internal_set_Cause)) ::Fusion::Photon::Realtime::DisconnectCause  Cause;

static inline ::Fusion::Photon::Realtime::Async::DisconnectException* New_ctor(::Fusion::Photon::Realtime::DisconnectCause  cause) ;

constexpr ::Fusion::Photon::Realtime::DisconnectCause const& __cordl_internal_get_Cause() const;

constexpr ::Fusion::Photon::Realtime::DisconnectCause& __cordl_internal_get_Cause() ;

constexpr void __cordl_internal_set_Cause(::Fusion::Photon::Realtime::DisconnectCause  value) ;

/// @brief Method .ctor, addr 0x5f69124, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::Fusion::Photon::Realtime::DisconnectCause  cause) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DisconnectException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DisconnectException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DisconnectException(DisconnectException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DisconnectException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DisconnectException(DisconnectException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28121};

/// @brief Field Cause, offset: 0x8c, size: 0x4, def value: None
 ::Fusion::Photon::Realtime::DisconnectCause  ___Cause;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::Async::DisconnectException, ___Cause) == 0x8c, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::Async::DisconnectException) == 0x90, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime::Async
