#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderUIResource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BuilderUIResource)
namespace GlobalNamespace {
struct BuilderResourceQuantity;
}
namespace GlobalNamespace {
struct BuilderResourceType;
}
namespace GorillaTagScripts {
class BuilderTable;
}
namespace TMPro {
class TextMeshPro;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderUIResource;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderUIResource*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderUIResource*, "", "BuilderUIResource");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderUIResource
class CORDL_TYPE BuilderUIResource : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field availableLabel, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_availableLabel, put=__cordl_internal_set_availableLabel)) ::UnityW<::TMPro::TextMeshPro>  availableLabel;

/// @brief Field costLabel, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_costLabel, put=__cordl_internal_set_costLabel)) ::UnityW<::TMPro::TextMeshPro>  costLabel;

/// @brief Field resourceNameLabel, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_resourceNameLabel, put=__cordl_internal_set_resourceNameLabel)) ::UnityW<::TMPro::TextMeshPro>  resourceNameLabel;

/// @brief Method GetResourceName, addr 0x57e2cd8, size 0x80, virtual false, abstract: false, final false
inline ::StringW GetResourceName(::GlobalNamespace::BuilderResourceType  type) ;

static inline ::GlobalNamespace::BuilderUIResource* New_ctor() ;

/// @brief Method SetResourceCost, addr 0x57e2b5c, size 0x17c, virtual false, abstract: false, final false
inline void SetResourceCost(::GlobalNamespace::BuilderResourceQuantity  resourceCost, ::GorillaTagScripts::BuilderTable*  table) ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_availableLabel() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_availableLabel() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_costLabel() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_costLabel() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_resourceNameLabel() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_resourceNameLabel() ;

constexpr void __cordl_internal_set_availableLabel(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_costLabel(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_resourceNameLabel(::UnityW<::TMPro::TextMeshPro>  value) ;

/// @brief Method .ctor, addr 0x57e2d58, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderUIResource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderUIResource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderUIResource(BuilderUIResource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderUIResource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderUIResource(BuilderUIResource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1649};

/// @brief Field resourceNameLabel, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___resourceNameLabel;

/// @brief Field costLabel, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___costLabel;

/// @brief Field availableLabel, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___availableLabel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderUIResource, ___resourceNameLabel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderUIResource, ___costLabel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderUIResource, ___availableLabel) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderUIResource) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
