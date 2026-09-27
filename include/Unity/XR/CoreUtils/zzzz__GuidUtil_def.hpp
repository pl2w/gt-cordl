#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/GuidUtil.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GuidUtil)
namespace System {
struct Guid;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class GuidUtil;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::GuidUtil*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::GuidUtil*, "Unity.XR.CoreUtils", "GuidUtil");
// Dependencies System.Object
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.GuidUtil
class CORDL_TYPE GuidUtil : public ::System::Object {
public:
// Declarations
/// @brief Method Compose, addr 0xb3f7f4c, size 0x64, virtual false, abstract: false, final false
static inline ::System::Guid Compose(uint64_t  low, uint64_t  high) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GuidUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GuidUtil", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GuidUtil(GuidUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GuidUtil", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GuidUtil(GuidUtil const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30418};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::GuidUtil) == 0x10, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
