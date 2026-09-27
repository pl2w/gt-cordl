#pragma once
// IWYU pragma private; include "GlobalNamespace/PoolUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PoolUtils)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class PoolUtils;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PoolUtils*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PoolUtils*, "", "PoolUtils");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PoolUtils
class CORDL_TYPE PoolUtils : public ::System::Object {
public:
// Declarations
/// @brief Method GameObjHashCode, addr 0x5b0b350, size 0x28, virtual false, abstract: false, final false
static inline int32_t GameObjHashCode(::UnityEngine::GameObject*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PoolUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PoolUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PoolUtils(PoolUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PoolUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PoolUtils(PoolUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3519};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PoolUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
