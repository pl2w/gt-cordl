#pragma once
// IWYU pragma private; include "GorillaNetworking/CosmeticItemRegistry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CosmeticItemRegistry)
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaNetworking {
class CosmeticItemInstance;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GorillaNetworking {
class CosmeticItemRegistry;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::CosmeticItemRegistry*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CosmeticItemRegistry*, "GorillaNetworking", "CosmeticItemRegistry");
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CosmeticItemRegistry
class CORDL_TYPE CosmeticItemRegistry : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Rig)) ::UnityW<::GlobalNamespace::VRRig>  Rig;

/// @brief Field _nameToCosmeticMap, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__nameToCosmeticMap, put=__cordl_internal_set__nameToCosmeticMap)) ::System::Collections::Generic::Dictionary_2<::StringW,::GorillaNetworking::CosmeticItemInstance*>*  _nameToCosmeticMap;

/// @brief Field _nullItem, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__nullItem, put=__cordl_internal_set__nullItem)) ::UnityW<::UnityEngine::GameObject>  _nullItem;

/// @brief Field initializedCosmetics, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_initializedCosmetics, put=__cordl_internal_set_initializedCosmetics)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*  initializedCosmetics;

/// @brief Field rig, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_rig, put=__cordl_internal_set_rig)) ::UnityW<::GlobalNamespace::VRRig>  rig;

/// @brief Method Cosmetic, addr 0x5c4d53c, size 0x100, virtual false, abstract: false, final false
inline ::GorillaNetworking::CosmeticItemInstance* Cosmetic(::StringW  itemName) ;

/// @brief Method InitializeCosmetic, addr 0x5c52c24, size 0x8e4, virtual false, abstract: false, final false
inline void InitializeCosmetic(::UnityEngine::GameObject*  cosmeticGObj, bool  isOverride) ;

static inline ::GorillaNetworking::CosmeticItemRegistry* New_ctor(::GlobalNamespace::VRRig*  _rig) ;

/// @brief Method RefreshRig, addr 0x5c52b1c, size 0x18, virtual false, abstract: false, final false
inline void RefreshRig() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GorillaNetworking::CosmeticItemInstance*>* const& __cordl_internal_get__nameToCosmeticMap() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GorillaNetworking::CosmeticItemInstance*>*& __cordl_internal_get__nameToCosmeticMap() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__nullItem() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__nullItem() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_initializedCosmetics() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_initializedCosmetics() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_rig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_rig() ;

constexpr void __cordl_internal_set__nameToCosmeticMap(::System::Collections::Generic::Dictionary_2<::StringW,::GorillaNetworking::CosmeticItemInstance*>*  value) ;

constexpr void __cordl_internal_set__nullItem(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_initializedCosmetics(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value) ;

/// @brief Method .ctor, addr 0x5c52b34, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::VRRig*  _rig) ;

/// @brief Method get_Rig, addr 0x5c52b14, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::VRRig> get_Rig() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticItemRegistry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticItemRegistry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticItemRegistry(CosmeticItemRegistry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticItemRegistry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticItemRegistry(CosmeticItemRegistry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4268};

/// @brief Field _nameToCosmeticMap, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::GorillaNetworking::CosmeticItemInstance*>*  ____nameToCosmeticMap;

/// @brief Field initializedCosmetics, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*  ___initializedCosmetics;

/// @brief Field _nullItem, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____nullItem;

/// @brief Field rig, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___rig;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::CosmeticItemRegistry, ____nameToCosmeticMap) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticItemRegistry, ___initializedCosmetics) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticItemRegistry, ____nullItem) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CosmeticItemRegistry, ___rig) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::CosmeticItemRegistry) == 0x30, "Size mismatch!");

} // namespace end def GorillaNetworking
