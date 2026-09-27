#pragma once
// IWYU pragma private; include "GlobalNamespace/WorldTargetItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WorldTargetItem)
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class TransferrableObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class WorldTargetItem;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::WorldTargetItem*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WorldTargetItem*, "", "WorldTargetItem");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: WorldTargetItem
class CORDL_TYPE WorldTargetItem : public ::System::Object {
public:
// Declarations
/// @brief Field itemIdx, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_itemIdx, put=__cordl_internal_set_itemIdx)) int32_t  itemIdx;

/// @brief Field owner, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_owner, put=__cordl_internal_set_owner)) ::GlobalNamespace::NetPlayer*  owner;

/// @brief Field targetObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetObject, put=__cordl_internal_set_targetObject)) ::UnityW<::UnityEngine::Transform>  targetObject;

/// @brief Field transferrableObject, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_transferrableObject, put=__cordl_internal_set_transferrableObject)) ::UnityW<::GlobalNamespace::TransferrableObject>  transferrableObject;

/// [CanBeNull]
/// @brief Method GenerateTargetFromPlayerAndID, addr 0x573e4e0, size 0x154, virtual false, abstract: false, final false
static inline ::GlobalNamespace::WorldTargetItem* GenerateTargetFromPlayerAndID(::GlobalNamespace::NetPlayer*  owner, int32_t  itemIdx) ;

/// @brief Method GenerateTargetFromWorldSharableItem, addr 0x573e6d8, size 0x70, virtual false, abstract: false, final false
static inline ::GlobalNamespace::WorldTargetItem* GenerateTargetFromWorldSharableItem(::GlobalNamespace::NetPlayer*  owner, int32_t  itemIdx, ::UnityEngine::Transform*  transform) ;

/// @brief Method IsValid, addr 0x573e4bc, size 0x24, virtual false, abstract: false, final false
inline bool IsValid() ;

static inline ::GlobalNamespace::WorldTargetItem* New_ctor(::GlobalNamespace::NetPlayer*  owner, int32_t  itemIdx, ::UnityEngine::Transform*  transform) ;

/// @brief Method ToString, addr 0x573e748, size 0x7c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get_itemIdx() const;

constexpr int32_t& __cordl_internal_get_itemIdx() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_owner() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_owner() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_targetObject() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_targetObject() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& __cordl_internal_get_transferrableObject() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& __cordl_internal_get_transferrableObject() ;

constexpr void __cordl_internal_set_itemIdx(int32_t  value) ;

constexpr void __cordl_internal_set_owner(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_targetObject(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_transferrableObject(::UnityW<::GlobalNamespace::TransferrableObject>  value) ;

/// @brief Method .ctor, addr 0x573e634, size 0xa4, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::NetPlayer*  owner, int32_t  itemIdx, ::UnityEngine::Transform*  transform) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WorldTargetItem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WorldTargetItem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WorldTargetItem(WorldTargetItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WorldTargetItem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WorldTargetItem(WorldTargetItem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1238};

/// @brief Field owner, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___owner;

/// @brief Field itemIdx, offset: 0x18, size: 0x4, def value: None
 int32_t  ___itemIdx;

/// @brief Field targetObject, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___targetObject;

/// @brief Field transferrableObject, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableObject>  ___transferrableObject;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WorldTargetItem, ___owner) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldTargetItem, ___itemIdx) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldTargetItem, ___targetObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldTargetItem, ___transferrableObject) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WorldTargetItem) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
