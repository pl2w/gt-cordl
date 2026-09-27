#pragma once
// IWYU pragma private; include "System/Collections/Hashtable_bucket.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Hashtable_bucket)
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct Hashtable_bucket;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Hashtable_bucket);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Hashtable_bucket, "System.Collections", "Hashtable/bucket");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Collections.Hashtable/bucket
struct CORDL_TYPE Hashtable_bucket {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Hashtable_bucket() ;

// Ctor Parameters [CppParam { name: "key", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "val", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "hash_coll", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Hashtable_bucket(::System::Object*  key, ::System::Object*  val, int32_t  hash_coll) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6852};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field key, offset: 0x0, size: 0x8, def value: None
 ::System::Object*  key;

/// @brief Field val, offset: 0x8, size: 0x8, def value: None
 ::System::Object*  val;

/// @brief Field hash_coll, offset: 0x10, size: 0x4, def value: None
 int32_t  hash_coll;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Hashtable_bucket, key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hashtable_bucket, val) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Hashtable_bucket, hash_coll) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Hashtable_bucket) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
