#pragma once
// IWYU pragma private; include "Liv/NativeGalleryBridge/PermissionCallbackAsyncAndroid.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PermissionCallbackAsyncAndroid)
namespace Liv::NativeGalleryBridge {
class NativeGalleryCallbackHelper;
}
namespace Liv::NativeGalleryBridge {
class NativeGallery_PermissionCallback;
}
namespace Liv::NativeGalleryBridge {
class PermissionCallbackAsyncAndroid___c__DisplayClass3_0;
}
// Forward declare root types
namespace Liv::NativeGalleryBridge {
class PermissionCallbackAsyncAndroid;
}
namespace Liv::NativeGalleryBridge {
class PermissionCallbackAsyncAndroid___c__DisplayClass3_0;
}
// Write type traits
MARK_REF_T(::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid*);
MARK_REF_T(::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid___c__DisplayClass3_0*);
DEFINE_IL2CPP_CLASS(::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid*, "Liv.NativeGalleryBridge", "PermissionCallbackAsyncAndroid");
DEFINE_IL2CPP_CLASS(::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid___c__DisplayClass3_0*, "Liv.NativeGalleryBridge", "PermissionCallbackAsyncAndroid/<>c__DisplayClass3_0");
// Dependencies UnityEngine.AndroidJavaProxy
namespace Liv::NativeGalleryBridge {
// Is value type: false
// CS Name: Liv.NativeGalleryBridge.PermissionCallbackAsyncAndroid
class CORDL_TYPE PermissionCallbackAsyncAndroid : public ::UnityEngine::AndroidJavaProxy {
public:
// Declarations
using __c__DisplayClass3_0 = ::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid___c__DisplayClass3_0;

/// @brief Field _nativeGalleryCallbackHelper, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__nativeGalleryCallbackHelper, put=__cordl_internal_set__nativeGalleryCallbackHelper)) ::UnityW<::Liv::NativeGalleryBridge::NativeGalleryCallbackHelper>  _nativeGalleryCallbackHelper;

/// @brief Field callback, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback*  callback;

static inline ::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid* New_ctor(::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback*  callback) ;

/// [Preserve]
/// @brief Method OnPermissionResult, addr 0xa368518, size 0xd4, virtual false, abstract: false, final false
inline void OnPermissionResult(int32_t  result) ;

constexpr ::UnityW<::Liv::NativeGalleryBridge::NativeGalleryCallbackHelper> const& __cordl_internal_get__nativeGalleryCallbackHelper() const;

constexpr ::UnityW<::Liv::NativeGalleryBridge::NativeGalleryCallbackHelper>& __cordl_internal_get__nativeGalleryCallbackHelper() ;

constexpr ::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback* const& __cordl_internal_get_callback() const;

constexpr ::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback*& __cordl_internal_get_callback() ;

constexpr void __cordl_internal_set__nativeGalleryCallbackHelper(::UnityW<::Liv::NativeGalleryBridge::NativeGalleryCallbackHelper>  value) ;

constexpr void __cordl_internal_set_callback(::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback*  value) ;

/// @brief Method .ctor, addr 0xa368414, size 0x104, virtual false, abstract: false, final false
inline void _ctor(::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback*  callback) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PermissionCallbackAsyncAndroid() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PermissionCallbackAsyncAndroid", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PermissionCallbackAsyncAndroid(PermissionCallbackAsyncAndroid && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PermissionCallbackAsyncAndroid", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PermissionCallbackAsyncAndroid(PermissionCallbackAsyncAndroid const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32949};

/// @brief Field callback, offset: 0x20, size: 0x8, def value: None
 ::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback*  ___callback;

/// @brief Field _nativeGalleryCallbackHelper, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Liv::NativeGalleryBridge::NativeGalleryCallbackHelper>  ____nativeGalleryCallbackHelper;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid, ___callback) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid, ____nativeGalleryCallbackHelper) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid) == 0x30, "Size mismatch!");

} // namespace end def Liv::NativeGalleryBridge
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::NativeGalleryBridge {
// Is value type: false
// CS Name: Liv.NativeGalleryBridge.PermissionCallbackAsyncAndroid/<>c__DisplayClass3_0
class CORDL_TYPE PermissionCallbackAsyncAndroid___c__DisplayClass3_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid*  __4__this;

/// @brief Field result, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_result, put=__cordl_internal_set_result)) int32_t  result;

static inline ::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid___c__DisplayClass3_0* New_ctor() ;

/// @brief Method <OnPermissionResult>b__0, addr 0xa3685f4, size 0x30, virtual false, abstract: false, final false
inline void _OnPermissionResult_b__0() ;

constexpr ::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid* const& __cordl_internal_get___4__this() const;

constexpr ::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid*& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get_result() const;

constexpr int32_t& __cordl_internal_get_result() ;

constexpr void __cordl_internal_set___4__this(::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid*  value) ;

constexpr void __cordl_internal_set_result(int32_t  value) ;

/// @brief Method .ctor, addr 0xa3685ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PermissionCallbackAsyncAndroid___c__DisplayClass3_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PermissionCallbackAsyncAndroid___c__DisplayClass3_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PermissionCallbackAsyncAndroid___c__DisplayClass3_0(PermissionCallbackAsyncAndroid___c__DisplayClass3_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PermissionCallbackAsyncAndroid___c__DisplayClass3_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PermissionCallbackAsyncAndroid___c__DisplayClass3_0(PermissionCallbackAsyncAndroid___c__DisplayClass3_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32948};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid*  _____4__this;

/// @brief Field result, offset: 0x18, size: 0x4, def value: None
 int32_t  ___result;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid___c__DisplayClass3_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid___c__DisplayClass3_0, ___result) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid___c__DisplayClass3_0) == 0x20, "Size mismatch!");

} // namespace end def Liv::NativeGalleryBridge
