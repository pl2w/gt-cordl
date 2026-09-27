#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/PoolManager_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PoolManager_2)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit::SceneDecorator {
template<typename K,typename P>
class PoolManager_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Meta::XR::MRUtilityKit::SceneDecorator::PoolManager_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::XR::MRUtilityKit::SceneDecorator::PoolManager_2, "Meta.XR.MRUtilityKit.SceneDecorator", "PoolManager`2");
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies System.Object
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// cpp template
template<typename K,typename P>
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.PoolManager`2<K,P>
class CORDL_TYPE PoolManager_2 : public ::System::Object {
public:
// Declarations
/// @brief Field pools, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_pools, put=__cordl_internal_set_pools)) ::System::Collections::Generic::Dictionary_2<K,P>*  pools;

/// @brief Method AddPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddPool(K  primitive, P  pool) ;

/// @brief Method ContainsPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool ContainsPool(K  primitive) ;

/// @brief Method GetPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline P GetPool(K  primitive) ;

static inline ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManager_2<K,P>* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<K,P>* const& __cordl_internal_get_pools() const;

constexpr ::System::Collections::Generic::Dictionary_2<K,P>*& __cordl_internal_get_pools() ;

constexpr void __cordl_internal_set_pools(::System::Collections::Generic::Dictionary_2<K,P>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PoolManager_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PoolManager_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PoolManager_2(PoolManager_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PoolManager_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PoolManager_2(PoolManager_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25957};

/// @brief Field pools, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<K,P>*  ___pools;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
