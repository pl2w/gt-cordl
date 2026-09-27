#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/ObjectPool_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ObjectPool_1)
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
template<typename T>
class ObjectPool_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Unity::XR::CoreUtils::ObjectPool_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Unity::XR::CoreUtils::ObjectPool_1, "Unity.XR.CoreUtils", "ObjectPool`1");
// Dependencies System.Object
namespace Unity::XR::CoreUtils {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Unity.XR.CoreUtils.ObjectPool`1<T>
class CORDL_TYPE ObjectPool_1 : public ::System::Object {
public:
// Declarations
/// @brief Field PooledQueue, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_PooledQueue, put=__cordl_internal_set_PooledQueue)) ::System::Collections::Generic::Queue_1<T>*  PooledQueue;

/// @brief Method ClearInstance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ClearInstance(T  instance) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline T Get() ;

static inline ::Unity::XR::CoreUtils::ObjectPool_1<T>* New_ctor() ;

/// @brief Method Recycle, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Recycle(T  instance) ;

constexpr ::System::Collections::Generic::Queue_1<T>* const& __cordl_internal_get_PooledQueue() const;

constexpr ::System::Collections::Generic::Queue_1<T>*& __cordl_internal_get_PooledQueue() ;

constexpr void __cordl_internal_set_PooledQueue(::System::Collections::Generic::Queue_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectPool_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectPool_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectPool_1(ObjectPool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectPool_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectPool_1(ObjectPool_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30423};

/// @brief Field PooledQueue, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<T>*  ___PooledQueue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::CoreUtils
