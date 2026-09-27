#pragma once
// IWYU pragma private; include "VYaml/Internal/ReusableByteSequenceSegment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Buffers/zzzz__ReadOnlySequenceSegment_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReusableByteSequenceSegment)
namespace System {
template<typename T>
struct ReadOnlyMemory_1;
}
// Forward declare root types
namespace VYaml::Internal {
class ReusableByteSequenceSegment;
}
// Write type traits
MARK_REF_T(::VYaml::Internal::ReusableByteSequenceSegment*);
DEFINE_IL2CPP_CLASS(::VYaml::Internal::ReusableByteSequenceSegment*, "VYaml.Internal", "ReusableByteSequenceSegment");
// Dependencies System.Buffers.ReadOnlySequenceSegment`1<T>
namespace VYaml::Internal {
// Is value type: false
// CS Name: VYaml.Internal.ReusableByteSequenceSegment
class CORDL_TYPE ReusableByteSequenceSegment : public ::System::Buffers::ReadOnlySequenceSegment_1<uint8_t> {
public:
// Declarations
/// @brief Field returnToPool, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_returnToPool, put=__cordl_internal_set_returnToPool)) bool  returnToPool;

static inline ::VYaml::Internal::ReusableByteSequenceSegment* New_ctor() ;

/// @brief Method Reset, addr 0xb967c68, size 0x1d0, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetBuffer, addr 0xb967c04, size 0x64, virtual false, abstract: false, final false
inline void SetBuffer(::System::ReadOnlyMemory_1<uint8_t>  buffer, bool  returnToPool) ;

/// [NullableContext(2)]
/// @brief Method SetRunningIndexAndNext, addr 0xb967e38, size 0x24d0, virtual false, abstract: false, final false
inline void SetRunningIndexAndNext(int64_t  runningIndex, ::VYaml::Internal::ReusableByteSequenceSegment*  nextSegment) ;

constexpr bool const& __cordl_internal_get_returnToPool() const;

constexpr bool& __cordl_internal_get_returnToPool() ;

constexpr void __cordl_internal_set_returnToPool(bool  value) ;

/// @brief Method .ctor, addr 0xb967bb4, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReusableByteSequenceSegment() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReusableByteSequenceSegment", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReusableByteSequenceSegment(ReusableByteSequenceSegment && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReusableByteSequenceSegment", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReusableByteSequenceSegment(ReusableByteSequenceSegment const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29033};

/// @brief Field returnToPool, offset: 0x30, size: 0x1, def value: None
 bool  ___returnToPool;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VYaml::Internal::ReusableByteSequenceSegment, ___returnToPool) == 0x30, "Offset mismatch!");

static_assert(sizeof(::VYaml::Internal::ReusableByteSequenceSegment) == 0x38, "Size mismatch!");

} // namespace end def VYaml::Internal
