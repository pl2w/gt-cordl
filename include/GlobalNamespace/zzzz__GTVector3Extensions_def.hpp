#pragma once
// IWYU pragma private; include "GlobalNamespace/GTVector3Extensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GTVector3Extensions)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GTVector3Extensions;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GTVector3Extensions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTVector3Extensions*, "", "GTVector3Extensions");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GTVector3Extensions
class CORDL_TYPE GTVector3Extensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method Average, addr 0x567404c, size 0x340, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Average(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*  vecs) ;

/// [Extension]
/// @brief Method Average, addr 0x5673b94, size 0x1d0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Average(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*  vecs) ;

/// [Extension]
/// @brief Method Sum, addr 0x5673d64, size 0x2e8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Sum(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*  vecs) ;

/// [Extension]
/// @brief Method Sum, addr 0x5673a08, size 0x18c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Sum(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*  vecs) ;

/// [Extension]
/// @brief Method X_Z, addr 0x5673a00, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 X_Z(::UnityEngine::Vector3  vector) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTVector3Extensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTVector3Extensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTVector3Extensions(GTVector3Extensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTVector3Extensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTVector3Extensions(GTVector3Extensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{824};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GTVector3Extensions) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
