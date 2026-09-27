#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityObjectUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnityObjectUtils)
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class UnityObjectUtils;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UnityObjectUtils*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityObjectUtils*, "", "UnityObjectUtils");
// [Extension]
// Dependencies System.Object, UnityEngine.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnityObjectUtils
class CORDL_TYPE UnityObjectUtils : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method AsNull, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
static inline T AsNull(T  obj) ;

/// [Extension]
/// @brief Method SafeDestroy, addr 0x5b1b914, size 0x58, virtual false, abstract: false, final false
static inline void SafeDestroy(::UnityEngine::Object*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityObjectUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityObjectUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityObjectUtils(UnityObjectUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityObjectUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityObjectUtils(UnityObjectUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3577};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::UnityObjectUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
