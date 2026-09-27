#pragma once
// IWYU pragma private; include "UnityEngine/Localization/AddressablesInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AddressablesInterface)
namespace GlobalNamespace {
struct Addressables_MergeMode;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Type;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class IResourceLocator;
}
namespace UnityEngine::Localization {
struct LocaleIdentifier;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
// Forward declare root types
namespace UnityEngine::Localization {
class AddressablesInterface;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::AddressablesInterface*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::AddressablesInterface*, "UnityEngine.Localization", "AddressablesInterface");
// Dependencies System.Object
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.AddressablesInterface
class CORDL_TYPE AddressablesInterface : public ::System::Object {
public:
// Declarations
/// @brief Field s_Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Instance, put=setStaticF_s_Instance)) ::UnityEngine::Localization::AddressablesInterface*  s_Instance;

/// @brief Method Acquire, addr 0xb00c970, size 0x48, virtual false, abstract: false, final false
static inline void Acquire(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle) ;

/// @brief Method AcquireInternal, addr 0xb00cd34, size 0x40, virtual true, abstract: false, final false
inline void AcquireInternal(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle) ;

/// @brief Method CreateGroupOperation, addr 0xb00ca54, size 0x204, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> CreateGroupOperation(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  asyncOperations) ;

/// @brief Method InitializeAddressablesAsync, addr 0xb00cfc8, size 0x74, virtual true, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> InitializeAddressablesAsync() ;

/// @brief Method LoadAssetFromGUID, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TObject>
requires(::cordl_internals::reference_type_constraint<TObject>)
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAssetFromGUID(::StringW  guid) ;

/// @brief Method LoadAssetFromGUIDInternal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename TObject>
requires(::cordl_internals::reference_type_constraint<TObject>)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAssetFromGUIDInternal(::StringW  guid) ;

/// @brief Method LoadAssetFromName, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TObject>
requires(::cordl_internals::reference_type_constraint<TObject>)
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAssetFromName(::StringW  name) ;

/// @brief Method LoadAssetFromNameInternal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename TObject>
requires(::cordl_internals::reference_type_constraint<TObject>)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAssetFromNameInternal(::StringW  name) ;

/// @brief Method LoadAssetsFromLocations, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TObject>
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*> LoadAssetsFromLocations(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*  locations, ::System::Action_1<TObject>*  callback) ;

/// @brief Method LoadAssetsFromLocationsInternal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*> LoadAssetsFromLocationsInternal(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*  locations, ::System::Action_1<TObject>*  callback) ;

/// @brief Method LoadAssetsWithLabel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TObject>
requires(::cordl_internals::reference_type_constraint<TObject>)
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*> LoadAssetsWithLabel(::StringW  label, ::System::Action_1<TObject>*  callback) ;

/// @brief Method LoadAssetsWithLabelInternal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename TObject>
requires(::cordl_internals::reference_type_constraint<TObject>)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*> LoadAssetsWithLabelInternal(::StringW  label, ::System::Action_1<TObject>*  callback) ;

/// @brief Method LoadResourceLocationsWithLabelsAsync, addr 0xb00cc58, size 0x68, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> LoadResourceLocationsWithLabelsAsync(::System::Collections::IEnumerable*  labels, ::GlobalNamespace::Addressables_MergeMode  mode, ::System::Type*  type) ;

/// @brief Method LoadResourceLocationsWithLabelsAsyncInternal, addr 0xb00cdf8, size 0x98, virtual true, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> LoadResourceLocationsWithLabelsAsyncInternal(::System::Collections::IEnumerable*  labels, ::GlobalNamespace::Addressables_MergeMode  mode, ::System::Type*  type) ;

/// @brief Method LoadTableFromLocation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TObject>
requires(::cordl_internals::reference_type_constraint<TObject>)
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadTableFromLocation(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location) ;

/// @brief Method LoadTableFromLocationInternal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename TObject>
requires(::cordl_internals::reference_type_constraint<TObject>)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadTableFromLocationInternal(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location) ;

/// @brief Method LoadTableLocationsAsync, addr 0xb00ccc0, size 0x74, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> LoadTableLocationsAsync(::StringW  tableName, ::UnityEngine::Localization::LocaleIdentifier  id, ::System::Type*  type) ;

/// @brief Method LoadTableLocationsAsyncInternal, addr 0xb00ce90, size 0xb4, virtual true, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> LoadTableLocationsAsyncInternal(::StringW  tableName, ::UnityEngine::Localization::LocaleIdentifier  id, ::System::Type*  type) ;

static inline ::UnityEngine::Localization::AddressablesInterface* New_ctor() ;

/// @brief Method Release, addr 0xb00c9b8, size 0x48, virtual false, abstract: false, final false
static inline void Release(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle) ;

/// @brief Method ReleaseAndReset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TObject>
static inline void ReleaseAndReset(::by_ref<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>  handle) ;

/// @brief Method ReleaseInternal, addr 0xb00cd74, size 0x84, virtual true, abstract: false, final false
inline void ReleaseInternal(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle) ;

/// @brief Method SafeRelease, addr 0xb00ca00, size 0x54, virtual false, abstract: false, final false
static inline void SafeRelease(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle) ;

/// @brief Method .ctor, addr 0xb00c8c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Localization::AddressablesInterface* getStaticF_s_Instance() ;

/// @brief Method get_Instance, addr 0xb00c838, size 0x88, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::AddressablesInterface* get_Instance() ;

/// @brief Method get_ResourceManager, addr 0xb00c920, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::ResourceManager* get_ResourceManager() ;

static inline void setStaticF_s_Instance(::UnityEngine::Localization::AddressablesInterface*  value) ;

/// @brief Method set_Instance, addr 0xb00c8c8, size 0x58, virtual false, abstract: false, final false
static inline void set_Instance(::UnityEngine::Localization::AddressablesInterface*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AddressablesInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AddressablesInterface", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AddressablesInterface(AddressablesInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AddressablesInterface", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AddressablesInterface(AddressablesInterface const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25015};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::AddressablesInterface) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization
