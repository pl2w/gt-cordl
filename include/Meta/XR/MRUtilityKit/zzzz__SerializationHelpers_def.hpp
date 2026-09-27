#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SerializationHelpers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SerializationHelpers)
namespace GlobalNamespace {
struct SerializationHelpers_CoordinateSystem;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit {
class SerializationHelpers;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::SerializationHelpers*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SerializationHelpers*, "Meta.XR.MRUtilityKit", "SerializationHelpers");
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies System.Object
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SerializationHelpers
class CORDL_TYPE SerializationHelpers : public ::System::Object {
public:
// Declarations
using CoordinateSystem = ::GlobalNamespace::SerializationHelpers_CoordinateSystem;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SerializationHelpers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SerializationHelpers", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializationHelpers(SerializationHelpers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializationHelpers", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializationHelpers(SerializationHelpers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25900};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::SerializationHelpers) == 0x10, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
