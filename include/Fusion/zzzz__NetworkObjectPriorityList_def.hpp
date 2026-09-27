#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectPriorityList.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkObjectConnectionDataList_def.hpp"
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkObjectPriorityList)
namespace Fusion {
struct NetworkObjectConnectionDataList;
}
namespace Fusion {
class NetworkObjectConnectionData;
}
namespace Fusion {
class NetworkObjectMeta;
}
// Forward declare root types
namespace Fusion {
class NetworkObjectPriorityList;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkObjectPriorityList*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObjectPriorityList*, "Fusion", "NetworkObjectPriorityList");
// Dependencies Fusion.NetworkObjectConnectionDataList, Fusion.PlayerRef, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkObjectPriorityList
class CORDL_TYPE NetworkObjectPriorityList : public ::System::Object {
public:
// Declarations
/// @brief Field Idle, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get_Idle, put=__cordl_internal_set_Idle)) ::Fusion::NetworkObjectConnectionDataList  Idle;

/// @brief Field Levels, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Levels, put=__cordl_internal_set_Levels)) ::ArrayW<::Fusion::NetworkObjectConnectionDataList>  Levels;

/// @brief Field Player, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Player, put=__cordl_internal_set_Player)) ::Fusion::PlayerRef  Player;

/// @brief Method Add, addr 0x5fcc2c8, size 0xa8, virtual false, abstract: false, final false
inline void Add(::Fusion::NetworkObjectConnectionData*  item) ;

/// @brief Method GetLevelList, addr 0x5fcbdf8, size 0x40, virtual false, abstract: false, final false
inline ::Fusion::NetworkObjectConnectionDataList GetLevelList(int32_t  level) ;

/// @brief Method IncreasePriorities, addr 0x5fcbe38, size 0x248, virtual false, abstract: false, final false
inline void IncreasePriorities() ;

static inline ::Fusion::NetworkObjectPriorityList* New_ctor() ;

/// @brief Method Remove, addr 0x5fcc42c, size 0xd8, virtual false, abstract: false, final false
inline void Remove(::Fusion::NetworkObjectConnectionData*  item) ;

/// @brief Method RemoveSent, addr 0x5fcc370, size 0xbc, virtual false, abstract: false, final false
inline void RemoveSent(::Fusion::NetworkObjectConnectionData*  item) ;

/// @brief Method SetActive, addr 0x5fcc1a0, size 0x128, virtual false, abstract: false, final false
inline void SetActive(::Fusion::NetworkObjectConnectionData*  item, ::Fusion::NetworkObjectMeta*  meta) ;

/// @brief Method SetIdle, addr 0x5fcc080, size 0x120, virtual false, abstract: false, final false
inline void SetIdle(::Fusion::NetworkObjectConnectionData*  item) ;

constexpr ::Fusion::NetworkObjectConnectionDataList const& __cordl_internal_get_Idle() const;

constexpr ::Fusion::NetworkObjectConnectionDataList& __cordl_internal_get_Idle() ;

constexpr ::ArrayW<::Fusion::NetworkObjectConnectionDataList> const& __cordl_internal_get_Levels() const;

constexpr ::ArrayW<::Fusion::NetworkObjectConnectionDataList>& __cordl_internal_get_Levels() ;

constexpr ::Fusion::PlayerRef const& __cordl_internal_get_Player() const;

constexpr ::Fusion::PlayerRef& __cordl_internal_get_Player() ;

constexpr void __cordl_internal_set_Idle(::Fusion::NetworkObjectConnectionDataList  value) ;

constexpr void __cordl_internal_set_Levels(::ArrayW<::Fusion::NetworkObjectConnectionDataList>  value) ;

constexpr void __cordl_internal_set_Player(::Fusion::PlayerRef  value) ;

/// @brief Method .ctor, addr 0x5fcc504, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectPriorityList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectPriorityList", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkObjectPriorityList(NetworkObjectPriorityList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectPriorityList", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkObjectPriorityList(NetworkObjectPriorityList const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19158};

/// @brief Field Player, offset: 0x10, size: 0x4, def value: None
 ::Fusion::PlayerRef  ___Player;

/// @brief Field Idle, offset: 0x18, size: 0x18, def value: None
 ::Fusion::NetworkObjectConnectionDataList  ___Idle;

/// @brief Field Levels, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::Fusion::NetworkObjectConnectionDataList>  ___Levels;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkObjectPriorityList, ___Player) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectPriorityList, ___Idle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectPriorityList, ___Levels) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkObjectPriorityList) == 0x38, "Size mismatch!");

} // namespace end def Fusion
