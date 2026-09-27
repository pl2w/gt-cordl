#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Interfaces/TTSEventSampleDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TTSEventSampleDelegate)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Interfaces {
class TTSEventSampleDelegate;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate*, "Meta.WitAi.TTS.Interfaces", "TTSEventSampleDelegate");
// Dependencies System.MulticastDelegate
namespace Meta::WitAi::TTS::Interfaces {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Interfaces.TTSEventSampleDelegate
class CORDL_TYPE TTSEventSampleDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x9e54524, size 0x14, virtual true, abstract: false, final false
inline void Invoke(int32_t  newSample) ;

static inline ::Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9e54484, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSEventSampleDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSEventSampleDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSEventSampleDelegate(TTSEventSampleDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSEventSampleDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSEventSampleDelegate(TTSEventSampleDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29103};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Interfaces
