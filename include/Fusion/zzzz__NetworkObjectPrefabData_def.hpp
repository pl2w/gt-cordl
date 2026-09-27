#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectPrefabData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__Behaviour_def.hpp"
#include "Fusion/zzzz__NetworkObjectGuid_def.hpp"
CORDL_MODULE_EXPORT(NetworkObjectPrefabData)
// Forward declare root types
namespace Fusion {
class NetworkObjectPrefabData;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkObjectPrefabData*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObjectPrefabData*, "Fusion", "NetworkObjectPrefabData");
// Dependencies Fusion.Behaviour, Fusion.NetworkObjectGuid
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkObjectPrefabData
class CORDL_TYPE NetworkObjectPrefabData : public ::Fusion::Behaviour {
public:
// Declarations
/// @brief Field Guid, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_Guid, put=__cordl_internal_set_Guid)) ::Fusion::NetworkObjectGuid  Guid;

static inline ::Fusion::NetworkObjectPrefabData* New_ctor() ;

/// @brief Method OnValidate, addr 0x5fce2e4, size 0xb4, virtual false, abstract: false, final false
inline void OnValidate() ;

constexpr ::Fusion::NetworkObjectGuid const& __cordl_internal_get_Guid() const;

constexpr ::Fusion::NetworkObjectGuid& __cordl_internal_get_Guid() ;

constexpr void __cordl_internal_set_Guid(::Fusion::NetworkObjectGuid  value) ;

/// @brief Method .ctor, addr 0x5fce398, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectPrefabData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectPrefabData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkObjectPrefabData(NetworkObjectPrefabData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectPrefabData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkObjectPrefabData(NetworkObjectPrefabData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19173};

/// @brief Field Guid, offset: 0x20, size: 0x10, def value: None
 ::Fusion::NetworkObjectGuid  ___Guid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkObjectPrefabData, ___Guid) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkObjectPrefabData) == 0x30, "Size mismatch!");

} // namespace end def Fusion
