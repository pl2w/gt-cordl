#pragma once
// IWYU pragma private; include "System/Net/CertUsage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CertUsage)
// Forward declare root types
namespace System::Net {
struct CertUsage;
}
// Write type traits
MARK_VAL_T(::System::Net::CertUsage);
DEFINE_IL2CPP_CLASS(::System::Net::CertUsage, "System.Net", "CertUsage");
// Dependencies 
namespace System::Net {
// Is value type: true
// CS Name: System.Net.CertUsage
struct CORDL_TYPE CertUsage {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CertUsage_Unwrapped
enum struct __CertUsage_Unwrapped : int32_t {
__E_MatchTypeAnd = static_cast<int32_t>(0x0),
__E_MatchTypeOr = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CertUsage_Unwrapped () const noexcept {
return static_cast<__CertUsage_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CertUsage() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CertUsage(int32_t  value__) noexcept;

/// @brief Field MatchTypeAnd value: I32(0)
static ::System::Net::CertUsage const MatchTypeAnd;

/// @brief Field MatchTypeOr value: I32(1)
static ::System::Net::CertUsage const MatchTypeOr;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10524};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::CertUsage, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Net::CertUsage) == 0x4, "Size mismatch!");

} // namespace end def System::Net
