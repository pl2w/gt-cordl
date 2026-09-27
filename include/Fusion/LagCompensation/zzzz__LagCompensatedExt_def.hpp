#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/LagCompensatedExt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LagCompensatedExt)
namespace Fusion {
struct LagCompensatedHit;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Fusion::LagCompensation {
class LagCompensatedExt;
}
// Write type traits
MARK_REF_T(::Fusion::LagCompensation::LagCompensatedExt*);
DEFINE_IL2CPP_CLASS(::Fusion::LagCompensation::LagCompensatedExt*, "Fusion.LagCompensation", "LagCompensatedExt");
// [Extension]
// Dependencies System.Object
namespace Fusion::LagCompensation {
// Is value type: false
// CS Name: Fusion.LagCompensation.LagCompensatedExt
class CORDL_TYPE LagCompensatedExt : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method SortDistance, addr 0x6018eb0, size 0x64, virtual false, abstract: false, final false
static inline void SortDistance(::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits) ;

/// [Extension]
/// @brief Method SortReference, addr 0x6018d40, size 0x170, virtual false, abstract: false, final false
static inline void SortReference(::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits, ::UnityEngine::Vector3  reference) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LagCompensatedExt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LagCompensatedExt", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LagCompensatedExt(LagCompensatedExt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LagCompensatedExt", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LagCompensatedExt(LagCompensatedExt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19411};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::LagCompensation::LagCompensatedExt) == 0x10, "Size mismatch!");

} // namespace end def Fusion::LagCompensation
