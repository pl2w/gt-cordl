#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/Async/OperationTimeoutException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(OperationTimeoutException)
// Forward declare root types
namespace Fusion::Photon::Realtime::Async {
class OperationTimeoutException;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::Async::OperationTimeoutException*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::Async::OperationTimeoutException*, "Fusion.Photon.Realtime.Async", "OperationTimeoutException");
// Dependencies System.Exception
namespace Fusion::Photon::Realtime::Async {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.Async.OperationTimeoutException
class CORDL_TYPE OperationTimeoutException : public ::System::Exception {
public:
// Declarations
static inline ::Fusion::Photon::Realtime::Async::OperationTimeoutException* New_ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x5f6936c, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OperationTimeoutException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OperationTimeoutException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OperationTimeoutException(OperationTimeoutException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OperationTimeoutException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OperationTimeoutException(OperationTimeoutException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28125};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Photon::Realtime::Async::OperationTimeoutException) == 0x90, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime::Async
