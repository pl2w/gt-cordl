#pragma once
// IWYU pragma private; include "UnityEngine/Jobs/TransformAccessArray.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TransformAccessArray)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::Jobs {
struct TransformAccessArray;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Jobs::TransformAccessArray);
DEFINE_IL2CPP_CLASS(::UnityEngine::Jobs::TransformAccessArray, "UnityEngine.Jobs", "TransformAccessArray");
// [NativeType(Header = "Runtime/Transform/ScriptBindings/TransformAccess.bindings.h", CodegenOptions = (UnityEngine.Bindings.CodegenOptions)1)]
// [DefaultMember("Item")]
// Dependencies System.IntPtr
namespace UnityEngine::Jobs {
// Is value type: true
// CS Name: UnityEngine.Jobs.TransformAccessArray
struct CORDL_TYPE TransformAccessArray {
public:
// Declarations
 __declspec(property(get=get_Item, put=set_Item)) ::UnityW<::UnityEngine::Transform>  Item[];

 __declspec(property(get=get_capacity)) int32_t  capacity;

 __declspec(property(get=get_isCreated)) bool  isCreated;

 __declspec(property(get=get_length)) int32_t  length;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Add, addr 0xb5f8cd8, size 0x8, virtual false, abstract: false, final false
inline void Add(::UnityEngine::Transform*  transform) ;

/// [NativeMethod(Name = "TransformAccessArrayBindings::AddTransform", IsFreeFunction = true)]
/// @brief Method Add, addr 0xb5f8ce0, size 0x8c, virtual false, abstract: false, final false
static inline void Add(::System::IntPtr  transformArrayIntPtr, ::UnityEngine::Transform*  transform) ;

/// @brief Method Add_Injected, addr 0xb5f8df4, size 0x44, virtual false, abstract: false, final false
static inline void Add_Injected(::System::IntPtr  transformArrayIntPtr, ::System::IntPtr  transform) ;

/// @brief Method Allocate, addr 0xb5f891c, size 0x64, virtual false, abstract: false, final false
static inline void Allocate(int32_t  capacity, int32_t  desiredJobCount, ::by_ref<::UnityEngine::Jobs::TransformAccessArray>  array) ;

/// [NativeMethod(Name = "TransformAccessArrayBindings::Create", IsFreeFunction = true)]
/// @brief Method Create, addr 0xb5f89d8, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr Create(int32_t  capacity, int32_t  desiredJobCount) ;

/// [NativeMethod(Name = "DestroyTransformAccessArray", IsFreeFunction = true)]
/// @brief Method DestroyTransformAccessArray, addr 0xb5f8a84, size 0x3c, virtual false, abstract: false, final false
static inline void DestroyTransformAccessArray(::System::IntPtr  transformArray) ;

/// @brief Method Dispose, addr 0xb5f8a2c, size 0x58, virtual true, abstract: false, final true
inline void Dispose() ;

/// [NativeMethod(Name = "TransformAccessArrayBindings::GetCapacity", IsFreeFunction = true)]
/// @brief Method GetCapacity, addr 0xb5f8c24, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetCapacity(::System::IntPtr  transformArrayIntPtr) ;

/// [NativeMethod(Name = "TransformAccessArrayBindings::GetLength", IsFreeFunction = true)]
/// @brief Method GetLength, addr 0xb5f8c9c, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetLength(::System::IntPtr  transformArrayIntPtr) ;

/// [NativeMethod(Name = "TransformAccessArrayBindings::GetSortedToUserIndex", IsThreadSafe = true, IsFreeFunction = true, ThrowsException = true)]
/// @brief Method GetSortedToUserIndex, addr 0xb5f8e74, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSortedToUserIndex(::System::IntPtr  transformArrayIntPtr) ;

/// [NativeMethod(Name = "TransformAccessArrayBindings::GetSortedTransformAccess", IsThreadSafe = true, IsFreeFunction = true, ThrowsException = true)]
/// @brief Method GetSortedTransformAccess, addr 0xb5f8e38, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSortedTransformAccess(::System::IntPtr  transformArrayIntPtr) ;

/// [NativeMethod(Name = "TransformAccessArrayBindings::GetTransform", IsFreeFunction = true, ThrowsException = true)]
/// @brief Method GetTransform, addr 0xb5f8ad0, size 0x7c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Transform> GetTransform(::System::IntPtr  transformArrayIntPtr, int32_t  index) ;

/// @brief Method GetTransformAccessArrayForSchedule, addr 0xb5f8ac0, size 0x8, virtual false, abstract: false, final false
inline ::System::IntPtr GetTransformAccessArrayForSchedule() ;

/// @brief Method GetTransform_Injected, addr 0xb5f8eb0, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr GetTransform_Injected(::System::IntPtr  transformArrayIntPtr, int32_t  index) ;

/// @brief Method RemoveAtSwapBack, addr 0xb5f8d6c, size 0x44, virtual false, abstract: false, final false
inline void RemoveAtSwapBack(int32_t  index) ;

/// [NativeMethod(Name = "TransformAccessArrayBindings::RemoveAtSwapBack", IsFreeFunction = true, ThrowsException = true)]
/// @brief Method RemoveAtSwapBack, addr 0xb5f8db0, size 0x44, virtual false, abstract: false, final false
static inline void RemoveAtSwapBack(::System::IntPtr  transformArrayIntPtr, int32_t  index) ;

/// [NativeMethod(Name = "TransformAccessArrayBindings::SetTransform", IsFreeFunction = true, ThrowsException = true)]
/// @brief Method SetTransform, addr 0xb5f8b54, size 0x94, virtual false, abstract: false, final false
static inline void SetTransform(::System::IntPtr  transformArrayIntPtr, int32_t  index, ::UnityEngine::Transform*  transform) ;

/// @brief Method SetTransform_Injected, addr 0xb5f8ef4, size 0x54, virtual false, abstract: false, final false
static inline void SetTransform_Injected(::System::IntPtr  transformArrayIntPtr, int32_t  index, ::System::IntPtr  transform) ;

/// [NativeMethod(Name = "TransformAccessArrayBindings::SetTransforms", IsFreeFunction = true)]
/// @brief Method SetTransforms, addr 0xb5f8980, size 0x44, virtual false, abstract: false, final false
static inline void SetTransforms(::System::IntPtr  transformArrayIntPtr, ::ArrayW<::UnityEngine::Transform*>  transforms) ;

/// @brief Method .ctor, addr 0xb5f89c4, size 0x14, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity, int32_t  desiredJobCount) ;

/// @brief Method .ctor, addr 0xb5f88bc, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::UnityEngine::Transform*>  transforms, int32_t  desiredJobCount) ;

/// @brief Method get_Item, addr 0xb5f8ac8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_Item(int32_t  index) ;

/// @brief Method get_capacity, addr 0xb5f8be8, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_capacity() ;

/// @brief Method get_isCreated, addr 0xb5f8a1c, size 0x10, virtual false, abstract: false, final false
inline bool get_isCreated() ;

/// @brief Method get_length, addr 0xb5f8c60, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_length() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// @brief Method set_Item, addr 0xb5f8b4c, size 0x8, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, ::UnityEngine::Transform*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr TransformAccessArray() ;

// Ctor Parameters [CppParam { name: "m_TransformArray", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }]
constexpr TransformAccessArray(::System::IntPtr  m_TransformArray) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15174};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_TransformArray, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_TransformArray;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Jobs::TransformAccessArray, m_TransformArray) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Jobs::TransformAccessArray) == 0x8, "Size mismatch!");

} // namespace end def UnityEngine::Jobs
