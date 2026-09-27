#pragma once
// IWYU pragma private; include "GlobalNamespace/TransformReset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TransformReset_OriginalGameObjectTransform_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TransformReset)
namespace GlobalNamespace {
struct TransformReset_OriginalGameObjectTransform;
}
// Forward declare root types
namespace GlobalNamespace {
class TransformReset;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TransformReset*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TransformReset*, "", "TransformReset");
// Dependencies TransformReset::OriginalGameObjectTransform, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TransformReset
class CORDL_TYPE TransformReset : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using OriginalGameObjectTransform = ::GlobalNamespace::TransformReset_OriginalGameObjectTransform;

/// @brief Field tempTransformList, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempTransformList, put=__cordl_internal_set_tempTransformList)) ::ArrayW<::GlobalNamespace::TransformReset_OriginalGameObjectTransform>  tempTransformList;

/// @brief Field transformList, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_transformList, put=__cordl_internal_set_transformList)) ::ArrayW<::GlobalNamespace::TransformReset_OriginalGameObjectTransform>  transformList;

/// @brief Method Awake, addr 0x5745cb8, size 0x130, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::TransformReset* New_ctor() ;

/// @brief Method ResetTransforms, addr 0x57459b0, size 0x178, virtual false, abstract: false, final false
inline void ResetTransforms() ;

/// @brief Method ReturnTransforms, addr 0x5745e3c, size 0xac, virtual false, abstract: false, final false
inline void ReturnTransforms() ;

/// @brief Method SetScale, addr 0x5745ee8, size 0x94, virtual false, abstract: false, final false
inline void SetScale(float_t  ratio) ;

constexpr ::ArrayW<::GlobalNamespace::TransformReset_OriginalGameObjectTransform> const& __cordl_internal_get_tempTransformList() const;

constexpr ::ArrayW<::GlobalNamespace::TransformReset_OriginalGameObjectTransform>& __cordl_internal_get_tempTransformList() ;

constexpr ::ArrayW<::GlobalNamespace::TransformReset_OriginalGameObjectTransform> const& __cordl_internal_get_transformList() const;

constexpr ::ArrayW<::GlobalNamespace::TransformReset_OriginalGameObjectTransform>& __cordl_internal_get_transformList() ;

constexpr void __cordl_internal_set_tempTransformList(::ArrayW<::GlobalNamespace::TransformReset_OriginalGameObjectTransform>  value) ;

constexpr void __cordl_internal_set_transformList(::ArrayW<::GlobalNamespace::TransformReset_OriginalGameObjectTransform>  value) ;

/// @brief Method .ctor, addr 0x5745f7c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformReset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformReset", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformReset(TransformReset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformReset", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformReset(TransformReset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1268};

/// @brief Field transformList, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::TransformReset_OriginalGameObjectTransform>  ___transformList;

/// @brief Field tempTransformList, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::TransformReset_OriginalGameObjectTransform>  ___tempTransformList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TransformReset, ___transformList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformReset, ___tempTransformList) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TransformReset) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
