#pragma once
// IWYU pragma private; include "Fusion/FixedStorage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__IFixedStorage_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FixedStorage)
// Forward declare root types
namespace Fusion {
class FixedStorage;
}
// Write type traits
MARK_REF_T(::Fusion::FixedStorage*);
DEFINE_IL2CPP_CLASS(::Fusion::FixedStorage*, "Fusion", "FixedStorage");
// Dependencies Fusion.IFixedStorage, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FixedStorage
class CORDL_TYPE FixedStorage : public ::System::Object {
public:
// Declarations
/// @brief Method GetWordCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::IFixedStorage*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline int32_t GetWordCount() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FixedStorage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FixedStorage", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FixedStorage(FixedStorage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FixedStorage", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FixedStorage(FixedStorage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19023};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::FixedStorage) == 0x10, "Size mismatch!");

} // namespace end def Fusion
