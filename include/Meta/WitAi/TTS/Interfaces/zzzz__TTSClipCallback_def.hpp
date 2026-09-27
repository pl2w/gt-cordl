#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Interfaces/TTSClipCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(TTSClipCallback)
namespace Meta::WitAi::TTS::Data {
class TTSClipData;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Interfaces {
class TTSClipCallback;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Interfaces::TTSClipCallback*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Interfaces::TTSClipCallback*, "Meta.WitAi.TTS.Interfaces", "TTSClipCallback");
// Dependencies System.MulticastDelegate
namespace Meta::WitAi::TTS::Interfaces {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Interfaces.TTSClipCallback
class CORDL_TYPE TTSClipCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x9e54538, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

static inline ::Meta::WitAi::TTS::Interfaces::TTSClipCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9e48ae0, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSClipCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSClipCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSClipCallback(TTSClipCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSClipCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSClipCallback(TTSClipCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29105};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::TTS::Interfaces::TTSClipCallback) == 0x80, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Interfaces
