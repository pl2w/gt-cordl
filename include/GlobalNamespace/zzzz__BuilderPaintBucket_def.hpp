#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderPaintBucket.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderPaintBucket)
namespace GlobalNamespace {
class BuilderMaterialOptions;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderPaintBucket;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderPaintBucket*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderPaintBucket*, "", "BuilderPaintBucket");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderPaintBucket
class CORDL_TYPE BuilderPaintBucket : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field bucketMaterialOptions, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_bucketMaterialOptions, put=__cordl_internal_set_bucketMaterialOptions)) ::UnityW<::GlobalNamespace::BuilderMaterialOptions>  bucketMaterialOptions;

/// @brief Field materialId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_materialId, put=__cordl_internal_set_materialId)) ::StringW  materialId;

/// @brief Field materialType, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_materialType, put=__cordl_internal_set_materialType)) int32_t  materialType;

/// @brief Field paintBucketRenderer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_paintBucketRenderer, put=__cordl_internal_set_paintBucketRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  paintBucketRenderer;

/// @brief Method Awake, addr 0x57b32d8, size 0x128, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::BuilderPaintBucket* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x57b3400, size 0xf8, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

constexpr ::UnityW<::GlobalNamespace::BuilderMaterialOptions> const& __cordl_internal_get_bucketMaterialOptions() const;

constexpr ::UnityW<::GlobalNamespace::BuilderMaterialOptions>& __cordl_internal_get_bucketMaterialOptions() ;

constexpr ::StringW const& __cordl_internal_get_materialId() const;

constexpr ::StringW& __cordl_internal_get_materialId() ;

constexpr int32_t const& __cordl_internal_get_materialType() const;

constexpr int32_t& __cordl_internal_get_materialType() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_paintBucketRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_paintBucketRenderer() ;

constexpr void __cordl_internal_set_bucketMaterialOptions(::UnityW<::GlobalNamespace::BuilderMaterialOptions>  value) ;

constexpr void __cordl_internal_set_materialId(::StringW  value) ;

constexpr void __cordl_internal_set_materialType(int32_t  value) ;

constexpr void __cordl_internal_set_paintBucketRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

/// @brief Method .ctor, addr 0x57b34f8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderPaintBucket() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderPaintBucket", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderPaintBucket(BuilderPaintBucket && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderPaintBucket", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderPaintBucket(BuilderPaintBucket const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1564};

/// [SerializeField]
/// @brief Field bucketMaterialOptions, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderMaterialOptions>  ___bucketMaterialOptions;

/// [SerializeField]
/// @brief Field paintBucketRenderer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___paintBucketRenderer;

/// [SerializeField]
/// @brief Field materialId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___materialId;

/// @brief Field materialType, offset: 0x38, size: 0x4, def value: None
 int32_t  ___materialType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderPaintBucket, ___bucketMaterialOptions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPaintBucket, ___paintBucketRenderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPaintBucket, ___materialId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPaintBucket, ___materialType) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderPaintBucket) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
