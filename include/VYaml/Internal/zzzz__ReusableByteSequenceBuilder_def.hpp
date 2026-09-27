#pragma once
// IWYU pragma private; include "VYaml/Internal/ReusableByteSequenceBuilder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReusableByteSequenceBuilder)
namespace System::Buffers {
template<typename T>
struct ReadOnlySequence_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System {
template<typename T>
struct ReadOnlyMemory_1;
}
namespace VYaml::Internal {
class ReusableByteSequenceSegment;
}
// Forward declare root types
namespace VYaml::Internal {
class ReusableByteSequenceBuilder;
}
// Write type traits
MARK_REF_T(::VYaml::Internal::ReusableByteSequenceBuilder*);
DEFINE_IL2CPP_CLASS(::VYaml::Internal::ReusableByteSequenceBuilder*, "VYaml.Internal", "ReusableByteSequenceBuilder");
// Dependencies System.Object
namespace VYaml::Internal {
// Is value type: false
// CS Name: VYaml.Internal.ReusableByteSequenceBuilder
class CORDL_TYPE ReusableByteSequenceBuilder : public ::System::Object {
public:
// Declarations
/// @brief Field segmentPool, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_segmentPool, put=__cordl_internal_set_segmentPool)) ::System::Collections::Generic::Stack_1<::VYaml::Internal::ReusableByteSequenceSegment*>*  segmentPool;

/// @brief Field segments, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_segments, put=__cordl_internal_set_segments)) ::System::Collections::Generic::List_1<::VYaml::Internal::ReusableByteSequenceSegment*>*  segments;

/// @brief Method Add, addr 0xb96a308, size 0x140, virtual false, abstract: false, final false
inline void Add(::System::ReadOnlyMemory_1<uint8_t>  buffer, bool  returnToPool) ;

/// @brief Method Build, addr 0xb96a4f0, size 0x26c, virtual false, abstract: false, final false
inline ::System::Buffers::ReadOnlySequence_1<uint8_t> Build() ;

static inline ::VYaml::Internal::ReusableByteSequenceBuilder* New_ctor() ;

/// @brief Method Reset, addr 0xb96a75c, size 0x1a0, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method TryGetSingleMemory, addr 0xb96a448, size 0xa8, virtual false, abstract: false, final false
inline bool TryGetSingleMemory(::by_ref<::System::ReadOnlyMemory_1<uint8_t>>  memory) ;

constexpr ::System::Collections::Generic::Stack_1<::VYaml::Internal::ReusableByteSequenceSegment*>* const& __cordl_internal_get_segmentPool() const;

constexpr ::System::Collections::Generic::Stack_1<::VYaml::Internal::ReusableByteSequenceSegment*>*& __cordl_internal_get_segmentPool() ;

constexpr ::System::Collections::Generic::List_1<::VYaml::Internal::ReusableByteSequenceSegment*>* const& __cordl_internal_get_segments() const;

constexpr ::System::Collections::Generic::List_1<::VYaml::Internal::ReusableByteSequenceSegment*>*& __cordl_internal_get_segments() ;

constexpr void __cordl_internal_set_segmentPool(::System::Collections::Generic::Stack_1<::VYaml::Internal::ReusableByteSequenceSegment*>*  value) ;

constexpr void __cordl_internal_set_segments(::System::Collections::Generic::List_1<::VYaml::Internal::ReusableByteSequenceSegment*>*  value) ;

/// @brief Method .ctor, addr 0xb96a8fc, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReusableByteSequenceBuilder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReusableByteSequenceBuilder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReusableByteSequenceBuilder(ReusableByteSequenceBuilder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReusableByteSequenceBuilder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReusableByteSequenceBuilder(ReusableByteSequenceBuilder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29034};

/// [Nullable(1)]
/// @brief Field segmentPool, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<::VYaml::Internal::ReusableByteSequenceSegment*>*  ___segmentPool;

/// [Nullable(1)]
/// @brief Field segments, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VYaml::Internal::ReusableByteSequenceSegment*>*  ___segments;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VYaml::Internal::ReusableByteSequenceBuilder, ___segmentPool) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VYaml::Internal::ReusableByteSequenceBuilder, ___segments) == 0x18, "Offset mismatch!");

static_assert(sizeof(::VYaml::Internal::ReusableByteSequenceBuilder) == 0x20, "Size mismatch!");

} // namespace end def VYaml::Internal
