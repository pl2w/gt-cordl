#pragma once
// IWYU pragma private; include "Liv/NativeGalleryBridge/PermissionCallbackAndroid.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AndroidJavaProxy_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PermissionCallbackAndroid)
namespace System {
class Object;
}
// Forward declare root types
namespace Liv::NativeGalleryBridge {
class PermissionCallbackAndroid;
}
// Write type traits
MARK_REF_T(::Liv::NativeGalleryBridge::PermissionCallbackAndroid*);
DEFINE_IL2CPP_CLASS(::Liv::NativeGalleryBridge::PermissionCallbackAndroid*, "Liv.NativeGalleryBridge", "PermissionCallbackAndroid");
// Dependencies UnityEngine.AndroidJavaProxy
namespace Liv::NativeGalleryBridge {
// Is value type: false
// CS Name: Liv.NativeGalleryBridge.PermissionCallbackAndroid
class CORDL_TYPE PermissionCallbackAndroid : public ::UnityEngine::AndroidJavaProxy {
public:
// Declarations
 __declspec(property(get=get_Result, put=set_Result)) int32_t  Result;

/// @brief Field <Result>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__Result_k__BackingField, put=__cordl_internal_set__Result_k__BackingField)) int32_t  _Result_k__BackingField;

/// @brief Field threadLock, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_threadLock, put=__cordl_internal_set_threadLock)) ::System::Object*  threadLock;

static inline ::Liv::NativeGalleryBridge::PermissionCallbackAndroid* New_ctor(::System::Object*  threadLock) ;

/// [Preserve]
/// @brief Method OnPermissionResult, addr 0xa368350, size 0xc4, virtual false, abstract: false, final false
inline void OnPermissionResult(int32_t  result) ;

constexpr int32_t const& __cordl_internal_get__Result_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Result_k__BackingField() ;

constexpr ::System::Object* const& __cordl_internal_get_threadLock() const;

constexpr ::System::Object*& __cordl_internal_get_threadLock() ;

constexpr void __cordl_internal_set__Result_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_threadLock(::System::Object*  value) ;

/// @brief Method .ctor, addr 0xa3682bc, size 0x94, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  threadLock) ;

/// [CompilerGenerated]
/// @brief Method get_Result, addr 0xa3682ac, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Result() ;

/// [CompilerGenerated]
/// @brief Method set_Result, addr 0xa3682b4, size 0x8, virtual false, abstract: false, final false
inline void set_Result(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PermissionCallbackAndroid() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PermissionCallbackAndroid", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PermissionCallbackAndroid(PermissionCallbackAndroid && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PermissionCallbackAndroid", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PermissionCallbackAndroid(PermissionCallbackAndroid const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32947};

/// @brief Field threadLock, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ___threadLock;

/// [CompilerGenerated]
/// @brief Field <Result>k__BackingField, offset: 0x28, size: 0x4, def value: None
 int32_t  ____Result_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::NativeGalleryBridge::PermissionCallbackAndroid, ___threadLock) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::NativeGalleryBridge::PermissionCallbackAndroid, ____Result_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Liv::NativeGalleryBridge::PermissionCallbackAndroid) == 0x30, "Size mismatch!");

} // namespace end def Liv::NativeGalleryBridge
