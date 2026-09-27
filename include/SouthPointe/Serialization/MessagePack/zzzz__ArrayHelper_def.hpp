#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/ArrayHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayHelper)
// Forward declare root types
namespace SouthPointe::Serialization::MessagePack {
class ArrayHelper;
}
// Write type traits
MARK_REF_T(::SouthPointe::Serialization::MessagePack::ArrayHelper*);
DEFINE_IL2CPP_CLASS(::SouthPointe::Serialization::MessagePack::ArrayHelper*, "SouthPointe.Serialization.MessagePack", "ArrayHelper");
// Dependencies System.Object
namespace SouthPointe::Serialization::MessagePack {
// Is value type: false
// CS Name: SouthPointe.Serialization.MessagePack.ArrayHelper
class CORDL_TYPE ArrayHelper : public ::System::Object {
public:
// Declarations
/// @brief Method AdjustSize, addr 0x9d074dc, size 0x80, virtual false, abstract: false, final false
static inline void AdjustSize(::by_ref<::ArrayW<uint8_t>>  bytes, int32_t  length) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArrayHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArrayHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ArrayHelper(ArrayHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArrayHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArrayHelper(ArrayHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31752};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::SouthPointe::Serialization::MessagePack::ArrayHelper) == 0x10, "Size mismatch!");

} // namespace end def SouthPointe::Serialization::MessagePack
