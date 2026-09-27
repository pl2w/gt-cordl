#pragma once
// IWYU pragma private; include "Fusion/DynamicHeapInstance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicHeapInstance)
namespace Fusion {
struct DynamicHeap;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Fusion {
class DynamicHeapInstance;
}
// Write type traits
MARK_REF_T(::Fusion::DynamicHeapInstance*);
DEFINE_IL2CPP_CLASS(::Fusion::DynamicHeapInstance*, "Fusion", "DynamicHeapInstance");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.DynamicHeapInstance
class CORDL_TYPE DynamicHeapInstance : public ::System::Object {
public:
// Declarations
/// @brief Field _heap, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__heap, put=__cordl_internal_set__heap)) ::Fusion::DynamicHeap*  _heap;

/// @brief Method Allocate, addr 0x5f90f14, size 0x6c, virtual false, abstract: false, final false
inline void* Allocate(int32_t  size) ;

/// @brief Method AllocateArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void* AllocateArray(int32_t  length) ;

/// @brief Method AllocateArrayPointers, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void* AllocateArrayPointers(int32_t  length) ;

/// @brief Method AllocateTracked, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void* AllocateTracked(bool  root) ;

/// @brief Method AllocateTrackedArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void* AllocateTrackedArray(int32_t  length, bool  root) ;

/// @brief Method AllocateTrackedArrayPointers, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void* AllocateTrackedArrayPointers(int32_t  length, bool  root) ;

/// @brief Method Finalize, addr 0x5f90dd4, size 0xd4, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method Free, addr 0x5f90ea8, size 0x6c, virtual false, abstract: false, final false
inline void Free(void*  ptr) ;

static inline ::Fusion::DynamicHeapInstance* New_ctor(/* [ParamArray] */ ::ArrayW<::System::Type*>  types) ;

/// @brief Method VerifyArrayLength, addr 0x5f90f80, size 0x80, virtual false, abstract: false, final false
inline void VerifyArrayLength(int32_t  length) ;

constexpr ::Fusion::DynamicHeap* const& __cordl_internal_get__heap() const;

constexpr ::Fusion::DynamicHeap*& __cordl_internal_get__heap() ;

constexpr void __cordl_internal_set__heap(::Fusion::DynamicHeap*  value) ;

/// @brief Method .ctor, addr 0x5f90d58, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(/* [ParamArray] */ ::ArrayW<::System::Type*>  types) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DynamicHeapInstance() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DynamicHeapInstance", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicHeapInstance(DynamicHeapInstance && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicHeapInstance", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicHeapInstance(DynamicHeapInstance const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18956};

/// @brief Field _heap, offset: 0x10, size: 0x8, def value: None
 ::Fusion::DynamicHeap*  ____heap;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::DynamicHeapInstance, ____heap) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::DynamicHeapInstance) == 0x18, "Size mismatch!");

} // namespace end def Fusion
