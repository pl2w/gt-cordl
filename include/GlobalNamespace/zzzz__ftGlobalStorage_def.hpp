#pragma once
// IWYU pragma private; include "GlobalNamespace/ftGlobalStorage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(ftGlobalStorage)
// Forward declare root types
namespace GlobalNamespace {
class ftGlobalStorage;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ftGlobalStorage*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ftGlobalStorage*, "", "ftGlobalStorage");
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: ftGlobalStorage
class CORDL_TYPE ftGlobalStorage : public ::UnityEngine::ScriptableObject {
public:
// Declarations
static inline ::GlobalNamespace::ftGlobalStorage* New_ctor() ;

/// @brief Method .ctor, addr 0x5f28864, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ftGlobalStorage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ftGlobalStorage", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ftGlobalStorage(ftGlobalStorage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ftGlobalStorage", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ftGlobalStorage(ftGlobalStorage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32453};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ftGlobalStorage) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
