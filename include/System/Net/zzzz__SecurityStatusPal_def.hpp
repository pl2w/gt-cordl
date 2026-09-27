#pragma once
// IWYU pragma private; include "System/Net/SecurityStatusPal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__SecurityStatusPalErrorCode_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SecurityStatusPal)
namespace System::Net {
struct SecurityStatusPalErrorCode;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Net {
struct SecurityStatusPal;
}
// Write type traits
MARK_VAL_T(::System::Net::SecurityStatusPal);
DEFINE_IL2CPP_CLASS(::System::Net::SecurityStatusPal, "System.Net", "SecurityStatusPal");
// [IsReadOnly]
// Dependencies System.Net.SecurityStatusPalErrorCode
namespace System::Net {
// Is value type: true
// CS Name: System.Net.SecurityStatusPal
struct CORDL_TYPE SecurityStatusPal {
public:
// Declarations
/// @brief Method ToString, addr 0xadacf7c, size 0x204, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0xadabed4, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::Net::SecurityStatusPalErrorCode  errorCode, ::System::Exception*  exception) ;

// Ctor Parameters []
// @brief default ctor
constexpr SecurityStatusPal() ;

// Ctor Parameters [CppParam { name: "ErrorCode", ty: "::System::Net::SecurityStatusPalErrorCode", modifiers: "", def_value: None, comment: None }, CppParam { name: "Exception", ty: "::System::Exception*", modifiers: "", def_value: None, comment: None }]
constexpr SecurityStatusPal(::System::Net::SecurityStatusPalErrorCode  ErrorCode, ::System::Exception*  Exception) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10397};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field ErrorCode, offset: 0x0, size: 0x4, def value: None
 ::System::Net::SecurityStatusPalErrorCode  ErrorCode;

/// @brief Field Exception, offset: 0x8, size: 0x8, def value: None
 ::System::Exception*  Exception;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::SecurityStatusPal, ErrorCode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::SecurityStatusPal, Exception) == 0x8, "Offset mismatch!");

static_assert(sizeof(::System::Net::SecurityStatusPal) == 0x10, "Size mismatch!");

} // namespace end def System::Net
