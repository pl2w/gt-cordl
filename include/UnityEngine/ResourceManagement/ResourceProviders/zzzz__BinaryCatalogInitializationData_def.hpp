#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/BinaryCatalogInitializationData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryCatalogInitializationData)
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class BinaryCatalogInitializationData;
}
// Write type traits
MARK_REF_T(::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitializationData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitializationData*, "UnityEngine.ResourceManagement.ResourceProviders", "BinaryCatalogInitializationData");
// Dependencies System.Object
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.BinaryCatalogInitializationData
class CORDL_TYPE BinaryCatalogInitializationData : public ::System::Object {
public:
// Declarations
/// @brief Field m_BinaryStorageBufferCacheSize, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_BinaryStorageBufferCacheSize, put=__cordl_internal_set_m_BinaryStorageBufferCacheSize)) int32_t  m_BinaryStorageBufferCacheSize;

/// @brief Field m_CatalogLocationCacheSize, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CatalogLocationCacheSize, put=__cordl_internal_set_m_CatalogLocationCacheSize)) int32_t  m_CatalogLocationCacheSize;

static inline ::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitializationData* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_m_BinaryStorageBufferCacheSize() const;

constexpr int32_t& __cordl_internal_get_m_BinaryStorageBufferCacheSize() ;

constexpr int32_t const& __cordl_internal_get_m_CatalogLocationCacheSize() const;

constexpr int32_t& __cordl_internal_get_m_CatalogLocationCacheSize() ;

constexpr void __cordl_internal_set_m_BinaryStorageBufferCacheSize(int32_t  value) ;

constexpr void __cordl_internal_set_m_CatalogLocationCacheSize(int32_t  value) ;

/// @brief Method .ctor, addr 0xb3012a0, size 0xd4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BinaryCatalogInitializationData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BinaryCatalogInitializationData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BinaryCatalogInitializationData(BinaryCatalogInitializationData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BinaryCatalogInitializationData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BinaryCatalogInitializationData(BinaryCatalogInitializationData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28610};

/// [SerializeField]
/// @brief Field m_BinaryStorageBufferCacheSize, offset: 0x10, size: 0x4, def value: None
 int32_t  ___m_BinaryStorageBufferCacheSize;

/// [SerializeField]
/// @brief Field m_CatalogLocationCacheSize, offset: 0x14, size: 0x4, def value: None
 int32_t  ___m_CatalogLocationCacheSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitializationData, ___m_BinaryStorageBufferCacheSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitializationData, ___m_CatalogLocationCacheSize) == 0x14, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ResourceManagement::ResourceProviders::BinaryCatalogInitializationData) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
