#pragma once
// IWYU pragma private; include "GlobalNamespace/BoundsCalcs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BoundsInfo_def.hpp"
#include "GlobalNamespace/zzzz__StateHash_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(BoundsCalcs)
namespace GlobalNamespace {
struct BoundsInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BoundsCalcs;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BoundsCalcs*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BoundsCalcs*, "", "BoundsCalcs");
// Dependencies BoundsInfo, StateHash, UnityEngine.MeshFilter, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BoundsCalcs
class CORDL_TYPE BoundsCalcs : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _state, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__state, put=__cordl_internal_set__state)) ::GlobalNamespace::StateHash  _state;

/// @brief Field composite, offset 0x38, size 0x60 
 __declspec(property(get=__cordl_internal_get_composite, put=__cordl_internal_set_composite)) ::GlobalNamespace::BoundsInfo  composite;

/// @brief Field elements, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_elements, put=__cordl_internal_set_elements)) ::System::Collections::Generic::List_1<::GlobalNamespace::BoundsInfo>*  elements;

/// @brief Field optionalTargets, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_optionalTargets, put=__cordl_internal_set_optionalTargets)) ::ArrayW<::UnityW<::UnityEngine::MeshFilter>>  optionalTargets;

/// @brief Field singleMesh, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_singleMesh, put=setStaticF_singleMesh)) ::ArrayW<::UnityW<::UnityEngine::MeshFilter>>  singleMesh;

/// @brief Field useRootMeshOnly, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_useRootMeshOnly, put=__cordl_internal_set_useRootMeshOnly)) bool  useRootMeshOnly;

/// @brief Method Compute, addr 0x5b4133c, size 0x534, virtual false, abstract: false, final false
inline void Compute() ;

static inline ::GlobalNamespace::BoundsCalcs* New_ctor() ;

constexpr ::GlobalNamespace::StateHash const& __cordl_internal_get__state() const;

constexpr ::GlobalNamespace::StateHash& __cordl_internal_get__state() ;

constexpr ::GlobalNamespace::BoundsInfo const& __cordl_internal_get_composite() const;

constexpr ::GlobalNamespace::BoundsInfo& __cordl_internal_get_composite() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BoundsInfo>* const& __cordl_internal_get_elements() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BoundsInfo>*& __cordl_internal_get_elements() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshFilter>> const& __cordl_internal_get_optionalTargets() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshFilter>>& __cordl_internal_get_optionalTargets() ;

constexpr bool const& __cordl_internal_get_useRootMeshOnly() const;

constexpr bool& __cordl_internal_get_useRootMeshOnly() ;

constexpr void __cordl_internal_set__state(::GlobalNamespace::StateHash  value) ;

constexpr void __cordl_internal_set_composite(::GlobalNamespace::BoundsInfo  value) ;

constexpr void __cordl_internal_set_elements(::System::Collections::Generic::List_1<::GlobalNamespace::BoundsInfo>*  value) ;

constexpr void __cordl_internal_set_optionalTargets(::ArrayW<::UnityW<::UnityEngine::MeshFilter>>  value) ;

constexpr void __cordl_internal_set_useRootMeshOnly(bool  value) ;

/// @brief Method .ctor, addr 0x5b41ac0, size 0xb8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::UnityW<::UnityEngine::MeshFilter>> getStaticF_singleMesh() ;

static inline void setStaticF_singleMesh(::ArrayW<::UnityW<::UnityEngine::MeshFilter>>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoundsCalcs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoundsCalcs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoundsCalcs(BoundsCalcs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoundsCalcs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoundsCalcs(BoundsCalcs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3725};

/// @brief Field optionalTargets, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::MeshFilter>>  ___optionalTargets;

/// @brief Field useRootMeshOnly, offset: 0x28, size: 0x1, def value: None
 bool  ___useRootMeshOnly;

/// [Space]
/// @brief Field elements, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::BoundsInfo>*  ___elements;

/// [Space]
/// @brief Field composite, offset: 0x38, size: 0x60, def value: None
 ::GlobalNamespace::BoundsInfo  ___composite;

/// [Space]
/// @brief Field _state, offset: 0x98, size: 0x8, def value: None
 ::GlobalNamespace::StateHash  ____state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BoundsCalcs, ___optionalTargets) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoundsCalcs, ___useRootMeshOnly) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoundsCalcs, ___elements) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoundsCalcs, ___composite) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoundsCalcs, ____state) == 0x98, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BoundsCalcs) == 0xa0, "Size mismatch!");

} // namespace end def GlobalNamespace
