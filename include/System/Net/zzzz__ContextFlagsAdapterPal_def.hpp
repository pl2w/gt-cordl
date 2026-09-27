#pragma once
// IWYU pragma private; include "System/Net/ContextFlagsAdapterPal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__ContextFlagsAdapterPal_ContextFlagMapping_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ContextFlagsAdapterPal)
namespace GlobalNamespace {
struct ContextFlagsAdapterPal_ContextFlagMapping;
}
namespace GlobalNamespace {
struct NetSecurityNative_Interop_GssFlags;
}
namespace System::Net {
struct ContextFlagsPal;
}
// Forward declare root types
namespace System::Net {
class ContextFlagsAdapterPal;
}
// Write type traits
MARK_REF_T(::System::Net::ContextFlagsAdapterPal*);
DEFINE_IL2CPP_CLASS(::System::Net::ContextFlagsAdapterPal*, "System.Net", "ContextFlagsAdapterPal");
// Dependencies System.Net.ContextFlagsAdapterPal::ContextFlagMapping, System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.ContextFlagsAdapterPal
class CORDL_TYPE ContextFlagsAdapterPal : public ::System::Object {
public:
// Declarations
using ContextFlagMapping = ::GlobalNamespace::ContextFlagsAdapterPal_ContextFlagMapping;

/// @brief Field s_contextFlagMapping, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_contextFlagMapping, put=setStaticF_s_contextFlagMapping)) ::ArrayW<::GlobalNamespace::ContextFlagsAdapterPal_ContextFlagMapping>  s_contextFlagMapping;

/// @brief Method GetContextFlagsPalFromInterop, addr 0xada7ff4, size 0xc8, virtual false, abstract: false, final false
static inline ::System::Net::ContextFlagsPal GetContextFlagsPalFromInterop(::GlobalNamespace::NetSecurityNative_Interop_GssFlags  gssFlags, bool  isServer) ;

/// @brief Method GetInteropFromContextFlagsPal, addr 0xada80bc, size 0xc4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::NetSecurityNative_Interop_GssFlags GetInteropFromContextFlagsPal(::System::Net::ContextFlagsPal  flags, bool  isServer) ;

static inline ::ArrayW<::GlobalNamespace::ContextFlagsAdapterPal_ContextFlagMapping> getStaticF_s_contextFlagMapping() ;

static inline void setStaticF_s_contextFlagMapping(::ArrayW<::GlobalNamespace::ContextFlagsAdapterPal_ContextFlagMapping>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ContextFlagsAdapterPal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ContextFlagsAdapterPal", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ContextFlagsAdapterPal(ContextFlagsAdapterPal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContextFlagsAdapterPal", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContextFlagsAdapterPal(ContextFlagsAdapterPal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10385};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::ContextFlagsAdapterPal) == 0x10, "Size mismatch!");

} // namespace end def System::Net
