#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Data/ITTSEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ITTSEvent)
// Forward declare root types
namespace Meta::WitAi::TTS::Data {
class ITTSEvent;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Data::ITTSEvent*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Data::ITTSEvent*, "Meta.WitAi.TTS.Data", "ITTSEvent");
// Dependencies 
namespace Meta::WitAi::TTS::Data {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Data.ITTSEvent
class CORDL_TYPE ITTSEvent {
public:
// Declarations
 __declspec(property(get=get_SampleOffset)) int32_t  SampleOffset;

/// @brief Method get_SampleOffset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_SampleOffset() ;

// Ctor Parameters [CppParam { name: "", ty: "ITTSEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITTSEvent(ITTSEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29191};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::TTS::Data
