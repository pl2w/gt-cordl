#pragma once
// IWYU pragma private; include "GlobalNamespace/SICreationBitMasks.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SICreationBitMasks)
// Forward declare root types
namespace GlobalNamespace {
class SICreationBitMasks;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SICreationBitMasks*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SICreationBitMasks*, "", "SICreationBitMasks");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SICreationBitMasks
class CORDL_TYPE SICreationBitMasks : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr SICreationBitMasks() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SICreationBitMasks", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SICreationBitMasks(SICreationBitMasks && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SICreationBitMasks", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SICreationBitMasks(SICreationBitMasks const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{253};

/// @brief Field isTryOn offset 0xffffffff size 0x8
static constexpr int64_t  isTryOn{static_cast<int64_t>(0x8000000000000000)};

/// @brief Field player offset 0xffffffff size 0x8
static constexpr int64_t  player{static_cast<int64_t>(0xffffffff)};

/// @brief Field upgrade offset 0xffffffff size 0x8
static constexpr int64_t  upgrade{static_cast<int64_t>(0x7fffffff00000000)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SICreationBitMasks) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
