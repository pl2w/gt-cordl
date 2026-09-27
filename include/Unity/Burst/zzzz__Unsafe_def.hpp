#pragma once
// IWYU pragma private; include "Unity/Burst/Unsafe.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Unsafe)
// Forward declare root types
namespace Unity::Burst {
class Unsafe;
}
// Write type traits
MARK_REF_T(::Unity::Burst::Unsafe*);
DEFINE_IL2CPP_CLASS(::Unity::Burst::Unsafe*, "Unity.Burst", "Unsafe");
// Dependencies System.Object
namespace Unity::Burst {
// Is value type: false
// CS Name: Unity.Burst.Unsafe
class CORDL_TYPE Unsafe : public ::System::Object {
public:
// Declarations
/// [NonVersionable]
/// @brief Method AsRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::by_ref<T> AsRef(void*  source) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Unsafe() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Unsafe", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Unsafe(Unsafe && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Unsafe", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Unsafe(Unsafe const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33159};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::Unsafe) == 0x10, "Size mismatch!");

} // namespace end def Unity::Burst
