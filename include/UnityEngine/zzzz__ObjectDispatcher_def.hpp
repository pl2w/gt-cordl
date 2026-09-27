#pragma once
// IWYU pragma private; include "UnityEngine/ObjectDispatcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__TransformDispatchData_def.hpp"
#include "UnityEngine/zzzz__TypeDispatchData_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectDispatcher)
namespace GlobalNamespace {
struct ObjectDispatcher_TransformTrackingType;
}
namespace GlobalNamespace {
struct ObjectDispatcher_TypeTrackingFlags;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
class Action_6;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8>
class Action_8;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Type;
}
namespace Unity::Collections {
struct Allocator;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class ObjectDispatcher___c;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct TransformDispatchData;
}
namespace UnityEngine {
struct TypeDispatchData;
}
// Forward declare root types
namespace UnityEngine {
class ObjectDispatcher;
}
namespace UnityEngine {
class ObjectDispatcher___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::ObjectDispatcher*);
MARK_REF_T(::UnityEngine::ObjectDispatcher___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ObjectDispatcher*, "UnityEngine", "ObjectDispatcher");
DEFINE_IL2CPP_CLASS(::UnityEngine::ObjectDispatcher___c*, "UnityEngine", "ObjectDispatcher/<>c");
// [NativeHeader("Runtime/Misc/ObjectDispatcher.h")]
// [RequiredByNativeCode]
// [StaticAccessor("GetObjectDispatcher()", (UnityEngine.Bindings.StaticAccessorType)0)]
// Dependencies System.IntPtr, System.Object, Unity.Collections.Allocator, UnityEngine.Component, UnityEngine.Object, UnityEngine.TransformDispatchData, UnityEngine.TypeDispatchData
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ObjectDispatcher
class CORDL_TYPE ObjectDispatcher : public ::System::Object {
public:
// Declarations
using TransformTrackingType = ::GlobalNamespace::ObjectDispatcher_TransformTrackingType;

using TypeTrackingFlags = ::GlobalNamespace::ObjectDispatcher_TypeTrackingFlags;

using __c = ::UnityEngine::ObjectDispatcher___c;

/// @brief Field m_DispatchAllocator, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DispatchAllocator, put=__cordl_internal_set_m_DispatchAllocator)) ::Unity::Collections::Allocator  m_DispatchAllocator;

/// @brief Field m_Ptr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Ptr, put=__cordl_internal_set_m_Ptr)) ::System::IntPtr  m_Ptr;

/// @brief Field m_TransformComponentCallback, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TransformComponentCallback, put=__cordl_internal_set_m_TransformComponentCallback)) ::System::Action_1<::ArrayW<::UnityW<::UnityEngine::Component>>>*  m_TransformComponentCallback;

/// @brief Field m_TransformDataCallback, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TransformDataCallback, put=__cordl_internal_set_m_TransformDataCallback)) ::System::Action_1<::UnityEngine::TransformDispatchData>*  m_TransformDataCallback;

/// @brief Field m_TransformDispatchData, offset 0x48, size 0x60 
 __declspec(property(get=__cordl_internal_get_m_TransformDispatchData, put=__cordl_internal_set_m_TransformDispatchData)) ::UnityEngine::TransformDispatchData  m_TransformDispatchData;

/// @brief Field m_TransformedComponents, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TransformedComponents, put=__cordl_internal_set_m_TransformedComponents)) ::ArrayW<::UnityW<::UnityEngine::Component>>  m_TransformedComponents;

/// @brief Field m_TypeDataCallback, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TypeDataCallback, put=__cordl_internal_set_m_TypeDataCallback)) ::System::Action_1<::UnityEngine::TypeDispatchData>*  m_TypeDataCallback;

/// @brief Field m_TypeDispatchData, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_m_TypeDispatchData, put=__cordl_internal_set_m_TypeDispatchData)) ::UnityEngine::TypeDispatchData  m_TypeDispatchData;

/// @brief Field s_TransformDispatch, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_TransformDispatch, put=setStaticF_s_TransformDispatch)) ::System::Action_8<::System::IntPtr,::System::IntPtr,::System::IntPtr,::System::IntPtr,::System::IntPtr,::System::IntPtr,int32_t,::System::Action_1<::UnityEngine::TransformDispatchData>*>*  s_TransformDispatch;

/// @brief Field s_TypeDispatch, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_TypeDispatch, put=setStaticF_s_TypeDispatch)) ::System::Action_6<::ArrayW<::UnityW<::UnityEngine::Object>>,::System::IntPtr,::System::IntPtr,int32_t,int32_t,::System::Action_1<::UnityEngine::TypeDispatchData>*>*  s_TypeDispatch;

 __declspec(property(get=get_valid)) bool  valid;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method CreateDispatchSystemHandle, addr 0xb5d1b34, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateDispatchSystemHandle() ;

/// [ThreadSafe]
/// @brief Method DestroyDispatchSystemHandle, addr 0xb5d1ccc, size 0x3c, virtual false, abstract: false, final false
static inline void DestroyDispatchSystemHandle(::System::IntPtr  ptr) ;

/// @brief Method DispatchCallback, addr 0xb5d2130, size 0x8, virtual false, abstract: false, final false
inline void DispatchCallback(::ArrayW<::UnityEngine::Component*>  components) ;

/// @brief Method DispatchCallback, addr 0xb5d1fbc, size 0x174, virtual false, abstract: false, final false
inline void DispatchCallback(::UnityEngine::TransformDispatchData  data) ;

/// @brief Method DispatchCallback, addr 0xb5d1f08, size 0xb4, virtual false, abstract: false, final false
inline void DispatchCallback(::UnityEngine::TypeDispatchData  data) ;

/// @brief Method DispatchTransformChangesAndClear, addr 0xb5d2274, size 0xc0, virtual false, abstract: false, final false
inline void DispatchTransformChangesAndClear(::System::Type*  type, ::GlobalNamespace::ObjectDispatcher_TransformTrackingType  trackingType, ::System::Action_1<::UnityEngine::TransformDispatchData>*  callback) ;

/// @brief Method DispatchTransformDataChangesAndClear, addr 0xb5d2334, size 0x6c, virtual false, abstract: false, final false
static inline void DispatchTransformDataChangesAndClear(::System::IntPtr  ptr, ::System::Type*  type, ::GlobalNamespace::ObjectDispatcher_TransformTrackingType  trackingType, ::System::Action_8<::System::IntPtr,::System::IntPtr,::System::IntPtr,::System::IntPtr,::System::IntPtr,::System::IntPtr,int32_t,::System::Action_1<::UnityEngine::TransformDispatchData>*>*  callback, ::System::Action_1<::UnityEngine::TransformDispatchData>*  param) ;

/// @brief Method DispatchTypeChangesAndClear, addr 0xb5d2200, size 0x74, virtual false, abstract: false, final false
static inline void DispatchTypeChangesAndClear(::System::IntPtr  ptr, ::System::Type*  type, ::System::Action_6<::ArrayW<::UnityW<::UnityEngine::Object>>,::System::IntPtr,::System::IntPtr,int32_t,int32_t,::System::Action_1<::UnityEngine::TypeDispatchData>*>*  callback, bool  sortByInstanceID, bool  noScriptingArray, ::System::Action_1<::UnityEngine::TypeDispatchData>*  param) ;

/// @brief Method DispatchTypeChangesAndClear, addr 0xb5d2138, size 0xc8, virtual false, abstract: false, final false
inline void DispatchTypeChangesAndClear(::System::Type*  type, ::System::Action_1<::UnityEngine::TypeDispatchData>*  callback, bool  sortByInstanceID, bool  noScriptingArray) ;

/// @brief Method Dispose, addr 0xb5d1c68, size 0x64, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0xb5d1be4, size 0x84, virtual false, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method EnableTransformTracking, addr 0xb5d2668, size 0x54, virtual false, abstract: false, final false
static inline void EnableTransformTracking(::System::IntPtr  ptr, ::System::Type*  type, ::GlobalNamespace::ObjectDispatcher_TransformTrackingType  trackingType) ;

/// @brief Method EnableTransformTracking, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
inline void EnableTransformTracking(::GlobalNamespace::ObjectDispatcher_TransformTrackingType  trackingType) ;

/// @brief Method EnableTransformTracking, addr 0xb5d2568, size 0x100, virtual false, abstract: false, final false
inline void EnableTransformTracking(::GlobalNamespace::ObjectDispatcher_TransformTrackingType  trackingType, /* [ParamArray] */ ::ArrayW<::System::Type*>  types) ;

/// @brief Method EnableTypeTracking, addr 0xb5d2514, size 0x54, virtual false, abstract: false, final false
static inline void EnableTypeTracking(::System::IntPtr  ptr, ::System::Type*  type, ::GlobalNamespace::ObjectDispatcher_TypeTrackingFlags  typeTrackingMask) ;

/// @brief Method EnableTypeTracking, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
inline void EnableTypeTracking(::GlobalNamespace::ObjectDispatcher_TypeTrackingFlags  typeTrackingMask) ;

/// @brief Method EnableTypeTracking, addr 0xb5d2414, size 0x100, virtual false, abstract: false, final false
inline void EnableTypeTracking(::GlobalNamespace::ObjectDispatcher_TypeTrackingFlags  typeTrackingMask, /* [ParamArray] */ ::ArrayW<::System::Type*>  types) ;

/// @brief Method Finalize, addr 0xb5d1b5c, size 0x88, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetTransformChangesAndClear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
inline ::UnityEngine::TransformDispatchData GetTransformChangesAndClear(::GlobalNamespace::ObjectDispatcher_TransformTrackingType  trackingType, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method GetTransformChangesAndClear, addr 0xb5d23dc, size 0x38, virtual false, abstract: false, final false
inline ::UnityEngine::TransformDispatchData GetTransformChangesAndClear(::System::Type*  type, ::GlobalNamespace::ObjectDispatcher_TransformTrackingType  trackingType, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method GetTypeChangesAndClear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
inline ::UnityEngine::TypeDispatchData GetTypeChangesAndClear(::Unity::Collections::Allocator  allocator, bool  sortByInstanceID, bool  noScriptingArray) ;

/// @brief Method GetTypeChangesAndClear, addr 0xb5d23a0, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::TypeDispatchData GetTypeChangesAndClear(::System::Type*  type, ::Unity::Collections::Allocator  allocator, bool  sortByInstanceID, bool  noScriptingArray) ;

static inline ::UnityEngine::ObjectDispatcher* New_ctor() ;

/// @brief Method ValidateComponentTypeAndThrow, addr 0xb5d1e34, size 0xd4, virtual false, abstract: false, final false
inline void ValidateComponentTypeAndThrow(::System::Type*  type) ;

/// @brief Method ValidateSystemHandleAndThrow, addr 0xb5d1d08, size 0x58, virtual false, abstract: false, final false
inline void ValidateSystemHandleAndThrow() ;

/// @brief Method ValidateTypeAndThrow, addr 0xb5d1d60, size 0xd4, virtual false, abstract: false, final false
inline void ValidateTypeAndThrow(::System::Type*  type) ;

constexpr ::Unity::Collections::Allocator const& __cordl_internal_get_m_DispatchAllocator() const;

constexpr ::Unity::Collections::Allocator& __cordl_internal_get_m_DispatchAllocator() ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr() ;

constexpr ::System::Action_1<::ArrayW<::UnityW<::UnityEngine::Component>>>* const& __cordl_internal_get_m_TransformComponentCallback() const;

constexpr ::System::Action_1<::ArrayW<::UnityW<::UnityEngine::Component>>>*& __cordl_internal_get_m_TransformComponentCallback() ;

constexpr ::System::Action_1<::UnityEngine::TransformDispatchData>* const& __cordl_internal_get_m_TransformDataCallback() const;

constexpr ::System::Action_1<::UnityEngine::TransformDispatchData>*& __cordl_internal_get_m_TransformDataCallback() ;

constexpr ::UnityEngine::TransformDispatchData const& __cordl_internal_get_m_TransformDispatchData() const;

constexpr ::UnityEngine::TransformDispatchData& __cordl_internal_get_m_TransformDispatchData() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Component>> const& __cordl_internal_get_m_TransformedComponents() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Component>>& __cordl_internal_get_m_TransformedComponents() ;

constexpr ::System::Action_1<::UnityEngine::TypeDispatchData>* const& __cordl_internal_get_m_TypeDataCallback() const;

constexpr ::System::Action_1<::UnityEngine::TypeDispatchData>*& __cordl_internal_get_m_TypeDataCallback() ;

constexpr ::UnityEngine::TypeDispatchData const& __cordl_internal_get_m_TypeDispatchData() const;

constexpr ::UnityEngine::TypeDispatchData& __cordl_internal_get_m_TypeDispatchData() ;

constexpr void __cordl_internal_set_m_DispatchAllocator(::Unity::Collections::Allocator  value) ;

constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_m_TransformComponentCallback(::System::Action_1<::ArrayW<::UnityW<::UnityEngine::Component>>>*  value) ;

constexpr void __cordl_internal_set_m_TransformDataCallback(::System::Action_1<::UnityEngine::TransformDispatchData>*  value) ;

constexpr void __cordl_internal_set_m_TransformDispatchData(::UnityEngine::TransformDispatchData  value) ;

constexpr void __cordl_internal_set_m_TransformedComponents(::ArrayW<::UnityW<::UnityEngine::Component>>  value) ;

constexpr void __cordl_internal_set_m_TypeDataCallback(::System::Action_1<::UnityEngine::TypeDispatchData>*  value) ;

constexpr void __cordl_internal_set_m_TypeDispatchData(::UnityEngine::TypeDispatchData  value) ;

/// @brief Method .ctor, addr 0xb5d199c, size 0x198, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_8<::System::IntPtr,::System::IntPtr,::System::IntPtr,::System::IntPtr,::System::IntPtr,::System::IntPtr,int32_t,::System::Action_1<::UnityEngine::TransformDispatchData>*>* getStaticF_s_TransformDispatch() ;

static inline ::System::Action_6<::ArrayW<::UnityW<::UnityEngine::Object>>,::System::IntPtr,::System::IntPtr,int32_t,int32_t,::System::Action_1<::UnityEngine::TypeDispatchData>*>* getStaticF_s_TypeDispatch() ;

/// @brief Method get_valid, addr 0xb5d198c, size 0x10, virtual false, abstract: false, final false
inline bool get_valid() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_s_TransformDispatch(::System::Action_8<::System::IntPtr,::System::IntPtr,::System::IntPtr,::System::IntPtr,::System::IntPtr,::System::IntPtr,int32_t,::System::Action_1<::UnityEngine::TransformDispatchData>*>*  value) ;

static inline void setStaticF_s_TypeDispatch(::System::Action_6<::ArrayW<::UnityW<::UnityEngine::Object>>,::System::IntPtr,::System::IntPtr,int32_t,int32_t,::System::Action_1<::UnityEngine::TypeDispatchData>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectDispatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectDispatcher", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectDispatcher(ObjectDispatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectDispatcher", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectDispatcher(ObjectDispatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14996};

/// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_Ptr;

/// @brief Field m_DispatchAllocator, offset: 0x18, size: 0x4, def value: None
 ::Unity::Collections::Allocator  ___m_DispatchAllocator;

/// @brief Field m_TypeDispatchData, offset: 0x20, size: 0x28, def value: None
 ::UnityEngine::TypeDispatchData  ___m_TypeDispatchData;

/// @brief Field m_TransformDispatchData, offset: 0x48, size: 0x60, def value: None
 ::UnityEngine::TransformDispatchData  ___m_TransformDispatchData;

/// @brief Field m_TransformedComponents, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Component>>  ___m_TransformedComponents;

/// @brief Field m_TypeDataCallback, offset: 0xb0, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::TypeDispatchData>*  ___m_TypeDataCallback;

/// @brief Field m_TransformDataCallback, offset: 0xb8, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::TransformDispatchData>*  ___m_TransformDataCallback;

/// @brief Field m_TransformComponentCallback, offset: 0xc0, size: 0x8, def value: None
 ::System::Action_1<::ArrayW<::UnityW<::UnityEngine::Component>>>*  ___m_TransformComponentCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ObjectDispatcher, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ObjectDispatcher, ___m_DispatchAllocator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ObjectDispatcher, ___m_TypeDispatchData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ObjectDispatcher, ___m_TransformDispatchData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ObjectDispatcher, ___m_TransformedComponents) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ObjectDispatcher, ___m_TypeDataCallback) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ObjectDispatcher, ___m_TransformDataCallback) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ObjectDispatcher, ___m_TransformComponentCallback) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ObjectDispatcher) == 0xc8, "Size mismatch!");

} // namespace end def UnityEngine
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ObjectDispatcher/<>c
class CORDL_TYPE ObjectDispatcher___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::ObjectDispatcher___c*  __9;

static inline ::UnityEngine::ObjectDispatcher___c* New_ctor() ;

/// @brief Method <.cctor>b__64_0, addr 0xb5d2868, size 0x108, virtual false, abstract: false, final false
inline void __cctor_b__64_0(::ArrayW<::UnityEngine::Object*>  changed, ::System::IntPtr  changedID, ::System::IntPtr  destroyedID, int32_t  changedCount, int32_t  destroyedCount, ::System::Action_1<::UnityEngine::TypeDispatchData>*  callback) ;

/// @brief Method <.cctor>b__64_1, addr 0xb5d2970, size 0x1b0, virtual false, abstract: false, final false
inline void __cctor_b__64_1(::System::IntPtr  transformed, ::System::IntPtr  parents, ::System::IntPtr  localToWorldMatrices, ::System::IntPtr  positions, ::System::IntPtr  rotations, ::System::IntPtr  scales, int32_t  count, ::System::Action_1<::UnityEngine::TransformDispatchData>*  callback) ;

/// @brief Method .ctor, addr 0xb5d2860, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::ObjectDispatcher___c* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::ObjectDispatcher___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectDispatcher___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectDispatcher___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectDispatcher___c(ObjectDispatcher___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectDispatcher___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectDispatcher___c(ObjectDispatcher___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14995};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ObjectDispatcher___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
