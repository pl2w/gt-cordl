#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/SerializableGuidUtil.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SerializableGuidUtil)
namespace System {
struct Guid;
}
namespace Unity::XR::CoreUtils {
struct SerializableGuid;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class SerializableGuidUtil;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::SerializableGuidUtil*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::SerializableGuidUtil*, "Unity.XR.CoreUtils", "SerializableGuidUtil");
// Dependencies System.Object
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.SerializableGuidUtil
class CORDL_TYPE SerializableGuidUtil : public ::System::Object {
public:
// Declarations
/// @brief Method Create, addr 0xb3faa98, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::XR::CoreUtils::SerializableGuid Create(::System::Guid  guid) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SerializableGuidUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SerializableGuidUtil", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializableGuidUtil(SerializableGuidUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializableGuidUtil", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializableGuidUtil(SerializableGuidUtil const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30430};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::SerializableGuidUtil) == 0x10, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
