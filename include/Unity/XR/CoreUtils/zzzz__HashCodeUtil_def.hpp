#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/HashCodeUtil.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HashCodeUtil)
namespace System {
class Object;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class HashCodeUtil;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::HashCodeUtil*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::HashCodeUtil*, "Unity.XR.CoreUtils", "HashCodeUtil");
// Dependencies System.Object
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.HashCodeUtil
class CORDL_TYPE HashCodeUtil : public ::System::Object {
public:
// Declarations
/// @brief Method Combine, addr 0xb3edd5c, size 0x10, virtual false, abstract: false, final false
static inline int32_t Combine(int32_t  hash1, int32_t  hash2) ;

/// @brief Method Combine, addr 0xb3f7fb0, size 0x14, virtual false, abstract: false, final false
static inline int32_t Combine(int32_t  hash1, int32_t  hash2, int32_t  hash3) ;

/// @brief Method Combine, addr 0xb3f7fc4, size 0x18, virtual false, abstract: false, final false
static inline int32_t Combine(int32_t  hash1, int32_t  hash2, int32_t  hash3, int32_t  hash4) ;

/// @brief Method Combine, addr 0xb3f7fdc, size 0x1c, virtual false, abstract: false, final false
static inline int32_t Combine(int32_t  hash1, int32_t  hash2, int32_t  hash3, int32_t  hash4, int32_t  hash5) ;

/// @brief Method Combine, addr 0xb3f7ff8, size 0x20, virtual false, abstract: false, final false
static inline int32_t Combine(int32_t  hash1, int32_t  hash2, int32_t  hash3, int32_t  hash4, int32_t  hash5, int32_t  hash6) ;

/// @brief Method Combine, addr 0xb3f8018, size 0x24, virtual false, abstract: false, final false
static inline int32_t Combine(int32_t  hash1, int32_t  hash2, int32_t  hash3, int32_t  hash4, int32_t  hash5, int32_t  hash6, int32_t  hash7) ;

/// @brief Method Combine, addr 0xb3f803c, size 0x28, virtual false, abstract: false, final false
static inline int32_t Combine(int32_t  hash1, int32_t  hash2, int32_t  hash3, int32_t  hash4, int32_t  hash5, int32_t  hash6, int32_t  hash7, int32_t  hash8) ;

/// @brief Method ReferenceHash, addr 0xb3edd48, size 0x14, virtual false, abstract: false, final false
static inline int32_t ReferenceHash(::System::Object*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HashCodeUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HashCodeUtil", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HashCodeUtil(HashCodeUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HashCodeUtil", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HashCodeUtil(HashCodeUtil const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30419};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::HashCodeUtil) == 0x10, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
