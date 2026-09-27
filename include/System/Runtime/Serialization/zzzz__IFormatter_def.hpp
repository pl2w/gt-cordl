#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/IFormatter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IFormatter)
namespace System::IO {
class Stream;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class IFormatter;
}
// Write type traits
MARK_REF_T(::System::Runtime::Serialization::IFormatter*);
DEFINE_IL2CPP_CLASS(::System::Runtime::Serialization::IFormatter*, "System.Runtime.Serialization", "IFormatter");
// [ComVisible(true)]
// Dependencies 
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.IFormatter
class CORDL_TYPE IFormatter {
public:
// Declarations
/// @brief Method Deserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* Deserialize(::System::IO::Stream*  serializationStream) ;

// Ctor Parameters [CppParam { name: "", ty: "IFormatter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IFormatter(IFormatter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6350};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
