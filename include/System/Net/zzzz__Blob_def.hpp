#pragma once
// IWYU pragma private; include "System/Net/Blob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Blob)
// Forward declare root types
namespace System::Net {
struct Blob;
}
// Write type traits
MARK_VAL_T(::System::Net::Blob);
DEFINE_IL2CPP_CLASS(::System::Net::Blob, "System.Net", "Blob");
// Dependencies 
namespace System::Net {
// Is value type: true
// CS Name: System.Net.Blob
struct CORDL_TYPE Blob {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Blob() ;

// Ctor Parameters [CppParam { name: "cbSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "pBlobData", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Blob(int32_t  cbSize, int32_t  pBlobData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10541};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field cbSize, offset: 0x0, size: 0x4, def value: None
 int32_t  cbSize;

/// @brief Field pBlobData, offset: 0x4, size: 0x4, def value: None
 int32_t  pBlobData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Blob, cbSize) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::Blob, pBlobData) == 0x4, "Offset mismatch!");

static_assert(sizeof(::System::Net::Blob) == 0x8, "Size mismatch!");

} // namespace end def System::Net
