#pragma once
// IWYU pragma private; include "UnityEngine/Localization/CallbackArray_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CallbackArray_1)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::Localization {
template<typename TDelegate>
struct CallbackArray_1;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::Localization::CallbackArray_1);
DEFINE_IL2CPP_GEN_CLASS(::UnityEngine::Localization::CallbackArray_1, "UnityEngine.Localization", "CallbackArray`1");
// Dependencies 
namespace UnityEngine::Localization {
// cpp template
template<typename TDelegate>
// Is value type: true
// CS Name: UnityEngine.Localization.CallbackArray`1<TDelegate>
struct CORDL_TYPE CallbackArray_1 {
public:
// Declarations
 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_MultiDelegates)) ::ArrayW<TDelegate>  MultiDelegates;

 __declspec(property(get=get_SingleDelegate)) TDelegate  SingleDelegate;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Add(TDelegate  callback, int32_t  capacityIncrement) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method LockForChanges, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void LockForChanges() ;

/// @brief Method RemoveByMovingTail, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RemoveByMovingTail(TDelegate  callback) ;

/// @brief Method UnlockForChanges, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void UnlockForChanges() ;

/// @brief Method get_Length, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Method get_MultiDelegates, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::ArrayW<TDelegate> get_MultiDelegates() ;

/// @brief Method get_SingleDelegate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TDelegate get_SingleDelegate() ;

// Ctor Parameters []
// @brief default ctor
constexpr CallbackArray_1() ;

// Ctor Parameters [CppParam { name: "m_SingleDelegate", ty: "TDelegate", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_MultipleDelegates", ty: "::ArrayW<TDelegate>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_AddCallbacks", ty: "::System::Collections::Generic::List_1<TDelegate>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_RemoveCallbacks", ty: "::System::Collections::Generic::List_1<TDelegate>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CannotMutateCallbacksArray", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_MutatedDuringCallback", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr CallbackArray_1(TDelegate  m_SingleDelegate, ::ArrayW<TDelegate>  m_MultipleDelegates, ::System::Collections::Generic::List_1<TDelegate>*  m_AddCallbacks, ::System::Collections::Generic::List_1<TDelegate>*  m_RemoveCallbacks, int32_t  m_Length, bool  m_CannotMutateCallbacksArray, bool  m_MutatedDuringCallback) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25065};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field k_AllocationIncrement offset 0xffffffff size 0x4
static constexpr int32_t  k_AllocationIncrement{static_cast<int32_t>(0x5)};

/// @brief Field m_SingleDelegate, offset: 0x0, size: 0x8, def value: None
 TDelegate  m_SingleDelegate;

/// @brief Field m_MultipleDelegates, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<TDelegate>  m_MultipleDelegates;

/// @brief Field m_AddCallbacks, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<TDelegate>*  m_AddCallbacks;

/// @brief Field m_RemoveCallbacks, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<TDelegate>*  m_RemoveCallbacks;

/// @brief Field m_Length, offset: 0x20, size: 0x4, def value: None
 int32_t  m_Length;

/// @brief Field m_CannotMutateCallbacksArray, offset: 0x24, size: 0x1, def value: None
 bool  m_CannotMutateCallbacksArray;

/// @brief Field m_MutatedDuringCallback, offset: 0x25, size: 0x1, def value: None
 bool  m_MutatedDuringCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization
