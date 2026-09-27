#pragma once
// IWYU pragma private; include "System/Net/Mime/IEncodableStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IEncodableStream)
// Forward declare root types
namespace System::Net::Mime {
class IEncodableStream;
}
// Write type traits
MARK_REF_T(::System::Net::Mime::IEncodableStream*);
DEFINE_IL2CPP_CLASS(::System::Net::Mime::IEncodableStream*, "System.Net.Mime", "IEncodableStream");
// Dependencies 
namespace System::Net::Mime {
// Is value type: false
// CS Name: System.Net.Mime.IEncodableStream
class CORDL_TYPE IEncodableStream {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "IEncodableStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IEncodableStream(IEncodableStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10872};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Mime
