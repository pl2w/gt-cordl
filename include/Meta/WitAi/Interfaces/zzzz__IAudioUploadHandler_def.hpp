#pragma once
// IWYU pragma private; include "Meta/WitAi/Interfaces/IAudioUploadHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAudioUploadHandler)
namespace Meta::WitAi::Data {
class AudioEncoding;
}
namespace Meta::WitAi::Interfaces {
class IDataUploadHandler;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Meta::WitAi::Interfaces {
class IAudioUploadHandler;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Interfaces::IAudioUploadHandler*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Interfaces::IAudioUploadHandler*, "Meta.WitAi.Interfaces", "IAudioUploadHandler");
// Dependencies 
namespace Meta::WitAi::Interfaces {
// Is value type: false
// CS Name: Meta.WitAi.Interfaces.IAudioUploadHandler
class CORDL_TYPE IAudioUploadHandler {
public:
// Declarations
 __declspec(property(put=set_AudioEncoding)) ::Meta::WitAi::Data::AudioEncoding*  AudioEncoding;

 __declspec(property(get=get_IsInputStreamReady)) bool  IsInputStreamReady;

 __declspec(property(put=set_OnInputStreamReady)) ::System::Action*  OnInputStreamReady;

/// @brief Convert operator to "::Meta::WitAi::Interfaces::IDataUploadHandler"
constexpr operator  ::Meta::WitAi::Interfaces::IDataUploadHandler*() noexcept;

/// @brief Method get_IsInputStreamReady, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsInputStreamReady() ;

/// @brief Convert to "::Meta::WitAi::Interfaces::IDataUploadHandler"
constexpr ::Meta::WitAi::Interfaces::IDataUploadHandler* i___Meta__WitAi__Interfaces__IDataUploadHandler() noexcept;

/// @brief Method set_AudioEncoding, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_AudioEncoding(::Meta::WitAi::Data::AudioEncoding*  value) ;

/// @brief Method set_OnInputStreamReady, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_OnInputStreamReady(::System::Action*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IAudioUploadHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAudioUploadHandler(IAudioUploadHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25659};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::Interfaces
