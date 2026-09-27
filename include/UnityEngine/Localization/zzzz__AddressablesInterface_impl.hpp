#pragma once
// IWYU pragma private; include "UnityEngine/Localization/AddressablesInterface.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/zzzz__AddressablesInterface_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__IResourceLocator_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__Addressables_MergeMode_def.hpp"
#include "UnityEngine/Localization/zzzz__LocaleIdentifier_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::AddressablesInterface.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::AddressablesInterface* (*)()>(&::UnityEngine::Localization::AddressablesInterface::get_Instance)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb00c838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::AddressablesInterface.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Localization::AddressablesInterface*)>(&::UnityEngine::Localization::AddressablesInterface::set_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb00c8c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(),
                        {"set_Instance", {}, {::i2c::type_of<::UnityEngine::Localization::AddressablesInterface*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::AddressablesInterface.get_ResourceManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::ResourceManager* (*)()>(&::UnityEngine::Localization::AddressablesInterface::get_ResourceManager)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb00c920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(),
                        {"get_ResourceManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::AddressablesInterface.Acquire
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&::UnityEngine::Localization::AddressablesInterface::Acquire)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb00c970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(),
                        {"Acquire", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::AddressablesInterface.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&::UnityEngine::Localization::AddressablesInterface::Release)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb00c9b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(),
                        {"Release", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::AddressablesInterface.SafeRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&::UnityEngine::Localization::AddressablesInterface::SafeRelease)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb00ca00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(),
                        {"SafeRelease", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::AddressablesInterface.CreateGroupOperation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> (*)(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)>(&::UnityEngine::Localization::AddressablesInterface::CreateGroupOperation)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xb00ca54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(),
                        {"CreateGroupOperation", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::AddressablesInterface.LoadResourceLocationsWithLabelsAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> (*)(::System::Collections::IEnumerable*, ::GlobalNamespace::Addressables_MergeMode, ::System::Type*)>(&::UnityEngine::Localization::AddressablesInterface::LoadResourceLocationsWithLabelsAsync)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb00cc58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(),
                        {"LoadResourceLocationsWithLabelsAsync", {}, {::i2c::type_of<::System::Collections::IEnumerable*>(), ::i2c::type_of<::GlobalNamespace::Addressables_MergeMode>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::AddressablesInterface.LoadTableLocationsAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> (*)(::StringW, ::UnityEngine::Localization::LocaleIdentifier, ::System::Type*)>(&::UnityEngine::Localization::AddressablesInterface::LoadTableLocationsAsync)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb00ccc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(),
                        {"LoadTableLocationsAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::AddressablesInterface.AcquireInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::AddressablesInterface::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&::UnityEngine::Localization::AddressablesInterface::AcquireInternal)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb00cd34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(),
                    {::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::AddressablesInterface.ReleaseInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::AddressablesInterface::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&::UnityEngine::Localization::AddressablesInterface::ReleaseInternal)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb00cd74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(),
                    {::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::AddressablesInterface.LoadResourceLocationsWithLabelsAsyncInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> (::UnityEngine::Localization::AddressablesInterface::*)(::System::Collections::IEnumerable*, ::GlobalNamespace::Addressables_MergeMode, ::System::Type*)>(&::UnityEngine::Localization::AddressablesInterface::LoadResourceLocationsWithLabelsAsyncInternal)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb00cdf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(),
                    {::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::AddressablesInterface.LoadTableLocationsAsyncInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> (::UnityEngine::Localization::AddressablesInterface::*)(::StringW, ::UnityEngine::Localization::LocaleIdentifier, ::System::Type*)>(&::UnityEngine::Localization::AddressablesInterface::LoadTableLocationsAsyncInternal)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb00ce90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(),
                    {::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::AddressablesInterface.InitializeAddressablesAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> (::UnityEngine::Localization::AddressablesInterface::*)()>(&::UnityEngine::Localization::AddressablesInterface::InitializeAddressablesAsync)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb00cfc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(),
                    {::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::AddressablesInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::AddressablesInterface::*)()>(&::UnityEngine::Localization::AddressablesInterface::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb00c8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::AddressablesInterface::setStaticF_s_Instance(::UnityEngine::Localization::AddressablesInterface*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Localization::AddressablesInterface*, "s_Instance", ::UnityEngine::Localization::AddressablesInterface*>(std::forward<::UnityEngine::Localization::AddressablesInterface*>(value));
}
inline ::UnityEngine::Localization::AddressablesInterface* UnityEngine::Localization::AddressablesInterface::getStaticF_s_Instance()  {
return ::cordl_internals::getStaticField<::UnityEngine::Localization::AddressablesInterface*, "s_Instance", ::UnityEngine::Localization::AddressablesInterface*>();
}
inline ::UnityEngine::Localization::AddressablesInterface* UnityEngine::Localization::AddressablesInterface::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::AddressablesInterface*>(nullptr, ___internal_method);
}
inline void UnityEngine::Localization::AddressablesInterface::set_Instance(::UnityEngine::Localization::AddressablesInterface*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(),
                        {"set_Instance", {}, {::i2c::type_of<::UnityEngine::Localization::AddressablesInterface*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::ResourceManagement::ResourceManager* UnityEngine::Localization::AddressablesInterface::get_ResourceManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(),
                        {"get_ResourceManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::ResourceManager*>(nullptr, ___internal_method);
}
inline void UnityEngine::Localization::AddressablesInterface::Acquire(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(),
                        {"Acquire", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle);
}
inline void UnityEngine::Localization::AddressablesInterface::Release(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(),
                        {"Release", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle);
}
inline void UnityEngine::Localization::AddressablesInterface::SafeRelease(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(),
                        {"SafeRelease", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle);
}
template<typename TObject>
inline void UnityEngine::Localization::AddressablesInterface::ReleaseAndReset(::by_ref<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>  handle)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(),
                    {"ReleaseAndReset", {::i2c::class_of<TObject>()}, {::i2c::type_of<::by_ref<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TObject>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> UnityEngine::Localization::AddressablesInterface::CreateGroupOperation(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  asyncOperations)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(),
                        {"CreateGroupOperation", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>(nullptr, ___internal_method, asyncOperations);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> UnityEngine::Localization::AddressablesInterface::LoadResourceLocationsWithLabelsAsync(::System::Collections::IEnumerable*  labels, ::GlobalNamespace::Addressables_MergeMode  mode, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(),
                        {"LoadResourceLocationsWithLabelsAsync", {}, {::i2c::type_of<::System::Collections::IEnumerable*>(), ::i2c::type_of<::GlobalNamespace::Addressables_MergeMode>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>(nullptr, ___internal_method, labels, mode, type);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> UnityEngine::Localization::AddressablesInterface::LoadTableLocationsAsync(::StringW  tableName, ::UnityEngine::Localization::LocaleIdentifier  id, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(),
                        {"LoadTableLocationsAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>(nullptr, ___internal_method, tableName, id, type);
}
template<typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*> UnityEngine::Localization::AddressablesInterface::LoadAssetsFromLocations(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*  locations, ::System::Action_1<TObject>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(),
                    {"LoadAssetsFromLocations", {::i2c::class_of<TObject>()}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(), ::i2c::type_of<::System::Action_1<TObject>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TObject>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>>(nullptr, ___internal_method, locations, callback);
}
template<typename TObject>
requires(::cordl_internals::reference_type_constraint<TObject>)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::Localization::AddressablesInterface::LoadAssetFromGUID(::StringW  guid)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(),
                    {"LoadAssetFromGUID", {::i2c::class_of<TObject>()}, {::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TObject>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(nullptr, ___internal_method, guid);
}
template<typename TObject>
requires(::cordl_internals::reference_type_constraint<TObject>)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::Localization::AddressablesInterface::LoadAssetFromName(::StringW  name)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(),
                    {"LoadAssetFromName", {::i2c::class_of<TObject>()}, {::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TObject>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(nullptr, ___internal_method, name);
}
template<typename TObject>
requires(::cordl_internals::reference_type_constraint<TObject>)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::Localization::AddressablesInterface::LoadTableFromLocation(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(),
                    {"LoadTableFromLocation", {::i2c::class_of<TObject>()}, {::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TObject>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(nullptr, ___internal_method, location);
}
template<typename TObject>
requires(::cordl_internals::reference_type_constraint<TObject>)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*> UnityEngine::Localization::AddressablesInterface::LoadAssetsWithLabel(::StringW  label, ::System::Action_1<TObject>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(),
                    {"LoadAssetsWithLabel", {::i2c::class_of<TObject>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<TObject>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TObject>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>>(nullptr, ___internal_method, label, callback);
}
inline void UnityEngine::Localization::AddressablesInterface::AcquireInternal(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline void UnityEngine::Localization::AddressablesInterface::ReleaseInternal(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> UnityEngine::Localization::AddressablesInterface::LoadResourceLocationsWithLabelsAsyncInternal(::System::Collections::IEnumerable*  labels, ::GlobalNamespace::Addressables_MergeMode  mode, ::System::Type*  type)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>(this, ___internal_method, labels, mode, type);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> UnityEngine::Localization::AddressablesInterface::LoadTableLocationsAsyncInternal(::StringW  tableName, ::UnityEngine::Localization::LocaleIdentifier  id, ::System::Type*  type)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>(this, ___internal_method, tableName, id, type);
}
template<typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*> UnityEngine::Localization::AddressablesInterface::LoadAssetsFromLocationsInternal(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*  locations, ::System::Action_1<TObject>*  callback)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(), 8}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<TObject>()}
                            ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>>(this, ___internal_method, locations, callback);
}
template<typename TObject>
requires(::cordl_internals::reference_type_constraint<TObject>)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::Localization::AddressablesInterface::LoadAssetFromGUIDInternal(::StringW  guid)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(), 9}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<TObject>()}
                            ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(this, ___internal_method, guid);
}
template<typename TObject>
requires(::cordl_internals::reference_type_constraint<TObject>)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::Localization::AddressablesInterface::LoadAssetFromNameInternal(::StringW  name)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(), 10}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<TObject>()}
                            ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(this, ___internal_method, name);
}
template<typename TObject>
requires(::cordl_internals::reference_type_constraint<TObject>)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::Localization::AddressablesInterface::LoadTableFromLocationInternal(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(), 11}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<TObject>()}
                            ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(this, ___internal_method, location);
}
template<typename TObject>
requires(::cordl_internals::reference_type_constraint<TObject>)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*> UnityEngine::Localization::AddressablesInterface::LoadAssetsWithLabelInternal(::StringW  label, ::System::Action_1<TObject>*  callback)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(), 12}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<TObject>()}
                            ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>>(this, ___internal_method, label, callback);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> UnityEngine::Localization::AddressablesInterface::InitializeAddressablesAsync()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>>(this, ___internal_method);
}
inline void UnityEngine::Localization::AddressablesInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::AddressablesInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::AddressablesInterface* UnityEngine::Localization::AddressablesInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::AddressablesInterface*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::AddressablesInterface::AddressablesInterface()   {
}
