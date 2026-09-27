#pragma once
// IWYU pragma private; include "GlobalNamespace/LoopingArray_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/zzzz__ObjectPool_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LoopingArray_1)
namespace GlobalNamespace {
template<typename T>
class LoopingArray_1_Pool;
}
namespace GorillaTag {
class ObjectPoolEvents;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class LoopingArray_1;
}
namespace GlobalNamespace {
template<typename T>
class LoopingArray_1_Pool;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::LoopingArray_1);
MARK_GEN_REF_T_PTR(::GlobalNamespace::LoopingArray_1_Pool);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::LoopingArray_1, "", "LoopingArray`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::LoopingArray_1_Pool, "", "LoopingArray`1/Pool");
// [DefaultMember("Item")]
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: LoopingArray`1<T>
class CORDL_TYPE LoopingArray_1 : public ::System::Object {
public:
// Declarations
using Pool = ::GlobalNamespace::LoopingArray_1_Pool<T>;

 __declspec(property(get=get_CurrentIndex)) int32_t  CurrentIndex;

 __declspec(property(get=get_Item, put=set_Item)) T  Item[];

 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Field m_array, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_array, put=__cordl_internal_set_m_array)) ::ArrayW<T>  m_array;

/// @brief Field m_currentIndex, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_currentIndex, put=__cordl_internal_set_m_currentIndex)) int32_t  m_currentIndex;

/// @brief Field m_length, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_length, put=__cordl_internal_set_m_length)) int32_t  m_length;

/// @brief Convert operator to "::GorillaTag::ObjectPoolEvents"
constexpr operator  ::GorillaTag::ObjectPoolEvents*() noexcept;

/// @brief Method AddAndIncrement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t AddAndIncrement(/* [IsReadOnly] */ ::by_ref<T>  value) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method GorillaTag.ObjectPoolEvents.OnReturned, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void GorillaTag_ObjectPoolEvents_OnReturned() ;

/// @brief Method GorillaTag.ObjectPoolEvents.OnTaken, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void GorillaTag_ObjectPoolEvents_OnTaken() ;

/// @brief Method IncrementAndAdd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t IncrementAndAdd(/* [IsReadOnly] */ ::by_ref<T>  value) ;

static inline ::GlobalNamespace::LoopingArray_1<T>* New_ctor() ;

static inline ::GlobalNamespace::LoopingArray_1<T>* New_ctor(int32_t  capicity) ;

constexpr ::ArrayW<T> const& __cordl_internal_get_m_array() const;

constexpr ::ArrayW<T>& __cordl_internal_get_m_array() ;

constexpr int32_t const& __cordl_internal_get_m_currentIndex() const;

constexpr int32_t& __cordl_internal_get_m_currentIndex() ;

constexpr int32_t const& __cordl_internal_get_m_length() const;

constexpr int32_t& __cordl_internal_get_m_length() ;

constexpr void __cordl_internal_set_m_array(::ArrayW<T>  value) ;

constexpr void __cordl_internal_set_m_currentIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_length(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capicity) ;

/// @brief Method get_CurrentIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_CurrentIndex() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Item(int32_t  index) ;

/// @brief Method get_Length, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Convert to "::GorillaTag::ObjectPoolEvents"
constexpr ::GorillaTag::ObjectPoolEvents* i___GorillaTag__ObjectPoolEvents() noexcept;

/// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, T  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopingArray_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopingArray_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopingArray_1(LoopingArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopingArray_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopingArray_1(LoopingArray_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3513};

/// @brief Field m_length, offset: 0x10, size: 0x4, def value: None
 int32_t  ___m_length;

/// @brief Field m_currentIndex, offset: 0x14, size: 0x4, def value: None
 int32_t  ___m_currentIndex;

/// @brief Field m_array, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<T>  ___m_array;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Dependencies GorillaTag.ObjectPool`1<T>
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: LoopingArray`1/Pool<T>
class CORDL_TYPE LoopingArray_1_Pool : public ::GorillaTag::ObjectPool_1<::GlobalNamespace::LoopingArray_1<T>*> {
public:
// Declarations
/// @brief Field m_size, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_size, put=__cordl_internal_set_m_size)) int32_t  m_size;

/// @brief Method CreateInstance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::GlobalNamespace::LoopingArray_1<T>* CreateInstance() ;

static inline ::GlobalNamespace::LoopingArray_1_Pool<T>* New_ctor(int32_t  amount) ;

static inline ::GlobalNamespace::LoopingArray_1_Pool<T>* New_ctor(int32_t  size, int32_t  amount) ;

static inline ::GlobalNamespace::LoopingArray_1_Pool<T>* New_ctor(int32_t  size, int32_t  initialAmount, int32_t  maxAmount) ;

constexpr int32_t const& __cordl_internal_get_m_size() const;

constexpr int32_t& __cordl_internal_get_m_size() ;

constexpr void __cordl_internal_set_m_size(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  amount) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  size, int32_t  amount) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  size, int32_t  initialAmount, int32_t  maxAmount) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopingArray_1_Pool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopingArray_1_Pool", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopingArray_1_Pool(LoopingArray_1_Pool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopingArray_1_Pool", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopingArray_1_Pool(LoopingArray_1_Pool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3512};

/// @brief Field m_size, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___m_size;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
