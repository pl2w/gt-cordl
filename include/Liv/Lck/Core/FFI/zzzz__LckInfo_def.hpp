#pragma once
// IWYU pragma private; include "Liv/Lck/Core/FFI/LckInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckInfo)
namespace Liv::Lck::Core {
struct LckInfo;
}
// Forward declare root types
namespace Liv::Lck::Core::FFI {
struct LckInfo;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::Core::FFI::LckInfo);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::FFI::LckInfo, "Liv.Lck.Core.FFI", "LckInfo");
// Dependencies System.IntPtr
namespace Liv::Lck::Core::FFI {
// Is value type: true
// CS Name: Liv.Lck.Core.FFI.LckInfo
struct CORDL_TYPE LckInfo {
public:
// Declarations
/// @brief Method AllocateFromLckInfo, addr 0x9cfe4fc, size 0x18, virtual false, abstract: false, final false
static inline ::Liv::Lck::Core::FFI::LckInfo AllocateFromLckInfo(::Liv::Lck::Core::LckInfo  lckInfo) ;

/// @brief Method Free, addr 0x9d020dc, size 0x8, virtual false, abstract: false, final false
inline void Free() ;

/// @brief Method .ctor, addr 0x9d020b0, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::Liv::Lck::Core::LckInfo  lckInfo) ;

// Ctor Parameters []
// @brief default ctor
constexpr LckInfo() ;

// Ctor Parameters [CppParam { name: "Version", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "BuildNumber", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LckInfo(::System::IntPtr  Version, int32_t  BuildNumber) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31939};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Version, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  Version;

/// @brief Field BuildNumber, offset: 0x8, size: 0x4, def value: None
 int32_t  BuildNumber;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Core::FFI::LckInfo, Version) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Core::FFI::LckInfo, BuildNumber) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Core::FFI::LckInfo) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Core::FFI
