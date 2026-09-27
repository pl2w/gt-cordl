#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/GuidExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GuidExtensions)
namespace System {
struct Guid;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class GuidExtensions;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::GuidExtensions*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::GuidExtensions*, "Unity.XR.CoreUtils", "GuidExtensions");
// [Extension]
// Dependencies System.Object
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.GuidExtensions
class CORDL_TYPE GuidExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method Decompose, addr 0xb3efd4c, size 0x5c, virtual false, abstract: false, final false
static inline void Decompose(::System::Guid  guid, ::by_ref<uint64_t>  low, ::by_ref<uint64_t>  high) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GuidExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GuidExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GuidExtensions(GuidExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GuidExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GuidExtensions(GuidExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30392};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::GuidExtensions) == 0x10, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
