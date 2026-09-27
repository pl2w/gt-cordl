#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/UploadChunkDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UploadChunkDelegate)
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::Voice::Net::WebSockets {
class UploadChunkDelegate;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Net::WebSockets::UploadChunkDelegate*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Net::WebSockets::UploadChunkDelegate*, "Meta.Voice.Net.WebSockets", "UploadChunkDelegate");
// Dependencies System.MulticastDelegate
namespace Meta::Voice::Net::WebSockets {
// Is value type: false
// CS Name: Meta.Voice.Net.WebSockets.UploadChunkDelegate
class CORDL_TYPE UploadChunkDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x9e2761c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::StringW  requestId, ::Meta::WitAi::Json::WitResponseNode*  jsonData, ::ArrayW<uint8_t>  binaryData) ;

static inline ::Meta::Voice::Net::WebSockets::UploadChunkDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9e27568, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UploadChunkDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UploadChunkDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UploadChunkDelegate(UploadChunkDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UploadChunkDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UploadChunkDelegate(UploadChunkDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25462};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::Voice::Net::WebSockets::UploadChunkDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::Voice::Net::WebSockets
