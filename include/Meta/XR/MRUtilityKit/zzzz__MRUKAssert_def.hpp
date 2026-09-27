#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKAssert.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MRUKAssert)
// Forward declare root types
namespace Meta::XR::MRUtilityKit {
class MRUKAssert;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKAssert*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKAssert*, "Meta.XR.MRUtilityKit", "MRUKAssert");
// Dependencies System.Object
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKAssert
class CORDL_TYPE MRUKAssert : public ::System::Object {
public:
// Declarations
/// [Conditional("OVR_INTERNAL_CODE")]
/// @brief Method AreEqual, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void AreEqual(T  expected, T  actual, ::StringW  message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKAssert() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKAssert", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKAssert(MRUKAssert && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKAssert", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKAssert(MRUKAssert const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25887};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKAssert) == 0x10, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
