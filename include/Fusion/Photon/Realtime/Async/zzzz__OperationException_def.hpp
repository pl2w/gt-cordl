#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/Async/OperationException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OperationException)
// Forward declare root types
namespace Fusion::Photon::Realtime::Async {
class OperationException;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::Async::OperationException*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::Async::OperationException*, "Fusion.Photon.Realtime.Async", "OperationException");
// Dependencies System.Exception
namespace Fusion::Photon::Realtime::Async {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.Async.OperationException
class CORDL_TYPE OperationException : public ::System::Exception {
public:
// Declarations
/// @brief Field ErrorCode, offset 0x8c, size 0x2 
 __declspec(property(get=__cordl_internal_get_ErrorCode, put=__cordl_internal_set_ErrorCode)) int16_t  ErrorCode;

static inline ::Fusion::Photon::Realtime::Async::OperationException* New_ctor(int16_t  errorCode, ::StringW  message) ;

constexpr int16_t const& __cordl_internal_get_ErrorCode() const;

constexpr int16_t& __cordl_internal_get_ErrorCode() ;

constexpr void __cordl_internal_set_ErrorCode(int16_t  value) ;

/// @brief Method .ctor, addr 0x5f6923c, size 0xc8, virtual false, abstract: false, final false
inline void _ctor(int16_t  errorCode, ::StringW  message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OperationException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OperationException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OperationException(OperationException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OperationException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OperationException(OperationException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28123};

/// @brief Field ErrorCode, offset: 0x8c, size: 0x2, def value: None
 int16_t  ___ErrorCode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::Async::OperationException, ___ErrorCode) == 0x8c, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::Async::OperationException) == 0x90, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime::Async
