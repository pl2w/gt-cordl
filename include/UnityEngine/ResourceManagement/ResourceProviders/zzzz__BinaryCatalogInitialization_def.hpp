#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/BinaryCatalogInitialization.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryCatalogInitialization)
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::Util {
class IInitializableObject;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class BinaryCatalogInitialization;
}
// Write type traits
MARK_REF_T(::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization*, "UnityEngine.ResourceManagement.ResourceProviders", "BinaryCatalogInitialization");
// Dependencies System.Object
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.BinaryCatalogInitialization
class CORDL_TYPE BinaryCatalogInitialization : public ::System::Object {
public:
// Declarations
/// @brief Field s_BinaryStorageBufferCacheSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_BinaryStorageBufferCacheSize, put=setStaticF_s_BinaryStorageBufferCacheSize)) int32_t  s_BinaryStorageBufferCacheSize;

/// @brief Field s_CatalogLocationCacheSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_CatalogLocationCacheSize, put=setStaticF_s_CatalogLocationCacheSize)) int32_t  s_CatalogLocationCacheSize;

/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::IInitializableObject"
constexpr operator  ::UnityEngine::ResourceManagement::Util::IInitializableObject*() noexcept;

/// @brief Method Initialize, addr 0xb30107c, size 0x140, virtual true, abstract: false, final true
inline bool Initialize(::StringW  id, ::StringW  dataStr) ;

/// @brief Method InitializeAsync, addr 0xb3011bc, size 0x8c, virtual true, abstract: false, final true
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> InitializeAsync(::UnityEngine::ResourceManagement::ResourceManager*  resourceManager, ::StringW  id, ::StringW  dataStr) ;

static inline ::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization* New_ctor() ;

/// @brief Method ResetToDefaults, addr 0xb30101c, size 0x60, virtual false, abstract: false, final false
static inline void ResetToDefaults() ;

/// @brief Method .ctor, addr 0xb301248, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_s_BinaryStorageBufferCacheSize() ;

static inline int32_t getStaticF_s_CatalogLocationCacheSize() ;

/// @brief Method get_BinaryStorageBufferCacheSize, addr 0xb300f6c, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_BinaryStorageBufferCacheSize() ;

/// @brief Method get_CatalogLocationCacheSize, addr 0xb300fc4, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_CatalogLocationCacheSize() ;

/// @brief Convert to "::UnityEngine::ResourceManagement::Util::IInitializableObject"
constexpr ::UnityEngine::ResourceManagement::Util::IInitializableObject* i___UnityEngine__ResourceManagement__Util__IInitializableObject() noexcept;

static inline void setStaticF_s_BinaryStorageBufferCacheSize(int32_t  value) ;

static inline void setStaticF_s_CatalogLocationCacheSize(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BinaryCatalogInitialization() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BinaryCatalogInitialization", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BinaryCatalogInitialization(BinaryCatalogInitialization && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BinaryCatalogInitialization", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BinaryCatalogInitialization(BinaryCatalogInitialization const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28609};

/// @brief Field kCatalogLocationCacheSize offset 0xffffffff size 0x4
static constexpr int32_t  kCatalogLocationCacheSize{static_cast<int32_t>(0x20)};

/// @brief Field kDefaultBinaryStorageBufferCacheSize offset 0xffffffff size 0x4
static constexpr int32_t  kDefaultBinaryStorageBufferCacheSize{static_cast<int32_t>(0x80)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitialization) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
