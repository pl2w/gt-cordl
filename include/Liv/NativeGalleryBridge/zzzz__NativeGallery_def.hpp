#pragma once
// IWYU pragma private; include "Liv/NativeGalleryBridge/NativeGallery.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NativeGallery)
namespace GlobalNamespace {
struct NativeGallery_MediaType;
}
namespace GlobalNamespace {
struct NativeGallery_PermissionType;
}
namespace GlobalNamespace {
struct NativeGallery_Permission;
}
namespace GlobalNamespace {
struct NativeGallery__SaveImageToGallery_d__25;
}
namespace GlobalNamespace {
struct NativeGallery__SaveToGallery_d__28;
}
namespace GlobalNamespace {
struct NativeGallery__SaveVideoToGallery_d__24;
}
namespace Liv::NativeGalleryBridge {
class NativeGallery_MediaSaveCallback;
}
namespace Liv::NativeGalleryBridge {
class NativeGallery_PermissionCallback;
}
namespace Liv::NativeGalleryBridge {
class NativeGallery_SaveMediaCallback;
}
namespace Liv::NativeGalleryBridge {
class NativeGallery___c__DisplayClass21_0;
}
namespace Liv::NativeGalleryBridge {
class NativeGallery___c__DisplayClass28_0;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AndroidJavaClass;
}
namespace UnityEngine {
class AndroidJavaObject;
}
// Forward declare root types
namespace Liv::NativeGalleryBridge {
class NativeGallery;
}
namespace Liv::NativeGalleryBridge {
class NativeGallery_MediaSaveCallback;
}
namespace Liv::NativeGalleryBridge {
class NativeGallery_PermissionCallback;
}
namespace Liv::NativeGalleryBridge {
class NativeGallery_SaveMediaCallback;
}
namespace Liv::NativeGalleryBridge {
class NativeGallery___c__DisplayClass21_0;
}
namespace Liv::NativeGalleryBridge {
class NativeGallery___c__DisplayClass28_0;
}
// Write type traits
MARK_REF_T(::Liv::NativeGalleryBridge::NativeGallery*);
MARK_REF_T(::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*);
MARK_REF_T(::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback*);
MARK_REF_T(::Liv::NativeGalleryBridge::NativeGallery_SaveMediaCallback*);
MARK_REF_T(::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass21_0*);
MARK_REF_T(::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass28_0*);
DEFINE_IL2CPP_CLASS(::Liv::NativeGalleryBridge::NativeGallery*, "Liv.NativeGalleryBridge", "NativeGallery");
DEFINE_IL2CPP_CLASS(::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*, "Liv.NativeGalleryBridge", "NativeGallery/MediaSaveCallback");
DEFINE_IL2CPP_CLASS(::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback*, "Liv.NativeGalleryBridge", "NativeGallery/PermissionCallback");
DEFINE_IL2CPP_CLASS(::Liv::NativeGalleryBridge::NativeGallery_SaveMediaCallback*, "Liv.NativeGalleryBridge", "NativeGallery/SaveMediaCallback");
DEFINE_IL2CPP_CLASS(::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass21_0*, "Liv.NativeGalleryBridge", "NativeGallery/<>c__DisplayClass21_0");
DEFINE_IL2CPP_CLASS(::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass28_0*, "Liv.NativeGalleryBridge", "NativeGallery/<>c__DisplayClass28_0");
// Dependencies System.Object
namespace Liv::NativeGalleryBridge {
// Is value type: false
// CS Name: Liv.NativeGalleryBridge.NativeGallery
class CORDL_TYPE NativeGallery : public ::System::Object {
public:
// Declarations
using MediaType = ::GlobalNamespace::NativeGallery_MediaType;

using Permission = ::GlobalNamespace::NativeGallery_Permission;

using PermissionType = ::GlobalNamespace::NativeGallery_PermissionType;

using _SaveImageToGallery_d__25 = ::GlobalNamespace::NativeGallery__SaveImageToGallery_d__25;

using _SaveToGallery_d__28 = ::GlobalNamespace::NativeGallery__SaveToGallery_d__28;

using _SaveVideoToGallery_d__24 = ::GlobalNamespace::NativeGallery__SaveVideoToGallery_d__24;

using MediaSaveCallback = ::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback;

using PermissionCallback = ::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback;

using SaveMediaCallback = ::Liv::NativeGalleryBridge::NativeGallery_SaveMediaCallback;

using __c__DisplayClass21_0 = ::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass21_0;

using __c__DisplayClass28_0 = ::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass28_0;

/// @brief Field _context, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__context, put=setStaticF__context)) ::UnityEngine::AndroidJavaObject*  _context;

/// @brief Field m_ajc, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_ajc, put=setStaticF_m_ajc)) ::UnityEngine::AndroidJavaClass*  m_ajc;

/// @brief Method GetTemporarySavePath, addr 0xa3692f8, size 0xc0, virtual false, abstract: false, final false
static inline ::StringW GetTemporarySavePath(::StringW  filename) ;

/// @brief Method RequestPermissionAsync, addr 0xa368ae8, size 0x128, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::NativeGallery_Permission>* RequestPermissionAsync(::GlobalNamespace::NativeGallery_PermissionType  permissionType, ::GlobalNamespace::NativeGallery_MediaType  mediaTypes) ;

/// @brief Method RequestPermissionAsync, addr 0xa3688a8, size 0x240, virtual false, abstract: false, final false
static inline void RequestPermissionAsync(::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback*  callback, ::GlobalNamespace::NativeGallery_PermissionType  permissionType, ::GlobalNamespace::NativeGallery_MediaType  mediaTypes) ;

/// [AsyncStateMachine(typeof(Liv.NativeGalleryBridge.NativeGallery::<SaveImageToGallery>d__25))]
/// @brief Method SaveImageToGallery, addr 0xa368e08, size 0x150, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::NativeGallery_Permission>* SaveImageToGallery(::StringW  existingMediaPath, ::StringW  album, ::StringW  filename, ::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*  callback) ;

/// [AsyncStateMachine(typeof(Liv.NativeGalleryBridge.NativeGallery::<SaveToGallery>d__28))]
/// @brief Method SaveToGallery, addr 0xa368f58, size 0x164, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::NativeGallery_Permission>* SaveToGallery(::StringW  existingMediaPath, ::StringW  album, ::StringW  filename, ::GlobalNamespace::NativeGallery_MediaType  mediaType, ::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*  callback) ;

/// @brief Method SaveToGalleryInternal, addr 0xa3690bc, size 0x1b0, virtual false, abstract: false, final false
static inline void SaveToGalleryInternal(::StringW  path, ::StringW  album, ::GlobalNamespace::NativeGallery_MediaType  mediaType, ::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*  callback) ;

/// [AsyncStateMachine(typeof(Liv.NativeGalleryBridge.NativeGallery::<SaveVideoToGallery>d__24))]
/// @brief Method SaveVideoToGallery, addr 0xa368cb8, size 0x150, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::NativeGallery_Permission>* SaveVideoToGallery(::StringW  existingMediaPath, ::StringW  album, ::StringW  filename, ::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*  callback) ;

static inline ::UnityEngine::AndroidJavaObject* getStaticF__context() ;

static inline ::UnityEngine::AndroidJavaClass* getStaticF_m_ajc() ;

/// @brief Method get_AJC, addr 0xa368624, size 0xb4, virtual false, abstract: false, final false
static inline ::UnityEngine::AndroidJavaClass* get_AJC() ;

/// @brief Method get_Context, addr 0xa3686d8, size 0x1d0, virtual false, abstract: false, final false
static inline ::UnityEngine::AndroidJavaObject* get_Context() ;

static inline void setStaticF__context(::UnityEngine::AndroidJavaObject*  value) ;

static inline void setStaticF_m_ajc(::UnityEngine::AndroidJavaClass*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeGallery() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeGallery", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeGallery(NativeGallery && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeGallery", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeGallery(NativeGallery const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32961};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::NativeGalleryBridge::NativeGallery) == 0x10, "Size mismatch!");

} // namespace end def Liv::NativeGalleryBridge
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::NativeGalleryBridge {
// Is value type: false
// CS Name: Liv.NativeGalleryBridge.NativeGallery/<>c__DisplayClass28_0
class CORDL_TYPE NativeGallery___c__DisplayClass28_0 : public ::System::Object {
public:
// Declarations
/// @brief Field existingMediaPath, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_existingMediaPath, put=__cordl_internal_set_existingMediaPath)) ::StringW  existingMediaPath;

/// @brief Field path, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_path, put=__cordl_internal_set_path)) ::StringW  path;

static inline ::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass28_0* New_ctor() ;

/// @brief Method <SaveToGallery>b__0, addr 0xa369500, size 0x14, virtual false, abstract: false, final false
inline void _SaveToGallery_b__0() ;

constexpr ::StringW const& __cordl_internal_get_existingMediaPath() const;

constexpr ::StringW& __cordl_internal_get_existingMediaPath() ;

constexpr ::StringW const& __cordl_internal_get_path() const;

constexpr ::StringW& __cordl_internal_get_path() ;

constexpr void __cordl_internal_set_existingMediaPath(::StringW  value) ;

constexpr void __cordl_internal_set_path(::StringW  value) ;

/// @brief Method .ctor, addr 0xa3694f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeGallery___c__DisplayClass28_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeGallery___c__DisplayClass28_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeGallery___c__DisplayClass28_0(NativeGallery___c__DisplayClass28_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeGallery___c__DisplayClass28_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeGallery___c__DisplayClass28_0(NativeGallery___c__DisplayClass28_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32957};

/// @brief Field existingMediaPath, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___existingMediaPath;

/// @brief Field path, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___path;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass28_0, ___existingMediaPath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass28_0, ___path) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass28_0) == 0x20, "Size mismatch!");

} // namespace end def Liv::NativeGalleryBridge
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::NativeGalleryBridge {
// Is value type: false
// CS Name: Liv.NativeGalleryBridge.NativeGallery/<>c__DisplayClass21_0
class CORDL_TYPE NativeGallery___c__DisplayClass21_0 : public ::System::Object {
public:
// Declarations
/// @brief Field tcs, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::NativeGallery_Permission>*  tcs;

static inline ::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass21_0* New_ctor() ;

/// @brief Method <RequestPermissionAsync>b__0, addr 0xa3694a0, size 0x58, virtual false, abstract: false, final false
inline void _RequestPermissionAsync_b__0(::GlobalNamespace::NativeGallery_Permission  permission) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::NativeGallery_Permission>* const& __cordl_internal_get_tcs() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::NativeGallery_Permission>*& __cordl_internal_get_tcs() ;

constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::NativeGallery_Permission>*  value) ;

/// @brief Method .ctor, addr 0xa368c10, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeGallery___c__DisplayClass21_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeGallery___c__DisplayClass21_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeGallery___c__DisplayClass21_0(NativeGallery___c__DisplayClass21_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeGallery___c__DisplayClass21_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeGallery___c__DisplayClass21_0(NativeGallery___c__DisplayClass21_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32956};

/// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::NativeGallery_Permission>*  ___tcs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass21_0, ___tcs) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass21_0) == 0x18, "Size mismatch!");

} // namespace end def Liv::NativeGalleryBridge
// Dependencies UnityEngine.AndroidJavaProxy
namespace Liv::NativeGalleryBridge {
// Is value type: false
// CS Name: Liv.NativeGalleryBridge.NativeGallery/SaveMediaCallback
class CORDL_TYPE NativeGallery_SaveMediaCallback : public ::UnityEngine::AndroidJavaProxy {
public:
// Declarations
/// @brief Field _mediaSaveCallback, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__mediaSaveCallback, put=__cordl_internal_set__mediaSaveCallback)) ::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*  _mediaSaveCallback;

static inline ::Liv::NativeGalleryBridge::NativeGallery_SaveMediaCallback* New_ctor(::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*  mediaSaveCallback) ;

constexpr ::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback* const& __cordl_internal_get__mediaSaveCallback() const;

constexpr ::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*& __cordl_internal_get__mediaSaveCallback() ;

constexpr void __cordl_internal_set__mediaSaveCallback(::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*  value) ;

/// @brief Method .ctor, addr 0xa36926c, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*  mediaSaveCallback) ;

/// @brief Method onMediaSaved, addr 0xa369480, size 0x20, virtual false, abstract: false, final false
inline void onMediaSaved(bool  success, ::StringW  path) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeGallery_SaveMediaCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeGallery_SaveMediaCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeGallery_SaveMediaCallback(NativeGallery_SaveMediaCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeGallery_SaveMediaCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeGallery_SaveMediaCallback(NativeGallery_SaveMediaCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32955};

/// @brief Field _mediaSaveCallback, offset: 0x20, size: 0x8, def value: None
 ::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*  ____mediaSaveCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::NativeGalleryBridge::NativeGallery_SaveMediaCallback, ____mediaSaveCallback) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Liv::NativeGalleryBridge::NativeGallery_SaveMediaCallback) == 0x28, "Size mismatch!");

} // namespace end def Liv::NativeGalleryBridge
// Dependencies System.MulticastDelegate
namespace Liv::NativeGalleryBridge {
// Is value type: false
// CS Name: Liv.NativeGalleryBridge.NativeGallery/MediaSaveCallback
class CORDL_TYPE NativeGallery_MediaSaveCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa36946c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(bool  success, ::StringW  path) ;

static inline ::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa3693cc, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeGallery_MediaSaveCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeGallery_MediaSaveCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeGallery_MediaSaveCallback(NativeGallery_MediaSaveCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeGallery_MediaSaveCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeGallery_MediaSaveCallback(NativeGallery_MediaSaveCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32954};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback) == 0x80, "Size mismatch!");

} // namespace end def Liv::NativeGalleryBridge
// Dependencies System.MulticastDelegate
namespace Liv::NativeGalleryBridge {
// Is value type: false
// CS Name: Liv.NativeGalleryBridge.NativeGallery/PermissionCallback
class CORDL_TYPE NativeGallery_PermissionCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa3693b8, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::NativeGallery_Permission  permission) ;

static inline ::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa368c18, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeGallery_PermissionCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeGallery_PermissionCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeGallery_PermissionCallback(NativeGallery_PermissionCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeGallery_PermissionCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeGallery_PermissionCallback(NativeGallery_PermissionCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32953};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback) == 0x80, "Size mismatch!");

} // namespace end def Liv::NativeGalleryBridge
