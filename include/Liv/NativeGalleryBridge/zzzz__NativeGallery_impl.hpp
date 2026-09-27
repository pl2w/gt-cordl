#pragma once
// IWYU pragma private; include "Liv/NativeGalleryBridge/NativeGallery.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_impl.hpp"
#include "Liv/NativeGalleryBridge/zzzz__NativeGallery_def.hpp"
#include "Liv/NativeGalleryBridge/zzzz__NativeGallery_MediaType_def.hpp"
#include "Liv/NativeGalleryBridge/zzzz__NativeGallery_PermissionType_def.hpp"
#include "Liv/NativeGalleryBridge/zzzz__NativeGallery_Permission_def.hpp"
#include "Liv/NativeGalleryBridge/zzzz__NativeGallery__SaveImageToGallery_d__25_def.hpp"
#include "Liv/NativeGalleryBridge/zzzz__NativeGallery__SaveToGallery_d__28_def.hpp"
#include "Liv/NativeGalleryBridge/zzzz__NativeGallery__SaveVideoToGallery_d__24_def.hpp"
#include "Liv/NativeGalleryBridge/zzzz__NativeGallery_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaClass_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaObject_def.hpp"
//  Writing Method size for method: ::Liv::NativeGalleryBridge::NativeGallery.get_AJC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AndroidJavaClass* (*)()>(&::Liv::NativeGalleryBridge::NativeGallery::get_AJC)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa368624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery*>(),
                        {"get_AJC", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NativeGalleryBridge::NativeGallery.get_Context
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AndroidJavaObject* (*)()>(&::Liv::NativeGalleryBridge::NativeGallery::get_Context)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xa3686d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery*>(),
                        {"get_Context", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NativeGalleryBridge::NativeGallery.RequestPermissionAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback*, ::GlobalNamespace::NativeGallery_PermissionType, ::GlobalNamespace::NativeGallery_MediaType)>(&::Liv::NativeGalleryBridge::NativeGallery::RequestPermissionAsync)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0xa3688a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery*>(),
                        {"RequestPermissionAsync", {}, {::i2c::type_of<::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback*>(), ::i2c::type_of<::GlobalNamespace::NativeGallery_PermissionType>(), ::i2c::type_of<::GlobalNamespace::NativeGallery_MediaType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NativeGalleryBridge::NativeGallery.RequestPermissionAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::NativeGallery_Permission>* (*)(::GlobalNamespace::NativeGallery_PermissionType, ::GlobalNamespace::NativeGallery_MediaType)>(&::Liv::NativeGalleryBridge::NativeGallery::RequestPermissionAsync)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa368ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery*>(),
                        {"RequestPermissionAsync", {}, {::i2c::type_of<::GlobalNamespace::NativeGallery_PermissionType>(), ::i2c::type_of<::GlobalNamespace::NativeGallery_MediaType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NativeGalleryBridge::NativeGallery.SaveVideoToGallery
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::NativeGallery_Permission>* (*)(::StringW, ::StringW, ::StringW, ::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*)>(&::Liv::NativeGalleryBridge::NativeGallery::SaveVideoToGallery)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa368cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery*>(),
                        {"SaveVideoToGallery", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NativeGalleryBridge::NativeGallery.SaveImageToGallery
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::NativeGallery_Permission>* (*)(::StringW, ::StringW, ::StringW, ::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*)>(&::Liv::NativeGalleryBridge::NativeGallery::SaveImageToGallery)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa368e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery*>(),
                        {"SaveImageToGallery", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NativeGalleryBridge::NativeGallery.SaveToGallery
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::NativeGallery_Permission>* (*)(::StringW, ::StringW, ::StringW, ::GlobalNamespace::NativeGallery_MediaType, ::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*)>(&::Liv::NativeGalleryBridge::NativeGallery::SaveToGallery)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xa368f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery*>(),
                        {"SaveToGallery", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::NativeGallery_MediaType>(), ::i2c::type_of<::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NativeGalleryBridge::NativeGallery.SaveToGalleryInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, ::GlobalNamespace::NativeGallery_MediaType, ::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*)>(&::Liv::NativeGalleryBridge::NativeGallery::SaveToGalleryInternal)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xa3690bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery*>(),
                        {"SaveToGalleryInternal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::NativeGallery_MediaType>(), ::i2c::type_of<::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NativeGalleryBridge::NativeGallery.GetTemporarySavePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Liv::NativeGalleryBridge::NativeGallery::GetTemporarySavePath)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa3692f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery*>(),
                        {"GetTemporarySavePath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::NativeGalleryBridge::NativeGallery::setStaticF_m_ajc(::UnityEngine::AndroidJavaClass*  value)  {
::cordl_internals::setStaticField<::UnityEngine::AndroidJavaClass*, "m_ajc", ::Liv::NativeGalleryBridge::NativeGallery*>(std::forward<::UnityEngine::AndroidJavaClass*>(value));
}
inline ::UnityEngine::AndroidJavaClass* Liv::NativeGalleryBridge::NativeGallery::getStaticF_m_ajc()  {
return ::cordl_internals::getStaticField<::UnityEngine::AndroidJavaClass*, "m_ajc", ::Liv::NativeGalleryBridge::NativeGallery*>();
}
inline void Liv::NativeGalleryBridge::NativeGallery::setStaticF__context(::UnityEngine::AndroidJavaObject*  value)  {
::cordl_internals::setStaticField<::UnityEngine::AndroidJavaObject*, "_context", ::Liv::NativeGalleryBridge::NativeGallery*>(std::forward<::UnityEngine::AndroidJavaObject*>(value));
}
inline ::UnityEngine::AndroidJavaObject* Liv::NativeGalleryBridge::NativeGallery::getStaticF__context()  {
return ::cordl_internals::getStaticField<::UnityEngine::AndroidJavaObject*, "_context", ::Liv::NativeGalleryBridge::NativeGallery*>();
}
inline ::UnityEngine::AndroidJavaClass* Liv::NativeGalleryBridge::NativeGallery::get_AJC()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery*>(),
                        {"get_AJC", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AndroidJavaClass*>(nullptr, ___internal_method);
}
inline ::UnityEngine::AndroidJavaObject* Liv::NativeGalleryBridge::NativeGallery::get_Context()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery*>(),
                        {"get_Context", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AndroidJavaObject*>(nullptr, ___internal_method);
}
inline void Liv::NativeGalleryBridge::NativeGallery::RequestPermissionAsync(::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback*  callback, ::GlobalNamespace::NativeGallery_PermissionType  permissionType, ::GlobalNamespace::NativeGallery_MediaType  mediaTypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery*>(),
                        {"RequestPermissionAsync", {}, {::i2c::type_of<::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback*>(), ::i2c::type_of<::GlobalNamespace::NativeGallery_PermissionType>(), ::i2c::type_of<::GlobalNamespace::NativeGallery_MediaType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback, permissionType, mediaTypes);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::NativeGallery_Permission>* Liv::NativeGalleryBridge::NativeGallery::RequestPermissionAsync(::GlobalNamespace::NativeGallery_PermissionType  permissionType, ::GlobalNamespace::NativeGallery_MediaType  mediaTypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery*>(),
                        {"RequestPermissionAsync", {}, {::i2c::type_of<::GlobalNamespace::NativeGallery_PermissionType>(), ::i2c::type_of<::GlobalNamespace::NativeGallery_MediaType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::NativeGallery_Permission>*>(nullptr, ___internal_method, permissionType, mediaTypes);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::NativeGallery_Permission>* Liv::NativeGalleryBridge::NativeGallery::SaveVideoToGallery(::StringW  existingMediaPath, ::StringW  album, ::StringW  filename, ::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery*>(),
                        {"SaveVideoToGallery", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::NativeGallery_Permission>*>(nullptr, ___internal_method, existingMediaPath, album, filename, callback);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::NativeGallery_Permission>* Liv::NativeGalleryBridge::NativeGallery::SaveImageToGallery(::StringW  existingMediaPath, ::StringW  album, ::StringW  filename, ::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery*>(),
                        {"SaveImageToGallery", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::NativeGallery_Permission>*>(nullptr, ___internal_method, existingMediaPath, album, filename, callback);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::NativeGallery_Permission>* Liv::NativeGalleryBridge::NativeGallery::SaveToGallery(::StringW  existingMediaPath, ::StringW  album, ::StringW  filename, ::GlobalNamespace::NativeGallery_MediaType  mediaType, ::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery*>(),
                        {"SaveToGallery", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::NativeGallery_MediaType>(), ::i2c::type_of<::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::NativeGallery_Permission>*>(nullptr, ___internal_method, existingMediaPath, album, filename, mediaType, callback);
}
inline void Liv::NativeGalleryBridge::NativeGallery::SaveToGalleryInternal(::StringW  path, ::StringW  album, ::GlobalNamespace::NativeGallery_MediaType  mediaType, ::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery*>(),
                        {"SaveToGalleryInternal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::NativeGallery_MediaType>(), ::i2c::type_of<::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, album, mediaType, callback);
}
inline ::StringW Liv::NativeGalleryBridge::NativeGallery::GetTemporarySavePath(::StringW  filename)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery*>(),
                        {"GetTemporarySavePath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, filename);
}
// Ctor Parameters []
constexpr ::Liv::NativeGalleryBridge::NativeGallery::NativeGallery()   {
}
//  Writing Method size for method: ::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass28_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass28_0::*)()>(&::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass28_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3694f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass28_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass28_0._SaveToGallery_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass28_0::*)()>(&::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass28_0::_SaveToGallery_b__0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa369500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass28_0*>(),
                        {"<SaveToGallery>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass28_0::__cordl_internal_get_existingMediaPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___existingMediaPath;
}
constexpr ::StringW const& Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass28_0::__cordl_internal_get_existingMediaPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___existingMediaPath;
}
constexpr void Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass28_0::__cordl_internal_set_existingMediaPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___existingMediaPath = value;
}
constexpr ::StringW& Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass28_0::__cordl_internal_get_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr ::StringW const& Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass28_0::__cordl_internal_get_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr void Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass28_0::__cordl_internal_set_path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___path = value;
}
inline void Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass28_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass28_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass28_0::_SaveToGallery_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass28_0*>(),
                        {"<SaveToGallery>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass28_0* Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass28_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass28_0*>());
}
// Ctor Parameters []
constexpr ::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass28_0::NativeGallery___c__DisplayClass28_0()   {
}
//  Writing Method size for method: ::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass21_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass21_0::*)()>(&::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass21_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa368c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass21_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass21_0._RequestPermissionAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass21_0::*)(::GlobalNamespace::NativeGallery_Permission)>(&::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass21_0::_RequestPermissionAsync_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa3694a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass21_0*>(),
                        {"<RequestPermissionAsync>b__0", {}, {::i2c::type_of<::GlobalNamespace::NativeGallery_Permission>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::NativeGallery_Permission>*& Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass21_0::__cordl_internal_get_tcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::NativeGallery_Permission>* const& Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass21_0::__cordl_internal_get_tcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr void Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass21_0::__cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::NativeGallery_Permission>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tcs = value;
}
inline void Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass21_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass21_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass21_0::_RequestPermissionAsync_b__0(::GlobalNamespace::NativeGallery_Permission  permission)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass21_0*>(),
                        {"<RequestPermissionAsync>b__0", {}, {::i2c::type_of<::GlobalNamespace::NativeGallery_Permission>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, permission);
}
inline ::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass21_0* Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass21_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass21_0*>());
}
// Ctor Parameters []
constexpr ::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass21_0::NativeGallery___c__DisplayClass21_0()   {
}
//  Writing Method size for method: ::Liv::NativeGalleryBridge::NativeGallery_SaveMediaCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NativeGalleryBridge::NativeGallery_SaveMediaCallback::*)(::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*)>(&::Liv::NativeGalleryBridge::NativeGallery_SaveMediaCallback::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa36926c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery_SaveMediaCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NativeGalleryBridge::NativeGallery_SaveMediaCallback.onMediaSaved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NativeGalleryBridge::NativeGallery_SaveMediaCallback::*)(bool, ::StringW)>(&::Liv::NativeGalleryBridge::NativeGallery_SaveMediaCallback::onMediaSaved)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa369480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery_SaveMediaCallback*>(),
                        {"onMediaSaved", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*& Liv::NativeGalleryBridge::NativeGallery_SaveMediaCallback::__cordl_internal_get__mediaSaveCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mediaSaveCallback;
}
constexpr ::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback* const& Liv::NativeGalleryBridge::NativeGallery_SaveMediaCallback::__cordl_internal_get__mediaSaveCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mediaSaveCallback;
}
constexpr void Liv::NativeGalleryBridge::NativeGallery_SaveMediaCallback::__cordl_internal_set__mediaSaveCallback(::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mediaSaveCallback = value;
}
inline void Liv::NativeGalleryBridge::NativeGallery_SaveMediaCallback::_ctor(::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*  mediaSaveCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery_SaveMediaCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mediaSaveCallback);
}
inline void Liv::NativeGalleryBridge::NativeGallery_SaveMediaCallback::onMediaSaved(bool  success, ::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery_SaveMediaCallback*>(),
                        {"onMediaSaved", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success, path);
}
inline ::Liv::NativeGalleryBridge::NativeGallery_SaveMediaCallback* Liv::NativeGalleryBridge::NativeGallery_SaveMediaCallback::New_ctor(::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*  mediaSaveCallback)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::NativeGalleryBridge::NativeGallery_SaveMediaCallback*>(mediaSaveCallback));
}
// Ctor Parameters []
constexpr ::Liv::NativeGalleryBridge::NativeGallery_SaveMediaCallback::NativeGallery_SaveMediaCallback()   {
}
//  Writing Method size for method: ::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback::*)(::System::Object*, ::System::IntPtr)>(&::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa3693cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback::*)(bool, ::StringW)>(&::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa36946c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*>(),
                    {::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback::Invoke(bool  success, ::StringW  path)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success, path);
}
inline ::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback* Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback::NativeGallery_MediaSaveCallback()   {
}
//  Writing Method size for method: ::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback::*)(::System::Object*, ::System::IntPtr)>(&::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa368c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback::*)(::GlobalNamespace::NativeGallery_Permission)>(&::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa3693b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback*>(),
                    {::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Liv::NativeGalleryBridge::NativeGallery_PermissionCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Liv::NativeGalleryBridge::NativeGallery_PermissionCallback::Invoke(::GlobalNamespace::NativeGallery_Permission  permission)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, permission);
}
inline ::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback* Liv::NativeGalleryBridge::NativeGallery_PermissionCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback::NativeGallery_PermissionCallback()   {
}
