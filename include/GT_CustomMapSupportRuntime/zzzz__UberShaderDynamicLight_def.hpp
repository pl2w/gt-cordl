#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/UberShaderDynamicLight.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(UberShaderDynamicLight)
namespace UnityEngine {
class Light;
}
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
class UberShaderDynamicLight;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::UberShaderDynamicLight*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::UberShaderDynamicLight*, "GT_CustomMapSupportRuntime", "UberShaderDynamicLight");
// [RequireComponent(typeof(UnityEngine.Light))]
// Dependencies UnityEngine.MonoBehaviour
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.UberShaderDynamicLight
class CORDL_TYPE UberShaderDynamicLight : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field dynamicLight, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_dynamicLight, put=__cordl_internal_set_dynamicLight)) ::UnityW<::UnityEngine::Light>  dynamicLight;

/// @brief Method Awake, addr 0x9cb8d94, size 0xa4, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GT_CustomMapSupportRuntime::UberShaderDynamicLight* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Light> const& __cordl_internal_get_dynamicLight() const;

constexpr ::UnityW<::UnityEngine::Light>& __cordl_internal_get_dynamicLight() ;

constexpr void __cordl_internal_set_dynamicLight(::UnityW<::UnityEngine::Light>  value) ;

/// @brief Method .ctor, addr 0x9cb8e38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UberShaderDynamicLight() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UberShaderDynamicLight", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UberShaderDynamicLight(UberShaderDynamicLight && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UberShaderDynamicLight", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UberShaderDynamicLight(UberShaderDynamicLight const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30936};

/// [Nullable(2)]
/// @brief Field dynamicLight, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Light>  ___dynamicLight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::UberShaderDynamicLight, ___dynamicLight) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::UberShaderDynamicLight) == 0x28, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
