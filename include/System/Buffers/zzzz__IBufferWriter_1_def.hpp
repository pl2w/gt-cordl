#pragma once
// IWYU pragma private; include "System/Buffers/IBufferWriter_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IBufferWriter_1)
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace System::Buffers {
template<typename T>
class IBufferWriter_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::System::Buffers::IBufferWriter_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::System::Buffers::IBufferWriter_1, "System.Buffers", "IBufferWriter`1");
// Dependencies 
namespace System::Buffers {
// cpp template
template<typename T>
// Is value type: false
// CS Name: System.Buffers.IBufferWriter`1<T>
class CORDL_TYPE IBufferWriter_1 {
public:
// Declarations
/// @brief Method Advance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Advance(int32_t  count) ;

/// @brief Method GetSpan, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Span_1<T> GetSpan(int32_t  sizeHint) ;

// Ctor Parameters [CppParam { name: "", ty: "IBufferWriter_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IBufferWriter_1(IBufferWriter_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6961};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
