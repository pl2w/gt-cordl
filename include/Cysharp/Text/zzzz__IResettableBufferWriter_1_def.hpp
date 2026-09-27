#pragma once
// IWYU pragma private; include "Cysharp/Text/IResettableBufferWriter_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IResettableBufferWriter_1)
namespace System::Buffers {
template<typename T>
class IBufferWriter_1;
}
// Forward declare root types
namespace Cysharp::Text {
template<typename T>
class IResettableBufferWriter_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Text::IResettableBufferWriter_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Text::IResettableBufferWriter_1, "Cysharp.Text", "IResettableBufferWriter`1");
// [NullableContext(2)]
// Dependencies 
namespace Cysharp::Text {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Text.IResettableBufferWriter`1<T>
class CORDL_TYPE IResettableBufferWriter_1 {
public:
// Declarations
/// @brief Convert operator to "::System::Buffers::IBufferWriter_1<T>"
constexpr operator  ::System::Buffers::IBufferWriter_1<T>*() noexcept;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Reset() ;

/// @brief Convert to "::System::Buffers::IBufferWriter_1<T>"
constexpr ::System::Buffers::IBufferWriter_1<T>* i___System__Buffers__IBufferWriter_1_T_() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IResettableBufferWriter_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IResettableBufferWriter_1(IResettableBufferWriter_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26346};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Text
