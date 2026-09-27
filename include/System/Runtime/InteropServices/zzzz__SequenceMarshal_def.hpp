#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/SequenceMarshal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SequenceMarshal)
namespace System::Buffers {
template<typename T>
struct ReadOnlySequence_1;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class SequenceMarshal;
}
// Write type traits
MARK_REF_T(::System::Runtime::InteropServices::SequenceMarshal*);
DEFINE_IL2CPP_CLASS(::System::Runtime::InteropServices::SequenceMarshal*, "System.Runtime.InteropServices", "SequenceMarshal");
// Dependencies System.Object
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: System.Runtime.InteropServices.SequenceMarshal
class CORDL_TYPE SequenceMarshal : public ::System::Object {
public:
// Declarations
/// @brief Method TryGetString, addr 0xa1e017c, size 0x94, virtual false, abstract: false, final false
static inline bool TryGetString(::System::Buffers::ReadOnlySequence_1<char16_t>  sequence, ::by_ref<::StringW>  text, ::by_ref<int32_t>  start, ::by_ref<int32_t>  length) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SequenceMarshal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SequenceMarshal", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SequenceMarshal(SequenceMarshal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SequenceMarshal", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SequenceMarshal(SequenceMarshal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6438};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Runtime::InteropServices::SequenceMarshal) == 0x10, "Size mismatch!");

} // namespace end def System::Runtime::InteropServices
