#pragma once
// IWYU pragma private; include "Fusion/AuthorityMasks.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AuthorityMasks)
// Forward declare root types
namespace Fusion {
class AuthorityMasks;
}
// Write type traits
MARK_REF_T(::Fusion::AuthorityMasks*);
DEFINE_IL2CPP_CLASS(::Fusion::AuthorityMasks*, "Fusion", "AuthorityMasks");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.AuthorityMasks
class CORDL_TYPE AuthorityMasks : public ::System::Object {
public:
// Declarations
/// @brief Method Create, addr 0x5fd0898, size 0x24, virtual false, abstract: false, final false
static inline int32_t Create(bool  state, bool  input) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthorityMasks() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthorityMasks", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthorityMasks(AuthorityMasks && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthorityMasks", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthorityMasks(AuthorityMasks const& ) = delete;

/// @brief Field ALL offset 0xffffffff size 0x4
static constexpr int32_t  ALL{static_cast<int32_t>(0x7)};

/// @brief Field INPUT offset 0xffffffff size 0x4
static constexpr int32_t  INPUT{static_cast<int32_t>(0x2)};

/// @brief Field NONE offset 0xffffffff size 0x4
static constexpr int32_t  NONE{static_cast<int32_t>(0x0)};

/// @brief Field PROXY offset 0xffffffff size 0x4
static constexpr int32_t  PROXY{static_cast<int32_t>(0x4)};

/// @brief Field STATE offset 0xffffffff size 0x4
static constexpr int32_t  STATE{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19181};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::AuthorityMasks) == 0x10, "Size mismatch!");

} // namespace end def Fusion
