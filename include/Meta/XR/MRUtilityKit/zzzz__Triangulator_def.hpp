#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/Triangulator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Triangulator)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit {
class Triangulator;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::Triangulator*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::Triangulator*, "Meta.XR.MRUtilityKit", "Triangulator");
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies System.Object
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.Triangulator
class CORDL_TYPE Triangulator : public ::System::Object {
public:
// Declarations
/// @brief Method TriangulatePoints, addr 0x9f4c1bc, size 0x36c, virtual false, abstract: false, final false
static inline void TriangulatePoints(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  vertices, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*  holes, ::by_ref<::ArrayW<::UnityEngine::Vector2>>  outVertices, ::by_ref<::ArrayW<int32_t>>  outIndices) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Triangulator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Triangulator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Triangulator(Triangulator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Triangulator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Triangulator(Triangulator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25908};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::Triangulator) == 0x10, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
