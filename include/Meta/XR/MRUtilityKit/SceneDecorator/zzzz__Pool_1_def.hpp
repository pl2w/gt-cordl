#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/Pool_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Pool`1_Callbacks_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Pool`1_Entry_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Pool_1)
namespace GlobalNamespace {
template<typename T>
struct Pool_1_Callbacks;
}
namespace GlobalNamespace {
template<typename T>
struct Pool_1_Entry;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit::SceneDecorator {
template<typename T>
class Pool_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Meta::XR::MRUtilityKit::SceneDecorator::Pool_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::XR::MRUtilityKit::SceneDecorator::Pool_1, "Meta.XR.MRUtilityKit.SceneDecorator", "Pool`1");
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies Meta.XR.MRUtilityKit.SceneDecorator.Pool`1::Callbacks<T>, Meta.XR.MRUtilityKit.SceneDecorator.Pool`1::Entry<T>, System.Object
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.Pool`1<T>
class CORDL_TYPE Pool_1 : public ::System::Object {
public:
// Declarations
using Callbacks = ::GlobalNamespace::Pool_1_Callbacks<T>;

using Entry = ::GlobalNamespace::Pool_1_Entry<T>;

 __declspec(property(get=get_CountActive)) int32_t  CountActive;

 __declspec(property(get=get_CountAll)) int32_t  CountAll;

 __declspec(property(get=get_CountInactive)) int32_t  CountInactive;

/// @brief Field callbacks, offset 0x28, size 0x18 
 __declspec(property(get=__cordl_internal_get_callbacks, put=__cordl_internal_set_callbacks)) ::GlobalNamespace::Pool_1_Callbacks<T>  callbacks;

/// @brief Field index, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Field indices, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_indices, put=__cordl_internal_set_indices)) ::System::Collections::Generic::Dictionary_2<T,int32_t>*  indices;

/// @brief Field pool, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_pool, put=__cordl_internal_set_pool)) ::ArrayW<::GlobalNamespace::Pool_1_Entry<T>>  pool;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline T Get() ;

static inline ::Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<T>* New_ctor() ;

/// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Release(T  t) ;

/// @brief Method Swap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Swap(int32_t  i0, int32_t  i1) ;

constexpr ::GlobalNamespace::Pool_1_Callbacks<T> const& __cordl_internal_get_callbacks() const;

constexpr ::GlobalNamespace::Pool_1_Callbacks<T>& __cordl_internal_get_callbacks() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr ::System::Collections::Generic::Dictionary_2<T,int32_t>* const& __cordl_internal_get_indices() const;

constexpr ::System::Collections::Generic::Dictionary_2<T,int32_t>*& __cordl_internal_get_indices() ;

constexpr ::ArrayW<::GlobalNamespace::Pool_1_Entry<T>> const& __cordl_internal_get_pool() const;

constexpr ::ArrayW<::GlobalNamespace::Pool_1_Entry<T>>& __cordl_internal_get_pool() ;

constexpr void __cordl_internal_set_callbacks(::GlobalNamespace::Pool_1_Callbacks<T>  value) ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

constexpr void __cordl_internal_set_indices(::System::Collections::Generic::Dictionary_2<T,int32_t>*  value) ;

constexpr void __cordl_internal_set_pool(::ArrayW<::GlobalNamespace::Pool_1_Entry<T>>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CountActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_CountActive() ;

/// @brief Method get_CountAll, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_CountAll() ;

/// @brief Method get_CountInactive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_CountInactive() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Pool_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Pool_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Pool_1(Pool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Pool_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Pool_1(Pool_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25956};

/// @brief Field pool, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::Pool_1_Entry<T>>  ___pool;

/// @brief Field indices, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<T,int32_t>*  ___indices;

/// @brief Field index, offset: 0x20, size: 0x4, def value: None
 int32_t  ___index;

/// @brief Field callbacks, offset: 0x28, size: 0x18, def value: None
 ::GlobalNamespace::Pool_1_Callbacks<T>  ___callbacks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
