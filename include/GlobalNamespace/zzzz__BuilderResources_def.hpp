#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderResources.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(BuilderResources)
namespace GlobalNamespace {
struct BuilderResourceQuantity;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderResources;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderResources*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderResources*, "", "BuilderResources");
// [CreateAssetMenu(fileName = "BuilderMaterialResources", menuName = "Gorilla Tag/Builder/Resources", order = 0)]
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderResources
class CORDL_TYPE BuilderResources : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field quantities, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_quantities, put=__cordl_internal_set_quantities)) ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderResourceQuantity>*  quantities;

static inline ::GlobalNamespace::BuilderResources* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderResourceQuantity>* const& __cordl_internal_get_quantities() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderResourceQuantity>*& __cordl_internal_get_quantities() ;

constexpr void __cordl_internal_set_quantities(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderResourceQuantity>*  value) ;

/// @brief Method .ctor, addr 0x57d78b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderResources() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderResources", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderResources(BuilderResources && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderResources", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderResources(BuilderResources const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1629};

/// @brief Field quantities, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderResourceQuantity>*  ___quantities;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderResources, ___quantities) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderResources) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
