#pragma once
// IWYU pragma private; include "System/Net/ContextFlagsAdapterPal_ContextFlagMapping.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Interop_NetSecurityNative_GssFlags_def.hpp"
#include "System/Net/zzzz__ContextFlagsPal_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ContextFlagsAdapterPal_ContextFlagMapping)
namespace GlobalNamespace {
struct NetSecurityNative_Interop_GssFlags;
}
namespace System::Net {
struct ContextFlagsPal;
}
// Forward declare root types
namespace GlobalNamespace {
struct ContextFlagsAdapterPal_ContextFlagMapping;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ContextFlagsAdapterPal_ContextFlagMapping);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ContextFlagsAdapterPal_ContextFlagMapping, "System.Net", "ContextFlagsAdapterPal/ContextFlagMapping");
// [IsReadOnly]
// Dependencies Interop::NetSecurityNative::GssFlags, System.Net.ContextFlagsPal
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.ContextFlagsAdapterPal/ContextFlagMapping
struct CORDL_TYPE ContextFlagsAdapterPal_ContextFlagMapping {
public:
// Declarations
/// @brief Method .ctor, addr 0xada8264, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::NetSecurityNative_Interop_GssFlags  gssFlag, ::System::Net::ContextFlagsPal  contextFlag) ;

// Ctor Parameters []
// @brief default ctor
constexpr ContextFlagsAdapterPal_ContextFlagMapping() ;

// Ctor Parameters [CppParam { name: "GssFlags", ty: "::GlobalNamespace::NetSecurityNative_Interop_GssFlags", modifiers: "", def_value: None, comment: None }, CppParam { name: "ContextFlag", ty: "::System::Net::ContextFlagsPal", modifiers: "", def_value: None, comment: None }]
constexpr ContextFlagsAdapterPal_ContextFlagMapping(::GlobalNamespace::NetSecurityNative_Interop_GssFlags  GssFlags, ::System::Net::ContextFlagsPal  ContextFlag) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10384};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field GssFlags, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::NetSecurityNative_Interop_GssFlags  GssFlags;

/// @brief Field ContextFlag, offset: 0x4, size: 0x4, def value: None
 ::System::Net::ContextFlagsPal  ContextFlag;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ContextFlagsAdapterPal_ContextFlagMapping, GssFlags) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ContextFlagsAdapterPal_ContextFlagMapping, ContextFlag) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ContextFlagsAdapterPal_ContextFlagMapping) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
