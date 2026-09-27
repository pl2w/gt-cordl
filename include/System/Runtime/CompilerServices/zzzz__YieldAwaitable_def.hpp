#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/YieldAwaitable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(YieldAwaitable)
namespace GlobalNamespace {
struct YieldAwaitable_YieldAwaiter;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
struct YieldAwaitable;
}
// Write type traits
MARK_VAL_T(::System::Runtime::CompilerServices::YieldAwaitable);
DEFINE_IL2CPP_CLASS(::System::Runtime::CompilerServices::YieldAwaitable, "System.Runtime.CompilerServices", "YieldAwaitable");
// [IsReadOnly]
// Dependencies 
namespace System::Runtime::CompilerServices {
// Is value type: true
// CS Name: System.Runtime.CompilerServices.YieldAwaitable
#pragma pack(push, 0)
struct CORDL_TYPE YieldAwaitable {
public:
// Declarations
using YieldAwaiter = ::GlobalNamespace::YieldAwaitable_YieldAwaiter;

/// @brief Method GetAwaiter, addr 0xa1e7ef0, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::YieldAwaitable_YieldAwaiter GetAwaiter() ;

// Ctor Parameters []
// @brief default ctor
constexpr YieldAwaitable() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6546};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::System::Runtime::CompilerServices::YieldAwaitable) == 0x1, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
