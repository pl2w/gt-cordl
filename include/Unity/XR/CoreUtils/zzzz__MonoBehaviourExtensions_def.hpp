#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/MonoBehaviourExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MonoBehaviourExtensions)
// Forward declare root types
namespace Unity::XR::CoreUtils {
class MonoBehaviourExtensions;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::MonoBehaviourExtensions*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::MonoBehaviourExtensions*, "Unity.XR.CoreUtils", "MonoBehaviourExtensions");
// Dependencies System.Object
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.MonoBehaviourExtensions
class CORDL_TYPE MonoBehaviourExtensions : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBehaviourExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBehaviourExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBehaviourExtensions(MonoBehaviourExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBehaviourExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBehaviourExtensions(MonoBehaviourExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30396};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::MonoBehaviourExtensions) == 0x10, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
