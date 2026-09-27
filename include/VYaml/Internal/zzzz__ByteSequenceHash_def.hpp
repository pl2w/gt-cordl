#pragma once
// IWYU pragma private; include "VYaml/Internal/ByteSequenceHash.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ByteSequenceHash)
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace VYaml::Internal {
class ByteSequenceHash;
}
// Write type traits
MARK_REF_T(::VYaml::Internal::ByteSequenceHash*);
DEFINE_IL2CPP_CLASS(::VYaml::Internal::ByteSequenceHash*, "VYaml.Internal", "ByteSequenceHash");
// Dependencies System.Object
namespace VYaml::Internal {
// Is value type: false
// CS Name: VYaml.Internal.ByteSequenceHash
class CORDL_TYPE ByteSequenceHash : public ::System::Object {
public:
// Declarations
/// @brief Method GetHashCode, addr 0xb966578, size 0x6c, virtual false, abstract: false, final false
static inline int32_t GetHashCode(::System::ReadOnlySpan_1<uint8_t>  span) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ByteSequenceHash() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ByteSequenceHash", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ByteSequenceHash(ByteSequenceHash && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ByteSequenceHash", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ByteSequenceHash(ByteSequenceHash const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29025};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::VYaml::Internal::ByteSequenceHash) == 0x10, "Size mismatch!");

} // namespace end def VYaml::Internal
