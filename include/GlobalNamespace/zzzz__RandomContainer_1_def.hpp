#pragma once
// IWYU pragma private; include "GlobalNamespace/RandomContainer_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SRand_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RandomContainer_1)
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class RandomContainer_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::RandomContainer_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::RandomContainer_1, "", "RandomContainer`1");
// Dependencies SRand, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: RandomContainer`1<T>
class CORDL_TYPE RandomContainer_1 : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field _lastItem, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastItem, put=__cordl_internal_set__lastItem)) T  _lastItem;

/// @brief Field _lastItemIndex, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastItemIndex, put=__cordl_internal_set__lastItemIndex)) int32_t  _lastItemIndex;

/// @brief Field _rnd, offset 0x3c, size 0x8 
 __declspec(property(get=__cordl_internal_get__rnd, put=__cordl_internal_set__rnd)) ::GlobalNamespace::SRand  _rnd;

/// @brief Field _seed, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__seed, put=__cordl_internal_set__seed)) int32_t  _seed;

/// @brief Field distinct, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get_distinct, put=__cordl_internal_set_distinct)) bool  distinct;

/// @brief Field items, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_items, put=__cordl_internal_set_items)) ::ArrayW<T>  items;

 __declspec(property(get=get_lastItem)) T  lastItem;

 __declspec(property(get=get_lastItemIndex)) int32_t  lastItemIndex;

/// @brief Field seed, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_seed, put=__cordl_internal_set_seed)) int32_t  seed;

/// @brief Field staticSeed, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_staticSeed, put=__cordl_internal_set_staticSeed)) bool  staticSeed;

/// @brief Method Awake, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline T GetItem(int32_t  index) ;

static inline ::GlobalNamespace::RandomContainer_1<T>* New_ctor() ;

/// @brief Method NextItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline T NextItem() ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ResetRandom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ResetRandom(::System::Nullable_1<int32_t>  seedValue) ;

constexpr T const& __cordl_internal_get__lastItem() const;

constexpr T& __cordl_internal_get__lastItem() ;

constexpr int32_t const& __cordl_internal_get__lastItemIndex() const;

constexpr int32_t& __cordl_internal_get__lastItemIndex() ;

constexpr ::GlobalNamespace::SRand const& __cordl_internal_get__rnd() const;

constexpr ::GlobalNamespace::SRand& __cordl_internal_get__rnd() ;

constexpr int32_t const& __cordl_internal_get__seed() const;

constexpr int32_t& __cordl_internal_get__seed() ;

constexpr bool const& __cordl_internal_get_distinct() const;

constexpr bool& __cordl_internal_get_distinct() ;

constexpr ::ArrayW<T> const& __cordl_internal_get_items() const;

constexpr ::ArrayW<T>& __cordl_internal_get_items() ;

constexpr int32_t const& __cordl_internal_get_seed() const;

constexpr int32_t& __cordl_internal_get_seed() ;

constexpr bool const& __cordl_internal_get_staticSeed() const;

constexpr bool& __cordl_internal_get_staticSeed() ;

constexpr void __cordl_internal_set__lastItem(T  value) ;

constexpr void __cordl_internal_set__lastItemIndex(int32_t  value) ;

constexpr void __cordl_internal_set__rnd(::GlobalNamespace::SRand  value) ;

constexpr void __cordl_internal_set__seed(int32_t  value) ;

constexpr void __cordl_internal_set_distinct(bool  value) ;

constexpr void __cordl_internal_set_items(::ArrayW<T>  value) ;

constexpr void __cordl_internal_set_seed(int32_t  value) ;

constexpr void __cordl_internal_set_staticSeed(bool  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_lastItem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_lastItem() ;

/// @brief Method get_lastItemIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_lastItemIndex() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RandomContainer_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RandomContainer_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RandomContainer_1(RandomContainer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RandomContainer_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RandomContainer_1(RandomContainer_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3347};

/// @brief Field items, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<T>  ___items;

/// @brief Field seed, offset: 0x20, size: 0x4, def value: None
 int32_t  ___seed;

/// @brief Field staticSeed, offset: 0x24, size: 0x1, def value: None
 bool  ___staticSeed;

/// @brief Field distinct, offset: 0x25, size: 0x1, def value: None
 bool  ___distinct;

/// [Space]
/// @brief Field _seed, offset: 0x28, size: 0x4, def value: None
 int32_t  ____seed;

/// @brief Field _lastItem, offset: 0x30, size: 0x8, def value: None
 T  ____lastItem;

/// @brief Field _lastItemIndex, offset: 0x38, size: 0x4, def value: None
 int32_t  ____lastItemIndex;

/// @brief Field _rnd, offset: 0x3c, size: 0x8, def value: None
 ::GlobalNamespace::SRand  ____rnd;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
