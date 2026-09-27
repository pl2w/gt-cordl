#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderPieceLod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BuilderPieceLod)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderPieceLod;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderPieceLod*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderPieceLod*, "", "BuilderPieceLod");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderPieceLod
class CORDL_TYPE BuilderPieceLod : public ::System::Object {
public:
// Declarations
/// @brief Field maxDistance, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDistance, put=__cordl_internal_set_maxDistance)) float_t  maxDistance;

/// @brief Field meshRenderers, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshRenderers, put=__cordl_internal_set_meshRenderers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  meshRenderers;

static inline ::GlobalNamespace::BuilderPieceLod* New_ctor() ;

constexpr float_t const& __cordl_internal_get_maxDistance() const;

constexpr float_t& __cordl_internal_get_maxDistance() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>* const& __cordl_internal_get_meshRenderers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*& __cordl_internal_get_meshRenderers() ;

constexpr void __cordl_internal_set_maxDistance(float_t  value) ;

constexpr void __cordl_internal_set_meshRenderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  value) ;

/// @brief Method .ctor, addr 0x57bed40, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderPieceLod() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceLod", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderPieceLod(BuilderPieceLod && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceLod", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderPieceLod(BuilderPieceLod const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1600};

/// @brief Field maxDistance, offset: 0x10, size: 0x4, def value: None
 float_t  ___maxDistance;

/// @brief Field meshRenderers, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  ___meshRenderers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderPieceLod, ___maxDistance) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceLod, ___meshRenderers) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderPieceLod) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
