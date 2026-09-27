#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderMaterialOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderMaterialOptions)
namespace GlobalNamespace {
class BuilderMaterialOptions_Options;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderMaterialOptions;
}
namespace GlobalNamespace {
class BuilderMaterialOptions_Options;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderMaterialOptions*);
MARK_REF_T(::GlobalNamespace::BuilderMaterialOptions_Options*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderMaterialOptions*, "", "BuilderMaterialOptions");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderMaterialOptions_Options*, "", "BuilderMaterialOptions/Options");
// [CreateAssetMenu(fileName = "BuilderMaterialOptions01a", menuName = "Gorilla Tag/Builder/Options", order = 0)]
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderMaterialOptions
class CORDL_TYPE BuilderMaterialOptions : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using Options = ::GlobalNamespace::BuilderMaterialOptions_Options;

/// @brief Field options, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_options, put=__cordl_internal_set_options)) ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderMaterialOptions_Options*>*  options;

/// @brief Method GetDefaultMaterial, addr 0x57bebe8, size 0x108, virtual false, abstract: false, final false
inline void GetDefaultMaterial(::by_ref<int32_t>  materialType, ::by_ref<::UnityEngine::Material*>  material, ::by_ref<int32_t>  soundIndex) ;

/// @brief Method GetMaterialFromType, addr 0x57bea3c, size 0x1ac, virtual false, abstract: false, final false
inline void GetMaterialFromType(int32_t  materialType, ::by_ref<::UnityEngine::Material*>  material, ::by_ref<int32_t>  soundIndex) ;

static inline ::GlobalNamespace::BuilderMaterialOptions* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderMaterialOptions_Options*>* const& __cordl_internal_get_options() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderMaterialOptions_Options*>*& __cordl_internal_get_options() ;

constexpr void __cordl_internal_set_options(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderMaterialOptions_Options*>*  value) ;

/// @brief Method .ctor, addr 0x57becf0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderMaterialOptions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderMaterialOptions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderMaterialOptions(BuilderMaterialOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderMaterialOptions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderMaterialOptions(BuilderMaterialOptions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1596};

/// @brief Field options, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderMaterialOptions_Options*>*  ___options;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderMaterialOptions, ___options) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderMaterialOptions) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderMaterialOptions/Options
class CORDL_TYPE BuilderMaterialOptions_Options : public ::System::Object {
public:
// Declarations
/// @brief Field material, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_material, put=__cordl_internal_set_material)) ::UnityW<::UnityEngine::Material>  material;

/// @brief Field materialId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_materialId, put=__cordl_internal_set_materialId)) ::StringW  materialId;

/// @brief Field materialType, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_materialType, put=__cordl_internal_set_materialType)) int32_t  materialType;

/// @brief Field soundIndex, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_soundIndex, put=__cordl_internal_set_soundIndex)) int32_t  soundIndex;

static inline ::GlobalNamespace::BuilderMaterialOptions_Options* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material() ;

constexpr ::StringW const& __cordl_internal_get_materialId() const;

constexpr ::StringW& __cordl_internal_get_materialId() ;

constexpr int32_t const& __cordl_internal_get_materialType() const;

constexpr int32_t& __cordl_internal_get_materialType() ;

constexpr int32_t const& __cordl_internal_get_soundIndex() const;

constexpr int32_t& __cordl_internal_get_soundIndex() ;

constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_materialId(::StringW  value) ;

constexpr void __cordl_internal_set_materialType(int32_t  value) ;

constexpr void __cordl_internal_set_soundIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x57becf8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderMaterialOptions_Options() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderMaterialOptions_Options", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderMaterialOptions_Options(BuilderMaterialOptions_Options && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderMaterialOptions_Options", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderMaterialOptions_Options(BuilderMaterialOptions_Options const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1595};

/// @brief Field materialId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___materialId;

/// @brief Field material, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___material;

/// [GorillaSoundLookup]
/// @brief Field soundIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  ___soundIndex;

/// @brief Field materialType, offset: 0x24, size: 0x4, def value: None
 int32_t  ___materialType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderMaterialOptions_Options, ___materialId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderMaterialOptions_Options, ___material) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderMaterialOptions_Options, ___soundIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderMaterialOptions_Options, ___materialType) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderMaterialOptions_Options) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
