#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectGuidUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkObjectGuidUtils)
// Forward declare root types
namespace Fusion {
class NetworkObjectGuidUtils;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkObjectGuidUtils*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObjectGuidUtils*, "Fusion", "NetworkObjectGuidUtils");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkObjectGuidUtils
class CORDL_TYPE NetworkObjectGuidUtils : public ::System::Object {
public:
// Declarations
/// @brief Method CopyAndMangleGuid, addr 0x5faa81c, size 0x84, virtual false, abstract: false, final false
static inline void CopyAndMangleGuid(uint8_t*  src, uint8_t*  dst) ;

/// @brief Method MangleGuidBytes, addr 0x5fab250, size 0x44, virtual false, abstract: false, final false
static inline void MangleGuidBytes(uint8_t*  bytes) ;

static inline ::Fusion::NetworkObjectGuidUtils* New_ctor() ;

/// @brief Method .ctor, addr 0x5fab294, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectGuidUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectGuidUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkObjectGuidUtils(NetworkObjectGuidUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectGuidUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkObjectGuidUtils(NetworkObjectGuidUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19134};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkObjectGuidUtils) == 0x10, "Size mismatch!");

} // namespace end def Fusion
